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
#ifndef INCLUDED_EnumVisitorMode
#include <EnumVisitorMode.h>
#endif
#ifndef INCLUDED_ObjectGeneratorSentence
#include <ObjectGeneratorSentence.h>
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
#ifndef INCLUDED_ObjectVisitorUI
#include <ObjectVisitorUI.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectVisitor
#include <UIPopupEditObjectVisitor.h>
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

Void ObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,int _indexGlobalInt,::String _nameString)
{
HX_STACK_FRAME("ObjectVisitor","new",0x49949701,"ObjectVisitor.new","ObjectVisitor.hx",5,0xe713038f)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_indexGlobalInt,"_indexGlobalInt")
HX_STACK_ARG(_nameString,"_nameString")
{
	HX_STACK_LINE(40)
	this->visitorUIObject = null();
	HX_STACK_LINE(39)
	this->visitorModeEnum = null();
	HX_STACK_LINE(38)
	this->visitMuseumStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(37)
	this->visitExhibitionStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(36)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	this->tagCounterStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(34)
	this->roomCurrentObject = null();
	HX_STACK_LINE(33)
	this->generatorSentenceObject = null();
	HX_STACK_LINE(32)
	this->floorCurrentObject = null();
	HX_STACK_LINE(31)
	this->exhibitionVisitedObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(30)
	this->exhibitionTargetObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(29)
	this->exhibitionCurrentObject = null();
	HX_STACK_LINE(28)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(24)
	this->visitedCorrectExhibitionBool = true;
	HX_STACK_LINE(23)
	this->timeMuseumInt = (int)0;
	HX_STACK_LINE(22)
	this->timeExhibitionInt = (int)0;
	HX_STACK_LINE(21)
	this->timeAIAutoExhibitionChangeFloat = ((Float)0);
	HX_STACK_LINE(20)
	this->targetInt = (int)3;
	HX_STACK_LINE(19)
	this->sentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(18)
	this->scoreInt = (int)0;
	HX_STACK_LINE(17)
	this->nameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(16)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(15)
	this->indexGlobalInt = (int)-1;
	HX_STACK_LINE(14)
	this->finishedBool = false;
	HX_STACK_LINE(13)
	this->explanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(12)
	this->explanationCurrentString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(11)
	this->explanationCurrentIndexInt = (int)-1;
	HX_STACK_LINE(51)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(52)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::ObjectGeneratorSentence tmp1 = ::ObjectGeneratorSentence_obj::__new(tmp,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	this->generatorSentenceObject = tmp1;
	HX_STACK_LINE(53)
	this->indexGlobalInt = _indexGlobalInt;
	HX_STACK_LINE(54)
	this->nameString = _nameString;
	HX_STACK_LINE(55)
	::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	tmp2->GetVisitorObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(56)
	::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	::ObjectVisitorUI tmp4 = ::ObjectVisitorUI_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	this->visitorUIObject = tmp4;
	HX_STACK_LINE(57)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	tmp5->DetermineExhibitionFullThresholdVoid();
	HX_STACK_LINE(58)
	int tmp6 = this->targetInt;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	this->GenerateExhibitionTargetVoid(tmp6);
	HX_STACK_LINE(59)
	this->visitorModeEnum = ::EnumVisitorMode_obj::SOFTWARE_AUTO;
}
;
	return null();
}

//ObjectVisitor_obj::~ObjectVisitor_obj() { }

Dynamic ObjectVisitor_obj::__CreateEmpty() { return  new ObjectVisitor_obj; }
hx::ObjectPtr< ObjectVisitor_obj > ObjectVisitor_obj::__new(::CollectionGlobal _collectionGlobalObject,int _indexGlobalInt,::String _nameString)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(_collectionGlobalObject,_indexGlobalInt,_nameString);
	return _result_;}

Dynamic ObjectVisitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ObjectVisitor_obj::AddRemoveVisitorFromExhibitionVoid( bool _isAdd){
{
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",61,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(62)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(62)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(63)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			if ((tmp1)){
				HX_STACK_LINE(63)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",65,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(69)
		this->tagObjectArray = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(71)
		int tmp = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = (tmp >= (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(72)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				int tmp3 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				int tmp4 = (tmp3 - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				::ObjectMuseum tmp5 = this->exhibitionVisitedObjectArray->__get(tmp4).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				bool tmp7 = (tmp2 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				if ((tmp8)){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(74)
				int tmp9 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(74)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(74)
				::ObjectMuseum tmp11 = this->exhibitionVisitedObjectArray->__get(tmp10).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(74)
				::ObjectTag tmp12 = tmp11->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(74)
				::ObjectTag tagObject = tmp12;		HX_STACK_VAR(tagObject,"tagObject");
				HX_STACK_LINE(75)
				::ObjectTag tmp13 = tagObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(75)
				int tmp14 = this->tagObjectArray->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(75)
				bool tmp15 = (tmp14 == (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(75)
				if ((tmp15)){
					HX_STACK_LINE(75)
					::ObjectTag tmp16 = tagObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(75)
					this->tagObjectArray->push(tmp16);
				}
				HX_STACK_LINE(76)
				(loopCounter1Int)++;
			}
		}
		HX_STACK_LINE(80)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			int tmp4 = tmp3->GetTagObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			if ((tmp6)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(82)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(83)
			::String tagNameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagNameString,"tagNameString");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",87,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(87)
			Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			Dynamic tagCounterStruct = tmp7;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(92)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(93)
			::ObjectMuseum tmp8 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			::ObjectTag tmp9 = tmp8->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")) = tmp9;
			HX_STACK_LINE(94)
			::String tmp10 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			tagNameString = tmp10;
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				int tmp11 = tagIndexInt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				int tmp12 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(95)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(95)
				if ((tmp14)){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(96)
				::String tmp15 = tagNameString;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				Dynamic tmp16 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				::String tmp17 = tmp16->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(96)
				bool tmp18 = (tmp15 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(96)
				if ((tmp18)){
					HX_STACK_LINE(96)
					newTagBool = false;
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(97)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(99)
			bool tmp11 = (newTagBool == true);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			if ((tmp11)){
				HX_STACK_LINE(99)
				Dynamic tmp12 = tagCounterStruct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(99)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
			}
			else{
				HX_STACK_LINE(100)
				bool tmp12 = (newTagBool == false);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(100)
				if ((tmp12)){
					HX_STACK_LINE(100)
					Dynamic tmp13 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(100)
					(tmp13->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(102)
			::ObjectTag tmp12 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			int tmp13 = this->tagObjectArray->indexOf(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(102)
			bool tmp14 = (tmp13 == (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(102)
			if ((tmp14)){
				HX_STACK_LINE(103)
				::ObjectTag tmp15 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(103)
				this->tagObjectArray->push(tmp15);
			}
			HX_STACK_LINE(105)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(107)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",109,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		HX_STACK_LINE(110)
		Dynamic tmp = _exhibitionTargetObject->GetNameStruct();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::String tmp1 = tmp->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		bool tmp2 = (tmp1 == HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		if ((tmp2)){
			HX_STACK_LINE(111)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(112)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			this->roomCurrentObject = tmp3;
			HX_STACK_LINE(113)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			this->floorCurrentObject = tmp4;
			HX_STACK_LINE(114)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			this->exhibitionVisitedObjectArray->push(tmp5);
			HX_STACK_LINE(117)
			::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			tmp6->GetVisitorObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(118)
			this->UpdateHeavyVoid();
		}
		else{
			HX_STACK_LINE(121)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			if ((tmp4)){
				HX_STACK_LINE(122)
				::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				this->roomCurrentObject = tmp6;
				HX_STACK_LINE(123)
				::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				this->floorCurrentObject = tmp8;
				HX_STACK_LINE(124)
				this->AddRemoveVisitorFromExhibitionVoid(false);
				HX_STACK_LINE(125)
				::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(125)
				::ObjectMuseum tmp10 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(125)
				int tmp11 = tmp10->GetVisitorCurrentInt();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(125)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(125)
				tmp9->SetVisitorCurrentIntVoid(tmp12);
				HX_STACK_LINE(126)
				::ObjectMuseum tmp13 = this->roomCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(126)
				::ObjectMuseum tmp14 = this->roomCurrentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(126)
				int tmp15 = tmp14->GetVisitorCurrentInt();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(126)
				int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(126)
				tmp13->SetVisitorCurrentIntVoid(tmp16);
				HX_STACK_LINE(127)
				::ObjectMuseum tmp17 = this->floorCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(127)
				::ObjectMuseum tmp18 = this->floorCurrentObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(127)
				int tmp19 = tmp18->GetVisitorCurrentInt();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(127)
				int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(127)
				tmp17->SetVisitorCurrentIntVoid(tmp20);
			}
			HX_STACK_LINE(129)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(130)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			this->roomCurrentObject = tmp6;
			HX_STACK_LINE(131)
			::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			this->floorCurrentObject = tmp8;
			HX_STACK_LINE(132)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			this->exhibitionVisitedObjectArray->push(tmp9);
			HX_STACK_LINE(133)
			this->AddTagCounterVoid();
			HX_STACK_LINE(134)
			int tmp10 = this->targetInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			this->GenerateExhibitionTargetVoid(tmp10);
			HX_STACK_LINE(138)
			Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
			HX_STACK_LINE(139)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(140)
			while((true)){
				HX_STACK_LINE(140)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(140)
				::ObjectMuseum tmp12 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(140)
				int tmp13 = tmp12->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(140)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(140)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(140)
				if ((tmp15)){
					HX_STACK_LINE(140)
					break;
				}
				HX_STACK_LINE(141)
				int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(141)
				indexIntArray->push(tmp16);
				HX_STACK_LINE(142)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(144)
			Float tmp11 = ::Math_obj::random();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			int tmp12 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(144)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(144)
			int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(144)
			int tmp15 = indexIntArray->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(144)
			int indexRandomInt = tmp15;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
			HX_STACK_LINE(145)
			int tmp16 = indexRandomInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(145)
			indexIntArray->remove(tmp16);
			HX_STACK_LINE(146)
			::ObjectMuseum tmp17 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(146)
			::String tmp18 = tmp17->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(146)
			this->explanationCurrentString = tmp18;
			HX_STACK_LINE(147)
			this->explanationCurrentIndexInt = indexRandomInt;
			HX_STACK_LINE(148)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(150)
				::String tmp19 = this->explanationCurrentString;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(150)
				bool tmp20 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(150)
				bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(150)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(150)
				if ((tmp21)){
					HX_STACK_LINE(151)
					int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(151)
					::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(151)
					::ObjectMuseum tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(151)
					int tmp26 = tmp25->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(151)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(151)
					tmp22 = (tmp23 < tmp27);
				}
				else{
					HX_STACK_LINE(150)
					tmp22 = false;
				}
				HX_STACK_LINE(150)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(149)
				if ((tmp23)){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(153)
				Float tmp24 = ::Math_obj::random();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(153)
				int tmp25 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(153)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(153)
				int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(153)
				int tmp28 = indexIntArray->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(153)
				indexRandomInt = tmp28;
				HX_STACK_LINE(154)
				int tmp29 = indexRandomInt;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(154)
				indexIntArray->remove(tmp29);
				HX_STACK_LINE(155)
				::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(155)
				::String tmp31 = tmp30->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(155)
				this->explanationCurrentString = tmp31;
				HX_STACK_LINE(156)
				this->explanationCurrentIndexInt = indexRandomInt;
				HX_STACK_LINE(157)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(159)
			::String tmp19 = this->explanationCurrentString;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(159)
			this->explanationStringArray->push(tmp19);
			HX_STACK_LINE(161)
			this->visitedCorrectExhibitionBool = false;
			HX_STACK_LINE(162)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				int tmp20 = loopCounter1Int;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(163)
				int tmp21 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(163)
				bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(163)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(163)
				if ((tmp23)){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(164)
				::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(164)
				Dynamic tmp25 = tmp24->GetNameStruct();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(164)
				::String tmp26 = tmp25->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(164)
				::ObjectMuseum tmp27 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(164)
				Dynamic tmp28 = tmp27->GetNameStruct();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(164)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(164)
				bool tmp30 = (tmp26 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(164)
				if ((tmp30)){
					HX_STACK_LINE(164)
					this->visitedCorrectExhibitionBool = true;
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(165)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(167)
			bool tmp20 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(167)
			bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(167)
			if ((tmp21)){
				HX_STACK_LINE(167)
				(this->scoreInt)++;
			}
			else{
				HX_STACK_LINE(168)
				bool tmp22 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(168)
				bool tmp23 = (tmp22 == false);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(168)
				if ((tmp23)){
					HX_STACK_LINE(168)
					(this->scoreInt)--;
				}
			}
			HX_STACK_LINE(170)
			::ObjectGeneratorSentence tmp22 = this->generatorSentenceObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(170)
			::CollectionGlobal tmp23 = this->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(170)
			::String tmp24 = tmp22->GenerateSentence3String(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(170)
			::String threeSentenceString = tmp24;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
			HX_STACK_LINE(171)
			int tmp25 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(171)
			bool tmp26 = (tmp25 > (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(171)
			if ((tmp26)){
				HX_STACK_LINE(172)
				::String tmp27 = threeSentenceString;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(172)
				this->sentenceStringArray->push(tmp27);
			}
			HX_STACK_LINE(176)
			::ObjectMuseum tmp27 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(176)
			::ObjectMuseum tmp28 = tmp27->GetParentObject();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(176)
			this->roomCurrentObject = tmp28;
			HX_STACK_LINE(177)
			::ObjectMuseum tmp29 = this->roomCurrentObject;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(177)
			::ObjectMuseum tmp30 = tmp29->GetParentObject();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(177)
			this->floorCurrentObject = tmp30;
			HX_STACK_LINE(178)
			::ObjectMuseum tmp31 = this->floorCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(178)
			::ObjectMuseum tmp32 = this->roomCurrentObject;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(178)
			int tmp33 = tmp32->GetVisitorCurrentInt();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(178)
			int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(178)
			tmp31->SetVisitorCurrentIntVoid(tmp34);
			HX_STACK_LINE(179)
			::ObjectMuseum tmp35 = this->floorCurrentObject;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(179)
			::ObjectMuseum tmp36 = this->roomCurrentObject;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(179)
			int tmp37 = tmp36->GetVisitorTotalInt();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(179)
			int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(179)
			tmp35->SetVisitorTotalIntVoid(tmp38);
			HX_STACK_LINE(180)
			::ObjectMuseum tmp39 = this->roomCurrentObject;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(180)
			::ObjectMuseum tmp40 = this->floorCurrentObject;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(180)
			int tmp41 = tmp40->GetVisitorCurrentInt();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(180)
			int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(180)
			tmp39->SetVisitorCurrentIntVoid(tmp42);
			HX_STACK_LINE(181)
			::ObjectMuseum tmp43 = this->roomCurrentObject;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(181)
			::ObjectMuseum tmp44 = this->floorCurrentObject;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(181)
			int tmp45 = tmp44->GetVisitorTotalInt();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(181)
			int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(181)
			tmp43->SetVisitorTotalIntVoid(tmp46);
			HX_STACK_LINE(185)
			this->UpdateHeavyVoid();
			HX_STACK_LINE(188)
			int tmp47 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(188)
			::CollectionGlobal tmp48 = this->collectionGlobalObject;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(188)
			int tmp49 = tmp48->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(188)
			bool tmp50 = (tmp47 >= tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(188)
			if ((tmp50)){
				HX_STACK_LINE(188)
				this->finishedBool = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",192,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",192,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(192)
				int tmp = (_b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(192)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(192)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

Void ObjectVisitor_obj::AIAutoExhibitionChangeVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AIAutoExhibitionChangeVoid",0x2e2a95a9,"ObjectVisitor.AIAutoExhibitionChangeVoid","ObjectVisitor.hx",193,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		if ((tmp1)){
			HX_STACK_LINE(195)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(195)
			Float randomFloat = tmp2;		HX_STACK_VAR(randomFloat,"randomFloat");
			HX_STACK_LINE(196)
			hx::AddEq(this->timeAIAutoExhibitionChangeFloat,((Float)0.01));
			HX_STACK_LINE(197)
			Float tmp3 = randomFloat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			Float tmp4 = this->timeAIAutoExhibitionChangeFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(197)
			Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(197)
			bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			if ((tmp6)){
				HX_STACK_LINE(198)
				Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(198)
				int tmp8 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(198)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(198)
				Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(198)
				int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(198)
				int randomInt = tmp11;		HX_STACK_VAR(randomInt,"randomInt");
				HX_STACK_LINE(199)
				::ObjectMuseum tmp12 = this->exhibitionTargetObjectArray->__get(randomInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(199)
				this->ChangeExhibitionCurrentVoid(tmp12);
				HX_STACK_LINE(200)
				this->timeAIAutoExhibitionChangeFloat = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AIAutoExhibitionChangeVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",205,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		if ((tmp1)){
			HX_STACK_LINE(205)
			::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			int tmp4 = tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(205)
			this->indexLocalInt = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( int _targetInt){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",206,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_targetInt,"_targetInt")
		HX_STACK_LINE(207)
		::CollectionFunction_obj::ClearArray(this->exhibitionTargetObjectArray);
		HX_STACK_LINE(208)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(210)
		while((true)){
			HX_STACK_LINE(210)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(210)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			if ((tmp4)){
				HX_STACK_LINE(210)
				break;
			}
			HX_STACK_LINE(211)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			if ((tmp6)){
				HX_STACK_LINE(212)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(212)
				::ObjectMuseum tmp8 = tmp7->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(212)
				this->exhibitionTargetObjectArray->push(tmp8);
			}
			else{
				HX_STACK_LINE(215)
				::ObjectMuseum tmp7 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(215)
				Dynamic tmp8 = tmp7->GetNameStruct();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(215)
				::String tmp9 = tmp8->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(215)
				::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(215)
				::ObjectMuseum tmp11 = tmp10->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(215)
				Dynamic tmp12 = tmp11->GetNameStruct();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(215)
				::String tmp13 = tmp12->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(215)
				bool tmp14 = (tmp9 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(215)
				if ((tmp14)){
					HX_STACK_LINE(216)
					::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(216)
					::ObjectMuseum tmp16 = tmp15->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(216)
					this->exhibitionTargetObjectArray->push(tmp16);
				}
			}
			HX_STACK_LINE(219)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(222)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(223)
		while((true)){
			HX_STACK_LINE(223)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(223)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(223)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			if ((tmp3)){
				HX_STACK_LINE(223)
				break;
			}
			HX_STACK_LINE(224)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			::EnumMuseumMode tmp5 = tmp4->GetMuseumModeEnum();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			bool tmp6 = (tmp5 == ::EnumMuseumMode_obj::MRK_DEL);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			if ((tmp6)){
				HX_STACK_LINE(225)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(225)
				this->exhibitionTargetObjectArray->remove(tmp7);
				HX_STACK_LINE(226)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(228)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(228)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(228)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(228)
			if ((tmp9)){
				HX_STACK_LINE(228)
				return null();
			}
			HX_STACK_LINE(229)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(233)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(234)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(234)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			if ((tmp3)){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(235)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			bool tmp5 = tmp4->GetFullBool();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			if ((tmp6)){
				HX_STACK_LINE(236)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(236)
				this->exhibitionTargetObjectArray->remove(tmp7);
				HX_STACK_LINE(237)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(239)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(239)
			if ((tmp9)){
				HX_STACK_LINE(239)
				return null();
			}
			HX_STACK_LINE(240)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(243)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(244)
		while((true)){
			HX_STACK_LINE(244)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(244)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			if ((tmp3)){
				HX_STACK_LINE(244)
				break;
			}
			HX_STACK_LINE(245)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(246)
			while((true)){
				HX_STACK_LINE(246)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(246)
				int tmp5 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(246)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(246)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(246)
				if ((tmp7)){
					HX_STACK_LINE(246)
					break;
				}
				HX_STACK_LINE(247)
				::ObjectMuseum tmp8 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				Dynamic tmp9 = tmp8->GetNameStruct();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				::String tmp10 = tmp9->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				::ObjectMuseum tmp11 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				Dynamic tmp12 = tmp11->GetNameStruct();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(247)
				::String tmp13 = tmp12->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(247)
				bool tmp14 = (tmp10 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(247)
				if ((tmp14)){
					HX_STACK_LINE(248)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(248)
					bool tmp16 = (tmp15 > ((Float)0.9));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(248)
					if ((tmp16)){
						HX_STACK_LINE(249)
						::ObjectMuseum tmp17 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(249)
						this->exhibitionTargetObjectArray->remove(tmp17);
						HX_STACK_LINE(250)
						(loopCounter1Int)--;
						HX_STACK_LINE(251)
						bool tmp18 = (loopCounter1Int < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(251)
						if ((tmp18)){
							HX_STACK_LINE(251)
							loopCounter1Int = (int)0;
						}
					}
				}
				HX_STACK_LINE(254)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(256)
			int tmp4 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			int tmp5 = _targetInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			if ((tmp6)){
				HX_STACK_LINE(256)
				return null();
			}
			HX_STACK_LINE(257)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(260)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(261)
		while((true)){
			HX_STACK_LINE(261)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(261)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			if ((tmp3)){
				HX_STACK_LINE(261)
				break;
			}
			HX_STACK_LINE(262)
			Float accumPercentageFloat = (int)0;		HX_STACK_VAR(accumPercentageFloat,"accumPercentageFloat");
			HX_STACK_LINE(263)
			Float basePercentageFloat = ((Float)0.1);		HX_STACK_VAR(basePercentageFloat,"basePercentageFloat");
			HX_STACK_LINE(264)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(265)
			int tagSameCounterInt = (int)0;		HX_STACK_VAR(tagSameCounterInt,"tagSameCounterInt");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(267)
				::ObjectMuseum tmp5 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(267)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(267)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(267)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(267)
				if ((tmp8)){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(268)
				::ObjectMuseum tmp9 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(268)
				::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(268)
				int tmp11 = this->tagObjectArray->indexOf(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(268)
				bool tmp12 = (tmp11 > (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(268)
				if ((tmp12)){
					HX_STACK_LINE(269)
					(tagSameCounterInt)++;
				}
				HX_STACK_LINE(271)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(273)
			Float tmp4 = basePercentageFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			Float tmp5 = (Float(tagSameCounterInt) / Float((int)10));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			accumPercentageFloat = tmp6;
			HX_STACK_LINE(274)
			bool tmp7 = (accumPercentageFloat >= ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(274)
			if ((tmp7)){
				HX_STACK_LINE(274)
				accumPercentageFloat = ((Float)1.0);
			}
			HX_STACK_LINE(275)
			Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			Float tmp9 = accumPercentageFloat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(275)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(275)
			if ((tmp10)){
				HX_STACK_LINE(276)
				::ObjectMuseum tmp11 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(276)
				this->exhibitionTargetObjectArray->remove(tmp11);
				HX_STACK_LINE(277)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(279)
			int tmp11 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(279)
			int tmp12 = _targetInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(279)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(279)
			if ((tmp13)){
				HX_STACK_LINE(279)
				return null();
			}
			HX_STACK_LINE(280)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(283)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(284)
		while((true)){
			HX_STACK_LINE(284)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(284)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(284)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			if ((tmp3)){
				HX_STACK_LINE(284)
				break;
			}
			HX_STACK_LINE(285)
			int sameCounterInt = (int)0;		HX_STACK_VAR(sameCounterInt,"sameCounterInt");
			HX_STACK_LINE(286)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			::ObjectMuseum tmp5 = tmp4->GetParentObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			::ObjectMuseum roomTargetObject = tmp5;		HX_STACK_VAR(roomTargetObject,"roomTargetObject");
			HX_STACK_LINE(287)
			::ObjectMuseum tmp6 = roomTargetObject->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			::ObjectMuseum floorTargetObject = tmp6;		HX_STACK_VAR(floorTargetObject,"floorTargetObject");
			HX_STACK_LINE(288)
			::ObjectMuseum tmp7 = roomTargetObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(288)
			::ObjectMuseum tmp8 = this->roomCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(288)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(288)
			if ((tmp9)){
				HX_STACK_LINE(288)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(289)
			::ObjectMuseum tmp10 = floorTargetObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			::ObjectMuseum tmp11 = this->floorCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(289)
			if ((tmp12)){
				HX_STACK_LINE(289)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(290)
			bool tmp13 = (sameCounterInt == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(290)
			if ((tmp13)){
				HX_STACK_LINE(291)
				Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(291)
				bool tmp15 = (tmp14 > ((Float)0.50));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(291)
				if ((tmp15)){
					HX_STACK_LINE(292)
					::ObjectMuseum tmp16 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(292)
					this->exhibitionTargetObjectArray->remove(tmp16);
					HX_STACK_LINE(293)
					(loopCounter1Int)--;
				}
			}
			else{
				HX_STACK_LINE(296)
				bool tmp14 = (sameCounterInt == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(296)
				if ((tmp14)){
					HX_STACK_LINE(297)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(297)
					bool tmp16 = (tmp15 > ((Float)0.25));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(297)
					if ((tmp16)){
						HX_STACK_LINE(298)
						::ObjectMuseum tmp17 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(298)
						this->exhibitionTargetObjectArray->remove(tmp17);
						HX_STACK_LINE(299)
						(loopCounter1Int)--;
					}
				}
			}
			HX_STACK_LINE(302)
			int tmp14 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(302)
			int tmp15 = _targetInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(302)
			bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(302)
			if ((tmp16)){
				HX_STACK_LINE(302)
				return null();
			}
			HX_STACK_LINE(303)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			int tmp = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(305)
			int tmp1 = _targetInt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			if ((tmp3)){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(305)
			this->exhibitionTargetObjectArray->pop().StaticCast< ::ObjectMuseum >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",307,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionCurrentObject,return )

Array< ::Dynamic > ObjectVisitor_obj::GetExhibitionTargetObjectArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionTargetObjectArray",0xa6360163,"ObjectVisitor.GetExhibitionTargetObjectArray","ObjectVisitor.hx",308,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(308)
	return this->exhibitionTargetObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionTargetObjectArray,return )

int ObjectVisitor_obj::GetExplanationCurrentIndexInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetExplanationCurrentIndexInt",0x3a68b8f4,"ObjectVisitor.GetExplanationCurrentIndexInt","ObjectVisitor.hx",309,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	int tmp = this->explanationCurrentIndexInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExplanationCurrentIndexInt,return )

::String ObjectVisitor_obj::GetExplanationCurrentString( ){
	HX_STACK_FRAME("ObjectVisitor","GetExplanationCurrentString",0x4e944508,"ObjectVisitor.GetExplanationCurrentString","ObjectVisitor.hx",310,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	::String tmp = this->explanationCurrentString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExplanationCurrentString,return )

Array< ::String > ObjectVisitor_obj::GetExplanationStringArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetExplanationStringArray",0xeff616a6,"ObjectVisitor.GetExplanationStringArray","ObjectVisitor.hx",311,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	return this->explanationStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExplanationStringArray,return )

bool ObjectVisitor_obj::GetFinishedBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetFinishedBool",0x56cdf673,"ObjectVisitor.GetFinishedBool","ObjectVisitor.hx",312,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(312)
	bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetFinishedBool,return )

int ObjectVisitor_obj::GetIndexGlobalInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetIndexGlobalInt",0xd2c1d351,"ObjectVisitor.GetIndexGlobalInt","ObjectVisitor.hx",313,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	int tmp = this->indexGlobalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetIndexGlobalInt,return )

int ObjectVisitor_obj::GetIndexLocalInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetIndexLocalInt",0x9b8f97df,"ObjectVisitor.GetIndexLocalInt","ObjectVisitor.hx",314,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(314)
	int tmp = this->indexLocalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetIndexLocalInt,return )

::String ObjectVisitor_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectVisitor","GetNameString",0xa627bf73,"ObjectVisitor.GetNameString","ObjectVisitor.hx",315,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	::String tmp = this->nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetNameString,return )

int ObjectVisitor_obj::GetScoreInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetScoreInt",0x032bdaf4,"ObjectVisitor.GetScoreInt","ObjectVisitor.hx",316,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(316)
	int tmp = this->scoreInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetScoreInt,return )

Array< ::String > ObjectVisitor_obj::GetSentenceStringArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetSentenceStringArray",0x830c324e,"ObjectVisitor.GetSentenceStringArray","ObjectVisitor.hx",317,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	return this->sentenceStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetSentenceStringArray,return )

cpp::ArrayBase ObjectVisitor_obj::GetTagCounterStructArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagCounterStructArray",0x729f3dcb,"ObjectVisitor.GetTagCounterStructArray","ObjectVisitor.hx",318,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	return this->tagCounterStructArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagCounterStructArray,return )

Array< ::Dynamic > ObjectVisitor_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagObjectArray",0xee77bf97,"ObjectVisitor.GetTagObjectArray","ObjectVisitor.hx",319,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(319)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagObjectArray,return )

bool ObjectVisitor_obj::GetVisitCorrectExhibitionBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitCorrectExhibitionBool",0x6c55624f,"ObjectVisitor.GetVisitCorrectExhibitionBool","ObjectVisitor.hx",320,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	bool tmp = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitCorrectExhibitionBool,return )

::EnumVisitorMode ObjectVisitor_obj::GetVisitorModeEnum( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitorModeEnum",0x1dd5307b,"ObjectVisitor.GetVisitorModeEnum","ObjectVisitor.hx",321,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	::EnumVisitorMode tmp = this->visitorModeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitorModeEnum,return )

::ObjectVisitorUI ObjectVisitor_obj::GetVisitorUIObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitorUIObject",0xb3f4d08a,"ObjectVisitor.GetVisitorUIObject","ObjectVisitor.hx",322,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	::ObjectVisitorUI tmp = this->visitorUIObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitorUIObject,return )

Void ObjectVisitor_obj::ResetVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","ResetVoid",0xb02ba204,"ObjectVisitor.ResetVoid","ObjectVisitor.hx",323,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(324)
		::CollectionFunction_obj::ClearArray(this->exhibitionVisitedObjectArray);
		HX_STACK_LINE(325)
		::CollectionFunction_obj::ClearArray(this->explanationStringArray);
		HX_STACK_LINE(326)
		::CollectionFunction_obj::ClearArray(this->sentenceStringArray);
		HX_STACK_LINE(327)
		this->finishedBool = false;
		HX_STACK_LINE(328)
		this->scoreInt = (int)0;
		HX_STACK_LINE(329)
		this->visitedCorrectExhibitionBool = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,ResetVoid,(void))

Void ObjectVisitor_obj::SetIndexLocalIntVoid( int _indexLocalInt){
{
		HX_STACK_FRAME("ObjectVisitor","SetIndexLocalIntVoid",0xfce71a47,"ObjectVisitor.SetIndexLocalIntVoid","ObjectVisitor.hx",331,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_indexLocalInt,"_indexLocalInt")
		HX_STACK_LINE(331)
		this->indexLocalInt = _indexLocalInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,SetIndexLocalIntVoid,(void))

Void ObjectVisitor_obj::SetNameStringVoid( ::String _nameString,::UIPopupEditObjectVisitor _uiPopupEditObjectVisitor){
{
		HX_STACK_FRAME("ObjectVisitor","SetNameStringVoid",0x6222bc73,"ObjectVisitor.SetNameStringVoid","ObjectVisitor.hx",332,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameString,"_nameString")
		HX_STACK_ARG(_uiPopupEditObjectVisitor,"_uiPopupEditObjectVisitor")
		HX_STACK_LINE(333)
		this->nameString = _nameString;
		HX_STACK_LINE(335)
		::ObjectVisitorUI tmp = this->visitorUIObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		::haxe::ui::toolkit::controls::Button tmp1 = tmp->GetButtonObject();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		::String tmp2 = this->nameString;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		::String tmp3 = (HX_HCSTRING("Button*","\xd8","\x79","\xc6","\x97") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		tmp1->set_id(tmp3);
		HX_STACK_LINE(336)
		bool tmp4 = (_uiPopupEditObjectVisitor != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		if ((tmp4)){
			HX_STACK_LINE(337)
			_uiPopupEditObjectVisitor->UpdateVisitorButtonObjectArrayVoid();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVisitor_obj,SetNameStringVoid,(void))

Void ObjectVisitor_obj::SetVisitorModeEnumVoid( ::EnumVisitorMode _visitorModeEnum){
{
		HX_STACK_FRAME("ObjectVisitor","SetVisitorModeEnumVoid",0xa74ef5e3,"ObjectVisitor.SetVisitorModeEnumVoid","ObjectVisitor.hx",340,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorModeEnum,"_visitorModeEnum")
		HX_STACK_LINE(340)
		this->visitorModeEnum = _visitorModeEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,SetVisitorModeEnumVoid,(void))

Void ObjectVisitor_obj::UpdateHeavyVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","UpdateHeavyVoid",0xafd8eeb3,"ObjectVisitor.UpdateHeavyVoid","ObjectVisitor.hx",341,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		int tmp2 = tmp1->GetVisitorCurrentInt();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(342)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(342)
		tmp->SetVisitorCurrentIntVoid(tmp3);
		HX_STACK_LINE(343)
		::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(343)
		::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(343)
		int tmp6 = tmp5->GetVisitorTotalInt();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(343)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(343)
		tmp4->SetVisitorTotalIntVoid(tmp7);
		HX_STACK_LINE(344)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(345)
		while((true)){
			HX_STACK_LINE(345)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(345)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(345)
			int tmp10 = tmp9->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(345)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(345)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(345)
			if ((tmp12)){
				HX_STACK_LINE(345)
				break;
			}
			HX_STACK_LINE(346)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(346)
			::ObjectMuseum tmp14 = tmp13->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(346)
			tmp14->DetermineFullVoid();
			HX_STACK_LINE(347)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(349)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(350)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(350)
			int tmp10 = tmp9->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(350)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(350)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(350)
			if ((tmp12)){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(351)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(351)
			::ObjectMuseum tmp14 = tmp13->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(351)
			tmp14->DetermineFullVoid();
			HX_STACK_LINE(352)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(354)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(355)
		while((true)){
			HX_STACK_LINE(355)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(355)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(355)
			int tmp10 = tmp9->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(355)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(355)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(355)
			if ((tmp12)){
				HX_STACK_LINE(355)
				break;
			}
			HX_STACK_LINE(356)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(356)
			::ObjectMuseum tmp14 = tmp13->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(356)
			Dynamic tmp15 = tmp14->GetNameStruct();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(356)
			::String tmp16 = tmp15->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(356)
			bool tmp17 = (tmp16 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(356)
			if ((tmp17)){
				HX_STACK_LINE(357)
				::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(357)
				::ObjectMuseum tmp19 = tmp18->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(357)
				tmp19->DetermineChildVoid();
				HX_STACK_LINE(358)
				::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(358)
				::ObjectMuseum tmp21 = tmp20->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(358)
				tmp21->DetermineFullVoid();
			}
			HX_STACK_LINE(360)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(362)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(363)
		int necessaryHeightInt = (int)0;		HX_STACK_VAR(necessaryHeightInt,"necessaryHeightInt");
		HX_STACK_LINE(364)
		while((true)){
			HX_STACK_LINE(364)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(364)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(364)
			int tmp10 = tmp9->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(364)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(364)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(364)
			if ((tmp12)){
				HX_STACK_LINE(364)
				break;
			}
			HX_STACK_LINE(365)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(365)
			::ObjectVisitor tmp14 = tmp13->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(365)
			tmp14->DetermineIndexLocalVoid();
			HX_STACK_LINE(366)
			::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(366)
			::ObjectVisitor tmp16 = tmp15->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(366)
			int tmp17 = this->targetInt;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(366)
			tmp16->GenerateExhibitionTargetVoid(tmp17);
			HX_STACK_LINE(367)
			::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(367)
			::ObjectVisitor tmp19 = tmp18->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(367)
			::ObjectVisitorUI tmp20 = tmp19->GetVisitorUIObject();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(367)
			tmp20->UpdateVoid();
			HX_STACK_LINE(368)
			int tmp21 = necessaryHeightInt;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(368)
			::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(368)
			::ObjectVisitor tmp23 = tmp22->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(368)
			::ObjectVisitorUI tmp24 = tmp23->GetVisitorUIObject();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(368)
			::haxe::ui::toolkit::controls::Button tmp25 = tmp24->GetButtonObject();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(368)
			Float tmp26 = tmp25->get_y();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(368)
			::CollectionGlobal tmp27 = this->collectionGlobalObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(368)
			::ObjectVisitor tmp28 = tmp27->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(368)
			::ObjectVisitorUI tmp29 = tmp28->GetVisitorUIObject();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(368)
			::haxe::ui::toolkit::controls::Button tmp30 = tmp29->GetButtonObject();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(368)
			Float tmp31 = tmp30->get_height();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(368)
			Float tmp32 = (tmp26 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(368)
			int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(368)
			bool tmp34 = (tmp21 < tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(368)
			if ((tmp34)){
				HX_STACK_LINE(369)
				::CollectionGlobal tmp35 = this->collectionGlobalObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(369)
				::ObjectVisitor tmp36 = tmp35->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(369)
				::ObjectVisitorUI tmp37 = tmp36->GetVisitorUIObject();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(369)
				::haxe::ui::toolkit::controls::Button tmp38 = tmp37->GetButtonObject();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(369)
				Float tmp39 = tmp38->get_y();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(369)
				::CollectionGlobal tmp40 = this->collectionGlobalObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(369)
				::ObjectVisitor tmp41 = tmp40->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(369)
				::ObjectVisitorUI tmp42 = tmp41->GetVisitorUIObject();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(369)
				::haxe::ui::toolkit::controls::Button tmp43 = tmp42->GetButtonObject();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(369)
				Float tmp44 = tmp43->get_height();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(369)
				Float tmp45 = (tmp39 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(369)
				int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(369)
				necessaryHeightInt = tmp46;
			}
			HX_STACK_LINE(371)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(373)
		::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(373)
		::haxe::ui::toolkit::containers::Absolute tmp9 = tmp8->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(373)
		int tmp10 = necessaryHeightInt;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(373)
		tmp9->set_height(tmp10);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",375,0xe713038f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b") , (int)0,false);
					__result->Add(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(375)
		Dynamic tmp11 = _Function_1_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(375)
		Dynamic visitorVisitExhibitionStruct = tmp11;		HX_STACK_VAR(visitorVisitExhibitionStruct,"visitorVisitExhibitionStruct");
		HX_STACK_LINE(379)
		int tmp12 = this->timeExhibitionInt;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(379)
		visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b")) = tmp12;
		HX_STACK_LINE(380)
		::ObjectMuseum tmp13 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(380)
		Dynamic tmp14 = tmp13->GetNameStruct();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(380)
		visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c")) = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
		HX_STACK_LINE(381)
		Dynamic tmp15 = visitorVisitExhibitionStruct;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(381)
		this->visitExhibitionStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,UpdateHeavyVoid,(void))

Void ObjectVisitor_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","UpdateVoid",0x5977719c,"ObjectVisitor.UpdateVoid","ObjectVisitor.hx",383,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(385)
			::EnumVisitorMode tmp3 = this->visitorModeEnum;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			::EnumVisitorMode tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(385)
			tmp2 = (tmp4 == ::EnumVisitorMode_obj::SOFTWARE_AUTO);
		}
		else{
			HX_STACK_LINE(385)
			tmp2 = false;
		}
		HX_STACK_LINE(385)
		if ((tmp2)){
			HX_STACK_LINE(386)
			this->AIAutoExhibitionChangeVoid();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,UpdateVoid,(void))


ObjectVisitor_obj::ObjectVisitor_obj()
{
}

void ObjectVisitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectVisitor);
	HX_MARK_MEMBER_NAME(explanationCurrentIndexInt,"explanationCurrentIndexInt");
	HX_MARK_MEMBER_NAME(explanationCurrentString,"explanationCurrentString");
	HX_MARK_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_MARK_MEMBER_NAME(finishedBool,"finishedBool");
	HX_MARK_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(nameString,"nameString");
	HX_MARK_MEMBER_NAME(scoreInt,"scoreInt");
	HX_MARK_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_MARK_MEMBER_NAME(targetInt,"targetInt");
	HX_MARK_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_MARK_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_MARK_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_MARK_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(exhibitionCurrentObject,"exhibitionCurrentObject");
	HX_MARK_MEMBER_NAME(exhibitionTargetObjectArray,"exhibitionTargetObjectArray");
	HX_MARK_MEMBER_NAME(exhibitionVisitedObjectArray,"exhibitionVisitedObjectArray");
	HX_MARK_MEMBER_NAME(floorCurrentObject,"floorCurrentObject");
	HX_MARK_MEMBER_NAME(generatorSentenceObject,"generatorSentenceObject");
	HX_MARK_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_MARK_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_MARK_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_MARK_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_MARK_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
	HX_MARK_MEMBER_NAME(visitorModeEnum,"visitorModeEnum");
	HX_MARK_MEMBER_NAME(visitorUIObject,"visitorUIObject");
	HX_MARK_END_CLASS();
}

void ObjectVisitor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(explanationCurrentIndexInt,"explanationCurrentIndexInt");
	HX_VISIT_MEMBER_NAME(explanationCurrentString,"explanationCurrentString");
	HX_VISIT_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_VISIT_MEMBER_NAME(finishedBool,"finishedBool");
	HX_VISIT_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(nameString,"nameString");
	HX_VISIT_MEMBER_NAME(scoreInt,"scoreInt");
	HX_VISIT_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_VISIT_MEMBER_NAME(targetInt,"targetInt");
	HX_VISIT_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_VISIT_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_VISIT_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_VISIT_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(exhibitionCurrentObject,"exhibitionCurrentObject");
	HX_VISIT_MEMBER_NAME(exhibitionTargetObjectArray,"exhibitionTargetObjectArray");
	HX_VISIT_MEMBER_NAME(exhibitionVisitedObjectArray,"exhibitionVisitedObjectArray");
	HX_VISIT_MEMBER_NAME(floorCurrentObject,"floorCurrentObject");
	HX_VISIT_MEMBER_NAME(generatorSentenceObject,"generatorSentenceObject");
	HX_VISIT_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_VISIT_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_VISIT_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_VISIT_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_VISIT_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
	HX_VISIT_MEMBER_NAME(visitorModeEnum,"visitorModeEnum");
	HX_VISIT_MEMBER_NAME(visitorUIObject,"visitorUIObject");
}

Dynamic ObjectVisitor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"scoreInt") ) { return scoreInt; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"targetInt") ) { return targetInt; }
		if (HX_FIELD_EQ(inName,"ResetVoid") ) { return ResetVoid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { return nameString; }
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"GetScoreInt") ) { return GetScoreInt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedBool") ) { return finishedBool; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		if (HX_FIELD_EQ(inName,"timeMuseumInt") ) { return timeMuseumInt; }
		if (HX_FIELD_EQ(inName,"GetNameString") ) { return GetNameString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { return tagObjectArray; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorModeEnum") ) { return visitorModeEnum; }
		if (HX_FIELD_EQ(inName,"visitorUIObject") ) { return visitorUIObject; }
		if (HX_FIELD_EQ(inName,"GetFinishedBool") ) { return GetFinishedBool_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateHeavyVoid") ) { return UpdateHeavyVoid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetIndexLocalInt") ) { return GetIndexLocalInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { return timeExhibitionInt; }
		if (HX_FIELD_EQ(inName,"roomCurrentObject") ) { return roomCurrentObject; }
		if (HX_FIELD_EQ(inName,"AddTagCounterVoid") ) { return AddTagCounterVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetIndexGlobalInt") ) { return GetIndexGlobalInt_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNameStringVoid") ) { return SetNameStringVoid_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"floorCurrentObject") ) { return floorCurrentObject; }
		if (HX_FIELD_EQ(inName,"SortTagCounterVoid") ) { return SortTagCounterVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorModeEnum") ) { return GetVisitorModeEnum_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorUIObject") ) { return GetVisitorUIObject_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sentenceStringArray") ) { return sentenceStringArray; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SetIndexLocalIntVoid") ) { return SetIndexLocalIntVoid_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tagCounterStructArray") ) { return tagCounterStructArray; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { return explanationStringArray; }
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"visitMuseumStructArray") ) { return visitMuseumStructArray; }
		if (HX_FIELD_EQ(inName,"GetSentenceStringArray") ) { return GetSentenceStringArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVisitorModeEnumVoid") ) { return SetVisitorModeEnumVoid_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { return exhibitionCurrentObject; }
		if (HX_FIELD_EQ(inName,"generatorSentenceObject") ) { return generatorSentenceObject; }
		if (HX_FIELD_EQ(inName,"DetermineIndexLocalVoid") ) { return DetermineIndexLocalVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"explanationCurrentString") ) { return explanationCurrentString; }
		if (HX_FIELD_EQ(inName,"GetTagCounterStructArray") ) { return GetTagCounterStructArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"GetExplanationStringArray") ) { return GetExplanationStringArray_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"explanationCurrentIndexInt") ) { return explanationCurrentIndexInt; }
		if (HX_FIELD_EQ(inName,"visitExhibitionStructArray") ) { return visitExhibitionStructArray; }
		if (HX_FIELD_EQ(inName,"AIAutoExhibitionChangeVoid") ) { return AIAutoExhibitionChangeVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetExhibitionCurrentObject") ) { return GetExhibitionCurrentObject_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"exhibitionTargetObjectArray") ) { return exhibitionTargetObjectArray; }
		if (HX_FIELD_EQ(inName,"ChangeExhibitionCurrentVoid") ) { return ChangeExhibitionCurrentVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetExplanationCurrentString") ) { return GetExplanationCurrentString_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { return visitedCorrectExhibitionBool; }
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { return exhibitionVisitedObjectArray; }
		if (HX_FIELD_EQ(inName,"GenerateExhibitionTargetVoid") ) { return GenerateExhibitionTargetVoid_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"GetExplanationCurrentIndexInt") ) { return GetExplanationCurrentIndexInt_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitCorrectExhibitionBool") ) { return GetVisitCorrectExhibitionBool_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"GetExhibitionTargetObjectArray") ) { return GetExhibitionTargetObjectArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"timeAIAutoExhibitionChangeFloat") ) { return timeAIAutoExhibitionChangeFloat; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"AddRemoveVisitorFromExhibitionVoid") ) { return AddRemoveVisitorFromExhibitionVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectVisitor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"scoreInt") ) { scoreInt=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"targetInt") ) { targetInt=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { nameString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedBool") ) { finishedBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { indexLocalInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeMuseumInt") ) { timeMuseumInt=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { indexGlobalInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { tagObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorModeEnum") ) { visitorModeEnum=inValue.Cast< ::EnumVisitorMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitorUIObject") ) { visitorUIObject=inValue.Cast< ::ObjectVisitorUI >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { timeExhibitionInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"roomCurrentObject") ) { roomCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"floorCurrentObject") ) { floorCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sentenceStringArray") ) { sentenceStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tagCounterStructArray") ) { tagCounterStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { explanationStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitMuseumStructArray") ) { visitMuseumStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { exhibitionCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		if (HX_FIELD_EQ(inName,"generatorSentenceObject") ) { generatorSentenceObject=inValue.Cast< ::ObjectGeneratorSentence >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"explanationCurrentString") ) { explanationCurrentString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"explanationCurrentIndexInt") ) { explanationCurrentIndexInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitExhibitionStructArray") ) { visitExhibitionStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"exhibitionTargetObjectArray") ) { exhibitionTargetObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { visitedCorrectExhibitionBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { exhibitionVisitedObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"timeAIAutoExhibitionChangeFloat") ) { timeAIAutoExhibitionChangeFloat=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectVisitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("explanationCurrentIndexInt","\xfd","\xb4","\xd6","\x2e"));
	outFields->push(HX_HCSTRING("explanationCurrentString","\xd1","\xfc","\x4d","\x57"));
	outFields->push(HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"));
	outFields->push(HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea"));
	outFields->push(HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"));
	outFields->push(HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"));
	outFields->push(HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"));
	outFields->push(HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"));
	outFields->push(HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"));
	outFields->push(HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"));
	outFields->push(HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"));
	outFields->push(HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9"));
	outFields->push(HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92"));
	outFields->push(HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f"));
	outFields->push(HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b"));
	outFields->push(HX_HCSTRING("generatorSentenceObject","\x75","\x5b","\x5f","\x22"));
	outFields->push(HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"));
	outFields->push(HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"));
	outFields->push(HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"));
	outFields->push(HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"));
	outFields->push(HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"));
	outFields->push(HX_HCSTRING("visitorModeEnum","\xd2","\x95","\xb5","\x13"));
	outFields->push(HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,explanationCurrentIndexInt),HX_HCSTRING("explanationCurrentIndexInt","\xfd","\xb4","\xd6","\x2e")},
	{hx::fsString,(int)offsetof(ObjectVisitor_obj,explanationCurrentString),HX_HCSTRING("explanationCurrentString","\xd1","\xfc","\x4d","\x57")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,explanationStringArray),HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,finishedBool),HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexGlobalInt),HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsString,(int)offsetof(ObjectVisitor_obj,nameString),HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,scoreInt),HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,sentenceStringArray),HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,targetInt),HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69")},
	{hx::fsFloat,(int)offsetof(ObjectVisitor_obj,timeAIAutoExhibitionChangeFloat),HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeExhibitionInt),HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeMuseumInt),HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,visitedCorrectExhibitionBool),HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectVisitor_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionCurrentObject),HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionTargetObjectArray),HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionVisitedObjectArray),HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,floorCurrentObject),HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b")},
	{hx::fsObject /*::ObjectGeneratorSentence*/ ,(int)offsetof(ObjectVisitor_obj,generatorSentenceObject),HX_HCSTRING("generatorSentenceObject","\x75","\x5b","\x5f","\x22")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,roomCurrentObject),HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,tagCounterStructArray),HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,tagObjectArray),HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitExhibitionStructArray),HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitMuseumStructArray),HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75")},
	{hx::fsObject /*::EnumVisitorMode*/ ,(int)offsetof(ObjectVisitor_obj,visitorModeEnum),HX_HCSTRING("visitorModeEnum","\xd2","\x95","\xb5","\x13")},
	{hx::fsObject /*::ObjectVisitorUI*/ ,(int)offsetof(ObjectVisitor_obj,visitorUIObject),HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("explanationCurrentIndexInt","\xfd","\xb4","\xd6","\x2e"),
	HX_HCSTRING("explanationCurrentString","\xd1","\xfc","\x4d","\x57"),
	HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"),
	HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea"),
	HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"),
	HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"),
	HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"),
	HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"),
	HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"),
	HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"),
	HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"),
	HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9"),
	HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92"),
	HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f"),
	HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b"),
	HX_HCSTRING("generatorSentenceObject","\x75","\x5b","\x5f","\x22"),
	HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"),
	HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"),
	HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"),
	HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"),
	HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"),
	HX_HCSTRING("visitorModeEnum","\xd2","\x95","\xb5","\x13"),
	HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9"),
	HX_HCSTRING("AddRemoveVisitorFromExhibitionVoid","\xb6","\xdd","\xf7","\x95"),
	HX_HCSTRING("AddTagCounterVoid","\x17","\x32","\xf9","\x30"),
	HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"),
	HX_HCSTRING("SortTagCounterVoid","\x54","\x9c","\x8b","\xe3"),
	HX_HCSTRING("AIAutoExhibitionChangeVoid","\x2a","\xa8","\xc9","\xe7"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"),
	HX_HCSTRING("GetExhibitionCurrentObject","\x33","\x60","\x47","\xbe"),
	HX_HCSTRING("GetExhibitionTargetObjectArray","\x64","\xe8","\x76","\x98"),
	HX_HCSTRING("GetExplanationCurrentIndexInt","\x13","\x6d","\x45","\x49"),
	HX_HCSTRING("GetExplanationCurrentString","\x67","\x63","\x25","\x00"),
	HX_HCSTRING("GetExplanationStringArray","\x45","\x8f","\x80","\xcf"),
	HX_HCSTRING("GetFinishedBool","\x52","\x42","\x6d","\x6e"),
	HX_HCSTRING("GetIndexGlobalInt","\xf0","\x14","\xb3","\x89"),
	HX_HCSTRING("GetIndexLocalInt","\x20","\xaf","\x52","\x2f"),
	HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"),
	HX_HCSTRING("GetScoreInt","\x53","\x0b","\xe2","\x18"),
	HX_HCSTRING("GetSentenceStringArray","\x4f","\xb0","\xad","\xc7"),
	HX_HCSTRING("GetTagCounterStructArray","\x0c","\xfe","\x1c","\x41"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetVisitCorrectExhibitionBool","\x6e","\x16","\x32","\x7b"),
	HX_HCSTRING("GetVisitorModeEnum","\xfc","\x59","\xfd","\x79"),
	HX_HCSTRING("GetVisitorUIObject","\x0b","\xfa","\x1c","\x10"),
	HX_HCSTRING("ResetVoid","\xa3","\xac","\x12","\x36"),
	HX_HCSTRING("SetIndexLocalIntVoid","\x08","\x66","\x8d","\xd2"),
	HX_HCSTRING("SetNameStringVoid","\x12","\xfe","\x13","\x19"),
	HX_HCSTRING("SetVisitorModeEnumVoid","\xe4","\x73","\xf0","\xeb"),
	HX_HCSTRING("UpdateHeavyVoid","\x92","\x3a","\x78","\xc7"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectVisitor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectVisitor_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectVisitor_obj::__mClass;

void ObjectVisitor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectVisitor_obj >;
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

