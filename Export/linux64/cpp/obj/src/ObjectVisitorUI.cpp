#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectMuseumUI
#include <ObjectMuseumUI.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_ObjectVisitorUI
#include <ObjectVisitorUI.h>
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

Void ObjectVisitorUI_obj::__construct(::CollectionGlobal _collectionGlobalObject)
{
HX_STACK_FRAME("ObjectVisitorUI","new",0x6edf7d15,"ObjectVisitorUI.new","ObjectVisitorUI.hx",12,0x74717bfb)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
{
	HX_STACK_LINE(20)
	this->yInt = (int)0;
	HX_STACK_LINE(19)
	this->xInt = (int)0;
	HX_STACK_LINE(18)
	this->textString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(17)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(16)
	this->heightInt = (int)43;
	HX_STACK_LINE(15)
	this->widthInt = (int)-1;
	HX_STACK_LINE(14)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(13)
	this->buttonObject = ::haxe::ui::toolkit::controls::Button_obj::__new();
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(24)
	::haxe::ui::toolkit::controls::Button tmp = this->buttonObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	tmp->set_autoSize(false);
	HX_STACK_LINE(25)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::containers::Absolute tmp2 = tmp1->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::controls::Button tmp3 = this->buttonObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	tmp2->addChild(tmp3);
}
;
	return null();
}

//ObjectVisitorUI_obj::~ObjectVisitorUI_obj() { }

Dynamic ObjectVisitorUI_obj::__CreateEmpty() { return  new ObjectVisitorUI_obj; }
hx::ObjectPtr< ObjectVisitorUI_obj > ObjectVisitorUI_obj::__new(::CollectionGlobal _collectionGlobalObject)
{  hx::ObjectPtr< ObjectVisitorUI_obj > _result_ = new ObjectVisitorUI_obj();
	_result_->__construct(_collectionGlobalObject);
	return _result_;}

Dynamic ObjectVisitorUI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectVisitorUI_obj > _result_ = new ObjectVisitorUI_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxe::ui::toolkit::controls::Button ObjectVisitorUI_obj::GetButtonObject( ){
	HX_STACK_FRAME("ObjectVisitorUI","GetButtonObject",0x78ea1c1c,"ObjectVisitorUI.GetButtonObject","ObjectVisitorUI.hx",27,0x74717bfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::haxe::ui::toolkit::controls::Button tmp = this->buttonObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitorUI_obj,GetButtonObject,return )

Void ObjectVisitorUI_obj::UpdateVoid( ::ObjectVisitor _object){
{
		HX_STACK_FRAME("ObjectVisitorUI","UpdateVoid",0x9be63608,"ObjectVisitorUI.UpdateVoid","ObjectVisitorUI.hx",28,0x74717bfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_object,"_object")
		HX_STACK_LINE(29)
		::ObjectMuseum tmp = _object->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::ObjectMuseumUI tmp1 = tmp->GetMuseumUIObject();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::haxe::ui::toolkit::controls::Button tmp2 = tmp1->GetButtonObject();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		Float tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		this->widthInt = tmp4;
		HX_STACK_LINE(30)
		::haxe::ui::toolkit::controls::Button tmp5 = this->buttonObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		int tmp6 = this->widthInt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		tmp5->set_width(tmp6);
		HX_STACK_LINE(31)
		::haxe::ui::toolkit::controls::Button tmp7 = this->buttonObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		int tmp8 = this->heightInt;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		tmp7->set_height(tmp8);
		HX_STACK_LINE(32)
		::haxe::ui::toolkit::controls::Button tmp9 = this->buttonObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(32)
		::String tmp10 = _object->GetNameString();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(32)
		tmp9->set_id(tmp10);
		HX_STACK_LINE(33)
		::haxe::ui::toolkit::controls::Button tmp11 = this->buttonObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(33)
		::String tmp12 = _object->GetNameString();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(33)
		tmp11->set_text(tmp12);
		HX_STACK_LINE(34)
		::haxe::ui::toolkit::controls::Button tmp13 = this->buttonObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		::ObjectMuseum tmp14 = _object->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		::ObjectMuseumUI tmp15 = tmp14->GetMuseumUIObject();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		::haxe::ui::toolkit::controls::Button tmp16 = tmp15->GetButtonObject();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(34)
		Float tmp17 = tmp16->get_x();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(34)
		tmp13->set_x(tmp17);
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::controls::Button tmp18 = this->buttonObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(36)
		::ObjectMuseum tmp19 = _object->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(36)
		::ObjectMuseumUI tmp20 = tmp19->GetMuseumUIObject();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::controls::Button tmp21 = tmp20->GetButtonObject();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(36)
		Float tmp22 = tmp21->get_y();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		::ObjectMuseum tmp23 = _object->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		::ObjectMuseumUI tmp24 = tmp23->GetMuseumUIObject();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::controls::Button tmp25 = tmp24->GetButtonObject();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(37)
		Float tmp26 = tmp25->get_height();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(36)
		Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		::ObjectVisitorUI tmp28 = _object->GetVisitorUIObject();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::controls::Button tmp29 = tmp28->GetButtonObject();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		Float tmp30 = tmp29->get_height();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		int tmp31 = _object->GetIndexLocalInt();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(36)
		Float tmp33 = (tmp27 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(36)
		Float tmp34 = (tmp33 + (int)5);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(40)
		int tmp35 = _object->GetIndexLocalInt();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(40)
		int tmp36 = (tmp35 * (int)5);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(36)
		Float tmp37 = (tmp34 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(35)
		tmp18->set_y(tmp37);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitorUI_obj,UpdateVoid,(void))


ObjectVisitorUI_obj::ObjectVisitorUI_obj()
{
}

void ObjectVisitorUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectVisitorUI);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(widthInt,"widthInt");
	HX_MARK_MEMBER_NAME(heightInt,"heightInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(textString,"textString");
	HX_MARK_MEMBER_NAME(xInt,"xInt");
	HX_MARK_MEMBER_NAME(yInt,"yInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectVisitorUI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(widthInt,"widthInt");
	HX_VISIT_MEMBER_NAME(heightInt,"heightInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(textString,"textString");
	HX_VISIT_MEMBER_NAME(xInt,"xInt");
	HX_VISIT_MEMBER_NAME(yInt,"yInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectVisitorUI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xInt") ) { return xInt; }
		if (HX_FIELD_EQ(inName,"yInt") ) { return yInt; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"widthInt") ) { return widthInt; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"heightInt") ) { return heightInt; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textString") ) { return textString; }
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { return buttonObject; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"GetButtonObject") ) { return GetButtonObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectVisitorUI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xInt") ) { xInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yInt") ) { yInt=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"widthInt") ) { widthInt=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"heightInt") ) { heightInt=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textString") ) { textString=inValue.Cast< ::String >(); return inValue; }
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

bool ObjectVisitorUI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectVisitorUI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"));
	outFields->push(HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("textString","\x5e","\xa9","\x20","\x48"));
	outFields->push(HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f"));
	outFields->push(HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ObjectVisitorUI_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectVisitorUI_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsInt,(int)offsetof(ObjectVisitorUI_obj,widthInt),HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectVisitorUI_obj,heightInt),HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae")},
	{hx::fsInt,(int)offsetof(ObjectVisitorUI_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsString,(int)offsetof(ObjectVisitorUI_obj,textString),HX_HCSTRING("textString","\x5e","\xa9","\x20","\x48")},
	{hx::fsInt,(int)offsetof(ObjectVisitorUI_obj,xInt),HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f")},
	{hx::fsInt,(int)offsetof(ObjectVisitorUI_obj,yInt),HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"),
	HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("textString","\x5e","\xa9","\x20","\x48"),
	HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f"),
	HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50"),
	HX_HCSTRING("GetButtonObject","\xe7","\xb3","\x73","\x40"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectVisitorUI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectVisitorUI_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectVisitorUI_obj::__mClass;

void ObjectVisitorUI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectVisitorUI","\xa3","\x4e","\x94","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ObjectVisitorUI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectVisitorUI_obj >;
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

