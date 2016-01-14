#include <hxcpp.h>

#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_ObjectMuseumUI
#include <ObjectMuseumUI.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void ObjectMuseumUI_obj::__construct(int _widthInt,int _heightInt,int _indexGlobalInt,int _indexLocalInt,::EnumMuseumType _typeEnum,int _xInt,int _yInt)
{
HX_STACK_FRAME("ObjectMuseumUI","new",0x3694e717,"ObjectMuseumUI.new","ObjectMuseumUI.hx",10,0x9c5ec839)
HX_STACK_THIS(this)
HX_STACK_ARG(_widthInt,"_widthInt")
HX_STACK_ARG(_heightInt,"_heightInt")
HX_STACK_ARG(_indexGlobalInt,"_indexGlobalInt")
HX_STACK_ARG(_indexLocalInt,"_indexLocalInt")
HX_STACK_ARG(_typeEnum,"_typeEnum")
HX_STACK_ARG(_xInt,"_xInt")
HX_STACK_ARG(_yInt,"_yInt")
{
	HX_STACK_LINE(18)
	this->yInt = (int)-1;
	HX_STACK_LINE(17)
	this->xInt = (int)-1;
	HX_STACK_LINE(16)
	this->typeEnum = null();
	HX_STACK_LINE(15)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(14)
	this->indexGlobalInt = (int)-1;
	HX_STACK_LINE(13)
	this->heightInt = (int)-1;
	HX_STACK_LINE(12)
	this->widthInt = (int)-1;
	HX_STACK_LINE(11)
	this->buttonObject = ::haxe::ui::toolkit::controls::Button_obj::__new();
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	this->widthInt = _widthInt;
	HX_STACK_LINE(30)
	this->heightInt = _heightInt;
	HX_STACK_LINE(31)
	this->indexLocalInt = _indexLocalInt;
	HX_STACK_LINE(32)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(33)
	this->xInt = _xInt;
	HX_STACK_LINE(34)
	this->yInt = _yInt;
	HX_STACK_LINE(35)
	bool tmp = (_typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	if ((tmp)){
	}
}
;
	return null();
}

//ObjectMuseumUI_obj::~ObjectMuseumUI_obj() { }

Dynamic ObjectMuseumUI_obj::__CreateEmpty() { return  new ObjectMuseumUI_obj; }
hx::ObjectPtr< ObjectMuseumUI_obj > ObjectMuseumUI_obj::__new(int _widthInt,int _heightInt,int _indexGlobalInt,int _indexLocalInt,::EnumMuseumType _typeEnum,int _xInt,int _yInt)
{  hx::ObjectPtr< ObjectMuseumUI_obj > _result_ = new ObjectMuseumUI_obj();
	_result_->__construct(_widthInt,_heightInt,_indexGlobalInt,_indexLocalInt,_typeEnum,_xInt,_yInt);
	return _result_;}

Dynamic ObjectMuseumUI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMuseumUI_obj > _result_ = new ObjectMuseumUI_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}


ObjectMuseumUI_obj::ObjectMuseumUI_obj()
{
}

void ObjectMuseumUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMuseumUI);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(widthInt,"widthInt");
	HX_MARK_MEMBER_NAME(heightInt,"heightInt");
	HX_MARK_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(typeEnum,"typeEnum");
	HX_MARK_MEMBER_NAME(xInt,"xInt");
	HX_MARK_MEMBER_NAME(yInt,"yInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectMuseumUI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(widthInt,"widthInt");
	HX_VISIT_MEMBER_NAME(heightInt,"heightInt");
	HX_VISIT_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(typeEnum,"typeEnum");
	HX_VISIT_MEMBER_NAME(xInt,"xInt");
	HX_VISIT_MEMBER_NAME(yInt,"yInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectMuseumUI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xInt") ) { return xInt; }
		if (HX_FIELD_EQ(inName,"yInt") ) { return yInt; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"widthInt") ) { return widthInt; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { return typeEnum; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"heightInt") ) { return heightInt; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { return buttonObject; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectMuseumUI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xInt") ) { xInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yInt") ) { yInt=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"widthInt") ) { widthInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { typeEnum=inValue.Cast< ::EnumMuseumType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"heightInt") ) { heightInt=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { indexLocalInt=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { indexGlobalInt=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectMuseumUI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectMuseumUI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"));
	outFields->push(HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"));
	outFields->push(HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"));
	outFields->push(HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f"));
	outFields->push(HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ObjectMuseumUI_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,widthInt),HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,heightInt),HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,indexGlobalInt),HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsObject /*::EnumMuseumType*/ ,(int)offsetof(ObjectMuseumUI_obj,typeEnum),HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,xInt),HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,yInt),HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"),
	HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"),
	HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"),
	HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f"),
	HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectMuseumUI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectMuseumUI_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectMuseumUI_obj::__mClass;

void ObjectMuseumUI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectMuseumUI","\xa5","\x0f","\x08","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ObjectMuseumUI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectMuseumUI_obj >;
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

