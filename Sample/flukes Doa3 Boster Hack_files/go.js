var _____WB$wombat$assign$function_____ = function(name) {return (self._wb_wombat && self._wb_wombat.local_init && self._wb_wombat.local_init(name)) || self[name]; };
if (!self.__WB_pmw) { self.__WB_pmw = function(obj) { this.__WB_source = obj; return this; } }
{
  let window = _____WB$wombat$assign$function_____("window");
  let self = _____WB$wombat$assign$function_____("self");
  let document = _____WB$wombat$assign$function_____("document");
  let location = _____WB$wombat$assign$function_____("location");
  let top = _____WB$wombat$assign$function_____("top");
  let parent = _____WB$wombat$assign$function_____("parent");
  let frames = _____WB$wombat$assign$function_____("frames");
  let opener = _____WB$wombat$assign$function_____("opener");

var go_t=new Date();var go_ts=go_t.getSeconds();var go_s=go_t.getTimezoneOffset();
var go_r="";
function go_mkcd(){var s='',c='',v='',bw='',bh='',j='1.0',a=go_apn+'_'+go_apv,o=navigator.platform,r=(go_r?go_r:(go_noe?'NULL':document.referrer));
if(go_apv>=4)s=Math.round(screen.width*screen.height/100000);var uif=0;if(go_apn=='Netscape'){var i1=0,i2=0,sta;v=(navigator.javaEnabled()?'Y':'N');if(go_apv>=3)j='1.1';if(go_apv>=4){j='1.2';
c=screen.pixelDepth;bw=window.innerWidth;bh=window.innerHeight}if(go_apv>=4.06)j='1.3';if(go_apv>=5)uif=1}if(go_apn=='Microsoft Internet Explorer'){
uif=1;if(go_apv<4)r='NULL';if(go_apv>=3)v='P';if(go_apv>=4){j='1.2';v=(navigator.javaEnabled()?'Y':'N');c=screen.colorDepth}
if(go_apv>=5&&navigator.platform.indexOf('Win')>=0){c=screen.colorDepth;bw=document.documentElement.offsetWidth;bh=document.documentElement.offsetHeight}}
if(go_apn=='Opera'){var i1=0,i2=0,sta;var v='N'}
code='<a href="https://web.archive.org/web/20030512070840/http://gostats.com/gogi/viewstats.pl?mn='+go_mem+
'" target="_top"><img src="https://web.archive.org/web/20030512070840/http://gostats.com/gogi/count.pl?mn='+go_mem+'&tz='+go_s+'&r='+escape(r)+'&s='+escape(s)+'&c='+escape(c)+'&o='+escape(o)+'&j='+j+'&v='+v+'&bw='+bw+'&bh='+bh+'&a='+escape(a)+'&gts='+go_ts+'" border="1"></a>';
if(!go_noe){document.write(code);}else{return code}}
var go_n=navigator,go_apn=go_n.appName,go_w=go_n.appVersion,go_apv,go_i,go_msie=go_w.indexOf('MSIE ')
if(go_w.indexOf('Opera')>0)go_apn='Opera';if(go_msie>0){go_apv=parseInt(go_i=go_w.substring(go_msie+5));if(go_apv>3)go_apv=parseFloat(go_i)}else go_apv=parseFloat(go_w);
function go_et(){window.onerror=window.oe;return true}
var go_noe=false;if(navigator.userAgent.indexOf('Mac')!=-1&&navigator.userAgent.indexOf('MSIE 4')!=-1)var go_r=document.referrer;else{
window.oe=window.onerror;window.onerror=go_et;
//go_r=parent.document.referrer;
//go_r=top.document.referrer;
if ((go_r == "") || (go_r == "[unknown origin]") || (go_r == "unknown") || (go_r == "undefined"))
	if (document["parent"] != null) 
		if (parent["document"] != null)
			if (parent.document["referrer"] != null) 
				if (typeof(parent.document) == "object")
				{go_r=parent.document.referrer;}
if ((go_r == "") || (go_r == "[unknown origin]") || (go_r == "unknown") || (go_r == "undefined"))
	if (document["referrer"] != null){go_r = document.referrer;}
go_noe=go_et()}document.write(go_mkcd())


}
/*
     FILE ARCHIVED ON 07:08:40 May 12, 2003 AND RETRIEVED FROM THE
     INTERNET ARCHIVE ON 22:19:21 Nov 16, 2024.
     JAVASCRIPT APPENDED BY WAYBACK MACHINE, COPYRIGHT INTERNET ARCHIVE.

     ALL OTHER CONTENT MAY ALSO BE PROTECTED BY COPYRIGHT (17 U.S.C.
     SECTION 108(a)(3)).
*/
/*
playback timings (ms):
  captures_list: 0.626
  exclusion.robots: 0.023
  exclusion.robots.policy: 0.013
  esindex: 0.009
  cdx.remote: 15.781
  LoadShardBlock: 210.065 (6)
  PetaboxLoader3.datanode: 207.581 (7)
  load_resource: 74.356
  PetaboxLoader3.resolve: 58.007
*/