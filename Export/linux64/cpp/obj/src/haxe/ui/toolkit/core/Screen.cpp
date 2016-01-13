#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Screen_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","new",0x4e2964ab,"haxe.ui.toolkit.core.Screen.new","haxe/ui/toolkit/core/Screen.hx",6,0x1b965f65)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->_cursorY = ((Float)-1);
	HX_STACK_LINE(19)
	this->_cursorX = ((Float)-1);
	HX_STACK_LINE(28)
	::String tmp = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Dynamic tmp1 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	this->addEventListener(tmp,tmp1,null(),null(),null());
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct();
	return _result_;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct();
	return _result_;}

Void Screen_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","addEventListener",0x1f6964a2,"haxe.ui.toolkit.core.Screen.addEventListener","haxe/ui/toolkit/core/Screen.hx",31,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(32)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::openfl::_legacy::display::Stage target = tmp1;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(33)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		Dynamic tmp3 = listener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		bool tmp4 = useCapture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		int tmp5 = priority;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		bool tmp6 = useWeakReference;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		target->addEventListener(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Screen_obj,addEventListener,(void))

Void Screen_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","removeEventListener",0xb021a215,"haxe.ui.toolkit.core.Screen.removeEventListener","haxe/ui/toolkit/core/Screen.hx",36,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(37)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::openfl::_legacy::display::Stage target = tmp1;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(38)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		Dynamic tmp3 = listener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		bool tmp4 = useCapture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		target->removeEventListener(tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,removeEventListener,(void))

Float Screen_obj::get_width( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_width",0x811270e8,"haxe.ui.toolkit.core.Screen.get_width","haxe/ui/toolkit/core/Screen.hx",41,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_width,return )

Float Screen_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_height",0x255fd2c5,"haxe.ui.toolkit.core.Screen.get_height","haxe/ui/toolkit/core/Screen.hx",45,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int tmp2 = tmp1->get_stageHeight();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_height,return )

Float Screen_obj::get_cursorX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_cursorX",0x5ad22424,"haxe.ui.toolkit.core.Screen.get_cursorX","haxe/ui/toolkit/core/Screen.hx",49,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	Float tmp = this->_cursorX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_cursorX,return )

Float Screen_obj::get_cursorY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_cursorY",0x5ad22425,"haxe.ui.toolkit.core.Screen.get_cursorY","haxe/ui/toolkit/core/Screen.hx",53,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	Float tmp = this->_cursorY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_cursorY,return )

Void Screen_obj::_onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","_onScreenMouseMove",0x934ed141,"haxe.ui.toolkit.core.Screen._onScreenMouseMove","haxe/ui/toolkit/core/Screen.hx",57,0x1b965f65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(58)
		this->_cursorX = event->stageX;
		HX_STACK_LINE(59)
		this->_cursorY = event->stageY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,_onScreenMouseMove,(void))

::haxe::ui::toolkit::core::Screen Screen_obj::_instance;

::haxe::ui::toolkit::core::Screen Screen_obj::instance;

::haxe::ui::toolkit::core::Screen Screen_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_instance",0x41a3ddf3,"haxe.ui.toolkit.core.Screen.get_instance","haxe/ui/toolkit/core/Screen.hx",9,0x1b965f65)
	HX_STACK_LINE(10)
	::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	if ((tmp1)){
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::core::Screen_obj::_instance = tmp2;
	}
	HX_STACK_LINE(13)
	::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_instance,return )


Screen_obj::Screen_obj()
{
}

Dynamic Screen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cursorX") ) { return inCallProp == hx::paccAlways ? get_cursorX() : cursorX; }
		if (HX_FIELD_EQ(inName,"cursorY") ) { return inCallProp == hx::paccAlways ? get_cursorY() : cursorY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cursorX") ) { return _cursorX; }
		if (HX_FIELD_EQ(inName,"_cursorY") ) { return _cursorY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cursorX") ) { return get_cursorX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cursorY") ) { return get_cursorY_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Screen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cursorX") ) { cursorX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursorY") ) { cursorY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cursorX") ) { _cursorX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursorY") ) { _cursorY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Screen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::core::Screen >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::core::Screen >(); return true; }
	}
	return false;
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_cursorX","\x43","\xc6","\x4c","\x06"));
	outFields->push(HX_HCSTRING("_cursorY","\x44","\xc6","\x4c","\x06"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("cursorX","\xc2","\x6c","\x94","\xcc"));
	outFields->push(HX_HCSTRING("cursorY","\xc3","\x6c","\x94","\xcc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Screen_obj,_cursorX),HX_HCSTRING("_cursorX","\x43","\xc6","\x4c","\x06")},
	{hx::fsFloat,(int)offsetof(Screen_obj,_cursorY),HX_HCSTRING("_cursorY","\x44","\xc6","\x4c","\x06")},
	{hx::fsFloat,(int)offsetof(Screen_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Screen_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Screen_obj,cursorX),HX_HCSTRING("cursorX","\xc2","\x6c","\x94","\xcc")},
	{hx::fsFloat,(int)offsetof(Screen_obj,cursorY),HX_HCSTRING("cursorY","\xc3","\x6c","\x94","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Screen*/ ,(void *) &Screen_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Screen*/ ,(void *) &Screen_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_cursorX","\x43","\xc6","\x4c","\x06"),
	HX_HCSTRING("_cursorY","\x44","\xc6","\x4c","\x06"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("cursorX","\xc2","\x6c","\x94","\xcc"),
	HX_HCSTRING("cursorY","\xc3","\x6c","\x94","\xcc"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_cursorX","\xd9","\xcc","\x8e","\x52"),
	HX_HCSTRING("get_cursorY","\xda","\xcc","\x8e","\x52"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Screen_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Screen_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Screen_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Screen_obj::instance,"instance");
};

#endif

hx::Class Screen_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void Screen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Screen","\x39","\x33","\x81","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Screen_obj::__GetStatic;
	__mClass->mSetStaticField = &Screen_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Screen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
