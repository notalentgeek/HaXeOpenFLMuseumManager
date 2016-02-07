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
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Absolute
#include <haxe/ui/toolkit/containers/Absolute.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif

Void CollectionGlobal_obj::__construct()
{
HX_STACK_FRAME("CollectionGlobal","new",0x069ddff3,"CollectionGlobal.new","CollectionGlobal.hx",15,0xb0d19edd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(53)
	this->visitorObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(50)
	this->uiMuseumAbsoluteObject = null();
	HX_STACK_LINE(48)
	this->uiMainObject = null();
	HX_STACK_LINE(46)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(44)
	this->tagGeneralObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	this->roomObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(40)
	this->museumUIOffsetInt = (int)5;
	HX_STACK_LINE(37)
	this->indexGlobalVisitorInt = (int)0;
	HX_STACK_LINE(35)
	this->floorObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(33)
	this->exhibitionObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	this->exhibitionFullThresholdInt = (int)0;
	HX_STACK_LINE(29)
	this->archiveExhibitionObject = null();
	HX_STACK_LINE(65)
	::ObjectMuseum tmp = ::ObjectMuseum_obj::__new(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"),HX_HCSTRING("Exhibition Archive","\xf1","\x72","\xf3","\xb9"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),Array_obj< ::Dynamic >::__new(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	this->archiveExhibitionObject = tmp;
}
;
	return null();
}

//CollectionGlobal_obj::~CollectionGlobal_obj() { }

Dynamic CollectionGlobal_obj::__CreateEmpty() { return  new CollectionGlobal_obj; }
hx::ObjectPtr< CollectionGlobal_obj > CollectionGlobal_obj::__new()
{  hx::ObjectPtr< CollectionGlobal_obj > _result_ = new CollectionGlobal_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionGlobal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionGlobal_obj > _result_ = new CollectionGlobal_obj();
	_result_->__construct();
	return _result_;}

Void CollectionGlobal_obj::DetermineExhibitionFullThresholdVoid( ){
{
		HX_STACK_FRAME("CollectionGlobal","DetermineExhibitionFullThresholdVoid",0x69c7b69b,"CollectionGlobal.DetermineExhibitionFullThresholdVoid","CollectionGlobal.hx",75,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		int tmp = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		int tmp1 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		if ((tmp2)){
			HX_STACK_LINE(82)
			int tmp3 = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			int tmp4 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			int tmp6 = ::Math_obj::ceil(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			this->exhibitionFullThresholdInt = tmp6;
		}
		else{
			HX_STACK_LINE(84)
			int tmp3 = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			int tmp4 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			if ((tmp5)){
				HX_STACK_LINE(86)
				int tmp6 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(86)
				int tmp7 = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				this->exhibitionFullThresholdInt = tmp9;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,DetermineExhibitionFullThresholdVoid,(void))

int CollectionGlobal_obj::PutIndexGlobalVisitorInt( ){
	HX_STACK_FRAME("CollectionGlobal","PutIndexGlobalVisitorInt",0x9d97beb4,"CollectionGlobal.PutIndexGlobalVisitorInt","CollectionGlobal.hx",97,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	int tmp = this->indexGlobalVisitorInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tempIndexGlobalVisitorInt = tmp;		HX_STACK_VAR(tempIndexGlobalVisitorInt,"tempIndexGlobalVisitorInt");
	HX_STACK_LINE(102)
	(this->indexGlobalVisitorInt)++;
	HX_STACK_LINE(103)
	int tmp1 = tempIndexGlobalVisitorInt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,PutIndexGlobalVisitorInt,return )

::haxe::ui::toolkit::containers::Absolute CollectionGlobal_obj::GetUIMuseumAbsoluteObject( ){
	HX_STACK_FRAME("CollectionGlobal","GetUIMuseumAbsoluteObject",0xb8a20a45,"CollectionGlobal.GetUIMuseumAbsoluteObject","CollectionGlobal.hx",113,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::containers::Absolute tmp = this->uiMuseumAbsoluteObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetUIMuseumAbsoluteObject,return )

::ObjectMuseum CollectionGlobal_obj::GetArchiveExhibitionObject( ){
	HX_STACK_FRAME("CollectionGlobal","GetArchiveExhibitionObject",0xcdb59547,"CollectionGlobal.GetArchiveExhibitionObject","CollectionGlobal.hx",114,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::ObjectMuseum tmp = this->archiveExhibitionObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetArchiveExhibitionObject,return )

int CollectionGlobal_obj::GetExhibitionFullThresholdInt( ){
	HX_STACK_FRAME("CollectionGlobal","GetExhibitionFullThresholdInt",0xa536b40b,"CollectionGlobal.GetExhibitionFullThresholdInt","CollectionGlobal.hx",115,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	int tmp = this->exhibitionFullThresholdInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetExhibitionFullThresholdInt,return )

Array< ::Dynamic > CollectionGlobal_obj::GetExhibitionObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetExhibitionObjectArray",0xf6b3d382,"CollectionGlobal.GetExhibitionObjectArray","CollectionGlobal.hx",116,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	return this->exhibitionObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetExhibitionObjectArray,return )

Array< ::Dynamic > CollectionGlobal_obj::GetFloorObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetFloorObjectArray",0xed42d217,"CollectionGlobal.GetFloorObjectArray","CollectionGlobal.hx",117,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	return this->floorObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetFloorObjectArray,return )

int CollectionGlobal_obj::GetIndexGlobalVisitorInt( ){
	HX_STACK_FRAME("CollectionGlobal","GetIndexGlobalVisitorInt",0x8c47518d,"CollectionGlobal.GetIndexGlobalVisitorInt","CollectionGlobal.hx",118,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	int tmp = this->indexGlobalVisitorInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetIndexGlobalVisitorInt,return )

int CollectionGlobal_obj::GetMuseumUIOffsetInt( ){
	HX_STACK_FRAME("CollectionGlobal","GetMuseumUIOffsetInt",0xf4145a4d,"CollectionGlobal.GetMuseumUIOffsetInt","CollectionGlobal.hx",119,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	int tmp = this->museumUIOffsetInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetMuseumUIOffsetInt,return )

Array< ::Dynamic > CollectionGlobal_obj::GetRoomObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetRoomObjectArray",0xad6bb5f6,"CollectionGlobal.GetRoomObjectArray","CollectionGlobal.hx",120,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	return this->roomObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetRoomObjectArray,return )

Array< ::Dynamic > CollectionGlobal_obj::GetTagGeneralObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetTagGeneralObjectArray",0x6c815a43,"CollectionGlobal.GetTagGeneralObjectArray","CollectionGlobal.hx",121,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return this->tagGeneralObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetTagGeneralObjectArray,return )

Array< ::Dynamic > CollectionGlobal_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetTagObjectArray",0xa40c0c09,"CollectionGlobal.GetTagObjectArray","CollectionGlobal.hx",122,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetTagObjectArray,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject CollectionGlobal_obj::GetUIMainObject( ){
	HX_STACK_FRAME("CollectionGlobal","GetUIMainObject",0x53294cd5,"CollectionGlobal.GetUIMainObject","CollectionGlobal.hx",123,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = this->uiMainObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetUIMainObject,return )

Array< ::Dynamic > CollectionGlobal_obj::GetVisitorObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetVisitorObjectArray",0x304283b5,"CollectionGlobal.GetVisitorObjectArray","CollectionGlobal.hx",124,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	return this->visitorObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetVisitorObjectArray,return )

Void CollectionGlobal_obj::SetUIMuseumAbsoluteObjectVoid( ::haxe::ui::toolkit::containers::Absolute _absoluteObject){
{
		HX_STACK_FRAME("CollectionGlobal","SetUIMuseumAbsoluteObjectVoid",0x6919ba45,"CollectionGlobal.SetUIMuseumAbsoluteObjectVoid","CollectionGlobal.hx",125,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_absoluteObject,"_absoluteObject")
		HX_STACK_LINE(125)
		this->uiMuseumAbsoluteObject = _absoluteObject;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetUIMuseumAbsoluteObjectVoid,(void))

Void CollectionGlobal_obj::SetUIMainObjectVoid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject _iDisplayObject){
{
		HX_STACK_FRAME("CollectionGlobal","SetUIMainObjectVoid",0x29e2bdd5,"CollectionGlobal.SetUIMainObjectVoid","CollectionGlobal.hx",126,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_iDisplayObject,"_iDisplayObject")
		HX_STACK_LINE(126)
		this->uiMainObject = _iDisplayObject;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetUIMainObjectVoid,(void))

Void CollectionGlobal_obj::SetExhibitionFullThresholdInt( int _exhibitionFullThresholdInt){
{
		HX_STACK_FRAME("CollectionGlobal","SetExhibitionFullThresholdInt",0x670e6e17,"CollectionGlobal.SetExhibitionFullThresholdInt","CollectionGlobal.hx",127,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionFullThresholdInt,"_exhibitionFullThresholdInt")
		HX_STACK_LINE(127)
		this->exhibitionFullThresholdInt = _exhibitionFullThresholdInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetExhibitionFullThresholdInt,(void))

Void CollectionGlobal_obj::SetExhibitionObjectArrayVoid( Array< ::Dynamic > _exhibitionObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetExhibitionObjectArrayVoid",0x6f07f76a,"CollectionGlobal.SetExhibitionObjectArrayVoid","CollectionGlobal.hx",128,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionObjectArray,"_exhibitionObjectArray")
		HX_STACK_LINE(128)
		this->exhibitionObjectArray = _exhibitionObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetExhibitionObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetFloorObjectArrayVoid( Array< ::Dynamic > _floorObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetFloorObjectArrayVoid",0x55d98217,"CollectionGlobal.SetFloorObjectArrayVoid","CollectionGlobal.hx",129,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_floorObjectArray,"_floorObjectArray")
		HX_STACK_LINE(129)
		this->floorObjectArray = _floorObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetFloorObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetRoomObjectArrayVoid( Array< ::Dynamic > _roomObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetRoomObjectArrayVoid",0xd75554de,"CollectionGlobal.SetRoomObjectArrayVoid","CollectionGlobal.hx",130,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_roomObjectArray,"_roomObjectArray")
		HX_STACK_LINE(130)
		this->roomObjectArray = _roomObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetRoomObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetTagObjectArrayVoid( Array< ::Dynamic > _tagObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetTagObjectArrayVoid",0x24d30209,"CollectionGlobal.SetTagObjectArrayVoid","CollectionGlobal.hx",131,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObjectArray,"_tagObjectArray")
		HX_STACK_LINE(131)
		this->tagObjectArray = _tagObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetTagObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetVisitorObjectArrayVoid( Array< ::Dynamic > _visitorObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetVisitorObjectArrayVoid",0xd44ab5b5,"CollectionGlobal.SetVisitorObjectArrayVoid","CollectionGlobal.hx",132,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorObjectArray,"_visitorObjectArray")
		HX_STACK_LINE(132)
		this->visitorObjectArray = _visitorObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetVisitorObjectArrayVoid,(void))


CollectionGlobal_obj::CollectionGlobal_obj()
{
}

void CollectionGlobal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollectionGlobal);
	HX_MARK_MEMBER_NAME(archiveExhibitionObject,"archiveExhibitionObject");
	HX_MARK_MEMBER_NAME(exhibitionFullThresholdInt,"exhibitionFullThresholdInt");
	HX_MARK_MEMBER_NAME(exhibitionObjectArray,"exhibitionObjectArray");
	HX_MARK_MEMBER_NAME(floorObjectArray,"floorObjectArray");
	HX_MARK_MEMBER_NAME(indexGlobalVisitorInt,"indexGlobalVisitorInt");
	HX_MARK_MEMBER_NAME(museumUIOffsetInt,"museumUIOffsetInt");
	HX_MARK_MEMBER_NAME(roomObjectArray,"roomObjectArray");
	HX_MARK_MEMBER_NAME(tagGeneralObjectArray,"tagGeneralObjectArray");
	HX_MARK_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_MARK_MEMBER_NAME(uiMainObject,"uiMainObject");
	HX_MARK_MEMBER_NAME(uiMuseumAbsoluteObject,"uiMuseumAbsoluteObject");
	HX_MARK_MEMBER_NAME(visitorObjectArray,"visitorObjectArray");
	HX_MARK_END_CLASS();
}

void CollectionGlobal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(archiveExhibitionObject,"archiveExhibitionObject");
	HX_VISIT_MEMBER_NAME(exhibitionFullThresholdInt,"exhibitionFullThresholdInt");
	HX_VISIT_MEMBER_NAME(exhibitionObjectArray,"exhibitionObjectArray");
	HX_VISIT_MEMBER_NAME(floorObjectArray,"floorObjectArray");
	HX_VISIT_MEMBER_NAME(indexGlobalVisitorInt,"indexGlobalVisitorInt");
	HX_VISIT_MEMBER_NAME(museumUIOffsetInt,"museumUIOffsetInt");
	HX_VISIT_MEMBER_NAME(roomObjectArray,"roomObjectArray");
	HX_VISIT_MEMBER_NAME(tagGeneralObjectArray,"tagGeneralObjectArray");
	HX_VISIT_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_VISIT_MEMBER_NAME(uiMainObject,"uiMainObject");
	HX_VISIT_MEMBER_NAME(uiMuseumAbsoluteObject,"uiMuseumAbsoluteObject");
	HX_VISIT_MEMBER_NAME(visitorObjectArray,"visitorObjectArray");
}

Dynamic CollectionGlobal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"uiMainObject") ) { return uiMainObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { return tagObjectArray; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"roomObjectArray") ) { return roomObjectArray; }
		if (HX_FIELD_EQ(inName,"GetUIMainObject") ) { return GetUIMainObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"floorObjectArray") ) { return floorObjectArray; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"museumUIOffsetInt") ) { return museumUIOffsetInt; }
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"visitorObjectArray") ) { return visitorObjectArray; }
		if (HX_FIELD_EQ(inName,"GetRoomObjectArray") ) { return GetRoomObjectArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"GetFloorObjectArray") ) { return GetFloorObjectArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetUIMainObjectVoid") ) { return SetUIMainObjectVoid_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"GetMuseumUIOffsetInt") ) { return GetMuseumUIOffsetInt_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"exhibitionObjectArray") ) { return exhibitionObjectArray; }
		if (HX_FIELD_EQ(inName,"indexGlobalVisitorInt") ) { return indexGlobalVisitorInt; }
		if (HX_FIELD_EQ(inName,"tagGeneralObjectArray") ) { return tagGeneralObjectArray; }
		if (HX_FIELD_EQ(inName,"GetVisitorObjectArray") ) { return GetVisitorObjectArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTagObjectArrayVoid") ) { return SetTagObjectArrayVoid_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"uiMuseumAbsoluteObject") ) { return uiMuseumAbsoluteObject; }
		if (HX_FIELD_EQ(inName,"SetRoomObjectArrayVoid") ) { return SetRoomObjectArrayVoid_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"archiveExhibitionObject") ) { return archiveExhibitionObject; }
		if (HX_FIELD_EQ(inName,"SetFloorObjectArrayVoid") ) { return SetFloorObjectArrayVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"PutIndexGlobalVisitorInt") ) { return PutIndexGlobalVisitorInt_dyn(); }
		if (HX_FIELD_EQ(inName,"GetExhibitionObjectArray") ) { return GetExhibitionObjectArray_dyn(); }
		if (HX_FIELD_EQ(inName,"GetIndexGlobalVisitorInt") ) { return GetIndexGlobalVisitorInt_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagGeneralObjectArray") ) { return GetTagGeneralObjectArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"GetUIMuseumAbsoluteObject") ) { return GetUIMuseumAbsoluteObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVisitorObjectArrayVoid") ) { return SetVisitorObjectArrayVoid_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"exhibitionFullThresholdInt") ) { return exhibitionFullThresholdInt; }
		if (HX_FIELD_EQ(inName,"GetArchiveExhibitionObject") ) { return GetArchiveExhibitionObject_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"SetExhibitionObjectArrayVoid") ) { return SetExhibitionObjectArrayVoid_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"GetExhibitionFullThresholdInt") ) { return GetExhibitionFullThresholdInt_dyn(); }
		if (HX_FIELD_EQ(inName,"SetUIMuseumAbsoluteObjectVoid") ) { return SetUIMuseumAbsoluteObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetExhibitionFullThresholdInt") ) { return SetExhibitionFullThresholdInt_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"DetermineExhibitionFullThresholdVoid") ) { return DetermineExhibitionFullThresholdVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollectionGlobal_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"uiMainObject") ) { uiMainObject=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { tagObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"roomObjectArray") ) { roomObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"floorObjectArray") ) { floorObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"museumUIOffsetInt") ) { museumUIOffsetInt=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"visitorObjectArray") ) { visitorObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"exhibitionObjectArray") ) { exhibitionObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexGlobalVisitorInt") ) { indexGlobalVisitorInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagGeneralObjectArray") ) { tagGeneralObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"uiMuseumAbsoluteObject") ) { uiMuseumAbsoluteObject=inValue.Cast< ::haxe::ui::toolkit::containers::Absolute >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"archiveExhibitionObject") ) { archiveExhibitionObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"exhibitionFullThresholdInt") ) { exhibitionFullThresholdInt=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollectionGlobal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("archiveExhibitionObject","\x50","\x14","\x62","\xdd"));
	outFields->push(HX_HCSTRING("exhibitionFullThresholdInt","\xa2","\x80","\x16","\xa1"));
	outFields->push(HX_HCSTRING("exhibitionObjectArray","\x4b","\x4e","\xf5","\x56"));
	outFields->push(HX_HCSTRING("floorObjectArray","\xee","\x4b","\x25","\x9f"));
	outFields->push(HX_HCSTRING("indexGlobalVisitorInt","\x56","\xcc","\x88","\xec"));
	outFields->push(HX_HCSTRING("museumUIOffsetInt","\x96","\x7c","\x5c","\xe8"));
	outFields->push(HX_HCSTRING("roomObjectArray","\xff","\x83","\x1d","\x77"));
	outFields->push(HX_HCSTRING("tagGeneralObjectArray","\x0c","\xd5","\xc2","\xcc"));
	outFields->push(HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"));
	outFields->push(HX_HCSTRING("uiMainObject","\x4c","\xb7","\x53","\x49"));
	outFields->push(HX_HCSTRING("uiMuseumAbsoluteObject","\x7c","\xcf","\x18","\xc7"));
	outFields->push(HX_HCSTRING("visitorObjectArray","\x4c","\x61","\x18","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(CollectionGlobal_obj,archiveExhibitionObject),HX_HCSTRING("archiveExhibitionObject","\x50","\x14","\x62","\xdd")},
	{hx::fsInt,(int)offsetof(CollectionGlobal_obj,exhibitionFullThresholdInt),HX_HCSTRING("exhibitionFullThresholdInt","\xa2","\x80","\x16","\xa1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,exhibitionObjectArray),HX_HCSTRING("exhibitionObjectArray","\x4b","\x4e","\xf5","\x56")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,floorObjectArray),HX_HCSTRING("floorObjectArray","\xee","\x4b","\x25","\x9f")},
	{hx::fsInt,(int)offsetof(CollectionGlobal_obj,indexGlobalVisitorInt),HX_HCSTRING("indexGlobalVisitorInt","\x56","\xcc","\x88","\xec")},
	{hx::fsInt,(int)offsetof(CollectionGlobal_obj,museumUIOffsetInt),HX_HCSTRING("museumUIOffsetInt","\x96","\x7c","\x5c","\xe8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,roomObjectArray),HX_HCSTRING("roomObjectArray","\xff","\x83","\x1d","\x77")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,tagGeneralObjectArray),HX_HCSTRING("tagGeneralObjectArray","\x0c","\xd5","\xc2","\xcc")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,tagObjectArray),HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObject*/ ,(int)offsetof(CollectionGlobal_obj,uiMainObject),HX_HCSTRING("uiMainObject","\x4c","\xb7","\x53","\x49")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Absolute*/ ,(int)offsetof(CollectionGlobal_obj,uiMuseumAbsoluteObject),HX_HCSTRING("uiMuseumAbsoluteObject","\x7c","\xcf","\x18","\xc7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,visitorObjectArray),HX_HCSTRING("visitorObjectArray","\x4c","\x61","\x18","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("archiveExhibitionObject","\x50","\x14","\x62","\xdd"),
	HX_HCSTRING("exhibitionFullThresholdInt","\xa2","\x80","\x16","\xa1"),
	HX_HCSTRING("exhibitionObjectArray","\x4b","\x4e","\xf5","\x56"),
	HX_HCSTRING("floorObjectArray","\xee","\x4b","\x25","\x9f"),
	HX_HCSTRING("indexGlobalVisitorInt","\x56","\xcc","\x88","\xec"),
	HX_HCSTRING("museumUIOffsetInt","\x96","\x7c","\x5c","\xe8"),
	HX_HCSTRING("roomObjectArray","\xff","\x83","\x1d","\x77"),
	HX_HCSTRING("tagGeneralObjectArray","\x0c","\xd5","\xc2","\xcc"),
	HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"),
	HX_HCSTRING("uiMainObject","\x4c","\xb7","\x53","\x49"),
	HX_HCSTRING("uiMuseumAbsoluteObject","\x7c","\xcf","\x18","\xc7"),
	HX_HCSTRING("visitorObjectArray","\x4c","\x61","\x18","\xfb"),
	HX_HCSTRING("DetermineExhibitionFullThresholdVoid","\x8e","\xd1","\x28","\x83"),
	HX_HCSTRING("PutIndexGlobalVisitorInt","\x27","\x79","\xd1","\x14"),
	HX_HCSTRING("GetUIMuseumAbsoluteObject","\x72","\x74","\xeb","\x93"),
	HX_HCSTRING("GetArchiveExhibitionObject","\x7a","\x12","\xa9","\xd2"),
	HX_HCSTRING("GetExhibitionFullThresholdInt","\xb8","\x38","\x85","\xbb"),
	HX_HCSTRING("GetExhibitionObjectArray","\xf5","\x8d","\xed","\x6d"),
	HX_HCSTRING("GetFloorObjectArray","\x84","\x2c","\xa9","\xb7"),
	HX_HCSTRING("GetIndexGlobalVisitorInt","\x00","\x0c","\x81","\x03"),
	HX_HCSTRING("GetMuseumUIOffsetInt","\x40","\x1f","\x3d","\x43"),
	HX_HCSTRING("GetRoomObjectArray","\x29","\x48","\x65","\xdd"),
	HX_HCSTRING("GetTagGeneralObjectArray","\xb6","\x14","\xbb","\xe3"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetUIMainObject","\xc2","\xac","\xfc","\xb0"),
	HX_HCSTRING("GetVisitorObjectArray","\x62","\x13","\xc6","\x24"),
	HX_HCSTRING("SetUIMuseumAbsoluteObjectVoid","\xf2","\x3e","\x68","\x7f"),
	HX_HCSTRING("SetUIMainObjectVoid","\x42","\x18","\x49","\xf4"),
	HX_HCSTRING("SetExhibitionFullThresholdInt","\xc4","\xf2","\x5c","\x7d"),
	HX_HCSTRING("SetExhibitionObjectArrayVoid","\x5d","\x67","\xbb","\x35"),
	HX_HCSTRING("SetFloorObjectArrayVoid","\x04","\x17","\x22","\x1e"),
	HX_HCSTRING("SetRoomObjectArrayVoid","\x91","\x7c","\xef","\xd5"),
	HX_HCSTRING("SetTagObjectArrayVoid","\xb6","\x91","\x56","\x19"),
	HX_HCSTRING("SetVisitorObjectArrayVoid","\xe2","\x1f","\x94","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionGlobal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionGlobal_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionGlobal_obj::__mClass;

void CollectionGlobal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionGlobal","\x81","\x6a","\xb4","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CollectionGlobal_obj >;
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

