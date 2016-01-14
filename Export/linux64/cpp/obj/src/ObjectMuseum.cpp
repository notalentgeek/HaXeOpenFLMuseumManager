#include <hxcpp.h>

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

Void ObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,Array< ::Dynamic > _tagObjectArray,::EnumMuseumType _typeEnum)
{
HX_STACK_FRAME("ObjectMuseum","new",0x743c1c83,"ObjectMuseum.new","ObjectMuseum.hx",4,0x96e8244d)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_nameAltString,"_nameAltString")
HX_STACK_ARG(_nameFullString,"_nameFullString")
HX_STACK_ARG(_parentNameAltString,"_parentNameAltString")
HX_STACK_ARG(_tagObjectArray,"_tagObjectArray")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(19)
	this->visitorTotalInt = (int)0;
	HX_STACK_LINE(18)
	this->visitorCurrentInt = (int)0;
	HX_STACK_LINE(17)
	this->typeEnum = null();
	HX_STACK_LINE(16)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(15)
	this->siblingObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(14)
	this->parentObject = null();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectMuseum.hx",13,0x96e8244d)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				__result->Add(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(13)
	this->nameStruct = _Function_1_1::Block();
	HX_STACK_LINE(12)
	this->museumUIObject = null();
	HX_STACK_LINE(11)
	this->museumModeEnum = null();
	HX_STACK_LINE(10)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(9)
	this->indexGlobalInt = (int)-1;
	HX_STACK_LINE(8)
	this->fullBool = false;
	HX_STACK_LINE(7)
	this->explanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(6)
	this->collectionGlobalObject = null();
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectMuseum.hx",5,0x96e8244d)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67") , Array_obj< ::Dynamic >::__new(),false);
				__result->Add(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c") , Array_obj< ::Dynamic >::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(5)
	this->childStruct = _Function_1_2::Block();
	HX_STACK_LINE(28)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(29)
	Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	tmp->__FieldRef(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c")) = _nameAltString;
	HX_STACK_LINE(30)
	Dynamic tmp1 = this->nameStruct;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	tmp1->__FieldRef(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9")) = _nameFullString;
	HX_STACK_LINE(31)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(32)
	::String tmp2 = _parentNameAltString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	this->ChangeParentVoid(tmp2);
	HX_STACK_LINE(33)
	this->tagObjectArray = _tagObjectArray;
	HX_STACK_LINE(34)
	Dynamic tmp3 = this->nameStruct;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	::String tmp4 = tmp3->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	bool tmp5 = (tmp4 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	if ((tmp5)){
		HX_STACK_LINE(34)
		::EnumMuseumType tmp6 = _typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		this->AddThisToArray(tmp6);
	}
}
;
	return null();
}

//ObjectMuseum_obj::~ObjectMuseum_obj() { }

Dynamic ObjectMuseum_obj::__CreateEmpty() { return  new ObjectMuseum_obj; }
hx::ObjectPtr< ObjectMuseum_obj > ObjectMuseum_obj::__new(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,Array< ::Dynamic > _tagObjectArray,::EnumMuseumType _typeEnum)
{  hx::ObjectPtr< ObjectMuseum_obj > _result_ = new ObjectMuseum_obj();
	_result_->__construct(_collectionGlobalObject,_nameAltString,_nameFullString,_parentNameAltString,_tagObjectArray,_typeEnum);
	return _result_;}

Dynamic ObjectMuseum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMuseum_obj > _result_ = new ObjectMuseum_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void ObjectMuseum_obj::AddChildVisitorVoid( ::ObjectVisitor _visitorObject){
{
		HX_STACK_FRAME("ObjectMuseum","AddChildVisitorVoid",0xc0ae382a,"ObjectMuseum.AddChildVisitorVoid","ObjectMuseum.hx",44,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorObject,"_visitorObject")
		HX_STACK_LINE(44)
		Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::ObjectVisitor tmp1 = _visitorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		tmp->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddChildVisitorVoid,(void))

Void ObjectMuseum_obj::AddTagVoid( ::ObjectTag _tagObject){
{
		HX_STACK_FRAME("ObjectMuseum","AddTagVoid",0xaae47d0a,"ObjectMuseum.AddTagVoid","ObjectMuseum.hx",45,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObject,"_tagObject")
		HX_STACK_LINE(45)
		::ObjectTag tmp = _tagObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		this->tagObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddTagVoid,(void))

Void ObjectMuseum_obj::AddThisToArray( ::EnumMuseumType _typeEnum){
{
		HX_STACK_FRAME("ObjectMuseum","AddThisToArray",0x50174f9c,"ObjectMuseum.AddThisToArray","ObjectMuseum.hx",46,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_typeEnum,"_typeEnum")
		HX_STACK_LINE(47)
		bool tmp = (_typeEnum == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		if ((tmp)){
			HX_STACK_LINE(47)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			tmp1->GetExhibitionObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(48)
			bool tmp1 = (_typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			if ((tmp1)){
				HX_STACK_LINE(48)
				::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				tmp2->GetFloorObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(49)
				bool tmp2 = (_typeEnum == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				if ((tmp2)){
					HX_STACK_LINE(49)
					::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(49)
					tmp3->GetRoomObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddThisToArray,(void))

Void ObjectMuseum_obj::ChangeParentVoid( ::String _parentNameAltString){
{
		HX_STACK_FRAME("ObjectMuseum","ChangeParentVoid",0xe19d094b,"ObjectMuseum.ChangeParentVoid","ObjectMuseum.hx",51,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parentNameAltString,"_parentNameAltString")
		HX_STACK_LINE(53)
		::ObjectMuseum tmp = this->parentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		if ((tmp1)){
			HX_STACK_LINE(53)
			::ObjectMuseum tmp2 = this->parentObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			tmp3->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(54)
		::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(54)
			Dynamic tmp5 = this->nameStruct;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			::String tmp7 = tmp6->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			tmp4 = (tmp7 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));
		}
		else{
			HX_STACK_LINE(54)
			tmp4 = false;
		}
		HX_STACK_LINE(54)
		if ((tmp4)){
			HX_STACK_LINE(54)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			::String tmp6 = _parentNameAltString;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			::ObjectMuseum tmp7 = ::CollectionFunction_obj::FindMuseumObject(tmp5,::EnumMuseumType_obj::ROM,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			this->parentObject = tmp7;
		}
		else{
			HX_STACK_LINE(55)
			::EnumMuseumType tmp5 = this->typeEnum;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			bool tmp6 = (tmp5 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			if ((tmp6)){
				HX_STACK_LINE(55)
				this->parentObject = null();
			}
			else{
				HX_STACK_LINE(56)
				::EnumMuseumType tmp7 = this->typeEnum;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				bool tmp8 = (tmp7 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(56)
				if ((tmp8)){
					HX_STACK_LINE(56)
					::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					::String tmp10 = _parentNameAltString;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					::ObjectMuseum tmp11 = ::CollectionFunction_obj::FindMuseumObject(tmp9,::EnumMuseumType_obj::FLR,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					this->parentObject = tmp11;
				}
			}
		}
		HX_STACK_LINE(57)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			int tmp5 = loopCounter1Int;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			int tmp7 = tmp6->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			if ((tmp9)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(60)
			Dynamic tmp10 = this->nameStruct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			::String tmp11 = tmp10->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			::ObjectMuseum tmp13 = tmp12->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			Dynamic tmp14 = tmp13->GetNameStruct();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			::String tmp15 = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			bool tmp16 = (tmp11 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(60)
			if ((tmp16)){
				HX_STACK_LINE(61)
				::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(61)
				::ObjectMuseum tmp18 = tmp17->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(61)
				tmp18->DetermineSiblingVoid();
				HX_STACK_LINE(62)
				::CollectionGlobal tmp19 = this->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(62)
				::ObjectMuseum tmp20 = tmp19->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(62)
				tmp20->DetermineIndexVoid();
			}
			HX_STACK_LINE(64)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(66)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			int tmp5 = loopCounter1Int;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			if ((tmp9)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(69)
			Dynamic tmp10 = this->nameStruct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			::String tmp11 = tmp10->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(69)
			::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(69)
			::ObjectMuseum tmp13 = tmp12->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(69)
			Dynamic tmp14 = tmp13->GetNameStruct();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			::String tmp15 = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			bool tmp16 = (tmp11 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(69)
			if ((tmp16)){
				HX_STACK_LINE(70)
				::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(70)
				::ObjectMuseum tmp18 = tmp17->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(70)
				::ObjectMuseum tmp19 = tmp18->GetParentObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(70)
				tmp19->DetermineChildVoid();
				HX_STACK_LINE(71)
				::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(71)
				::ObjectMuseum tmp21 = tmp20->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(71)
				tmp21->DetermineSiblingVoid();
				HX_STACK_LINE(72)
				::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(72)
				::ObjectMuseum tmp23 = tmp22->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(72)
				tmp23->DetermineIndexVoid();
			}
			HX_STACK_LINE(74)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(76)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(77)
		Dynamic tmp5 = this->nameStruct;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		::String tmp6 = tmp5->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		bool tmp7 = (tmp6 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		if ((tmp7)){
			HX_STACK_LINE(78)
			while((true)){
				HX_STACK_LINE(78)
				int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				int tmp10 = tmp9->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(78)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(78)
				if ((tmp12)){
					HX_STACK_LINE(78)
					break;
				}
				HX_STACK_LINE(81)
				Dynamic tmp13 = this->nameStruct;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				::String tmp14 = tmp13->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(81)
				::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(81)
				::ObjectMuseum tmp16 = tmp15->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(81)
				Dynamic tmp17 = tmp16->GetNameStruct();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(81)
				::String tmp18 = tmp17->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(81)
				bool tmp19 = (tmp14 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(81)
				if ((tmp19)){
					HX_STACK_LINE(83)
					::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(83)
					::ObjectMuseum tmp21 = tmp20->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(83)
					::ObjectMuseum tmp22 = tmp21->GetParentObject();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(83)
					tmp22->DetermineChildVoid();
					HX_STACK_LINE(84)
					::CollectionGlobal tmp23 = this->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(84)
					::ObjectMuseum tmp24 = tmp23->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(84)
					tmp24->DetermineSiblingVoid();
					HX_STACK_LINE(85)
					::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(85)
					::ObjectMuseum tmp26 = tmp25->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(85)
					tmp26->DetermineIndexVoid();
				}
				HX_STACK_LINE(87)
				(loopCounter1Int)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,ChangeParentVoid,(void))

Void ObjectMuseum_obj::RemoveTagByNameAltVoid( ::String _nameString){
{
		HX_STACK_FRAME("ObjectMuseum","RemoveTagByNameAltVoid",0x5a04b902,"ObjectMuseum.RemoveTagByNameAltVoid","ObjectMuseum.hx",91,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameString,"_nameString")
		HX_STACK_LINE(91)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		::String tmp1 = _nameString;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		::ObjectTag tmp2 = ::CollectionFunction_obj::FindTagObject(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		this->tagObjectArray->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,RemoveTagByNameAltVoid,(void))

Void ObjectMuseum_obj::RemoveTagByObjectVoid( ::ObjectTag _tagObject){
{
		HX_STACK_FRAME("ObjectMuseum","RemoveTagByObjectVoid",0xdc01c4c3,"ObjectMuseum.RemoveTagByObjectVoid","ObjectMuseum.hx",92,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObject,"_tagObject")
		HX_STACK_LINE(92)
		::ObjectTag tmp = _tagObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		this->tagObjectArray->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,RemoveTagByObjectVoid,(void))

Void ObjectMuseum_obj::ResetVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","ResetVoid",0x96ab3506,"ObjectMuseum.ResetVoid","ObjectMuseum.hx",93,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->fullBool = false;
		HX_STACK_LINE(95)
		this->visitorCurrentInt = (int)0;
		HX_STACK_LINE(96)
		this->visitorTotalInt = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,ResetVoid,(void))

Void ObjectMuseum_obj::DetermineChildVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineChildVoid",0x6319285a,"ObjectMuseum.DetermineChildVoid","ObjectMuseum.hx",98,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::CollectionFunction_obj::ClearArray(tmp->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic ));
		HX_STACK_LINE(100)
		Dynamic tmp1 = this->childStruct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		::CollectionFunction_obj::ClearArray(tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic ));
		HX_STACK_LINE(101)
		::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		if ((tmp3)){
			HX_STACK_LINE(102)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				int tmp6 = tmp5->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(103)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(103)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(103)
				if ((tmp8)){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(104)
				Dynamic tmp9 = this->nameStruct;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(104)
				::String tmp10 = tmp9->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(104)
				::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(104)
				::ObjectVisitor tmp12 = tmp11->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(104)
				::ObjectMuseum tmp13 = tmp12->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(104)
				Dynamic tmp14 = tmp13->GetNameStruct();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(104)
				::String tmp15 = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(104)
				bool tmp16 = (tmp10 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(104)
				if ((tmp16)){
					HX_STACK_LINE(105)
					Dynamic tmp17 = this->childStruct;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(105)
					::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(105)
					::ObjectVisitor tmp19 = tmp18->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(105)
					tmp17->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
				}
				HX_STACK_LINE(107)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(110)
			::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			bool tmp5 = (tmp4 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			if ((tmp5)){
				HX_STACK_LINE(111)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(112)
					::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(112)
					int tmp8 = tmp7->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(112)
					bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(112)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(112)
					if ((tmp10)){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(113)
					Dynamic tmp11 = this->nameStruct;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(113)
					::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(113)
					::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(113)
					::ObjectMuseum tmp14 = tmp13->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(113)
					::ObjectMuseum tmp15 = tmp14->GetParentObject();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(113)
					Dynamic tmp16 = tmp15->GetNameStruct();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(113)
					::String tmp17 = tmp16->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(113)
					bool tmp18 = (tmp12 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(113)
					if ((tmp18)){
						HX_STACK_LINE(114)
						Dynamic tmp19 = this->childStruct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(114)
						::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(114)
						::ObjectMuseum tmp21 = tmp20->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(114)
						tmp19->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
					}
					HX_STACK_LINE(116)
					(loopCounter1Int)++;
				}
			}
			else{
				HX_STACK_LINE(119)
				::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(119)
				bool tmp7 = (tmp6 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(119)
				if ((tmp7)){
					HX_STACK_LINE(120)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(121)
					while((true)){
						HX_STACK_LINE(121)
						int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(121)
						::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(121)
						int tmp10 = tmp9->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(121)
						bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(121)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(121)
						if ((tmp12)){
							HX_STACK_LINE(121)
							break;
						}
						HX_STACK_LINE(122)
						Dynamic tmp13 = this->nameStruct;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(122)
						::String tmp14 = tmp13->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(122)
						::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(122)
						::ObjectMuseum tmp16 = tmp15->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(122)
						::ObjectMuseum tmp17 = tmp16->GetParentObject();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(122)
						Dynamic tmp18 = tmp17->GetNameStruct();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(122)
						::String tmp19 = tmp18->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(122)
						bool tmp20 = (tmp14 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(122)
						if ((tmp20)){
							HX_STACK_LINE(123)
							Dynamic tmp21 = this->childStruct;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(123)
							::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(123)
							::ObjectMuseum tmp23 = tmp22->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(123)
							tmp21->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
						}
						HX_STACK_LINE(125)
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
		HX_STACK_FRAME("ObjectMuseum","DetermineFullVoid",0x39b0f279,"ObjectMuseum.DetermineFullVoid","ObjectMuseum.hx",129,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		int tmp = this->visitorCurrentInt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		int tmp2 = tmp1->GetExhibitionFullThresholdInt();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		if ((tmp3)){
			HX_STACK_LINE(130)
			this->fullBool = true;
		}
		else{
			HX_STACK_LINE(131)
			int tmp4 = this->visitorCurrentInt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			int tmp6 = tmp5->GetExhibitionFullThresholdInt();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			if ((tmp7)){
				HX_STACK_LINE(131)
				this->fullBool = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineFullVoid,(void))

Void ObjectMuseum_obj::DetermineIndexVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexVoid",0x93890cd0,"ObjectMuseum.DetermineIndexVoid","ObjectMuseum.hx",133,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		this->DetermineIndexGlobalVoid();
		HX_STACK_LINE(135)
		this->DetermineIndexLocalVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexVoid,(void))

Void ObjectMuseum_obj::DetermineIndexGlobalVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexGlobalVoid",0xa32e9cd3,"ObjectMuseum.DetermineIndexGlobalVoid","ObjectMuseum.hx",138,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		bool foundIndexGlobalBool = false;		HX_STACK_VAR(foundIndexGlobalBool,"foundIndexGlobalBool");
		HX_STACK_LINE(140)
		Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
		HX_STACK_LINE(141)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(141)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			tempObjectArray = tmp2->GetExhibitionObjectArray();
		}
		else{
			HX_STACK_LINE(142)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			if ((tmp3)){
				HX_STACK_LINE(142)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(142)
				tempObjectArray = tmp4->GetFloorObjectArray();
			}
			else{
				HX_STACK_LINE(143)
				::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(143)
				bool tmp5 = (tmp4 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(143)
				if ((tmp5)){
					HX_STACK_LINE(143)
					::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(143)
					tempObjectArray = tmp6->GetRoomObjectArray();
				}
			}
		}
		HX_STACK_LINE(144)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(145)
		while((true)){
			HX_STACK_LINE(145)
			bool tmp2 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			if ((tmp3)){
				HX_STACK_LINE(145)
				break;
			}
			HX_STACK_LINE(146)
			Dynamic tmp4 = this->nameStruct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			::String tmp5 = tmp4->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			::ObjectMuseum tmp6 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			Dynamic tmp7 = tmp6->GetNameStruct();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			::String tmp8 = tmp7->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			bool tmp9 = (tmp5 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			if ((tmp9)){
				HX_STACK_LINE(147)
				foundIndexGlobalBool = true;
				HX_STACK_LINE(148)
				this->indexGlobalInt = loopCounter1Int;
				HX_STACK_LINE(149)
				break;
			}
			HX_STACK_LINE(151)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(153)
		bool tmp2 = (foundIndexGlobalBool == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		if ((tmp2)){
			HX_STACK_LINE(153)
			this->indexGlobalInt = (int)-1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexGlobalVoid,(void))

Void ObjectMuseum_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexLocalVoid",0x6cd91f63,"ObjectMuseum.DetermineIndexLocalVoid","ObjectMuseum.hx",155,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		bool foundIndexLocalBool = false;		HX_STACK_VAR(foundIndexLocalBool,"foundIndexLocalBool");
		HX_STACK_LINE(157)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		if ((tmp1)){
			HX_STACK_LINE(157)
			int tmp2 = this->indexGlobalInt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			this->indexLocalInt = tmp2;
		}
		else{
			HX_STACK_LINE(158)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			bool tmp3 = (tmp2 != ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			if ((tmp3)){
				HX_STACK_LINE(159)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(160)
				while((true)){
					HX_STACK_LINE(160)
					int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(160)
					int tmp5 = this->siblingObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(160)
					bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(160)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(160)
					if ((tmp7)){
						HX_STACK_LINE(160)
						break;
					}
					HX_STACK_LINE(161)
					Dynamic tmp8 = this->nameStruct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(161)
					::String tmp9 = tmp8->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(161)
					::ObjectMuseum tmp10 = this->siblingObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(161)
					Dynamic tmp11 = tmp10->GetNameStruct();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(161)
					::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(161)
					bool tmp13 = (tmp9 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(161)
					if ((tmp13)){
						HX_STACK_LINE(162)
						foundIndexLocalBool = true;
						HX_STACK_LINE(163)
						this->indexLocalInt = loopCounter1Int;
						HX_STACK_LINE(164)
						break;
					}
					HX_STACK_LINE(166)
					(loopCounter1Int)++;
				}
			}
		}
		HX_STACK_LINE(169)
		bool tmp2 = (foundIndexLocalBool == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		if ((tmp2)){
			HX_STACK_LINE(169)
			this->indexLocalInt = (int)-1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexLocalVoid,(void))

Void ObjectMuseum_obj::DetermineSiblingVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineSiblingVoid",0x044fbd40,"ObjectMuseum.DetermineSiblingVoid","ObjectMuseum.hx",171,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		::CollectionFunction_obj::ClearArray(this->siblingObjectArray);
		HX_STACK_LINE(173)
		Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
		HX_STACK_LINE(174)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		if ((tmp1)){
			HX_STACK_LINE(174)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			tempObjectArray = tmp2->GetExhibitionObjectArray();
		}
		else{
			HX_STACK_LINE(175)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			if ((tmp3)){
				HX_STACK_LINE(175)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(175)
				tempObjectArray = tmp4->GetRoomObjectArray();
			}
		}
		HX_STACK_LINE(176)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(177)
		::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		bool tmp3 = (tmp2 != ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		if ((tmp3)){
			HX_STACK_LINE(178)
			while((true)){
				HX_STACK_LINE(178)
				bool tmp4 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(178)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(178)
				if ((tmp5)){
					HX_STACK_LINE(178)
					break;
				}
				HX_STACK_LINE(179)
				::ObjectMuseum tmp6 = this->parentObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(179)
				Dynamic tmp7 = tmp6->GetNameStruct();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(179)
				::String tmp8 = tmp7->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::ObjectMuseum tmp9 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				::ObjectMuseum tmp10 = tmp9->GetParentObject();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(179)
				Dynamic tmp11 = tmp10->GetNameStruct();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(179)
				::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				bool tmp13 = (tmp8 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(179)
				if ((tmp13)){
					HX_STACK_LINE(180)
					::ObjectMuseum tmp14 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(180)
					this->siblingObjectArray->push(tmp14);
				}
				HX_STACK_LINE(182)
				(loopCounter1Int)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineSiblingVoid,(void))

Dynamic ObjectMuseum_obj::GetChildStruct( ){
	HX_STACK_FRAME("ObjectMuseum","GetChildStruct",0xe7838cf8,"ObjectMuseum.GetChildStruct","ObjectMuseum.hx",186,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetChildStruct,return )

Array< ::String > ObjectMuseum_obj::GetExplanationStringArray( ){
	HX_STACK_FRAME("ObjectMuseum","GetExplanationStringArray",0x0bf34da8,"ObjectMuseum.GetExplanationStringArray","ObjectMuseum.hx",187,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	return this->explanationStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetExplanationStringArray,return )

bool ObjectMuseum_obj::GetFullBool( ){
	HX_STACK_FRAME("ObjectMuseum","GetFullBool",0x7d6b0f12,"ObjectMuseum.GetFullBool","ObjectMuseum.hx",188,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	bool tmp = this->fullBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetFullBool,return )

::EnumMuseumMode ObjectMuseum_obj::GetMuseumModeEnum( ){
	HX_STACK_FRAME("ObjectMuseum","GetMuseumModeEnum",0x051f8f6f,"ObjectMuseum.GetMuseumModeEnum","ObjectMuseum.hx",189,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	::EnumMuseumMode tmp = this->museumModeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetMuseumModeEnum,return )

Dynamic ObjectMuseum_obj::GetNameStruct( ){
	HX_STACK_FRAME("ObjectMuseum","GetNameStruct",0x46430cf9,"ObjectMuseum.GetNameStruct","ObjectMuseum.hx",190,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetNameStruct,return )

::ObjectMuseum ObjectMuseum_obj::GetParentObject( ){
	HX_STACK_FRAME("ObjectMuseum","GetParentObject",0x099b05c2,"ObjectMuseum.GetParentObject","ObjectMuseum.hx",191,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	::ObjectMuseum tmp = this->parentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetParentObject,return )

Array< ::Dynamic > ObjectMuseum_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("ObjectMuseum","GetTagObjectArray",0x31252499,"ObjectMuseum.GetTagObjectArray","ObjectMuseum.hx",192,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetTagObjectArray,return )

::EnumMuseumType ObjectMuseum_obj::GetTypeEnum( ){
	HX_STACK_FRAME("ObjectMuseum","GetTypeEnum",0xd81d7094,"ObjectMuseum.GetTypeEnum","ObjectMuseum.hx",193,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetTypeEnum,return )

int ObjectMuseum_obj::GetVisitorCurrentInt( ){
	HX_STACK_FRAME("ObjectMuseum","GetVisitorCurrentInt",0x43f11eab,"ObjectMuseum.GetVisitorCurrentInt","ObjectMuseum.hx",194,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	int tmp = this->visitorCurrentInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetVisitorCurrentInt,return )

int ObjectMuseum_obj::GetVisitorTotalInt( ){
	HX_STACK_FRAME("ObjectMuseum","GetVisitorTotalInt",0xf507f8c0,"ObjectMuseum.GetVisitorTotalInt","ObjectMuseum.hx",195,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	int tmp = this->visitorTotalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetVisitorTotalInt,return )

Void ObjectMuseum_obj::Reset( ){
{
		HX_STACK_FRAME("ObjectMuseum","Reset",0xf1a39492,"ObjectMuseum.Reset","ObjectMuseum.hx",196,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		this->fullBool = false;
		HX_STACK_LINE(198)
		this->museumModeEnum = null();
		HX_STACK_LINE(199)
		this->visitorCurrentInt = (int)0;
		HX_STACK_LINE(200)
		this->visitorTotalInt = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,Reset,(void))

Void ObjectMuseum_obj::SetNameAltStringVoid( ::String _nameAltString){
{
		HX_STACK_FRAME("ObjectMuseum","SetNameAltStringVoid",0xc739009e,"ObjectMuseum.SetNameAltStringVoid","ObjectMuseum.hx",202,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameAltString,"_nameAltString")
		HX_STACK_LINE(202)
		Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		tmp->__FieldRef(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c")) = _nameAltString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetNameAltStringVoid,(void))

Void ObjectMuseum_obj::SetNameFullStringVoid( ::String _nameFullString){
{
		HX_STACK_FRAME("ObjectMuseum","SetNameFullStringVoid",0xe87d4fe4,"ObjectMuseum.SetNameFullStringVoid","ObjectMuseum.hx",203,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameFullString,"_nameFullString")
		HX_STACK_LINE(203)
		Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		tmp->__FieldRef(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9")) = _nameFullString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetNameFullStringVoid,(void))

Void ObjectMuseum_obj::SetMuseumModeEnumVoid( ::EnumMuseumMode _museumModeEnum){
{
		HX_STACK_FRAME("ObjectMuseum","SetMuseumModeEnumVoid",0x4443306f,"ObjectMuseum.SetMuseumModeEnumVoid","ObjectMuseum.hx",204,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_museumModeEnum,"_museumModeEnum")
		HX_STACK_LINE(204)
		this->museumModeEnum = _museumModeEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetMuseumModeEnumVoid,(void))

Void ObjectMuseum_obj::SetParentObjectVoid( ::ObjectMuseum _parentObject){
{
		HX_STACK_FRAME("ObjectMuseum","SetParentObjectVoid",0x9d87f142,"ObjectMuseum.SetParentObjectVoid","ObjectMuseum.hx",205,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parentObject,"_parentObject")
		HX_STACK_LINE(205)
		this->parentObject = _parentObject;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetParentObjectVoid,(void))

Void ObjectMuseum_obj::SetVisitorCurrentIntVoid( int _visitorCurrentInt){
{
		HX_STACK_FRAME("ObjectMuseum","SetVisitorCurrentIntVoid",0x5764c113,"ObjectMuseum.SetVisitorCurrentIntVoid","ObjectMuseum.hx",206,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorCurrentInt,"_visitorCurrentInt")
		HX_STACK_LINE(206)
		this->visitorCurrentInt = _visitorCurrentInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetVisitorCurrentIntVoid,(void))

Void ObjectMuseum_obj::SetVisitorTotalIntVoid( int _visitorTotalInt){
{
		HX_STACK_FRAME("ObjectMuseum","SetVisitorTotalIntVoid",0xde2bc4a8,"ObjectMuseum.SetVisitorTotalIntVoid","ObjectMuseum.hx",207,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorTotalInt,"_visitorTotalInt")
		HX_STACK_LINE(207)
		this->visitorTotalInt = _visitorTotalInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetVisitorTotalIntVoid,(void))

Void ObjectMuseum_obj::Update( ){
{
		HX_STACK_FRAME("ObjectMuseum","Update",0xfc0ba5e6,"ObjectMuseum.Update","ObjectMuseum.hx",209,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		::EnumMuseumMode tmp = this->museumModeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		bool tmp1 = (tmp == ::EnumMuseumMode_obj::MRK_DEL);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		if ((tmp1)){
			HX_STACK_LINE(213)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			if ((tmp3)){
				HX_STACK_LINE(214)
				Dynamic tmp4 = this->childStruct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(214)
				int tmp5 = tmp4->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				if ((tmp6)){
					HX_STACK_LINE(215)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(216)
					while((true)){
						HX_STACK_LINE(216)
						int tmp7 = loopCounter1Int;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(216)
						::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(216)
						int tmp9 = tmp8->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(216)
						bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(216)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(216)
						if ((tmp11)){
							HX_STACK_LINE(216)
							break;
						}
						HX_STACK_LINE(217)
						::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(217)
						::ObjectVisitor tmp13 = tmp12->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(217)
						bool tmp14 = tmp13->GetFinishedBool();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(217)
						bool tmp15 = (tmp14 == true);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(217)
						if ((tmp15)){
							HX_STACK_LINE(218)
							::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(218)
							::ObjectVisitor tmp17 = tmp16->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(218)
							::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(218)
							::ObjectMuseum tmp19 = tmp18->GetArchiveExhibitionObject();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(218)
							tmp17->ChangeExhibitionCurrentVoid(tmp19);
						}
						HX_STACK_LINE(220)
						(loopCounter1Int)++;
					}
				}
				else{
					HX_STACK_LINE(223)
					Dynamic tmp7 = this->childStruct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(223)
					int tmp8 = tmp7->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(223)
					bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					if ((tmp9)){
						HX_STACK_LINE(223)
						::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(223)
						tmp10->GetExhibitionObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
					}
				}
			}
			else{
				HX_STACK_LINE(225)
				::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(225)
				bool tmp5 = (tmp4 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				if ((tmp5)){
					HX_STACK_LINE(226)
					Dynamic tmp6 = this->childStruct;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(226)
					int tmp7 = tmp6->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(226)
					bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(226)
					if ((tmp8)){
						HX_STACK_LINE(227)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(228)
						while((true)){
							HX_STACK_LINE(228)
							int tmp9 = loopCounter1Int;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(228)
							::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(228)
							int tmp11 = tmp10->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(228)
							bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(228)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(228)
							if ((tmp13)){
								HX_STACK_LINE(228)
								break;
							}
							HX_STACK_LINE(229)
							Dynamic tmp14 = this->nameStruct;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(229)
							::String tmp15 = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(229)
							::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(229)
							::ObjectMuseum tmp17 = tmp16->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(229)
							::ObjectMuseum tmp18 = tmp17->GetParentObject();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(229)
							Dynamic tmp19 = tmp18->GetNameStruct();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(229)
							::String tmp20 = tmp19->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(229)
							bool tmp21 = (tmp15 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(229)
							if ((tmp21)){
								HX_STACK_LINE(230)
								::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(230)
								::ObjectMuseum tmp23 = tmp22->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(230)
								tmp23->SetMuseumModeEnumVoid(::EnumMuseumMode_obj::REQ_CH_PARENT);
							}
							HX_STACK_LINE(232)
							(loopCounter1Int)++;
						}
					}
					else{
						HX_STACK_LINE(235)
						Dynamic tmp9 = this->childStruct;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(235)
						int tmp10 = tmp9->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(235)
						bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(235)
						if ((tmp11)){
							HX_STACK_LINE(235)
							::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(235)
							tmp12->GetExhibitionObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
						}
					}
				}
				else{
					HX_STACK_LINE(237)
					::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(237)
					bool tmp7 = (tmp6 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(237)
					if ((tmp7)){
						HX_STACK_LINE(238)
						Dynamic tmp8 = this->childStruct;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(238)
						int tmp9 = tmp8->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(238)
						bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(238)
						if ((tmp10)){
							HX_STACK_LINE(239)
							int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
							HX_STACK_LINE(240)
							while((true)){
								HX_STACK_LINE(240)
								int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(240)
								::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(240)
								int tmp13 = tmp12->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(240)
								bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(240)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(240)
								if ((tmp15)){
									HX_STACK_LINE(240)
									break;
								}
								HX_STACK_LINE(241)
								Dynamic tmp16 = this->nameStruct;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(241)
								::String tmp17 = tmp16->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(241)
								::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(241)
								::ObjectMuseum tmp19 = tmp18->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(241)
								::ObjectMuseum tmp20 = tmp19->GetParentObject();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(241)
								Dynamic tmp21 = tmp20->GetNameStruct();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(241)
								::String tmp22 = tmp21->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(241)
								bool tmp23 = (tmp17 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(241)
								if ((tmp23)){
									HX_STACK_LINE(242)
									::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(242)
									::ObjectMuseum tmp25 = tmp24->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(242)
									tmp25->SetMuseumModeEnumVoid(::EnumMuseumMode_obj::REQ_CH_PARENT);
								}
								HX_STACK_LINE(244)
								(loopCounter1Int)++;
							}
						}
						else{
							HX_STACK_LINE(247)
							Dynamic tmp11 = this->childStruct;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(247)
							int tmp12 = tmp11->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(247)
							bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(247)
							if ((tmp13)){
								HX_STACK_LINE(247)
								::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(247)
								tmp14->GetExhibitionObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,Update,(void))


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
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
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
		if (HX_FIELD_EQ(inName,"GetParentObject") ) { return GetParentObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ChangeParentVoid") ) { return ChangeParentVoid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visitorCurrentInt") ) { return visitorCurrentInt; }
		if (HX_FIELD_EQ(inName,"DetermineFullVoid") ) { return DetermineFullVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetMuseumModeEnum") ) { return GetMuseumModeEnum_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"siblingObjectArray") ) { return siblingObjectArray; }
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
		if (HX_FIELD_EQ(inName,"RemoveTagByObjectVoid") ) { return RemoveTagByObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNameFullStringVoid") ) { return SetNameFullStringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetMuseumModeEnumVoid") ) { return SetMuseumModeEnumVoid_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { return explanationStringArray; }
		if (HX_FIELD_EQ(inName,"RemoveTagByNameAltVoid") ) { return RemoveTagByNameAltVoid_dyn(); }
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
	HX_HCSTRING("ChangeParentVoid","\x4e","\x6f","\x12","\x94"),
	HX_HCSTRING("RemoveTagByNameAltVoid","\x45","\x03","\x4b","\xdc"),
	HX_HCSTRING("RemoveTagByObjectVoid","\xe0","\xb3","\x4c","\xbb"),
	HX_HCSTRING("ResetVoid","\xa3","\xac","\x12","\x36"),
	HX_HCSTRING("DetermineChildVoid","\x1d","\x55","\x36","\xaa"),
	HX_HCSTRING("DetermineFullVoid","\x16","\xcf","\xf4","\xad"),
	HX_HCSTRING("DetermineIndexVoid","\x93","\x39","\xa6","\xda"),
	HX_HCSTRING("DetermineIndexGlobalVoid","\xd6","\x3d","\x4e","\xfb"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("DetermineSiblingVoid","\xc3","\xe0","\xa3","\x2e"),
	HX_HCSTRING("GetChildStruct","\x3b","\x5c","\xb4","\x50"),
	HX_HCSTRING("GetExplanationStringArray","\x45","\x8f","\x80","\xcf"),
	HX_HCSTRING("GetFullBool","\xef","\x67","\x55","\x5f"),
	HX_HCSTRING("GetMuseumModeEnum","\x0c","\x6c","\x63","\x79"),
	HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"),
	HX_HCSTRING("GetParentObject","\x1f","\x91","\x1f","\xab"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetTypeEnum","\x71","\xc9","\x07","\xba"),
	HX_HCSTRING("GetVisitorCurrentInt","\x2e","\x42","\x45","\x6e"),
	HX_HCSTRING("GetVisitorTotalInt","\x83","\x25","\x25","\x3c"),
	HX_HCSTRING("Reset","\xaf","\xb9","\xf5","\x79"),
	HX_HCSTRING("SetNameAltStringVoid","\x21","\x24","\x8d","\xf1"),
	HX_HCSTRING("SetNameFullStringVoid","\x01","\x3f","\xc8","\xc7"),
	HX_HCSTRING("SetMuseumModeEnumVoid","\x8c","\x1f","\x8e","\x23"),
	HX_HCSTRING("SetParentObjectVoid","\x1f","\xef","\xf1","\x8f"),
	HX_HCSTRING("SetVisitorCurrentIntVoid","\x16","\x62","\x84","\xaf"),
	HX_HCSTRING("SetVisitorTotalIntVoid","\xeb","\x0e","\x72","\x60"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
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

