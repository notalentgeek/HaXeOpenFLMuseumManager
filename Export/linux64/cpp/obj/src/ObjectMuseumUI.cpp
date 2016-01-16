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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void ObjectMuseumUI_obj::__construct(::CollectionGlobal _collectionGlobalObject,::EnumMuseumType _typeEnum)
{
HX_STACK_FRAME("ObjectMuseumUI","new",0x3694e717,"ObjectMuseumUI.new","ObjectMuseumUI.hx",12,0x9c5ec839)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(20)
	this->yInt = (int)-1;
	HX_STACK_LINE(19)
	this->xInt = (int)-1;
	HX_STACK_LINE(18)
	this->typeEnum = null();
	HX_STACK_LINE(17)
	this->textString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(16)
	this->heightInt = (int)50;
	HX_STACK_LINE(15)
	this->widthInt = (int)-1;
	HX_STACK_LINE(14)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(13)
	this->buttonObject = ::haxe::ui::toolkit::controls::Button_obj::__new();
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(27)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::controls::Button tmp = this->buttonObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	tmp->set_autoSize(false);
}
;
	return null();
}

//ObjectMuseumUI_obj::~ObjectMuseumUI_obj() { }

Dynamic ObjectMuseumUI_obj::__CreateEmpty() { return  new ObjectMuseumUI_obj; }
hx::ObjectPtr< ObjectMuseumUI_obj > ObjectMuseumUI_obj::__new(::CollectionGlobal _collectionGlobalObject,::EnumMuseumType _typeEnum)
{  hx::ObjectPtr< ObjectMuseumUI_obj > _result_ = new ObjectMuseumUI_obj();
	_result_->__construct(_collectionGlobalObject,_typeEnum);
	return _result_;}

Dynamic ObjectMuseumUI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMuseumUI_obj > _result_ = new ObjectMuseumUI_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::haxe::ui::toolkit::controls::Button ObjectMuseumUI_obj::GetButtonObject( ){
	HX_STACK_FRAME("ObjectMuseumUI","GetButtonObject",0xbb97811e,"ObjectMuseumUI.GetButtonObject","ObjectMuseumUI.hx",30,0x9c5ec839)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::controls::Button tmp = this->buttonObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseumUI_obj,GetButtonObject,return )

Void ObjectMuseumUI_obj::UpdateVoid( ::ObjectMuseum _object,int _widthMaxInt){
{
		HX_STACK_FRAME("ObjectMuseumUI","UpdateVoid",0xba76f046,"ObjectMuseumUI.UpdateVoid","ObjectMuseumUI.hx",34,0x9c5ec839)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_object,"_object")
		HX_STACK_ARG(_widthMaxInt,"_widthMaxInt")
		HX_STACK_LINE(35)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		if ((tmp1)){
			HX_STACK_LINE(36)
			int tmp2 = _widthMaxInt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			int tmp5 = tmp4->get_stageWidth();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			Float tmp6 = (Float(tmp5) / Float((int)4));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			Float tmp7 = (tmp2 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			int tmp9 = tmp8->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(36)
			Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(36)
			int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(36)
			this->widthInt = tmp11;
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::controls::Button tmp12 = this->buttonObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(37)
			int tmp13 = this->widthInt;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(37)
			tmp12->set_width(tmp13);
			HX_STACK_LINE(38)
			::haxe::ui::toolkit::controls::Button tmp14 = this->buttonObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(38)
			int tmp15 = this->heightInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(38)
			tmp14->set_height(tmp15);
			HX_STACK_LINE(39)
			::haxe::ui::toolkit::controls::Button tmp16 = this->buttonObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(39)
			Dynamic tmp17 = _object->GetNameStruct();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(39)
			::String tmp18 = tmp17->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(39)
			tmp16->set_id(tmp18);
			HX_STACK_LINE(40)
			::haxe::ui::toolkit::controls::Button tmp19 = this->buttonObject;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(40)
			Dynamic tmp20 = _object->GetNameStruct();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(40)
			::String tmp21 = tmp20->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(40)
			tmp19->set_text(tmp21);
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::controls::Button tmp22 = this->buttonObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::controls::Button tmp23 = this->buttonObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(41)
			Float tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(41)
			int tmp25 = _object->GetIndexLocalInt();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(41)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(41)
			tmp22->set_x(tmp26);
			HX_STACK_LINE(42)
			::haxe::ui::toolkit::controls::Button tmp27 = this->buttonObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(42)
			tmp27->set_y((int)0);
			HX_STACK_LINE(43)
			::CollectionGlobal tmp28 = this->collectionGlobalObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(43)
			::haxe::ui::toolkit::containers::Absolute tmp29 = tmp28->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(43)
			::haxe::ui::toolkit::controls::Button tmp30 = this->buttonObject;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(43)
			tmp29->addChild(tmp30);
		}
		else{
			HX_STACK_LINE(45)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			if ((tmp4)){
				HX_STACK_LINE(45)
				::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				::EnumMuseumType tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				tmp5 = (tmp7 == ::EnumMuseumType_obj::ROM);
			}
			else{
				HX_STACK_LINE(45)
				tmp5 = true;
			}
			HX_STACK_LINE(45)
			if ((tmp5)){
				HX_STACK_LINE(46)
				::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				bool tmp7 = (tmp6 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				if ((tmp7)){
					HX_STACK_LINE(46)
					::ObjectMuseum tmp8 = _object->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					::ObjectMuseumUI tmp9 = tmp8->GetMuseumUIObject();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					::haxe::ui::toolkit::controls::Button tmp10 = tmp9->GetButtonObject();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					Float tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					int tmp12 = _object->GetSiblingObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(46)
					this->widthInt = tmp14;
				}
				HX_STACK_LINE(47)
				::EnumMuseumType tmp8 = this->typeEnum;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				bool tmp9 = (tmp8 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				if ((tmp9)){
					HX_STACK_LINE(47)
					::ObjectMuseum tmp10 = _object->GetParentObject();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(47)
					::ObjectMuseumUI tmp11 = tmp10->GetMuseumUIObject();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(47)
					::haxe::ui::toolkit::controls::Button tmp12 = tmp11->GetButtonObject();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(47)
					Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(47)
					int tmp14 = _object->GetSiblingObjectArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(47)
					Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(47)
					int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(47)
					this->widthInt = tmp16;
				}
				HX_STACK_LINE(48)
				::haxe::ui::toolkit::controls::Button tmp10 = this->buttonObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				int tmp11 = this->widthInt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				tmp10->set_width(tmp11);
				HX_STACK_LINE(49)
				::haxe::ui::toolkit::controls::Button tmp12 = this->buttonObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				int tmp13 = this->heightInt;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				tmp12->set_height(tmp13);
				HX_STACK_LINE(50)
				::haxe::ui::toolkit::controls::Button tmp14 = this->buttonObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(50)
				Dynamic tmp15 = _object->GetNameStruct();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(50)
				::String tmp16 = tmp15->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(50)
				tmp14->set_id(tmp16);
				HX_STACK_LINE(51)
				::haxe::ui::toolkit::controls::Button tmp17 = this->buttonObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(51)
				Dynamic tmp18 = _object->GetNameStruct();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(51)
				::String tmp19 = tmp18->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(51)
				tmp17->set_text(tmp19);
				HX_STACK_LINE(52)
				::haxe::ui::toolkit::controls::Button tmp20 = this->buttonObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(52)
				::ObjectMuseum tmp21 = _object->GetParentObject();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(52)
				::ObjectMuseumUI tmp22 = tmp21->GetMuseumUIObject();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(52)
				::haxe::ui::toolkit::controls::Button tmp23 = tmp22->GetButtonObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(52)
				Float tmp24 = tmp23->get_x();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(52)
				int tmp25 = _object->GetIndexLocalInt();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(52)
				::haxe::ui::toolkit::controls::Button tmp26 = this->buttonObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(52)
				Float tmp27 = tmp26->get_width();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(52)
				Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(52)
				Float tmp29 = (tmp24 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(52)
				tmp20->set_x(tmp29);
				HX_STACK_LINE(53)
				::haxe::ui::toolkit::controls::Button tmp30 = this->buttonObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(53)
				::ObjectMuseum tmp31 = _object->GetParentObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(53)
				::ObjectMuseumUI tmp32 = tmp31->GetMuseumUIObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(53)
				::haxe::ui::toolkit::controls::Button tmp33 = tmp32->GetButtonObject();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(53)
				Float tmp34 = tmp33->get_y();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(53)
				::ObjectMuseum tmp35 = _object->GetParentObject();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(53)
				::ObjectMuseumUI tmp36 = tmp35->GetMuseumUIObject();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(53)
				::haxe::ui::toolkit::controls::Button tmp37 = tmp36->GetButtonObject();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(53)
				Float tmp38 = tmp37->get_height();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(53)
				Float tmp39 = (tmp34 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(53)
				tmp30->set_y(tmp39);
				HX_STACK_LINE(54)
				::CollectionGlobal tmp40 = this->collectionGlobalObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(54)
				::haxe::ui::toolkit::containers::Absolute tmp41 = tmp40->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(54)
				::haxe::ui::toolkit::controls::Button tmp42 = this->buttonObject;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(54)
				tmp41->addChild(tmp42);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectMuseumUI_obj,UpdateVoid,(void))


ObjectMuseumUI_obj::ObjectMuseumUI_obj()
{
}

void ObjectMuseumUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMuseumUI);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(widthInt,"widthInt");
	HX_MARK_MEMBER_NAME(heightInt,"heightInt");
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
	HX_VISIT_MEMBER_NAME(widthInt,"widthInt");
	HX_VISIT_MEMBER_NAME(heightInt,"heightInt");
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
	case 8:
		if (HX_FIELD_EQ(inName,"widthInt") ) { return widthInt; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { return typeEnum; }
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
	case 15:
		if (HX_FIELD_EQ(inName,"GetButtonObject") ) { return GetButtonObject_dyn(); }
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
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
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
	outFields->push(HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"));
	outFields->push(HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"));
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
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,widthInt),HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectMuseumUI_obj,heightInt),HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae")},
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
	HX_HCSTRING("widthInt","\x89","\x16","\xe2","\xaf"),
	HX_HCSTRING("heightInt","\x48","\x67","\x9a","\xae"),
	HX_HCSTRING("textString","\x5e","\xa9","\x20","\x48"),
	HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"),
	HX_HCSTRING("xInt","\x57","\x5f","\x89","\x4f"),
	HX_HCSTRING("yInt","\xf6","\x95","\x32","\x50"),
	HX_HCSTRING("GetButtonObject","\xe7","\xb3","\x73","\x40"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
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

