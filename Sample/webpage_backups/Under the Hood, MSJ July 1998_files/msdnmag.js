var _____WB$wombat$assign$function_____=function(name){return (self._wb_wombat && self._wb_wombat.local_init && self._wb_wombat.local_init(name))||self[name];};if(!self.__WB_pmw){self.__WB_pmw=function(obj){this.__WB_source=obj;return this;}}{
let window = _____WB$wombat$assign$function_____("window");
let self = _____WB$wombat$assign$function_____("self");
let document = _____WB$wombat$assign$function_____("document");
let location = _____WB$wombat$assign$function_____("location");
let top = _____WB$wombat$assign$function_____("top");
let parent = _____WB$wombat$assign$function_____("parent");
let frames = _____WB$wombat$assign$function_____("frames");
let opens = _____WB$wombat$assign$function_____("opens");
var x=0;

function printHidden() {
if (window.navigator.userAgent.indexOf("MSIE ")!=-1 && navigator.appVersion.substr(0, 1) >= 4){
  document.body.insertAdjacentHTML("beforeEnd", 
    "<iframe name='printHiddenFrame' width='0' height='0'></iframe>");
  doc = printHiddenFrame.document;
  doc.open();
  doc.write(
    "<frameset onload='parent.printFrame(printMe);' rows=\"100%\">" +
    "<frame name=printMe src=\"print.asp\">" +
    "</frameset>");
  doc.close();
}
else{
  document.location.href="print.asp";
}
}

function printFrame(frame) {
  frame.focus();
  frame.print();
  return;
}


function OpenUrl(url)
{
var childWin;
childWin = window.open(url,'window','height=300,width=550,status=yes,toolbar=no,menubar=no,location=no,scrollbars=yes,resizable=yes');
childWin.focus();
}

function ToggleDisplay(oButton, oItems)
{
	if (oItems.style.display == "none")	{
		oItems.style.display = "";
		oButton.src = "/msdnmag/images/minus.gif";
	}	else {
		oItems.style.display = "none";
		oButton.src = "/msdnmag/images/plus.gif";
	}
	return;
}
function change()	{
	var coll = document.all.tags("DIV");
	if (x!=1){
	{for (i=0; i<coll.length; i++)
		if (coll[i].style.display=='none' && coll[i].id.indexOf("menu")>-1){
			coll[i].style.display='';
		}
	}
	button1.value=" Collapse All "
	x=1
	var coll2 = document.all.tags("IMG");
	{for (i=0; i<coll2.length; i++)
		if (coll2[i].id.indexOf("btns")>-1){
			coll2[i].src='/msdnmag/images/minus.gif';
		}
	}

	}
	else {
	{for (i=0; i<coll.length; i++)
		if (coll[i].style.display=='' && coll[i].id.indexOf("menu")>-1){
			coll[i].style.display='none';
		}
	}
	button1.value=" Expand All "
	x=0
	var coll2 = document.all.tags("IMG");
	{for (i=0; i<coll2.length; i++)
		if (coll2[i].id.indexOf("btns")>-1){
			coll2[i].src='/msdnmag/images/plus.gif';
		}
	}
	}
}

}
/*
     FILE ARCHIVED ON 09:23:50 Jun 09, 2012 AND RETRIEVED FROM THE
     INTERNET ARCHIVE ON 15:19:13 Nov 19, 2025.
     JAVASCRIPT APPENDED BY WAYBACK MACHINE, COPYRIGHT INTERNET ARCHIVE.

     ALL OTHER CONTENT MAY ALSO BE PROTECTED BY COPYRIGHT (17 U.S.C.
     SECTION 108(a)(3)).
*/
/*
playback timings (ms):
  captures_list: 1.43
  exclusion.robots: 0.031
  exclusion.robots.policy: 0.02
  esindex: 0.017
  cdx.remote: 14.283
  LoadShardBlock: 97.67 (3)
  PetaboxLoader3.datanode: 126.888 (4)
  load_resource: 85.948
  PetaboxLoader3.resolve: 53.856
*/