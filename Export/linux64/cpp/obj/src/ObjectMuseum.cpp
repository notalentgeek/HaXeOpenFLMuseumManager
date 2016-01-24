#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumMode
#include <EnumMuseumMode.h>
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
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
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

Void ObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameString,Array< ::Dynamic > _tagObjectArray,::EnumMuseumType _typeEnum)
{
HX_STACK_FRAME("ObjectMuseum","new",0x743c1c83,"ObjectMuseum.new","ObjectMuseum.hx",5,0x96e8244d)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_nameAltString,"_nameAltString")
HX_STACK_ARG(_nameFullString,"_nameFullString")
HX_STACK_ARG(_parentNameString,"_parentNameString")
HX_STACK_ARG(_tagObjectArray,"_tagObjectArray")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(36)
	this->visitorTotalInt = (int)0;
	HX_STACK_LINE(35)
	this->visitorCurrentInt = (int)0;
	HX_STACK_LINE(34)
	this->typeEnum = null();
	HX_STACK_LINE(33)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	this->siblingObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	this->parentObject = null();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectMuseum.hx",28,0x96e8244d)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				__result->Add(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	this->nameStruct = _Function_1_1::Block();
	HX_STACK_LINE(24)
	this->museumUIObject = null();
	HX_STACK_LINE(23)
	this->museumModeEnum = null();
	HX_STACK_LINE(22)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(21)
	this->indexGlobalInt = (int)-1;
	HX_STACK_LINE(20)
	this->fullBool = false;
	HX_STACK_LINE(19)
	this->explanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(18)
	this->collectionGlobalObject = null();
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectMuseum.hx",12,0x96e8244d)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67") , Array_obj< ::Dynamic >::__new(),false);
				__result->Add(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c") , Array_obj< ::Dynamic >::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(12)
	this->childStruct = _Function_1_2::Block();
	HX_STACK_LINE(48)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(49)
	Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	tmp->__FieldRef(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c")) = _nameAltString;
	HX_STACK_LINE(50)
	Dynamic tmp1 = this->nameStruct;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	tmp1->__FieldRef(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9")) = _nameFullString;
	HX_STACK_LINE(51)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(52)
	this->tagObjectArray = _tagObjectArray;
	HX_STACK_LINE(53)
	Dynamic tmp2 = this->nameStruct;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	::String tmp3 = tmp2->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	bool tmp4 = (tmp3 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	if ((tmp4)){
		HX_STACK_LINE(53)
		::EnumMuseumType tmp5 = _typeEnum;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		this->AddThisToArray(tmp5);
	}
	HX_STACK_LINE(56)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	::ObjectMuseumUI tmp7 = ::ObjectMuseumUI_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	this->museumUIObject = tmp7;
	HX_STACK_LINE(59)
	::String tmp8 = _parentNameString;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(59)
	this->ChangeParentObject(tmp8);
	HX_STACK_LINE(60)
	::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(60)
	tmp9->DetermineExhibitionFullThresholdVoid();
}
;
	return null();
}

//ObjectMuseum_obj::~ObjectMuseum_obj() { }

Dynamic ObjectMuseum_obj::__CreateEmpty() { return  new ObjectMuseum_obj; }
hx::ObjectPtr< ObjectMuseum_obj > ObjectMuseum_obj::__new(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameString,Array< ::Dynamic > _tagObjectArray,::EnumMuseumType _typeEnum)
{  hx::ObjectPtr< ObjectMuseum_obj > _result_ = new ObjectMuseum_obj();
	_result_->__construct(_collectionGlobalObject,_nameAltString,_nameFullString,_parentNameString,_tagObjectArray,_typeEnum);
	return _result_;}

Dynamic ObjectMuseum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMuseum_obj > _result_ = new ObjectMuseum_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void ObjectMuseum_obj::AddChildVisitorVoid( ::ObjectVisitor _visitorObject){
{
		HX_STACK_FRAME("ObjectMuseum","AddChildVisitorVoid",0xc0ae382a,"ObjectMuseum.AddChildVisitorVoid","ObjectMuseum.hx",62,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorObject,"_visitorObject")
		HX_STACK_LINE(62)
		Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::ObjectVisitor tmp1 = _visitorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		tmp->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddChildVisitorVoid,(void))

Void ObjectMuseum_obj::AddTagVoid( ::ObjectTag _tagObject){
{
		HX_STACK_FRAME("ObjectMuseum","AddTagVoid",0xaae47d0a,"ObjectMuseum.AddTagVoid","ObjectMuseum.hx",63,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObject,"_tagObject")
		HX_STACK_LINE(63)
		::ObjectTag tmp = _tagObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		this->tagObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddTagVoid,(void))

Void ObjectMuseum_obj::AddThisToArray( ::EnumMuseumType _typeEnum){
{
		HX_STACK_FRAME("ObjectMuseum","AddThisToArray",0x50174f9c,"ObjectMuseum.AddThisToArray","ObjectMuseum.hx",64,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_typeEnum,"_typeEnum")
		HX_STACK_LINE(65)
		bool tmp = (_typeEnum == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		if ((tmp)){
			HX_STACK_LINE(65)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			tmp1->GetExhibitionObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(66)
			bool tmp1 = (_typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			if ((tmp1)){
				HX_STACK_LINE(66)
				::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				tmp2->GetFloorObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(67)
				bool tmp2 = (_typeEnum == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				if ((tmp2)){
					HX_STACK_LINE(67)
					::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(67)
					tmp3->GetRoomObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddThisToArray,(void))

Void ObjectMuseum_obj::DetermineIndexGlobalVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexGlobalVoid",0xa32e9cd3,"ObjectMuseum.DetermineIndexGlobalVoid","ObjectMuseum.hx",69,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		bool foundIndexGlobalBool = false;		HX_STACK_VAR(foundIndexGlobalBool,"foundIndexGlobalBool");
		HX_STACK_LINE(71)
		Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
		HX_STACK_LINE(72)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(72)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			tempObjectArray = tmp2->GetExhibitionObjectArray();
		}
		else{
			HX_STACK_LINE(73)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			if ((tmp3)){
				HX_STACK_LINE(73)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				tempObjectArray = tmp4->GetFloorObjectArray();
			}
			else{
				HX_STACK_LINE(74)
				::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				bool tmp5 = (tmp4 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				if ((tmp5)){
					HX_STACK_LINE(74)
					::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					tempObjectArray = tmp6->GetRoomObjectArray();
				}
			}
		}
		HX_STACK_LINE(75)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp2 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(77)
			Dynamic tmp4 = this->nameStruct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			::String tmp5 = tmp4->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			::ObjectMuseum tmp6 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			Dynamic tmp7 = tmp6->GetNameStruct();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			::String tmp8 = tmp7->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			bool tmp9 = (tmp5 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			if ((tmp9)){
				HX_STACK_LINE(78)
				foundIndexGlobalBool = true;
				HX_STACK_LINE(79)
				this->indexGlobalInt = loopCounter1Int;
				HX_STACK_LINE(80)
				break;
			}
			HX_STACK_LINE(82)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(84)
		bool tmp2 = (foundIndexGlobalBool == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(84)
			this->indexGlobalInt = (int)-1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexGlobalVoid,(void))

Void ObjectMuseum_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexLocalVoid",0x6cd91f63,"ObjectMuseum.DetermineIndexLocalVoid","ObjectMuseum.hx",86,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		bool foundIndexLocalBool = false;		HX_STACK_VAR(foundIndexLocalBool,"foundIndexLocalBool");
		HX_STACK_LINE(88)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		if ((tmp1)){
			HX_STACK_LINE(89)
			foundIndexLocalBool = true;
			HX_STACK_LINE(90)
			int tmp2 = this->indexGlobalInt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			this->indexLocalInt = tmp2;
		}
		else{
			HX_STACK_LINE(92)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			bool tmp3 = (tmp2 != ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			if ((tmp3)){
				HX_STACK_LINE(93)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(94)
				while((true)){
					HX_STACK_LINE(94)
					int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(94)
					int tmp5 = this->siblingObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(94)
					bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(94)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(94)
					if ((tmp7)){
						HX_STACK_LINE(94)
						break;
					}
					HX_STACK_LINE(95)
					Dynamic tmp8 = this->nameStruct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(95)
					::String tmp9 = tmp8->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(95)
					::ObjectMuseum tmp10 = this->siblingObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(95)
					Dynamic tmp11 = tmp10->GetNameStruct();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(95)
					::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(95)
					bool tmp13 = (tmp9 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(95)
					if ((tmp13)){
						HX_STACK_LINE(96)
						foundIndexLocalBool = true;
						HX_STACK_LINE(97)
						this->indexLocalInt = loopCounter1Int;
						HX_STACK_LINE(98)
						break;
					}
					HX_STACK_LINE(100)
					(loopCounter1Int)++;
				}
			}
		}
		HX_STACK_LINE(103)
		bool tmp2 = (foundIndexLocalBool == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		if ((tmp2)){
			HX_STACK_LINE(103)
			this->indexLocalInt = (int)-1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexLocalVoid,(void))

Void ObjectMuseum_obj::ResetVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","ResetVoid",0x96ab3506,"ObjectMuseum.ResetVoid","ObjectMuseum.hx",105,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		this->fullBool = false;
		HX_STACK_LINE(107)
		this->visitorCurrentInt = (int)0;
		HX_STACK_LINE(108)
		this->visitorTotalInt = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,ResetVoid,(void))

Void ObjectMuseum_obj::UpdateHeavyVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","UpdateHeavyVoid",0x25f3af35,"ObjectMuseum.UpdateHeavyVoid","ObjectMuseum.hx",110,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(112)
		int necessaryWidthInt = (int)0;		HX_STACK_VAR(necessaryWidthInt,"necessaryWidthInt");
		HX_STACK_LINE(113)
		while((true)){
			HX_STACK_LINE(113)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(113)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			int tmp2 = tmp1->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			if ((tmp4)){
				HX_STACK_LINE(113)
				break;
			}
			HX_STACK_LINE(114)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			::ObjectMuseum tmp6 = tmp5->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			tmp6->DetermineSiblingVoid();
			HX_STACK_LINE(115)
			::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			::ObjectMuseum tmp8 = tmp7->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			tmp8->DetermineIndexVoid();
			HX_STACK_LINE(116)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			::ObjectMuseum tmp10 = tmp9->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			::ObjectMuseumUI tmp11 = tmp10->GetMuseumUIObject();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			::ObjectMuseum tmp13 = tmp12->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(118)
			::openfl::_legacy::display::MovieClip tmp14 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(118)
			::openfl::_legacy::display::Stage tmp15 = tmp14->get_stage();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(118)
			int tmp16 = tmp15->get_stageWidth();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			tmp11->UpdateVoid(tmp13,tmp16);
			HX_STACK_LINE(120)
			int tmp17 = necessaryWidthInt;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(120)
			::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(120)
			::ObjectMuseum tmp19 = tmp18->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(120)
			::ObjectMuseumUI tmp20 = tmp19->GetMuseumUIObject();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::controls::Button tmp21 = tmp20->GetButtonObject();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(120)
			Float tmp22 = tmp21->get_x();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(120)
			::CollectionGlobal tmp23 = this->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(120)
			::ObjectMuseum tmp24 = tmp23->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(120)
			::ObjectMuseumUI tmp25 = tmp24->GetMuseumUIObject();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::controls::Button tmp26 = tmp25->GetButtonObject();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(120)
			Float tmp27 = tmp26->get_width();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(120)
			Float tmp28 = (tmp22 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(120)
			int tmp29 = ::Math_obj::round(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(120)
			bool tmp30 = (tmp17 < tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(120)
			if ((tmp30)){
				HX_STACK_LINE(121)
				::CollectionGlobal tmp31 = this->collectionGlobalObject;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(121)
				::ObjectMuseum tmp32 = tmp31->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(121)
				::ObjectMuseumUI tmp33 = tmp32->GetMuseumUIObject();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(121)
				::haxe::ui::toolkit::controls::Button tmp34 = tmp33->GetButtonObject();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(121)
				Float tmp35 = tmp34->get_x();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(121)
				::CollectionGlobal tmp36 = this->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(121)
				::ObjectMuseum tmp37 = tmp36->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(121)
				::ObjectMuseumUI tmp38 = tmp37->GetMuseumUIObject();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(121)
				::haxe::ui::toolkit::controls::Button tmp39 = tmp38->GetButtonObject();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(121)
				Float tmp40 = tmp39->get_width();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(121)
				Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(121)
				int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(121)
				necessaryWidthInt = tmp42;
			}
			HX_STACK_LINE(123)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(125)
		Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		::String tmp1 = tmp->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		bool tmp2 = (tmp1 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(125)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::containers::Absolute tmp4 = tmp3->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			int tmp5 = necessaryWidthInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			tmp4->set_width(tmp5);
		}
		HX_STACK_LINE(126)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(127)
		while((true)){
			HX_STACK_LINE(127)
			int tmp3 = loopCounter1Int;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			int tmp5 = tmp4->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			if ((tmp7)){
				HX_STACK_LINE(127)
				break;
			}
			HX_STACK_LINE(128)
			::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			::ObjectMuseum tmp9 = tmp8->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			::ObjectMuseum tmp10 = tmp9->GetParentObject();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(128)
			tmp10->DetermineChildVoid();
			HX_STACK_LINE(129)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			::ObjectMuseum tmp12 = tmp11->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			tmp12->DetermineSiblingVoid();
			HX_STACK_LINE(130)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(130)
			::ObjectMuseum tmp14 = tmp13->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(130)
			tmp14->DetermineIndexVoid();
			HX_STACK_LINE(131)
			::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			::ObjectMuseum tmp16 = tmp15->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			::ObjectMuseumUI tmp17 = tmp16->GetMuseumUIObject();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(132)
			::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(132)
			::ObjectMuseum tmp19 = tmp18->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(133)
			::openfl::_legacy::display::MovieClip tmp20 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(133)
			::openfl::_legacy::display::Stage tmp21 = tmp20->get_stage();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(133)
			int tmp22 = tmp21->get_stageWidth();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(131)
			tmp17->UpdateVoid(tmp19,tmp22);
			HX_STACK_LINE(135)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(137)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(138)
		Dynamic tmp3 = this->nameStruct;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		::String tmp4 = tmp3->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		bool tmp5 = (tmp4 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		if ((tmp5)){
			HX_STACK_LINE(139)
			while((true)){
				HX_STACK_LINE(139)
				int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				int tmp8 = tmp7->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(139)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				if ((tmp10)){
					HX_STACK_LINE(139)
					break;
				}
				HX_STACK_LINE(140)
				::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(140)
				::ObjectMuseum tmp12 = tmp11->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(140)
				::ObjectMuseum tmp13 = tmp12->GetParentObject();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(140)
				tmp13->DetermineChildVoid();
				HX_STACK_LINE(141)
				::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(141)
				::ObjectMuseum tmp15 = tmp14->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(141)
				tmp15->DetermineSiblingVoid();
				HX_STACK_LINE(142)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(142)
				::ObjectMuseum tmp17 = tmp16->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(142)
				tmp17->DetermineIndexVoid();
				HX_STACK_LINE(143)
				::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(143)
				::ObjectMuseum tmp19 = tmp18->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(143)
				::ObjectMuseumUI tmp20 = tmp19->GetMuseumUIObject();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(144)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(144)
				::ObjectMuseum tmp22 = tmp21->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(145)
				::openfl::_legacy::display::MovieClip tmp23 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(145)
				::openfl::_legacy::display::Stage tmp24 = tmp23->get_stage();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(145)
				int tmp25 = tmp24->get_stageWidth();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(143)
				tmp20->UpdateVoid(tmp22,tmp25);
				HX_STACK_LINE(147)
				(loopCounter1Int)++;
			}
		}
		HX_STACK_LINE(150)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			int tmp8 = tmp7->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			if ((tmp10)){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(152)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(152)
			::ObjectVisitor tmp12 = tmp11->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(152)
			tmp12->DetermineIndexLocalVoid();
			HX_STACK_LINE(153)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(153)
			::ObjectVisitor tmp14 = tmp13->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(153)
			int tmp15 = loopCounter1Int;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(153)
			tmp14->GenerateExhibitionTargetVoid(tmp15);
			HX_STACK_LINE(154)
			::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(154)
			::ObjectVisitor tmp17 = tmp16->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(154)
			::ObjectVisitorUI tmp18 = tmp17->GetVisitorUIObject();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(154)
			::CollectionGlobal tmp19 = this->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(154)
			::ObjectVisitor tmp20 = tmp19->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(154)
			tmp18->UpdateVoid(tmp20);
			HX_STACK_LINE(155)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,UpdateHeavyVoid,(void))

::ObjectMuseum ObjectMuseum_obj::ChangeParentObject( ::String _parentNameString){
	HX_STACK_FRAME("ObjectMuseum","ChangeParentObject",0x01df7076,"ObjectMuseum.ChangeParentObject","ObjectMuseum.hx",158,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_parentNameString,"_parentNameString")
	HX_STACK_LINE(160)
	::ObjectMuseum tmp = this->parentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	if ((tmp1)){
		HX_STACK_LINE(160)
		::ObjectMuseum tmp2 = this->parentObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		tmp3->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(161)
	::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	if ((tmp3)){
		HX_STACK_LINE(161)
		Dynamic tmp5 = this->nameStruct;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		::String tmp7 = tmp6->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		tmp4 = (tmp7 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));
	}
	else{
		HX_STACK_LINE(161)
		tmp4 = false;
	}
	HX_STACK_LINE(161)
	if ((tmp4)){
		HX_STACK_LINE(161)
		::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		::String tmp6 = _parentNameString;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		::ObjectMuseum tmp7 = ::CollectionFunction_obj::FindMuseumObject(tmp5,::EnumMuseumType_obj::ROM,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		this->parentObject = tmp7;
	}
	else{
		HX_STACK_LINE(162)
		::EnumMuseumType tmp5 = this->typeEnum;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		bool tmp6 = (tmp5 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		if ((tmp6)){
			HX_STACK_LINE(162)
			this->parentObject = null();
		}
		else{
			HX_STACK_LINE(163)
			::EnumMuseumType tmp7 = this->typeEnum;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(163)
			bool tmp8 = (tmp7 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(163)
			if ((tmp8)){
				HX_STACK_LINE(163)
				::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(163)
				::String tmp10 = _parentNameString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(163)
				::ObjectMuseum tmp11 = ::CollectionFunction_obj::FindMuseumObject(tmp9,::EnumMuseumType_obj::FLR,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(163)
				this->parentObject = tmp11;
			}
		}
	}
	HX_STACK_LINE(164)
	this->UpdateHeavyVoid();
	HX_STACK_LINE(165)
	::ObjectMuseum tmp5 = this->parentObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(165)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,ChangeParentObject,return )

Void ObjectMuseum_obj::DetermineChildVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineChildVoid",0x6319285a,"ObjectMuseum.DetermineChildVoid","ObjectMuseum.hx",167,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::CollectionFunction_obj::ClearArray(tmp->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic ));
		HX_STACK_LINE(169)
		Dynamic tmp1 = this->childStruct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		::CollectionFunction_obj::ClearArray(tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic ));
		HX_STACK_LINE(170)
		::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		if ((tmp3)){
			HX_STACK_LINE(171)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(172)
				int tmp6 = tmp5->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(172)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(172)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				if ((tmp8)){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(173)
				Dynamic tmp9 = this->nameStruct;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				::String tmp10 = tmp9->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(173)
				::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(173)
				::ObjectVisitor tmp12 = tmp11->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				::ObjectMuseum tmp13 = tmp12->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(173)
				Dynamic tmp14 = tmp13->GetNameStruct();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(173)
				::String tmp15 = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(173)
				bool tmp16 = (tmp10 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(173)
				if ((tmp16)){
					HX_STACK_LINE(174)
					Dynamic tmp17 = this->childStruct;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(174)
					::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(174)
					::ObjectVisitor tmp19 = tmp18->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(174)
					tmp17->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
				}
				HX_STACK_LINE(176)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(179)
			::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			bool tmp5 = (tmp4 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			if ((tmp5)){
				HX_STACK_LINE(180)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(181)
				while((true)){
					HX_STACK_LINE(181)
					int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(181)
					::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(181)
					int tmp8 = tmp7->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(181)
					bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(181)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(181)
					if ((tmp10)){
						HX_STACK_LINE(181)
						break;
					}
					HX_STACK_LINE(182)
					Dynamic tmp11 = this->nameStruct;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(182)
					::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(182)
					::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(182)
					::ObjectMuseum tmp14 = tmp13->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(182)
					::ObjectMuseum tmp15 = tmp14->GetParentObject();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(182)
					Dynamic tmp16 = tmp15->GetNameStruct();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					::String tmp17 = tmp16->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					bool tmp18 = (tmp12 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					if ((tmp18)){
						HX_STACK_LINE(183)
						Dynamic tmp19 = this->childStruct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(183)
						::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(183)
						::ObjectMuseum tmp21 = tmp20->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(183)
						tmp19->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
					}
					HX_STACK_LINE(185)
					(loopCounter1Int)++;
				}
			}
			else{
				HX_STACK_LINE(188)
				::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(188)
				bool tmp7 = (tmp6 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(188)
				if ((tmp7)){
					HX_STACK_LINE(189)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(190)
					while((true)){
						HX_STACK_LINE(190)
						int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(190)
						::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(190)
						int tmp10 = tmp9->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(190)
						bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(190)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(190)
						if ((tmp12)){
							HX_STACK_LINE(190)
							break;
						}
						HX_STACK_LINE(191)
						Dynamic tmp13 = this->nameStruct;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(191)
						::String tmp14 = tmp13->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(191)
						::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						::ObjectMuseum tmp16 = tmp15->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(191)
						::ObjectMuseum tmp17 = tmp16->GetParentObject();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(191)
						Dynamic tmp18 = tmp17->GetNameStruct();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(191)
						::String tmp19 = tmp18->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(191)
						bool tmp20 = (tmp14 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(191)
						if ((tmp20)){
							HX_STACK_LINE(192)
							Dynamic tmp21 = this->childStruct;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(192)
							::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(192)
							::ObjectMuseum tmp23 = tmp22->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(192)
							tmp21->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
						}
						HX_STACK_LINE(194)
						(loopCounter1Int)++;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineChildVoid,(void))

Void ObjectMuseum_obj::DetermineFullVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineFullVoid",0x39b0f279,"ObjectMuseum.DetermineFullVoid","ObjectMuseum.hx",198,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		int tmp = this->visitorCurrentInt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		int tmp2 = tmp1->GetExhibitionFullThresholdInt();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		if ((tmp3)){
			HX_STACK_LINE(199)
			this->fullBool = true;
		}
		else{
			HX_STACK_LINE(200)
			int tmp4 = this->visitorCurrentInt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			int tmp6 = tmp5->GetExhibitionFullThresholdInt();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(200)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			if ((tmp7)){
				HX_STACK_LINE(200)
				this->fullBool = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineFullVoid,(void))

Void ObjectMuseum_obj::DetermineIndexVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexVoid",0x93890cd0,"ObjectMuseum.DetermineIndexVoid","ObjectMuseum.hx",202,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		this->DetermineIndexGlobalVoid();
		HX_STACK_LINE(204)
		this->DetermineIndexLocalVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexVoid,(void))

Void ObjectMuseum_obj::DetermineSiblingVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineSiblingVoid",0x044fbd40,"ObjectMuseum.DetermineSiblingVoid","ObjectMuseum.hx",206,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		::CollectionFunction_obj::ClearArray(this->siblingObjectArray);
		HX_STACK_LINE(208)
		Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
		HX_STACK_LINE(209)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		if ((tmp1)){
			HX_STACK_LINE(209)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(209)
			tempObjectArray = tmp2->GetExhibitionObjectArray();
		}
		else{
			HX_STACK_LINE(210)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			if ((tmp3)){
				HX_STACK_LINE(210)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(210)
				tempObjectArray = tmp4->GetRoomObjectArray();
			}
		}
		HX_STACK_LINE(211)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(212)
		::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		bool tmp3 = (tmp2 != ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		if ((tmp3)){
			HX_STACK_LINE(213)
			while((true)){
				HX_STACK_LINE(213)
				bool tmp4 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				if ((tmp5)){
					HX_STACK_LINE(213)
					break;
				}
				HX_STACK_LINE(214)
				::ObjectMuseum tmp6 = this->parentObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				Dynamic tmp7 = tmp6->GetNameStruct();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(214)
				::String tmp8 = tmp7->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(214)
				::ObjectMuseum tmp9 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(214)
				::ObjectMuseum tmp10 = tmp9->GetParentObject();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(214)
				Dynamic tmp11 = tmp10->GetNameStruct();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(214)
				::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(214)
				bool tmp13 = (tmp8 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(214)
				if ((tmp13)){
					HX_STACK_LINE(215)
					::ObjectMuseum tmp14 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(215)
					this->siblingObjectArray->push(tmp14);
				}
				HX_STACK_LINE(217)
				(loopCounter1Int)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineSiblingVoid,(void))

Dynamic ObjectMuseum_obj::GetChildStruct( ){
	HX_STACK_FRAME("ObjectMuseum","GetChildStruct",0xe7838cf8,"ObjectMuseum.GetChildStruct","ObjectMuseum.hx",221,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetChildStruct,return )

Array< ::String > ObjectMuseum_obj::GetExplanationStringArray( ){
	HX_STACK_FRAME("ObjectMuseum","GetExplanationStringArray",0x0bf34da8,"ObjectMuseum.GetExplanationStringArray","ObjectMuseum.hx",222,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	return this->explanationStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetExplanationStringArray,return )

bool ObjectMuseum_obj::GetFullBool( ){
	HX_STACK_FRAME("ObjectMuseum","GetFullBool",0x7d6b0f12,"ObjectMuseum.GetFullBool","ObjectMuseum.hx",223,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	bool tmp = this->fullBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetFullBool,return )

int ObjectMuseum_obj::GetIndexLocalInt( ){
	HX_STACK_FRAME("ObjectMuseum","GetIndexLocalInt",0x7cdd491d,"ObjectMuseum.GetIndexLocalInt","ObjectMuseum.hx",224,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	int tmp = this->indexLocalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetIndexLocalInt,return )

::ObjectMuseumUI ObjectMuseum_obj::GetMuseumUIObject( ){
	HX_STACK_FRAME("ObjectMuseum","GetMuseumUIObject",0x9b3f2f7e,"ObjectMuseum.GetMuseumUIObject","ObjectMuseum.hx",225,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	::ObjectMuseumUI tmp = this->museumUIObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetMuseumUIObject,return )

::EnumMuseumMode ObjectMuseum_obj::GetMuseumModeEnum( ){
	HX_STACK_FRAME("ObjectMuseum","GetMuseumModeEnum",0x051f8f6f,"ObjectMuseum.GetMuseumModeEnum","ObjectMuseum.hx",226,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	::EnumMuseumMode tmp = this->museumModeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetMuseumModeEnum,return )

Dynamic ObjectMuseum_obj::GetNameStruct( ){
	HX_STACK_FRAME("ObjectMuseum","GetNameStruct",0x46430cf9,"ObjectMuseum.GetNameStruct","ObjectMuseum.hx",227,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetNameStruct,return )

::ObjectMuseum ObjectMuseum_obj::GetParentObject( ){
	HX_STACK_FRAME("ObjectMuseum","GetParentObject",0x099b05c2,"ObjectMuseum.GetParentObject","ObjectMuseum.hx",228,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	::ObjectMuseum tmp = this->parentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetParentObject,return )

Array< ::Dynamic > ObjectMuseum_obj::GetSiblingObjectArray( ){
	HX_STACK_FRAME("ObjectMuseum","GetSiblingObjectArray",0x1ca2b371,"ObjectMuseum.GetSiblingObjectArray","ObjectMuseum.hx",229,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	return this->siblingObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetSiblingObjectArray,return )

Array< ::Dynamic > ObjectMuseum_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("ObjectMuseum","GetTagObjectArray",0x31252499,"ObjectMuseum.GetTagObjectArray","ObjectMuseum.hx",230,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetTagObjectArray,return )

::EnumMuseumType ObjectMuseum_obj::GetTypeEnum( ){
	HX_STACK_FRAME("ObjectMuseum","GetTypeEnum",0xd81d7094,"ObjectMuseum.GetTypeEnum","ObjectMuseum.hx",231,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetTypeEnum,return )

int ObjectMuseum_obj::GetVisitorCurrentInt( ){
	HX_STACK_FRAME("ObjectMuseum","GetVisitorCurrentInt",0x43f11eab,"ObjectMuseum.GetVisitorCurrentInt","ObjectMuseum.hx",232,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	int tmp = this->visitorCurrentInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetVisitorCurrentInt,return )

int ObjectMuseum_obj::GetVisitorTotalInt( ){
	HX_STACK_FRAME("ObjectMuseum","GetVisitorTotalInt",0xf507f8c0,"ObjectMuseum.GetVisitorTotalInt","ObjectMuseum.hx",233,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	int tmp = this->visitorTotalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetVisitorTotalInt,return )

Void ObjectMuseum_obj::Reset( ){
{
		HX_STACK_FRAME("ObjectMuseum","Reset",0xf1a39492,"ObjectMuseum.Reset","ObjectMuseum.hx",234,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->fullBool = false;
		HX_STACK_LINE(236)
		this->museumModeEnum = null();
		HX_STACK_LINE(237)
		this->visitorCurrentInt = (int)0;
		HX_STACK_LINE(238)
		this->visitorTotalInt = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,Reset,(void))

Void ObjectMuseum_obj::SetNameAltStringVoid( ::String _nameAltString){
{
		HX_STACK_FRAME("ObjectMuseum","SetNameAltStringVoid",0xc739009e,"ObjectMuseum.SetNameAltStringVoid","ObjectMuseum.hx",240,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameAltString,"_nameAltString")
		HX_STACK_LINE(240)
		Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		tmp->__FieldRef(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c")) = _nameAltString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetNameAltStringVoid,(void))

Void ObjectMuseum_obj::SetNameFullStringVoid( ::String _nameFullString){
{
		HX_STACK_FRAME("ObjectMuseum","SetNameFullStringVoid",0xe87d4fe4,"ObjectMuseum.SetNameFullStringVoid","ObjectMuseum.hx",241,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameFullString,"_nameFullString")
		HX_STACK_LINE(241)
		Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		tmp->__FieldRef(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9")) = _nameFullString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetNameFullStringVoid,(void))

Void ObjectMuseum_obj::SetMuseumModeEnumVoid( ::EnumMuseumMode _museumModeEnum){
{
		HX_STACK_FRAME("ObjectMuseum","SetMuseumModeEnumVoid",0x4443306f,"ObjectMuseum.SetMuseumModeEnumVoid","ObjectMuseum.hx",242,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_museumModeEnum,"_museumModeEnum")
		HX_STACK_LINE(242)
		this->museumModeEnum = _museumModeEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetMuseumModeEnumVoid,(void))

Void ObjectMuseum_obj::SetParentObjectVoid( ::ObjectMuseum _parentObject){
{
		HX_STACK_FRAME("ObjectMuseum","SetParentObjectVoid",0x9d87f142,"ObjectMuseum.SetParentObjectVoid","ObjectMuseum.hx",243,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parentObject,"_parentObject")
		HX_STACK_LINE(243)
		this->parentObject = _parentObject;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetParentObjectVoid,(void))

Void ObjectMuseum_obj::SetTagObjectArrayVoid( Array< ::Dynamic > _tagObjectArray){
{
		HX_STACK_FRAME("ObjectMuseum","SetTagObjectArrayVoid",0x3a0ba299,"ObjectMuseum.SetTagObjectArrayVoid","ObjectMuseum.hx",244,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObjectArray,"_tagObjectArray")
		HX_STACK_LINE(245)
		::CollectionFunction_obj::ClearArray(this->tagObjectArray);
		HX_STACK_LINE(246)
		this->tagObjectArray = _tagObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetTagObjectArrayVoid,(void))

Void ObjectMuseum_obj::SetVisitorCurrentIntVoid( int _visitorCurrentInt){
{
		HX_STACK_FRAME("ObjectMuseum","SetVisitorCurrentIntVoid",0x5764c113,"ObjectMuseum.SetVisitorCurrentIntVoid","ObjectMuseum.hx",248,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorCurrentInt,"_visitorCurrentInt")
		HX_STACK_LINE(248)
		this->visitorCurrentInt = _visitorCurrentInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetVisitorCurrentIntVoid,(void))

Void ObjectMuseum_obj::SetVisitorTotalIntVoid( int _visitorTotalInt){
{
		HX_STACK_FRAME("ObjectMuseum","SetVisitorTotalIntVoid",0xde2bc4a8,"ObjectMuseum.SetVisitorTotalIntVoid","ObjectMuseum.hx",249,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorTotalInt,"_visitorTotalInt")
		HX_STACK_LINE(249)
		this->visitorTotalInt = _visitorTotalInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetVisitorTotalIntVoid,(void))

Void ObjectMuseum_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","UpdateVoid",0x2298805a,"ObjectMuseum.UpdateVoid","ObjectMuseum.hx",251,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		::EnumMuseumMode tmp = this->museumModeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		bool tmp1 = (tmp == ::EnumMuseumMode_obj::MRK_DEL);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp1)){
			HX_STACK_LINE(255)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(255)
			if ((tmp3)){
				HX_STACK_LINE(256)
				Dynamic tmp4 = this->childStruct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(256)
				int tmp5 = tmp4->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(256)
				bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(256)
				if ((tmp6)){
					HX_STACK_LINE(257)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(258)
					while((true)){
						HX_STACK_LINE(258)
						int tmp7 = loopCounter1Int;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(258)
						Dynamic tmp8 = this->childStruct;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(258)
						int tmp9 = tmp8->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(258)
						bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(258)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(258)
						if ((tmp11)){
							HX_STACK_LINE(258)
							break;
						}
						HX_STACK_LINE(259)
						Dynamic tmp12 = this->childStruct;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(259)
						::ObjectVisitor tmp13 = tmp12->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(259)
						bool tmp14 = tmp13->GetFinishedBool();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(259)
						bool tmp15 = (tmp14 == true);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(259)
						if ((tmp15)){
							HX_STACK_LINE(260)
							Dynamic tmp16 = this->childStruct;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(260)
							::ObjectVisitor tmp17 = tmp16->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(260)
							::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(260)
							::ObjectMuseum tmp19 = tmp18->GetArchiveExhibitionObject();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(260)
							tmp17->ChangeExhibitionCurrentVoid(tmp19);
							HX_STACK_LINE(261)
							this->UpdateHeavyVoid();
						}
						HX_STACK_LINE(263)
						(loopCounter1Int)++;
					}
				}
				else{
					HX_STACK_LINE(266)
					Dynamic tmp7 = this->childStruct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(266)
					int tmp8 = tmp7->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(266)
					bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(266)
					if ((tmp9)){
						HX_STACK_LINE(267)
						::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(267)
						::haxe::ui::toolkit::containers::Absolute tmp11 = tmp10->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(267)
						::ObjectMuseumUI tmp12 = this->museumUIObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(267)
						::haxe::ui::toolkit::controls::Button tmp13 = tmp12->GetButtonObject();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(267)
						tmp11->removeChild(tmp13,null());
						HX_STACK_LINE(268)
						::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(268)
						tmp14->GetExhibitionObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
						HX_STACK_LINE(269)
						this->museumUIObject = null();
						HX_STACK_LINE(270)
						this->UpdateHeavyVoid();
					}
				}
			}
			else{
				HX_STACK_LINE(273)
				::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				bool tmp5 = (tmp4 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				if ((tmp5)){
					HX_STACK_LINE(274)
					Dynamic tmp6 = this->childStruct;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(274)
					int tmp7 = tmp6->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(274)
					bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(274)
					if ((tmp8)){
						HX_STACK_LINE(275)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(276)
						while((true)){
							HX_STACK_LINE(276)
							int tmp9 = loopCounter1Int;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(276)
							::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(276)
							int tmp11 = tmp10->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(276)
							bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(276)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(276)
							if ((tmp13)){
								HX_STACK_LINE(276)
								break;
							}
							HX_STACK_LINE(277)
							Dynamic tmp14 = this->nameStruct;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(277)
							::String tmp15 = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(277)
							::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(277)
							::ObjectMuseum tmp17 = tmp16->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(277)
							::ObjectMuseum tmp18 = tmp17->GetParentObject();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(277)
							Dynamic tmp19 = tmp18->GetNameStruct();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(277)
							::String tmp20 = tmp19->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(277)
							bool tmp21 = (tmp15 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(277)
							if ((tmp21)){
								HX_STACK_LINE(278)
								::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(278)
								::ObjectMuseum tmp23 = tmp22->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(278)
								tmp23->SetMuseumModeEnumVoid(::EnumMuseumMode_obj::REQ_CH_PARENT);
								HX_STACK_LINE(279)
								this->UpdateHeavyVoid();
							}
							HX_STACK_LINE(281)
							(loopCounter1Int)++;
						}
					}
					else{
						HX_STACK_LINE(284)
						Dynamic tmp9 = this->childStruct;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(284)
						int tmp10 = tmp9->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(284)
						bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(284)
						if ((tmp11)){
							HX_STACK_LINE(285)
							::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(285)
							::haxe::ui::toolkit::containers::Absolute tmp13 = tmp12->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(285)
							::ObjectMuseumUI tmp14 = this->museumUIObject;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(285)
							::haxe::ui::toolkit::controls::Button tmp15 = tmp14->GetButtonObject();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(285)
							tmp13->removeChild(tmp15,null());
							HX_STACK_LINE(286)
							::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(286)
							tmp16->GetFloorObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
							HX_STACK_LINE(287)
							this->museumUIObject = null();
							HX_STACK_LINE(288)
							this->UpdateHeavyVoid();
						}
					}
				}
				else{
					HX_STACK_LINE(291)
					::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(291)
					bool tmp7 = (tmp6 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(291)
					if ((tmp7)){
						HX_STACK_LINE(292)
						Dynamic tmp8 = this->childStruct;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(292)
						int tmp9 = tmp8->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(292)
						bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(292)
						if ((tmp10)){
							HX_STACK_LINE(293)
							int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
							HX_STACK_LINE(294)
							while((true)){
								HX_STACK_LINE(294)
								int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(294)
								::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(294)
								int tmp13 = tmp12->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(294)
								bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(294)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(294)
								if ((tmp15)){
									HX_STACK_LINE(294)
									break;
								}
								HX_STACK_LINE(295)
								Dynamic tmp16 = this->nameStruct;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(295)
								::String tmp17 = tmp16->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(295)
								::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(295)
								::ObjectMuseum tmp19 = tmp18->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(295)
								::ObjectMuseum tmp20 = tmp19->GetParentObject();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(295)
								Dynamic tmp21 = tmp20->GetNameStruct();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(295)
								::String tmp22 = tmp21->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(295)
								bool tmp23 = (tmp17 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(295)
								if ((tmp23)){
									HX_STACK_LINE(296)
									::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(296)
									::ObjectMuseum tmp25 = tmp24->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(296)
									tmp25->SetMuseumModeEnumVoid(::EnumMuseumMode_obj::REQ_CH_PARENT);
									HX_STACK_LINE(297)
									this->UpdateHeavyVoid();
								}
								HX_STACK_LINE(299)
								(loopCounter1Int)++;
							}
						}
						else{
							HX_STACK_LINE(302)
							Dynamic tmp11 = this->childStruct;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(302)
							int tmp12 = tmp11->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(302)
							bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(302)
							if ((tmp13)){
								HX_STACK_LINE(303)
								::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(303)
								::haxe::ui::toolkit::containers::Absolute tmp15 = tmp14->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(303)
								::ObjectMuseumUI tmp16 = this->museumUIObject;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(303)
								::haxe::ui::toolkit::controls::Button tmp17 = tmp16->GetButtonObject();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(303)
								tmp15->removeChild(tmp17,null());
								HX_STACK_LINE(304)
								::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(304)
								tmp18->GetRoomObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
								HX_STACK_LINE(305)
								this->museumUIObject = null();
								HX_STACK_LINE(306)
								this->UpdateHeavyVoid();
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,UpdateVoid,(void))


ObjectMuseum_obj::ObjectMuseum_obj()
{
}

void ObjectMuseum_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMuseum);
	HX_MARK_MEMBER_NAME(childStruct,"childStruct");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_MARK_MEMBER_NAME(fullBool,"fullBool");
	HX_MARK_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(museumModeEnum,"museumModeEnum");
	HX_MARK_MEMBER_NAME(museumUIObject,"museumUIObject");
	HX_MARK_MEMBER_NAME(nameStruct,"nameStruct");
	HX_MARK_MEMBER_NAME(parentObject,"parentObject");
	HX_MARK_MEMBER_NAME(siblingObjectArray,"siblingObjectArray");
	HX_MARK_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_MARK_MEMBER_NAME(typeEnum,"typeEnum");
	HX_MARK_MEMBER_NAME(visitorCurrentInt,"visitorCurrentInt");
	HX_MARK_MEMBER_NAME(visitorTotalInt,"visitorTotalInt");
	HX_MARK_END_CLASS();
}

void ObjectMuseum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(childStruct,"childStruct");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_VISIT_MEMBER_NAME(fullBool,"fullBool");
	HX_VISIT_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(museumModeEnum,"museumModeEnum");
	HX_VISIT_MEMBER_NAME(museumUIObject,"museumUIObject");
	HX_VISIT_MEMBER_NAME(nameStruct,"nameStruct");
	HX_VISIT_MEMBER_NAME(parentObject,"parentObject");
	HX_VISIT_MEMBER_NAME(siblingObjectArray,"siblingObjectArray");
	HX_VISIT_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_VISIT_MEMBER_NAME(typeEnum,"typeEnum");
	HX_VISIT_MEMBER_NAME(visitorCurrentInt,"visitorCurrentInt");
	HX_VISIT_MEMBER_NAME(visitorTotalInt,"visitorTotalInt");
}

Dynamic ObjectMuseum_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Reset") ) { return Reset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullBool") ) { return fullBool; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { return typeEnum; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ResetVoid") ) { return ResetVoid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameStruct") ) { return nameStruct; }
		if (HX_FIELD_EQ(inName,"AddTagVoid") ) { return AddTagVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"childStruct") ) { return childStruct; }
		if (HX_FIELD_EQ(inName,"GetFullBool") ) { return GetFullBool_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTypeEnum") ) { return GetTypeEnum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { return parentObject; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		if (HX_FIELD_EQ(inName,"GetNameStruct") ) { return GetNameStruct_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
		if (HX_FIELD_EQ(inName,"museumModeEnum") ) { return museumModeEnum; }
		if (HX_FIELD_EQ(inName,"museumUIObject") ) { return museumUIObject; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { return tagObjectArray; }
		if (HX_FIELD_EQ(inName,"AddThisToArray") ) { return AddThisToArray_dyn(); }
		if (HX_FIELD_EQ(inName,"GetChildStruct") ) { return GetChildStruct_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorTotalInt") ) { return visitorTotalInt; }
		if (HX_FIELD_EQ(inName,"UpdateHeavyVoid") ) { return UpdateHeavyVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetParentObject") ) { return GetParentObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetIndexLocalInt") ) { return GetIndexLocalInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visitorCurrentInt") ) { return visitorCurrentInt; }
		if (HX_FIELD_EQ(inName,"DetermineFullVoid") ) { return DetermineFullVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetMuseumUIObject") ) { return GetMuseumUIObject_dyn(); }
		if (HX_FIELD_EQ(inName,"GetMuseumModeEnum") ) { return GetMuseumModeEnum_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"siblingObjectArray") ) { return siblingObjectArray; }
		if (HX_FIELD_EQ(inName,"ChangeParentObject") ) { return ChangeParentObject_dyn(); }
		if (HX_FIELD_EQ(inName,"DetermineChildVoid") ) { return DetermineChildVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"DetermineIndexVoid") ) { return DetermineIndexVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorTotalInt") ) { return GetVisitorTotalInt_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AddChildVisitorVoid") ) { return AddChildVisitorVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetParentObjectVoid") ) { return SetParentObjectVoid_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DetermineSiblingVoid") ) { return DetermineSiblingVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorCurrentInt") ) { return GetVisitorCurrentInt_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNameAltStringVoid") ) { return SetNameAltStringVoid_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"GetSiblingObjectArray") ) { return GetSiblingObjectArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNameFullStringVoid") ) { return SetNameFullStringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetMuseumModeEnumVoid") ) { return SetMuseumModeEnumVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTagObjectArrayVoid") ) { return SetTagObjectArrayVoid_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { return explanationStringArray; }
		if (HX_FIELD_EQ(inName,"SetVisitorTotalIntVoid") ) { return SetVisitorTotalIntVoid_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DetermineIndexLocalVoid") ) { return DetermineIndexLocalVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DetermineIndexGlobalVoid") ) { return DetermineIndexGlobalVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVisitorCurrentIntVoid") ) { return SetVisitorCurrentIntVoid_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"GetExplanationStringArray") ) { return GetExplanationStringArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectMuseum_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fullBool") ) { fullBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { typeEnum=inValue.Cast< ::EnumMuseumType >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameStruct") ) { nameStruct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"childStruct") ) { childStruct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { parentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { indexLocalInt=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { indexGlobalInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"museumModeEnum") ) { museumModeEnum=inValue.Cast< ::EnumMuseumMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"museumUIObject") ) { museumUIObject=inValue.Cast< ::ObjectMuseumUI >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { tagObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorTotalInt") ) { visitorTotalInt=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visitorCurrentInt") ) { visitorCurrentInt=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"siblingObjectArray") ) { siblingObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { explanationStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectMuseum_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectMuseum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("childStruct","\x11","\x75","\xc0","\x1e"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"));
	outFields->push(HX_HCSTRING("fullBool","\x59","\x0d","\x2f","\x55"));
	outFields->push(HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("museumModeEnum","\xf6","\xfc","\x69","\x65"));
	outFields->push(HX_HCSTRING("museumUIObject","\x05","\x9d","\x89","\xfb"));
	outFields->push(HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95"));
	outFields->push(HX_HCSTRING("parentObject","\x89","\x33","\xa9","\x27"));
	outFields->push(HX_HCSTRING("siblingObjectArray","\x78","\xf0","\x3f","\xd2"));
	outFields->push(HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"));
	outFields->push(HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"));
	outFields->push(HX_HCSTRING("visitorCurrentInt","\x84","\x9f","\x64","\x13"));
	outFields->push(HX_HCSTRING("visitorTotalInt","\x59","\x61","\xdd","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectMuseum_obj,childStruct),HX_HCSTRING("childStruct","\x11","\x75","\xc0","\x1e")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectMuseum_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectMuseum_obj,explanationStringArray),HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd")},
	{hx::fsBool,(int)offsetof(ObjectMuseum_obj,fullBool),HX_HCSTRING("fullBool","\x59","\x0d","\x2f","\x55")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,indexGlobalInt),HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsObject /*::EnumMuseumMode*/ ,(int)offsetof(ObjectMuseum_obj,museumModeEnum),HX_HCSTRING("museumModeEnum","\xf6","\xfc","\x69","\x65")},
	{hx::fsObject /*::ObjectMuseumUI*/ ,(int)offsetof(ObjectMuseum_obj,museumUIObject),HX_HCSTRING("museumUIObject","\x05","\x9d","\x89","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectMuseum_obj,nameStruct),HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectMuseum_obj,parentObject),HX_HCSTRING("parentObject","\x89","\x33","\xa9","\x27")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectMuseum_obj,siblingObjectArray),HX_HCSTRING("siblingObjectArray","\x78","\xf0","\x3f","\xd2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectMuseum_obj,tagObjectArray),HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91")},
	{hx::fsObject /*::EnumMuseumType*/ ,(int)offsetof(ObjectMuseum_obj,typeEnum),HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,visitorCurrentInt),HX_HCSTRING("visitorCurrentInt","\x84","\x9f","\x64","\x13")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,visitorTotalInt),HX_HCSTRING("visitorTotalInt","\x59","\x61","\xdd","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("childStruct","\x11","\x75","\xc0","\x1e"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"),
	HX_HCSTRING("fullBool","\x59","\x0d","\x2f","\x55"),
	HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("museumModeEnum","\xf6","\xfc","\x69","\x65"),
	HX_HCSTRING("museumUIObject","\x05","\x9d","\x89","\xfb"),
	HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95"),
	HX_HCSTRING("parentObject","\x89","\x33","\xa9","\x27"),
	HX_HCSTRING("siblingObjectArray","\x78","\xf0","\x3f","\xd2"),
	HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"),
	HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"),
	HX_HCSTRING("visitorCurrentInt","\x84","\x9f","\x64","\x13"),
	HX_HCSTRING("visitorTotalInt","\x59","\x61","\xdd","\xd5"),
	HX_HCSTRING("AddChildVisitorVoid","\x07","\x36","\x18","\xb3"),
	HX_HCSTRING("AddTagVoid","\xcd","\xae","\x05","\x86"),
	HX_HCSTRING("AddThisToArray","\xdf","\x1e","\x48","\xb9"),
	HX_HCSTRING("DetermineIndexGlobalVoid","\xd6","\x3d","\x4e","\xfb"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("ResetVoid","\xa3","\xac","\x12","\x36"),
	HX_HCSTRING("UpdateHeavyVoid","\x92","\x3a","\x78","\xc7"),
	HX_HCSTRING("ChangeParentObject","\x39","\x9d","\xfc","\x48"),
	HX_HCSTRING("DetermineChildVoid","\x1d","\x55","\x36","\xaa"),
	HX_HCSTRING("DetermineFullVoid","\x16","\xcf","\xf4","\xad"),
	HX_HCSTRING("DetermineIndexVoid","\x93","\x39","\xa6","\xda"),
	HX_HCSTRING("DetermineSiblingVoid","\xc3","\xe0","\xa3","\x2e"),
	HX_HCSTRING("GetChildStruct","\x3b","\x5c","\xb4","\x50"),
	HX_HCSTRING("GetExplanationStringArray","\x45","\x8f","\x80","\xcf"),
	HX_HCSTRING("GetFullBool","\xef","\x67","\x55","\x5f"),
	HX_HCSTRING("GetIndexLocalInt","\x20","\xaf","\x52","\x2f"),
	HX_HCSTRING("GetMuseumUIObject","\x1b","\x0c","\x83","\x0f"),
	HX_HCSTRING("GetMuseumModeEnum","\x0c","\x6c","\x63","\x79"),
	HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"),
	HX_HCSTRING("GetParentObject","\x1f","\x91","\x1f","\xab"),
	HX_HCSTRING("GetSiblingObjectArray","\x8e","\xa2","\xed","\xfb"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetTypeEnum","\x71","\xc9","\x07","\xba"),
	HX_HCSTRING("GetVisitorCurrentInt","\x2e","\x42","\x45","\x6e"),
	HX_HCSTRING("GetVisitorTotalInt","\x83","\x25","\x25","\x3c"),
	HX_HCSTRING("Reset","\xaf","\xb9","\xf5","\x79"),
	HX_HCSTRING("SetNameAltStringVoid","\x21","\x24","\x8d","\xf1"),
	HX_HCSTRING("SetNameFullStringVoid","\x01","\x3f","\xc8","\xc7"),
	HX_HCSTRING("SetMuseumModeEnumVoid","\x8c","\x1f","\x8e","\x23"),
	HX_HCSTRING("SetParentObjectVoid","\x1f","\xef","\xf1","\x8f"),
	HX_HCSTRING("SetTagObjectArrayVoid","\xb6","\x91","\x56","\x19"),
	HX_HCSTRING("SetVisitorCurrentIntVoid","\x16","\x62","\x84","\xaf"),
	HX_HCSTRING("SetVisitorTotalIntVoid","\xeb","\x0e","\x72","\x60"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectMuseum_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectMuseum_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectMuseum_obj::__mClass;

void ObjectMuseum_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectMuseum","\x11","\x1f","\x35","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ObjectMuseum_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectMuseum_obj >;
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

