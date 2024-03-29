bl_info = {
    'name': 'DOA mot animation importer',
    'author': 'xentax',
    'version': (0,1),
    'blender': (2, 6, 3),
    'location': 'File > Import > DOA mot animation (.mot)',
    'description': 'Import DOA mot animations on the current Armature',
    'category': 'Import'}

import struct
import bpy
from bpy.props import * # GUI
from bpy_extras.io_utils import ExportHelper, ImportHelper # GUI


# non-Blender functions
def dw2sign(mydword):#unsigned32 to signed64 int
    return (mydword & 0xffffffff) - (0x100000000 if mydword & 0x80000000 else 0)
    #return struct.unpack('=l', struct.pack('=L', (mydword & 0xffffffff)))[0]

def w2dw(myword):#word to dword
    return (0xffff0000 if myword & 0x8000 else 0) + (myword & 0xffff)

def b2dw(mybyte):#byte to dword
    return (0xffffff00 if mybyte & 0x80 else 0) + (mybyte & 0xff)

def ww2f(kfh):#word+word to float
    return dw2sign((w2dw(kfh[0] & 0xF000) << 4) + kfh[1]) / 10000.0

def bw2f(kfb, kfw):#byte+word to float
    return dw2sign((b2dw(kfb) << 0x10) + kfw) / 1000000.0


# Blender function
def import_mot(filepath, scale):
    fmot = open(filepath, 'rb')

    armature = bpy.context.scene.objects.active
    if armature.type != 'ARMATURE':
        raise Exception('You need an active Armature!')
        return

    # we don't use any other Blender code until we have generated a big "animations" list

    # note that the below isn't one string for each limb/bone. 'name' means limb rotation, 'name_xyz' means the same bone's location
    limbnames = ('pelvis_xyz', '', '', 'pelvis', '', '', 'chest', '', '', 'head', '', '',
    'bpalm_xyz', ',' ,'', 'bpalm', '', '', 'belbow', 'bshoulder',
    'fpalm_xyz', '', '', 'fpalm', '', '', 'felbow', 'fshoulder',
    'bfoot_xyz', '', '', 'bfoot', '', '', 'bheap', 'bknee',
    'ffoot_xyz', '', '', 'ffoot', '', '', 'fheap', 'fknee') #b = back(right), f = front(left)

    limbo = list('00011111111100011111000111110001111100011111') # 0 - location, 1 - rotation

    animations = [] # "animations" list holds "animation" sublists, "animation" sublists hold "limb" lists, which in turn hold transform lists for each frame for that limb

    animofsets = []

    # get the animation offsets
    while(True):
        animofset = struct.unpack('<L', fmot.read(4))[0]
        if animofset == 0: break # finish
        if animofset in animofsets: continue # skip
        animofsets.append(animofset) # add

    # Read animation data on each offset. Each is a separate animation in-game.
    animindex = 0

    for animofset in animofsets:
        #print('Anim offset: '+str(animofset)+', Anim index: '+str(animofsets.index(animofset)))

        animations.append([])

        # move to the offset
        fmot.seek(animofset)

        limboffsets = []

        # limb offsets, always 44 limbs assumed
        for i in range(44):
            limboffsets.append(struct.unpack('<L', fmot.read(4))[0])

        limbindex = 0
        while(limbindex < 44):
            animations[animindex].append([])

            fmot.seek(limboffsets[limbindex])

            if limbindex < 43 and limboffsets[limbindex] == limboffsets[limbindex+1]:
                limbindex += 3
                #print('unknown technique: xyz =', struct.unpack('<HHH', fmot.read(6)))
                continue

            #print(limbnames[limbindex]+':\n', end = '')

            kframe = 1 # "key frame" is not the same as "frame", "key frame" is a frame which has keys aka transforms
            while True:
                transforms = [] # transforms list holds this data: [keyframe, transform1, transform2, transform3]
                
                kfh = struct.unpack('<HH', fmot.read(4)) #keyframe header
                myfloat = ww2f(kfh)
                frame = (kfh[0] >> 2) & 0x3ff
                kfsize = [10, 4, 6, 8][kfh[0] & 3]
                kframe += frame
                if frame == 0:
                    #print(str(kframe - frame) + '-' + str(kframe) + '[' + str(frame) + ']\te(' + str(myfloat) + ')$\n', end = '')
                    break
                #print(str(kframe - frame) + '-' + str(kframe) + '[' + str(frame) + ']\t' + str(int(kfsize/2)) + '(', myfloat, end = '')

                transforms.append(kframe - frame)

                transforms.append(myfloat)

                if kfsize == 10:
                    kfw, kfb = struct.unpack('<HB', fmot.read(3))
                    specificfloat1 = bw2f(kfb, kfw)
                    kfb, kfw = struct.unpack('<BH', fmot.read(3))
                    specificfloat2 = bw2f(kfb, kfw)
                    #print(', '+str(specificfloat1)+', '+str(specificfloat2), end = '')
                    
                    transforms.append(specificfloat1); transforms.append(specificfloat2)
                elif kfsize == 8:
                    kfww = struct.unpack('<HH', fmot.read(4))
                    #print(', '+str((dw2sign(w2dw(kfww[0])) * (0.5**17)))+', '+str((dw2sign(w2dw(kfww[1]))) * (0.5**17)), end = '')
                    
                    transforms.append(dw2sign(w2dw(kfww[0])) * (0.5**17)); transforms.append(dw2sign(w2dw(kfww[1])) * (0.5**17))
                elif kfsize == 6:
                    kfw = struct.unpack('<H', fmot.read(2))[0]
                    #print(', '+ str((dw2sign(w2dw(kfw)) * (0.5**17))), end = '')

                    transforms.append(dw2sign(w2dw(kfw)) * (0.5**17))
                #if(limbo[limbindex]):print(')\t['+str(myfloat * 54.931640625)+']', sep = '')
                #else:print(')')

                animations[animindex][limbindex].append(transforms)

            #print('')
            limbindex += 1 #increment the limbindex here

        #print('[!]\n')

        animindex += 1

        #break# remove this to log the whole *.mot animations

    # Blender code starts here
    pose = armature.pose

    armature.animation_data_create()

    # names of bones from the XPR importer script, map the names with the ones from here (just to make the names same as the MOT parser
    bonesNames = ['Chest', 'Head', 'Hips', 'LeftFoot', 'LeftForeArm', 'LeftHand', 'LeftUpLeg', 'LeftLeg',
        'LeftArm', 'RightFoot', 'RightForeArm', 'RightHand', 'RightUpLeg', 'RightLeg', 'RightArm', 'Unknown0',
        'LeftArm', 'LeftEyeBall', 'LeftFoot', 'Head', 'RightArm', 'RightEyeBall', 'RightFoot', 'Chest',
        'LeftWingBase', 'LeftWingMid', 'LeftWingTip', 'RightWingBase', 'RightWingMid', 'RightWingTip']
    
    # bone names from this script (and the parser it's based on) aren't the same as in the XPR importer
    boneMaps = {
        'pelvis_xyz': 'Hips',
        'pelvis': 'Hips',
        'chest': 'Chest',
        'head': 'Head',
        'bpalm_xyz': 'RightHand',
        'bpalm': 'RightHand',
        'belbow': 'RightForeHand',
        'bshoulder': 'RightArm',
        'fpalm_xyz': 'LeftHand',
        'fpalm': 'LeftHand',
        'felbow': 'LeftForeHand',
        'fshoulder': 'LeftArm',
        'bfoot_xyz': 'RightUpLeg',
        'bheap': 'RightUpLeg',
        'bknee': 'RightLeg',
        'bfoot_xyz': 'RightFoot',
        'bfoot': 'RightFoot',
        'ffoot_xyz': 'LeftUpLeg',
        'fheap': 'LeftUpLeg',
        'fknee': 'LeftLeg',
        'ffoot_xyz': 'LeftFoot',
        'ffoot': 'LeftFoot'}

    for animation in animations:
        index = 0
        
        # mot actually contains multiple animations, we create separate Action for each
        actionname = bpy.path.display_name_from_filepath(filepath+str(animations.index(animation)))
        action = bpy.data.actions.new(name = actionname)
        armature.animation_data.action = action
        
        for limb in animation:
            for framedata in limb:
                # framedata: [0] - frame index, [1:] - position or rotation
                
                if limbo[index] == '0':
                    try: # 3 values needed, not sure what other types store
                        pose.bones[boneMaps[limbnames[index]]].location = (framedata[1]*scale, framedata[2]*scale, framedata[3]*scale)
                        pose.bones[boneMaps[limbnames[index]]].keyframe_insert('location', frame = framedata[0])
                    except:
                        pass
                else:
                    try: # 3 values needed, not sure what other types store
                        pose.bones[boneMaps[limbnames[index]]].rotation_euler = (framedata[1], framedata[2], framedata[3])
                        pose.bones[boneMaps[limbnames[index]]].keyframe_insert('rotation_quaternion', frame = framedata[0])
                    except:
                        pass
                
            index += 1
        index = 0


# Blender addon registering and GUI
class ImportMOT(bpy.types.Operator, ImportHelper):
    bl_idname= 'import_scene.mot'
    bl_description = 'Import DOA mot animation (.mot)'
    bl_label = 'Import mot'
    bl_options = {'INTERNAL'}
    filename_ext = '.mot'
    filter_glob = StringProperty(default = '*.mot', options={'HIDDEN'})

    filepath = StringProperty(name = 'File Path', description = 'mot file path', maxlen = 1024, default = '')
    
    scale = FloatProperty(
        name='Scale',
        description='The armature scale as specified in the XPR importer',
        min=0.0, max=10.0,
        soft_min=0.0, soft_max=10.0,
        default=5.0,
        )
    
    def execute(self, context):
        import_mot(self.properties.filepath, self.scale)
        return {'FINISHED'}

    def invoke(self, context, event):
        context.window_manager.fileselect_add(self)
        return {'RUNNING_MODAL'}

def menu_func(self, context):
    self.layout.operator(ImportMOT.bl_idname, text = 'DOA mot animation (.mot)')

def register():
    bpy.utils.register_module(__name__)
    bpy.types.INFO_MT_file_import.append(menu_func)

def unregister():
    bpy.utils.unregister_module(__name__)
    bpy.types.INFO_MT_file_import.remove(menu_func)

if __name__ == '__main__':
    register()