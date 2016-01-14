#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectMuseumUI
#include <ObjectMuseumUI.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Absolute
#include <haxe/ui/toolkit/containers/Absolute.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
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

Void ObjectMuseumUI_obj::__construct(::CollectionGlobal _collectionGlobalObject,::String _textString,::EnumMuseumType _typeEnum)
{
HX_STACK_FRAME("ObjectMuseumUI","new",0x3694e717,"ObjectMuseumUI.new","ObjectMuseumUI.hx",11,0x9c5ec839)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_textString,"_textString")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(21)
	this->yInt = (int)-1;
	HX_STACK_LINE(20)
	this->xInt = (int)-1;
	HX_STACK_LINE(19)
	this->typeEnum = null();
	HX_STACK_LINE(18)
	this->textString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(17)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(16)
	this->heightInt = (int)50;
	HX_STACK_LINE(15)
	this->widthInt = (int)-1;
	HX_STACK_LINE(14)
	this->widthMaxInt = (int)-1;
	HX_STACK_LINE(13)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(12)
	this->buttonObject = ::haxe::ui::toolkit::controls::Button_obj::__new();
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(28)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(29)
	this->textString = _textString;
	HX_STACK_LINE(30)
	this->typeEnum = _typeEnum;
}
;
	return null();
}

//ObjectMuseumUI_obj::~ObjectMuseumUI_obj() { }

Dynamic ObjectMuseumUI_obj::__CreateEmpty() { return  new ObjectMuseumUI_obj; }
hx::ObjectPtr< ObjectMuseumUI_obj > ObjectMuseumUI_obj::__new(::CollectionGlobal _collectionGlobalObject,::String _textString,::EnumMuseumType _typeEnum)
{  hx::ObjectPtr< ObjectMuseumUI_obj > _result_ = new ObjectMuseumUI_obj();
	_result_->__construct(_collectionGlobalObject,_textString,_typeEnum);
	return _result_;}

Dynamic ObjectMuseumUI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMuseumUI_obj > _result_ = new ObjectMuseumUI_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ObjectMuseumUI_obj::Update( int _widthMaxInt,int _indexLocalInt){
{
		HX_STACK_FRAME("ObjectMuseumUI","Update",0x27a0afd2,"ObjectMuseumUI.Update","ObjectMuseumUI.hx",35,0x9c5ec839)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_widthMaxInt,"_widthMaxInt")
		HX_STACK_ARG(_indexLocalInt,"_indexLocalInt")
		HX_STACK_LINE(36)
		this->widthMaxInt = _widthMaxInt;
		HX_STACK_LINE(37)
		this->indexLocalInt = _indexLocalInt;
		HX_STACK_LINE(38)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(39)
			int tmp2 = this->widthMaxInt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			int tmp4 = tmp3->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			this->widthInt = tmp6;
			HX_STACK_LINE(40)
			::haxe::ui::toolkit::controls::Button tmp7 = this->buttonObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			tmp7->set_autoSize(false);
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::controls::Button tmp8 = this->buttonObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			int tmp9 = this->widthInt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			tmp8->set_width(tmp9);
			HX_STACK_LINE(42)
			::haxe::ui::toolkit::controls::Button tmp10 = this->buttonObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			int tmp11 = this->heightInt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(42)
			tmp10->set_height(tmp11);
			HX_STACK_LINE(43)
			::haxe::ui::toolkit::controls::Button tmp12 = this->buttonObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			::String tmp13 = this->textString;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			tmp12->set_id(tmp13);
			HX_STACK_LINE(44)
			::haxe::ui::toolkit::controls::Button tmp14 = this->buttonObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(44)
			::String tmp15 = this->textString;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(44)
			tmp14->set_text(tmp15);
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::controls::Button tmp16 = this->buttonObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::controls::Button tmp17 = this->buttonObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			Float tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(45)
			int tmp19 = this->indexLocalInt;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(45)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(45)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(45)
			tmp16->set_x(tmp21);
			HX_STACK_LINE(46)
			::haxe::ui::toolkit::controls::Button tmp22 = this->buttonObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(46)
			tmp22->set_y((int)0);
			HX_STACK_LINE(47)
			::CollectionGlobal tmp23 = this->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(47)
			::haxe::ui::toolkit::containers::Absolute tmp24 = tmp23->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(47)
			::haxe::ui::toolkit::controls::Button tmp25 = this->buttonObject;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(47)
			tmp24->addChild(tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectMuseumUI_obj,Update,(void))


ObjectMuseumUI_obj::ObjectMuseumUI_obj()
{
}

void ObjectMuseumUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMuseumUI);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(widthMaxInt,"widthMaxInt");
	HX_MARK_MEMBER_NAME(widthInt,"widthInt");
	HX_MARK_MEMBER_NAME(heightInt,"heightInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(textString,"textString");
	HX_MARK_MEMBER_NAME(typeEnum,"typeEnum");
	HX_MARK_MEMBER_NAME(xInt,"xInt");
	HX_MARK_MEMBER_NAME(yInt,"yInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectMuseumUI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(widthMaxInt,"widthMaxInt");
	HX_VISIT_MEMBER_NAME(widthInt,"widthInt");
	HX_VISIT_MEMBER_NAME(heightInt,"heightInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(textString,"textString");
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
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"widthInt") ) { return widthInt; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { return typeEnum; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"heightInt") ) { return heightInt; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textString") ) { return textString; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"widthMaxInt") ) { return widthMaxInt; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { return buttonObject; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
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
	case 10:
		if (HX_FIELD_EQ(inName,"textString") ) { textString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"widthMaxInt") ) { widthMaxInt=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { indexLocalInt=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
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
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("widthMaxInt","\x51","\x6b","\xb2","\xee"));
	outFields->push(HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"));
	outFields->push(HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("textString","\x5e","\xa9","\x20","\x48"));
	outFields->push(HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"));
	outFields->push(HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f"));
	outFields->push(HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ObjectMuseumUI_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectMuseumUI_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,widthMaxInt),HX_HCSTRING("widthMaxInt","\x51","\x6b","\xb2","\xee")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,widthInt),HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,heightInt),HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsString,(int)offsetof(ObjectMuseumUI_obj,textString),HX_HCSTRING("textString","\x5e","\xa9","\x20","\x48")},
	{hx::fsObject /*::EnumMuseumType*/ ,(int)offsetof(ObjectMuseumUI_obj,typeEnum),HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,xInt),HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,yInt),HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("widthMaxInt","\x51","\x6b","\xb2","\xee"),
	HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"),
	HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("textString","\x5e","\xa9","\x20","\x48"),
	HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"),
	HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f"),
	HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
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

