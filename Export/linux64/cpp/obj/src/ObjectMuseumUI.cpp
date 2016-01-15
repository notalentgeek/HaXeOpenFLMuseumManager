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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void ObjectMuseumUI_obj::__construct(::CollectionGlobal _collectionGlobalObject,::String _textString,::EnumMuseumType _typeEnum)
{
HX_STACK_FRAME("ObjectMuseumUI","new",0x3694e717,"ObjectMuseumUI.new","ObjectMuseumUI.hx",12,0x9c5ec839)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_textString,"_textString")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(22)
	this->yInt = (int)-1;
	HX_STACK_LINE(21)
	this->xInt = (int)-1;
	HX_STACK_LINE(20)
	this->typeEnum = null();
	HX_STACK_LINE(19)
	this->textString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(18)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(17)
	this->heightInt = (int)50;
	HX_STACK_LINE(16)
	this->widthInt = (int)-1;
	HX_STACK_LINE(15)
	this->widthMaxInt = (int)-1;
	HX_STACK_LINE(14)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(13)
	this->buttonObject = ::haxe::ui::toolkit::controls::Button_obj::__new();
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(30)
	this->textString = _textString;
	HX_STACK_LINE(31)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::controls::Button tmp = this->buttonObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	tmp->set_autoSize(false);
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

::haxe::ui::toolkit::controls::Button ObjectMuseumUI_obj::GetButtonObject( ){
	HX_STACK_FRAME("ObjectMuseumUI","GetButtonObject",0xbb97811e,"ObjectMuseumUI.GetButtonObject","ObjectMuseumUI.hx",34,0x9c5ec839)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::controls::Button tmp = this->buttonObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseumUI_obj,GetButtonObject,return )

Void ObjectMuseumUI_obj::Update( int _indexLocalInt,::ObjectMuseum _object,int _widthMaxInt){
{
		HX_STACK_FRAME("ObjectMuseumUI","Update",0x27a0afd2,"ObjectMuseumUI.Update","ObjectMuseumUI.hx",39,0x9c5ec839)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_indexLocalInt,"_indexLocalInt")
		HX_STACK_ARG(_object,"_object")
		HX_STACK_ARG(_widthMaxInt,"_widthMaxInt")
		HX_STACK_LINE(40)
		this->widthMaxInt = _widthMaxInt;
		HX_STACK_LINE(41)
		this->indexLocalInt = _indexLocalInt;
		HX_STACK_LINE(42)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		if ((tmp1)){
			HX_STACK_LINE(45)
			int tmp2 = this->widthMaxInt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			int tmp5 = tmp4->get_stageWidth();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			Float tmp6 = (Float(tmp5) / Float((int)4));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			Float tmp7 = (tmp2 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			int tmp9 = tmp8->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			this->widthInt = tmp11;
			HX_STACK_LINE(46)
			::haxe::ui::toolkit::controls::Button tmp12 = this->buttonObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(46)
			int tmp13 = this->widthInt;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(46)
			tmp12->set_width(tmp13);
			HX_STACK_LINE(47)
			::haxe::ui::toolkit::controls::Button tmp14 = this->buttonObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(47)
			int tmp15 = this->heightInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(47)
			tmp14->set_height(tmp15);
			HX_STACK_LINE(48)
			::haxe::ui::toolkit::controls::Button tmp16 = this->buttonObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(48)
			::String tmp17 = this->textString;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(48)
			tmp16->set_id(tmp17);
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::controls::Button tmp18 = this->buttonObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(49)
			::String tmp19 = this->textString;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(49)
			tmp18->set_text(tmp19);
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::controls::Button tmp20 = this->buttonObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::controls::Button tmp21 = this->buttonObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(50)
			Float tmp22 = tmp21->get_width();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(50)
			int tmp23 = this->indexLocalInt;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(50)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(50)
			tmp20->set_x(tmp24);
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::controls::Button tmp25 = this->buttonObject;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(51)
			tmp25->set_y((int)0);
			HX_STACK_LINE(52)
			::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::containers::Absolute tmp27 = tmp26->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::controls::Button tmp28 = this->buttonObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(52)
			tmp27->addChild(tmp28);
		}
		else{
			HX_STACK_LINE(54)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			if ((tmp4)){
				HX_STACK_LINE(54)
				::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				::EnumMuseumType tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				tmp5 = (tmp7 == ::EnumMuseumType_obj::ROM);
			}
			else{
				HX_STACK_LINE(54)
				tmp5 = true;
			}
			HX_STACK_LINE(54)
			if ((tmp5)){
				HX_STACK_LINE(56)
				::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				bool tmp7 = (tmp6 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				if ((tmp7)){
					HX_STACK_LINE(56)
					::ObjectMuseum tmp8 = _object->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(56)
					::ObjectMuseumUI tmp9 = tmp8->GetMuseumUIObject();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					::haxe::ui::toolkit::controls::Button tmp10 = tmp9->GetButtonObject();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					Float tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					int tmp12 = _object->GetSiblingObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(56)
					this->widthInt = tmp14;
				}
				HX_STACK_LINE(57)
				::EnumMuseumType tmp8 = this->typeEnum;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				bool tmp9 = (tmp8 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				if ((tmp9)){
					HX_STACK_LINE(57)
					::ObjectMuseum tmp10 = _object->GetParentObject();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					::ObjectMuseumUI tmp11 = tmp10->GetMuseumUIObject();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(57)
					::haxe::ui::toolkit::controls::Button tmp12 = tmp11->GetButtonObject();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(57)
					Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(57)
					int tmp14 = _object->GetSiblingObjectArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(57)
					Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(57)
					this->widthInt = tmp16;
				}
				HX_STACK_LINE(58)
				::haxe::ui::toolkit::controls::Button tmp10 = this->buttonObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(58)
				int tmp11 = this->widthInt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(58)
				tmp10->set_width(tmp11);
				HX_STACK_LINE(59)
				::haxe::ui::toolkit::controls::Button tmp12 = this->buttonObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(59)
				int tmp13 = this->heightInt;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(59)
				tmp12->set_height(tmp13);
				HX_STACK_LINE(60)
				::haxe::ui::toolkit::controls::Button tmp14 = this->buttonObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(60)
				::String tmp15 = this->textString;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				tmp14->set_id(tmp15);
				HX_STACK_LINE(61)
				::haxe::ui::toolkit::controls::Button tmp16 = this->buttonObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(61)
				::String tmp17 = this->textString;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(61)
				tmp16->set_text(tmp17);
				HX_STACK_LINE(64)
				::haxe::ui::toolkit::controls::Button tmp18 = this->buttonObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(64)
				::ObjectMuseum tmp19 = _object->GetParentObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(64)
				::ObjectMuseumUI tmp20 = tmp19->GetMuseumUIObject();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(64)
				::haxe::ui::toolkit::controls::Button tmp21 = tmp20->GetButtonObject();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(64)
				Float tmp22 = tmp21->get_x();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(64)
				int tmp23 = _object->GetIndexLocalInt();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(64)
				::haxe::ui::toolkit::controls::Button tmp24 = this->buttonObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(64)
				Float tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(64)
				Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(64)
				Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(64)
				tmp18->set_x(tmp27);
				HX_STACK_LINE(65)
				::haxe::ui::toolkit::controls::Button tmp28 = this->buttonObject;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(65)
				::ObjectMuseum tmp29 = _object->GetParentObject();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(65)
				::ObjectMuseumUI tmp30 = tmp29->GetMuseumUIObject();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(65)
				::haxe::ui::toolkit::controls::Button tmp31 = tmp30->GetButtonObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(65)
				Float tmp32 = tmp31->get_y();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(65)
				::ObjectMuseum tmp33 = _object->GetParentObject();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(65)
				::ObjectMuseumUI tmp34 = tmp33->GetMuseumUIObject();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(65)
				::haxe::ui::toolkit::controls::Button tmp35 = tmp34->GetButtonObject();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(65)
				Float tmp36 = tmp35->get_height();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(65)
				Float tmp37 = (tmp32 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(65)
				tmp28->set_y(tmp37);
				HX_STACK_LINE(66)
				::haxe::ui::toolkit::controls::Button tmp38 = this->buttonObject;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(66)
				Float tmp39 = tmp38->get_x();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(66)
				::String tmp40 = (tmp39 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(66)
				::haxe::ui::toolkit::controls::Button tmp41 = this->buttonObject;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(66)
				Float tmp42 = tmp41->get_y();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(66)
				::String tmp43 = (tmp40 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(66)
				Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("ObjectMuseumUI.hx","\x39","\xc8","\x5e","\x9c"),66,HX_HCSTRING("ObjectMuseumUI","\xa5","\x0f","\x08","\x70"),HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(66)
				::haxe::Log_obj::trace(tmp43,tmp44);
				HX_STACK_LINE(67)
				::CollectionGlobal tmp45 = this->collectionGlobalObject;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(67)
				::haxe::ui::toolkit::containers::Absolute tmp46 = tmp45->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(67)
				::haxe::ui::toolkit::controls::Button tmp47 = this->buttonObject;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(67)
				tmp46->addChild(tmp47);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectMuseumUI_obj,Update,(void))


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
	HX_HCSTRING("GetButtonObject","\xe7","\xb3","\x73","\x40"),
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

