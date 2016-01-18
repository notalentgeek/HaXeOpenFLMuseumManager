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

Void ObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,::ObjectMuseum _exhibitionCurrentObject,int _indexGlobalInt,::String _nameString)
{
HX_STACK_FRAME("ObjectVisitor","new",0x49949701,"ObjectVisitor.new","ObjectVisitor.hx",3,0xe713038f)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_exhibitionCurrentObject,"_exhibitionCurrentObject")
HX_STACK_ARG(_indexGlobalInt,"_indexGlobalInt")
HX_STACK_ARG(_nameString,"_nameString")
{
	HX_STACK_LINE(26)
	this->visitorUIObject = null();
	HX_STACK_LINE(25)
	this->visitMuseumStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(24)
	this->visitExhibitionStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(23)
	this->visitedCorrectExhibitionBool = true;
	HX_STACK_LINE(22)
	this->timeMuseumInt = (int)0;
	HX_STACK_LINE(21)
	this->timeExhibitionInt = (int)0;
	HX_STACK_LINE(20)
	this->timeAIAutoExhibitionChangeFloat = ((Float)0);
	HX_STACK_LINE(19)
	this->targetInt = (int)3;
	HX_STACK_LINE(18)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(17)
	this->tagCounterStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(16)
	this->sentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(15)
	this->scoreInt = (int)0;
	HX_STACK_LINE(14)
	this->roomCurrentObject = null();
	HX_STACK_LINE(13)
	this->nameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(12)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(11)
	this->indexGlobalInt = (int)-1;
	HX_STACK_LINE(10)
	this->floorCurrentObject = null();
	HX_STACK_LINE(9)
	this->finishedBool = false;
	HX_STACK_LINE(8)
	this->explanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(7)
	this->exhibitionVisitedObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(6)
	this->exhibitionTargetObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(5)
	this->exhibitionCurrentObject = null();
	HX_STACK_LINE(4)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(33)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(34)
	this->indexGlobalInt = _indexGlobalInt;
	HX_STACK_LINE(35)
	this->nameString = _nameString;
	HX_STACK_LINE(36)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	tmp->GetVisitorObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(37)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::ObjectVisitorUI tmp2 = ::ObjectVisitorUI_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	this->visitorUIObject = tmp2;
	HX_STACK_LINE(38)
	::ObjectMuseum tmp3 = _exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	this->ChangeExhibitionCurrentVoid(tmp3);
	HX_STACK_LINE(39)
	::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	tmp4->DetermineExhibitionFullThresholdVoid();
}
;
	return null();
}

//ObjectVisitor_obj::~ObjectVisitor_obj() { }

Dynamic ObjectVisitor_obj::__CreateEmpty() { return  new ObjectVisitor_obj; }
hx::ObjectPtr< ObjectVisitor_obj > ObjectVisitor_obj::__new(::CollectionGlobal _collectionGlobalObject,::ObjectMuseum _exhibitionCurrentObject,int _indexGlobalInt,::String _nameString)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(_collectionGlobalObject,_exhibitionCurrentObject,_indexGlobalInt,_nameString);
	return _result_;}

Dynamic ObjectVisitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void ObjectVisitor_obj::AddRemoveVisitorFromExhibitionVoid( bool _isAdd){
{
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",41,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(42)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(42)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(43)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			if ((tmp1)){
				HX_STACK_LINE(43)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(43)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(43)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",45,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(49)
		this->tagObjectArray = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(51)
		int tmp = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		bool tmp1 = (tmp >= (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(52)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				int tmp3 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				int tmp4 = (tmp3 - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				::ObjectMuseum tmp5 = this->exhibitionVisitedObjectArray->__get(tmp4).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				bool tmp7 = (tmp2 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				if ((tmp8)){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(54)
				int tmp9 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				::ObjectMuseum tmp11 = this->exhibitionVisitedObjectArray->__get(tmp10).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				::ObjectTag tmp12 = tmp11->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				::ObjectTag tagObject = tmp12;		HX_STACK_VAR(tagObject,"tagObject");
				HX_STACK_LINE(55)
				::ObjectTag tmp13 = tagObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(55)
				int tmp14 = this->tagObjectArray->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(55)
				bool tmp15 = (tmp14 == (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(55)
				if ((tmp15)){
					HX_STACK_LINE(55)
					::ObjectTag tmp16 = tagObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(55)
					this->tagObjectArray->push(tmp16);
				}
				HX_STACK_LINE(56)
				(loopCounter1Int)++;
			}
		}
		HX_STACK_LINE(60)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			int tmp4 = tmp3->GetTagObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			if ((tmp6)){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(62)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(63)
			::String tagNameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagNameString,"tagNameString");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",67,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(67)
			Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			Dynamic tagCounterStruct = tmp7;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(72)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(73)
			::ObjectMuseum tmp8 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			::ObjectTag tmp9 = tmp8->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")) = tmp9;
			HX_STACK_LINE(74)
			::String tmp10 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			tagNameString = tmp10;
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				int tmp11 = tagIndexInt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(75)
				int tmp12 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(75)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(75)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(75)
				if ((tmp14)){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(76)
				::String tmp15 = tagNameString;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(76)
				Dynamic tmp16 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(76)
				::String tmp17 = tmp16->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(76)
				bool tmp18 = (tmp15 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(76)
				if ((tmp18)){
					HX_STACK_LINE(76)
					newTagBool = false;
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(77)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(79)
			bool tmp11 = (newTagBool == true);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(79)
			if ((tmp11)){
				HX_STACK_LINE(79)
				Dynamic tmp12 = tagCounterStruct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(79)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
			}
			else{
				HX_STACK_LINE(80)
				bool tmp12 = (newTagBool == false);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(80)
				if ((tmp12)){
					HX_STACK_LINE(80)
					Dynamic tmp13 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(80)
					(tmp13->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(81)
			(loopCounter1Int)++;
			HX_STACK_LINE(83)
			::ObjectTag tmp12 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			int tmp13 = this->tagObjectArray->indexOf(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			bool tmp14 = (tmp13 == (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			if ((tmp14)){
				HX_STACK_LINE(84)
				::ObjectTag tmp15 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(84)
				this->tagObjectArray->push(tmp15);
			}
		}
		HX_STACK_LINE(87)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",89,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		HX_STACK_LINE(90)
		Dynamic tmp = _exhibitionTargetObject->GetNameStruct();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::String tmp1 = tmp->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = (tmp1 == HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(91)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(92)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			this->roomCurrentObject = tmp3;
			HX_STACK_LINE(93)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			this->floorCurrentObject = tmp4;
			HX_STACK_LINE(94)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			this->exhibitionVisitedObjectArray->push(tmp5);
		}
		else{
			HX_STACK_LINE(97)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			if ((tmp4)){
				HX_STACK_LINE(98)
				::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(98)
				::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(98)
				this->roomCurrentObject = tmp6;
				HX_STACK_LINE(99)
				::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(99)
				::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(99)
				this->floorCurrentObject = tmp8;
				HX_STACK_LINE(100)
				this->AddRemoveVisitorFromExhibitionVoid(false);
				HX_STACK_LINE(101)
				::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				::ObjectMuseum tmp10 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				int tmp11 = tmp10->GetVisitorCurrentInt();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(101)
				tmp9->SetVisitorCurrentIntVoid(tmp12);
				HX_STACK_LINE(102)
				::ObjectMuseum tmp13 = this->roomCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				::ObjectMuseum tmp14 = this->roomCurrentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				int tmp15 = tmp14->GetVisitorCurrentInt();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				tmp13->SetVisitorCurrentIntVoid(tmp16);
				HX_STACK_LINE(103)
				::ObjectMuseum tmp17 = this->floorCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(103)
				::ObjectMuseum tmp18 = this->floorCurrentObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(103)
				int tmp19 = tmp18->GetVisitorCurrentInt();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(103)
				int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(103)
				tmp17->SetVisitorCurrentIntVoid(tmp20);
			}
			HX_STACK_LINE(105)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(106)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			this->roomCurrentObject = tmp6;
			HX_STACK_LINE(107)
			::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			this->floorCurrentObject = tmp8;
			HX_STACK_LINE(108)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			this->exhibitionVisitedObjectArray->push(tmp9);
			HX_STACK_LINE(109)
			this->AddTagCounterVoid();
			HX_STACK_LINE(110)
			int tmp10 = this->targetInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			this->GenerateExhibitionTargetVoid(tmp10);
			HX_STACK_LINE(111)
			Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
			HX_STACK_LINE(112)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(113)
			while((true)){
				HX_STACK_LINE(113)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(113)
				::ObjectMuseum tmp12 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(113)
				int tmp13 = tmp12->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(113)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(113)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(113)
				if ((tmp15)){
					HX_STACK_LINE(113)
					break;
				}
				HX_STACK_LINE(114)
				int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(114)
				indexIntArray->push(tmp16);
				HX_STACK_LINE(115)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(117)
			Float tmp11 = ::Math_obj::random();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			int tmp12 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			int tmp15 = indexIntArray->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(117)
			int indexRandomInt = tmp15;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
			HX_STACK_LINE(118)
			int tmp16 = indexRandomInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(118)
			indexIntArray->remove(tmp16);
			HX_STACK_LINE(119)
			::ObjectMuseum tmp17 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(119)
			::String tmp18 = tmp17->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			::String explanationString = tmp18;		HX_STACK_VAR(explanationString,"explanationString");
			HX_STACK_LINE(120)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(121)
			while((true)){
				HX_STACK_LINE(122)
				::String tmp19 = explanationString;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(122)
				bool tmp20 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(122)
				if ((tmp21)){
					HX_STACK_LINE(123)
					int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(123)
					::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(123)
					::ObjectMuseum tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(123)
					int tmp26 = tmp25->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(123)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(123)
					tmp22 = (tmp23 < tmp27);
				}
				else{
					HX_STACK_LINE(122)
					tmp22 = false;
				}
				HX_STACK_LINE(122)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(121)
				if ((tmp23)){
					HX_STACK_LINE(121)
					break;
				}
				HX_STACK_LINE(125)
				Float tmp24 = ::Math_obj::random();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(125)
				int tmp25 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(125)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(125)
				int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(125)
				int tmp28 = indexIntArray->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(125)
				indexRandomInt = tmp28;
				HX_STACK_LINE(126)
				int tmp29 = indexRandomInt;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(126)
				indexIntArray->remove(tmp29);
				HX_STACK_LINE(127)
				::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(127)
				::String tmp31 = tmp30->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(127)
				explanationString = tmp31;
				HX_STACK_LINE(128)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(130)
			::String tmp19 = explanationString;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(130)
			this->explanationStringArray->push(tmp19);
			HX_STACK_LINE(131)
			this->visitedCorrectExhibitionBool = false;
			HX_STACK_LINE(132)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				int tmp20 = loopCounter1Int;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(133)
				int tmp21 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(133)
				bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(133)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(133)
				if ((tmp23)){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(134)
				::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(134)
				Dynamic tmp25 = tmp24->GetNameStruct();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(134)
				::String tmp26 = tmp25->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(134)
				::ObjectMuseum tmp27 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(134)
				Dynamic tmp28 = tmp27->GetNameStruct();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(134)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(134)
				bool tmp30 = (tmp26 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(134)
				if ((tmp30)){
					HX_STACK_LINE(134)
					this->visitedCorrectExhibitionBool = true;
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(135)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(137)
			bool tmp20 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(137)
			bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(137)
			if ((tmp21)){
				HX_STACK_LINE(137)
				(this->scoreInt)++;
			}
			else{
				HX_STACK_LINE(138)
				bool tmp22 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(138)
				bool tmp23 = (tmp22 == false);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(138)
				if ((tmp23)){
					HX_STACK_LINE(138)
					(this->scoreInt)--;
				}
			}
			HX_STACK_LINE(139)
			::ObjectMuseum tmp22 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(139)
			::ObjectMuseum tmp23 = tmp22->GetParentObject();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(139)
			this->roomCurrentObject = tmp23;
			HX_STACK_LINE(140)
			::ObjectMuseum tmp24 = this->roomCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(140)
			::ObjectMuseum tmp25 = tmp24->GetParentObject();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(140)
			this->floorCurrentObject = tmp25;
			HX_STACK_LINE(141)
			::ObjectMuseum tmp26 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(141)
			::ObjectMuseum tmp27 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(141)
			int tmp28 = tmp27->GetVisitorCurrentInt();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(141)
			int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(141)
			tmp26->SetVisitorCurrentIntVoid(tmp29);
			HX_STACK_LINE(142)
			::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(142)
			::ObjectMuseum tmp31 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(142)
			int tmp32 = tmp31->GetVisitorTotalInt();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(142)
			int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(142)
			tmp30->SetVisitorTotalIntVoid(tmp33);
			HX_STACK_LINE(143)
			::ObjectMuseum tmp34 = this->floorCurrentObject;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(143)
			::ObjectMuseum tmp35 = this->roomCurrentObject;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(143)
			int tmp36 = tmp35->GetVisitorCurrentInt();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(143)
			int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(143)
			tmp34->SetVisitorCurrentIntVoid(tmp37);
			HX_STACK_LINE(144)
			::ObjectMuseum tmp38 = this->floorCurrentObject;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(144)
			::ObjectMuseum tmp39 = this->roomCurrentObject;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(144)
			int tmp40 = tmp39->GetVisitorTotalInt();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(144)
			int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(144)
			tmp38->SetVisitorTotalIntVoid(tmp41);
			HX_STACK_LINE(145)
			::ObjectMuseum tmp42 = this->roomCurrentObject;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(145)
			::ObjectMuseum tmp43 = this->floorCurrentObject;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(145)
			int tmp44 = tmp43->GetVisitorCurrentInt();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(145)
			int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(145)
			tmp42->SetVisitorCurrentIntVoid(tmp45);
			HX_STACK_LINE(146)
			::ObjectMuseum tmp46 = this->roomCurrentObject;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(146)
			::ObjectMuseum tmp47 = this->floorCurrentObject;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(146)
			int tmp48 = tmp47->GetVisitorTotalInt();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(146)
			int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(146)
			tmp46->SetVisitorTotalIntVoid(tmp49);
			HX_STACK_LINE(148)
			::CollectionGlobal tmp50 = this->collectionGlobalObject;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(148)
			::String tmp51 = ::ObjectGeneratorSentence_obj::GenerateSentence3String(tmp50,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(148)
			::String threeSentenceString = tmp51;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
			HX_STACK_LINE(149)
			::String tmp52 = threeSentenceString;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(149)
			this->sentenceStringArray->push(tmp52);
			HX_STACK_LINE(151)
			Dynamic tmp53 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),151,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(151)
			::haxe::Log_obj::trace(HX_HCSTRING("TEST1.1.","\x4c","\xa8","\xa4","\xa7"),tmp53);
			HX_STACK_LINE(152)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(153)
			while((true)){
				HX_STACK_LINE(153)
				int tmp54 = loopCounter1Int;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(153)
				::CollectionGlobal tmp55 = this->collectionGlobalObject;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(153)
				int tmp56 = tmp55->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(153)
				bool tmp57 = (tmp54 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(153)
				bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(153)
				if ((tmp58)){
					HX_STACK_LINE(153)
					break;
				}
				HX_STACK_LINE(154)
				::CollectionGlobal tmp59 = this->collectionGlobalObject;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(154)
				::ObjectMuseum tmp60 = tmp59->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(154)
				tmp60->DetermineFullVoid();
				HX_STACK_LINE(155)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(157)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				int tmp54 = loopCounter1Int;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(158)
				::CollectionGlobal tmp55 = this->collectionGlobalObject;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(158)
				int tmp56 = tmp55->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(158)
				bool tmp57 = (tmp54 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(158)
				bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(158)
				if ((tmp58)){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(159)
				::CollectionGlobal tmp59 = this->collectionGlobalObject;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(159)
				::ObjectMuseum tmp60 = tmp59->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(159)
				tmp60->DetermineFullVoid();
				HX_STACK_LINE(160)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(162)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				int tmp54 = loopCounter1Int;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(163)
				::CollectionGlobal tmp55 = this->collectionGlobalObject;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(163)
				int tmp56 = tmp55->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(163)
				bool tmp57 = (tmp54 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(163)
				bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(163)
				if ((tmp58)){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(164)
				::CollectionGlobal tmp59 = this->collectionGlobalObject;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(164)
				::ObjectMuseum tmp60 = tmp59->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(164)
				Dynamic tmp61 = tmp60->GetNameStruct();		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(164)
				::String tmp62 = tmp61->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(164)
				bool tmp63 = (tmp62 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(164)
				if ((tmp63)){
					HX_STACK_LINE(165)
					::CollectionGlobal tmp64 = this->collectionGlobalObject;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(165)
					::ObjectMuseum tmp65 = tmp64->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(165)
					tmp65->DetermineChildVoid();
					HX_STACK_LINE(166)
					::CollectionGlobal tmp66 = this->collectionGlobalObject;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(166)
					::ObjectMuseum tmp67 = tmp66->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(166)
					tmp67->DetermineFullVoid();
				}
				HX_STACK_LINE(168)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(170)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(171)
			int necessaryHeightInt = (int)0;		HX_STACK_VAR(necessaryHeightInt,"necessaryHeightInt");
			HX_STACK_LINE(172)
			Dynamic tmp54 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),172,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(172)
			::haxe::Log_obj::trace(HX_HCSTRING("TEST1.2.","\x2b","\xa9","\xa4","\xa7"),tmp54);
			HX_STACK_LINE(173)
			while((true)){
				HX_STACK_LINE(173)
				int tmp55 = loopCounter1Int;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(173)
				::CollectionGlobal tmp56 = this->collectionGlobalObject;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(173)
				int tmp57 = tmp56->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(173)
				bool tmp58 = (tmp55 < tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(173)
				bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(173)
				if ((tmp59)){
					HX_STACK_LINE(173)
					break;
				}
				HX_STACK_LINE(174)
				int tmp60 = loopCounter1Int;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(174)
				Dynamic tmp61 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),174,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(174)
				::haxe::Log_obj::trace(tmp60,tmp61);
				HX_STACK_LINE(175)
				::CollectionGlobal tmp62 = this->collectionGlobalObject;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(175)
				::ObjectVisitor tmp63 = tmp62->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(175)
				tmp63->DetermineIndexLocalVoid();
				HX_STACK_LINE(176)
				Dynamic tmp64 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),176,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(176)
				::haxe::Log_obj::trace(HX_HCSTRING("TEST1.2.1","\xa6","\x5c","\x6f","\x08"),tmp64);
				HX_STACK_LINE(177)
				::CollectionGlobal tmp65 = this->collectionGlobalObject;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(177)
				::ObjectVisitor tmp66 = tmp65->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(177)
				int tmp67 = this->targetInt;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(177)
				tmp66->GenerateExhibitionTargetVoid(tmp67);
				HX_STACK_LINE(178)
				Dynamic tmp68 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),178,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(178)
				::haxe::Log_obj::trace(HX_HCSTRING("TEST1.2.2","\xa7","\x5c","\x6f","\x08"),tmp68);
				HX_STACK_LINE(179)
				::CollectionGlobal tmp69 = this->collectionGlobalObject;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(179)
				::ObjectVisitor tmp70 = tmp69->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(179)
				::ObjectVisitorUI tmp71 = tmp70->GetVisitorUIObject();		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(179)
				::CollectionGlobal tmp72 = this->collectionGlobalObject;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(179)
				::ObjectVisitor tmp73 = tmp72->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(179)
				tmp71->UpdateVoid(tmp73);
				HX_STACK_LINE(180)
				Dynamic tmp74 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),180,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(180)
				::haxe::Log_obj::trace(HX_HCSTRING("TEST1.2.3","\xa8","\x5c","\x6f","\x08"),tmp74);
				HX_STACK_LINE(181)
				int tmp75 = necessaryHeightInt;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(181)
				::CollectionGlobal tmp76 = this->collectionGlobalObject;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(181)
				::ObjectVisitor tmp77 = tmp76->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(181)
				::ObjectVisitorUI tmp78 = tmp77->GetVisitorUIObject();		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(181)
				::haxe::ui::toolkit::controls::Button tmp79 = tmp78->GetButtonObject();		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(181)
				Float tmp80 = tmp79->get_y();		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(181)
				::CollectionGlobal tmp81 = this->collectionGlobalObject;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(181)
				::ObjectVisitor tmp82 = tmp81->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(181)
				::ObjectVisitorUI tmp83 = tmp82->GetVisitorUIObject();		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(181)
				::haxe::ui::toolkit::controls::Button tmp84 = tmp83->GetButtonObject();		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(181)
				Float tmp85 = tmp84->get_height();		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(181)
				Float tmp86 = (tmp80 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(181)
				int tmp87 = ::Math_obj::round(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(181)
				bool tmp88 = (tmp75 < tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(181)
				if ((tmp88)){
					HX_STACK_LINE(182)
					Dynamic tmp89 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),182,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(182)
					::haxe::Log_obj::trace(HX_HCSTRING("TEST1.2.4","\xa9","\x5c","\x6f","\x08"),tmp89);
					HX_STACK_LINE(183)
					::CollectionGlobal tmp90 = this->collectionGlobalObject;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(183)
					::ObjectVisitor tmp91 = tmp90->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(183)
					::ObjectVisitorUI tmp92 = tmp91->GetVisitorUIObject();		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(183)
					::haxe::ui::toolkit::controls::Button tmp93 = tmp92->GetButtonObject();		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(183)
					Float tmp94 = tmp93->get_y();		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(183)
					::CollectionGlobal tmp95 = this->collectionGlobalObject;		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(183)
					::ObjectVisitor tmp96 = tmp95->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(183)
					::ObjectVisitorUI tmp97 = tmp96->GetVisitorUIObject();		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(183)
					::haxe::ui::toolkit::controls::Button tmp98 = tmp97->GetButtonObject();		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(183)
					Float tmp99 = tmp98->get_height();		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(183)
					Float tmp100 = (tmp94 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(183)
					int tmp101 = ::Math_obj::round(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(183)
					necessaryHeightInt = tmp101;
				}
				HX_STACK_LINE(185)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(187)
			::CollectionGlobal tmp55 = this->collectionGlobalObject;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(187)
			::haxe::ui::toolkit::containers::Absolute tmp56 = tmp55->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(187)
			int tmp57 = necessaryHeightInt;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(187)
			tmp56->set_height(tmp57);
			HX_STACK_LINE(188)
			Dynamic tmp58 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),188,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(188)
			::haxe::Log_obj::trace(HX_HCSTRING("TEST1.3.","\x0a","\xaa","\xa4","\xa7"),tmp58);
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",190,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b") , (int)0,false);
						__result->Add(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(190)
			Dynamic tmp59 = _Function_2_1::Block();		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(190)
			Dynamic visitorVisitExhibitionStruct = tmp59;		HX_STACK_VAR(visitorVisitExhibitionStruct,"visitorVisitExhibitionStruct");
			HX_STACK_LINE(194)
			int tmp60 = this->timeExhibitionInt;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(194)
			visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b")) = tmp60;
			HX_STACK_LINE(195)
			::ObjectMuseum tmp61 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(195)
			Dynamic tmp62 = tmp61->GetNameStruct();		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(195)
			visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c")) = tmp62->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
			HX_STACK_LINE(196)
			Dynamic tmp63 = visitorVisitExhibitionStruct;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(196)
			this->visitExhibitionStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp63);
			HX_STACK_LINE(197)
			int tmp64 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(197)
			bool tmp65 = (tmp64 > (int)1);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(197)
			if ((tmp65)){
				HX_STACK_LINE(198)
				::String tmp66 = this->GenerateSentenceVoid((int)3);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(198)
				::String threeSentenceString1 = tmp66;		HX_STACK_VAR(threeSentenceString1,"threeSentenceString1");
				HX_STACK_LINE(199)
				::String tmp67 = threeSentenceString1;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(199)
				this->sentenceStringArray->push(tmp67);
			}
			HX_STACK_LINE(201)
			int tmp66 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(201)
			::CollectionGlobal tmp67 = this->collectionGlobalObject;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(201)
			int tmp68 = tmp67->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(201)
			bool tmp69 = (tmp66 >= tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(201)
			if ((tmp69)){
				HX_STACK_LINE(201)
				this->finishedBool = true;
			}
			HX_STACK_LINE(202)
			this->timeExhibitionInt = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

::String ObjectVisitor_obj::GenerateSentenceVoid( int _amount){
	HX_STACK_FRAME("ObjectVisitor","GenerateSentenceVoid",0xc52238cb,"ObjectVisitor.GenerateSentenceVoid","ObjectVisitor.hx",205,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_amount,"_amount")
	HX_STACK_LINE(205)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateSentenceVoid,return )

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",206,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",206,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(206)
				int tmp = (_a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(206)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(206)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

Void ObjectVisitor_obj::AIAutoExhibitionChangeVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AIAutoExhibitionChangeVoid",0x2e2a95a9,"ObjectVisitor.AIAutoExhibitionChangeVoid","ObjectVisitor.hx",207,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		if ((tmp1)){
			HX_STACK_LINE(209)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(209)
			Float randomFloat = tmp2;		HX_STACK_VAR(randomFloat,"randomFloat");
			HX_STACK_LINE(210)
			hx::AddEq(this->timeAIAutoExhibitionChangeFloat,((Float)0.01));
			HX_STACK_LINE(211)
			Float tmp3 = randomFloat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(211)
			Float tmp4 = this->timeAIAutoExhibitionChangeFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(211)
			Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			if ((tmp6)){
				HX_STACK_LINE(212)
				Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(212)
				int tmp8 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(212)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(212)
				Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(212)
				int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(212)
				int randomInt = tmp11;		HX_STACK_VAR(randomInt,"randomInt");
				HX_STACK_LINE(213)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),213,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("AIAutoExhibitionChangeVoid","\x2a","\xa8","\xc9","\xe7"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(213)
				::haxe::Log_obj::trace(HX_HCSTRING("TEST1.","\xaf","\xf3","\xbc","\x87"),tmp12);
				HX_STACK_LINE(214)
				::ObjectMuseum tmp13 = this->exhibitionTargetObjectArray->__get(randomInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(214)
				this->ChangeExhibitionCurrentVoid(tmp13);
				HX_STACK_LINE(215)
				this->timeAIAutoExhibitionChangeFloat = (int)0;
				HX_STACK_LINE(216)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),216,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("AIAutoExhibitionChangeVoid","\x2a","\xa8","\xc9","\xe7"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(216)
				::haxe::Log_obj::trace(HX_HCSTRING("TEST2.","\x8e","\xf4","\xbc","\x87"),tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AIAutoExhibitionChangeVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",220,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		Dynamic tmp1 = tmp->GetChildStruct();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		int tmp2 = tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		this->indexLocalInt = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( int _targetInt){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",221,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_targetInt,"_targetInt")
		HX_STACK_LINE(222)
		::CollectionFunction_obj::ClearArray(this->exhibitionTargetObjectArray);
		HX_STACK_LINE(223)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(225)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),225,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::haxe::Log_obj::trace(HX_HCSTRING("GENERATEEXHIBITIONTEST1.","\x73","\x1e","\xb3","\x45"),tmp);
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			int tmp1 = loopCounter1Int;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(226)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			int tmp3 = tmp2->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			bool tmp4 = (tmp1 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(226)
			if ((tmp5)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(227)
			::ObjectMuseum tmp6 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			Dynamic tmp7 = tmp6->GetNameStruct();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			::String tmp8 = tmp7->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			::ObjectMuseum tmp10 = tmp9->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			Dynamic tmp11 = tmp10->GetNameStruct();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(227)
			::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			bool tmp13 = (tmp8 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			if ((tmp13)){
				HX_STACK_LINE(228)
				::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(228)
				::ObjectMuseum tmp15 = tmp14->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(228)
				this->exhibitionTargetObjectArray->push(tmp15);
			}
			HX_STACK_LINE(230)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(233)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),233,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		::haxe::Log_obj::trace(HX_HCSTRING("GENERATEEXHIBITIONTEST2.","\x52","\x1f","\xb3","\x45"),tmp1);
		HX_STACK_LINE(234)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(235)
		while((true)){
			HX_STACK_LINE(235)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			int tmp3 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			if ((tmp5)){
				HX_STACK_LINE(235)
				break;
			}
			HX_STACK_LINE(236)
			::ObjectMuseum tmp6 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			::EnumMuseumMode tmp7 = tmp6->GetMuseumModeEnum();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			bool tmp8 = (tmp7 == ::EnumMuseumMode_obj::MRK_DEL);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(236)
			if ((tmp8)){
				HX_STACK_LINE(237)
				::ObjectMuseum tmp9 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				this->exhibitionTargetObjectArray->remove(tmp9);
				HX_STACK_LINE(238)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(240)
			int tmp9 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(240)
			int tmp10 = _targetInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(240)
			bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(240)
			if ((tmp11)){
				HX_STACK_LINE(240)
				return null();
			}
			HX_STACK_LINE(241)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(245)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),245,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		::haxe::Log_obj::trace(HX_HCSTRING("GENERATEEXHIBITIONTEST3.","\x31","\x20","\xb3","\x45"),tmp2);
		HX_STACK_LINE(246)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(247)
		while((true)){
			HX_STACK_LINE(247)
			int tmp3 = loopCounter1Int;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			int tmp4 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			if ((tmp6)){
				HX_STACK_LINE(247)
				break;
			}
			HX_STACK_LINE(248)
			::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			bool tmp8 = tmp7->GetFullBool();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(248)
			bool tmp9 = (tmp8 == true);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			if ((tmp9)){
				HX_STACK_LINE(249)
				::ObjectMuseum tmp10 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(249)
				this->exhibitionTargetObjectArray->remove(tmp10);
				HX_STACK_LINE(250)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(252)
			int tmp10 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(252)
			int tmp11 = _targetInt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(252)
			bool tmp12 = (tmp10 <= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(252)
			if ((tmp12)){
				HX_STACK_LINE(252)
				return null();
			}
			HX_STACK_LINE(253)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(256)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),256,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		::haxe::Log_obj::trace(HX_HCSTRING("GENERATEEXHIBITIONTEST4.","\x10","\x21","\xb3","\x45"),tmp3);
		HX_STACK_LINE(257)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			int tmp5 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			if ((tmp7)){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(259)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(260)
			while((true)){
				HX_STACK_LINE(260)
				int tmp8 = loopCounter2Int;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(260)
				int tmp9 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(260)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(260)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(260)
				if ((tmp11)){
					HX_STACK_LINE(260)
					break;
				}
				HX_STACK_LINE(261)
				::ObjectMuseum tmp12 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(261)
				Dynamic tmp13 = tmp12->GetNameStruct();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(261)
				::String tmp14 = tmp13->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				::ObjectMuseum tmp15 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				Dynamic tmp16 = tmp15->GetNameStruct();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(261)
				::String tmp17 = tmp16->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(261)
				bool tmp18 = (tmp14 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(261)
				if ((tmp18)){
					HX_STACK_LINE(262)
					Float tmp19 = ::Math_obj::random();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(262)
					bool tmp20 = (tmp19 > ((Float)0.9));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(262)
					if ((tmp20)){
						HX_STACK_LINE(263)
						::ObjectMuseum tmp21 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(263)
						this->exhibitionTargetObjectArray->remove(tmp21);
						HX_STACK_LINE(264)
						(loopCounter1Int)--;
						HX_STACK_LINE(265)
						bool tmp22 = (loopCounter1Int < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(265)
						if ((tmp22)){
							HX_STACK_LINE(265)
							break;
						}
						HX_STACK_LINE(266)
						::String tmp23 = (loopCounter1Int + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(266)
						int tmp24 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(266)
						::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(266)
						Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),266,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(266)
						::haxe::Log_obj::trace(tmp25,tmp26);
					}
				}
				HX_STACK_LINE(269)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(271)
			int tmp8 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(271)
			int tmp9 = _targetInt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(271)
			bool tmp10 = (tmp8 <= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(271)
			if ((tmp10)){
				HX_STACK_LINE(271)
				return null();
			}
			HX_STACK_LINE(272)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(275)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),275,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		::haxe::Log_obj::trace(HX_HCSTRING("GENERATEEXHIBITIONTEST5.","\xef","\x21","\xb3","\x45"),tmp4);
		HX_STACK_LINE(276)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(277)
		while((true)){
			HX_STACK_LINE(277)
			int tmp5 = loopCounter1Int;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(277)
			int tmp6 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(277)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			if ((tmp8)){
				HX_STACK_LINE(277)
				break;
			}
			HX_STACK_LINE(278)
			Float accumPercentageFloat = (int)0;		HX_STACK_VAR(accumPercentageFloat,"accumPercentageFloat");
			HX_STACK_LINE(279)
			Float basePercentageFloat = ((Float)0.1);		HX_STACK_VAR(basePercentageFloat,"basePercentageFloat");
			HX_STACK_LINE(280)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(281)
			int tagSameCounterInt = (int)0;		HX_STACK_VAR(tagSameCounterInt,"tagSameCounterInt");
			HX_STACK_LINE(283)
			while((true)){
				HX_STACK_LINE(283)
				int tmp9 = loopCounter2Int;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(283)
				::ObjectMuseum tmp10 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(283)
				int tmp11 = tmp10->GetTagObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(283)
				bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				if ((tmp13)){
					HX_STACK_LINE(283)
					break;
				}
				HX_STACK_LINE(284)
				::ObjectMuseum tmp14 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(284)
				::ObjectTag tmp15 = tmp14->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(284)
				int tmp16 = this->tagObjectArray->indexOf(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(284)
				bool tmp17 = (tmp16 > (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(284)
				if ((tmp17)){
					HX_STACK_LINE(285)
					(tagSameCounterInt)++;
				}
				HX_STACK_LINE(287)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(289)
			Float tmp9 = basePercentageFloat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			Float tmp10 = (Float(tagSameCounterInt) / Float((int)10));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			accumPercentageFloat = tmp11;
			HX_STACK_LINE(290)
			bool tmp12 = (accumPercentageFloat >= ((Float)1.0));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			if ((tmp12)){
				HX_STACK_LINE(290)
				accumPercentageFloat = ((Float)1.0);
			}
			HX_STACK_LINE(291)
			Float tmp13 = ::Math_obj::random();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			Float tmp14 = accumPercentageFloat;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(291)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(291)
			if ((tmp15)){
				HX_STACK_LINE(292)
				::ObjectMuseum tmp16 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(292)
				this->exhibitionTargetObjectArray->remove(tmp16);
				HX_STACK_LINE(293)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(295)
			int tmp16 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(295)
			int tmp17 = _targetInt;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(295)
			bool tmp18 = (tmp16 <= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(295)
			if ((tmp18)){
				HX_STACK_LINE(295)
				return null();
			}
			HX_STACK_LINE(296)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(299)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("ObjectVisitor.hx","\x8f","\x03","\x13","\xe7"),299,HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"),HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(299)
		::haxe::Log_obj::trace(HX_HCSTRING("GENERATEEXHIBITIONTEST6.","\xce","\x22","\xb3","\x45"),tmp5);
		HX_STACK_LINE(300)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(301)
		while((true)){
			HX_STACK_LINE(301)
			int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			if ((tmp9)){
				HX_STACK_LINE(301)
				break;
			}
			HX_STACK_LINE(302)
			int sameCounterInt = (int)0;		HX_STACK_VAR(sameCounterInt,"sameCounterInt");
			HX_STACK_LINE(303)
			::ObjectMuseum tmp10 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(303)
			::ObjectMuseum tmp11 = tmp10->GetParentObject();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(303)
			::ObjectMuseum roomTargetObject = tmp11;		HX_STACK_VAR(roomTargetObject,"roomTargetObject");
			HX_STACK_LINE(304)
			::ObjectMuseum tmp12 = roomTargetObject->GetParentObject();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(304)
			::ObjectMuseum floorTargetObject = tmp12;		HX_STACK_VAR(floorTargetObject,"floorTargetObject");
			HX_STACK_LINE(305)
			::ObjectMuseum tmp13 = roomTargetObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(305)
			::ObjectMuseum tmp14 = this->roomCurrentObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(305)
			bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(305)
			if ((tmp15)){
				HX_STACK_LINE(305)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(306)
			::ObjectMuseum tmp16 = floorTargetObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(306)
			::ObjectMuseum tmp17 = this->floorCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(306)
			bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(306)
			if ((tmp18)){
				HX_STACK_LINE(306)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(307)
			bool tmp19 = (sameCounterInt == (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(307)
			if ((tmp19)){
				HX_STACK_LINE(308)
				Float tmp20 = ::Math_obj::random();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(308)
				bool tmp21 = (tmp20 > ((Float)0.50));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(308)
				if ((tmp21)){
					HX_STACK_LINE(309)
					::ObjectMuseum tmp22 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(309)
					this->exhibitionTargetObjectArray->remove(tmp22);
					HX_STACK_LINE(310)
					(loopCounter1Int)--;
				}
			}
			else{
				HX_STACK_LINE(313)
				bool tmp20 = (sameCounterInt == (int)2);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(313)
				if ((tmp20)){
					HX_STACK_LINE(314)
					Float tmp21 = ::Math_obj::random();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(314)
					bool tmp22 = (tmp21 > ((Float)0.25));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(314)
					if ((tmp22)){
						HX_STACK_LINE(315)
						::ObjectMuseum tmp23 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(315)
						this->exhibitionTargetObjectArray->remove(tmp23);
						HX_STACK_LINE(316)
						(loopCounter1Int)--;
					}
				}
			}
			HX_STACK_LINE(319)
			int tmp20 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(319)
			int tmp21 = _targetInt;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(319)
			bool tmp22 = (tmp20 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(319)
			if ((tmp22)){
				HX_STACK_LINE(319)
				return null();
			}
			HX_STACK_LINE(320)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(322)
		while((true)){
			HX_STACK_LINE(322)
			int tmp6 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(322)
			int tmp7 = _targetInt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(322)
			bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(322)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(322)
			if ((tmp9)){
				HX_STACK_LINE(322)
				break;
			}
			HX_STACK_LINE(322)
			this->exhibitionTargetObjectArray->pop().StaticCast< ::ObjectMuseum >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",324,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionCurrentObject,return )

bool ObjectVisitor_obj::GetFinishedBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetFinishedBool",0x56cdf673,"ObjectVisitor.GetFinishedBool","ObjectVisitor.hx",325,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetFinishedBool,return )

int ObjectVisitor_obj::GetIndexLocalInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetIndexLocalInt",0x9b8f97df,"ObjectVisitor.GetIndexLocalInt","ObjectVisitor.hx",326,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	int tmp = this->indexLocalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetIndexLocalInt,return )

::String ObjectVisitor_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectVisitor","GetNameString",0xa627bf73,"ObjectVisitor.GetNameString","ObjectVisitor.hx",327,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	::String tmp = this->nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetNameString,return )

int ObjectVisitor_obj::GetScoreInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetScoreInt",0x032bdaf4,"ObjectVisitor.GetScoreInt","ObjectVisitor.hx",328,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	int tmp = this->scoreInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetScoreInt,return )

Array< ::String > ObjectVisitor_obj::GetSentenceStringArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetSentenceStringArray",0x830c324e,"ObjectVisitor.GetSentenceStringArray","ObjectVisitor.hx",329,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(329)
	return this->sentenceStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetSentenceStringArray,return )

cpp::ArrayBase ObjectVisitor_obj::GetTagCounterStructArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagCounterStructArray",0x729f3dcb,"ObjectVisitor.GetTagCounterStructArray","ObjectVisitor.hx",330,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	return this->tagCounterStructArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagCounterStructArray,return )

Array< ::Dynamic > ObjectVisitor_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagObjectArray",0xee77bf97,"ObjectVisitor.GetTagObjectArray","ObjectVisitor.hx",331,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagObjectArray,return )

::ObjectVisitorUI ObjectVisitor_obj::GetVisitorUIObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitorUIObject",0xb3f4d08a,"ObjectVisitor.GetVisitorUIObject","ObjectVisitor.hx",332,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	::ObjectVisitorUI tmp = this->visitorUIObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitorUIObject,return )

bool ObjectVisitor_obj::GetVisitCorrectExhibitionBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitCorrectExhibitionBool",0x6c55624f,"ObjectVisitor.GetVisitCorrectExhibitionBool","ObjectVisitor.hx",333,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(333)
	bool tmp = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(333)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitCorrectExhibitionBool,return )

Void ObjectVisitor_obj::SetIndexLocalIntVoid( int _indexLocalInt){
{
		HX_STACK_FRAME("ObjectVisitor","SetIndexLocalIntVoid",0xfce71a47,"ObjectVisitor.SetIndexLocalIntVoid","ObjectVisitor.hx",334,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_indexLocalInt,"_indexLocalInt")
		HX_STACK_LINE(334)
		this->indexLocalInt = _indexLocalInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,SetIndexLocalIntVoid,(void))


ObjectVisitor_obj::ObjectVisitor_obj()
{
}

void ObjectVisitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectVisitor);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(exhibitionCurrentObject,"exhibitionCurrentObject");
	HX_MARK_MEMBER_NAME(exhibitionTargetObjectArray,"exhibitionTargetObjectArray");
	HX_MARK_MEMBER_NAME(exhibitionVisitedObjectArray,"exhibitionVisitedObjectArray");
	HX_MARK_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_MARK_MEMBER_NAME(finishedBool,"finishedBool");
	HX_MARK_MEMBER_NAME(floorCurrentObject,"floorCurrentObject");
	HX_MARK_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(nameString,"nameString");
	HX_MARK_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_MARK_MEMBER_NAME(scoreInt,"scoreInt");
	HX_MARK_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_MARK_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_MARK_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_MARK_MEMBER_NAME(targetInt,"targetInt");
	HX_MARK_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_MARK_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_MARK_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_MARK_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_MARK_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_MARK_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
	HX_MARK_MEMBER_NAME(visitorUIObject,"visitorUIObject");
	HX_MARK_END_CLASS();
}

void ObjectVisitor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(exhibitionCurrentObject,"exhibitionCurrentObject");
	HX_VISIT_MEMBER_NAME(exhibitionTargetObjectArray,"exhibitionTargetObjectArray");
	HX_VISIT_MEMBER_NAME(exhibitionVisitedObjectArray,"exhibitionVisitedObjectArray");
	HX_VISIT_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_VISIT_MEMBER_NAME(finishedBool,"finishedBool");
	HX_VISIT_MEMBER_NAME(floorCurrentObject,"floorCurrentObject");
	HX_VISIT_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(nameString,"nameString");
	HX_VISIT_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_VISIT_MEMBER_NAME(scoreInt,"scoreInt");
	HX_VISIT_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_VISIT_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_VISIT_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_VISIT_MEMBER_NAME(targetInt,"targetInt");
	HX_VISIT_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_VISIT_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_VISIT_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_VISIT_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_VISIT_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_VISIT_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { return nameString; }
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
		if (HX_FIELD_EQ(inName,"visitorUIObject") ) { return visitorUIObject; }
		if (HX_FIELD_EQ(inName,"GetFinishedBool") ) { return GetFinishedBool_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetIndexLocalInt") ) { return GetIndexLocalInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"roomCurrentObject") ) { return roomCurrentObject; }
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { return timeExhibitionInt; }
		if (HX_FIELD_EQ(inName,"AddTagCounterVoid") ) { return AddTagCounterVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"floorCurrentObject") ) { return floorCurrentObject; }
		if (HX_FIELD_EQ(inName,"SortTagCounterVoid") ) { return SortTagCounterVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorUIObject") ) { return GetVisitorUIObject_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sentenceStringArray") ) { return sentenceStringArray; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"GenerateSentenceVoid") ) { return GenerateSentenceVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetIndexLocalIntVoid") ) { return SetIndexLocalIntVoid_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tagCounterStructArray") ) { return tagCounterStructArray; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { return explanationStringArray; }
		if (HX_FIELD_EQ(inName,"visitMuseumStructArray") ) { return visitMuseumStructArray; }
		if (HX_FIELD_EQ(inName,"GetSentenceStringArray") ) { return GetSentenceStringArray_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { return exhibitionCurrentObject; }
		if (HX_FIELD_EQ(inName,"DetermineIndexLocalVoid") ) { return DetermineIndexLocalVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"GetTagCounterStructArray") ) { return GetTagCounterStructArray_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"visitExhibitionStructArray") ) { return visitExhibitionStructArray; }
		if (HX_FIELD_EQ(inName,"AIAutoExhibitionChangeVoid") ) { return AIAutoExhibitionChangeVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetExhibitionCurrentObject") ) { return GetExhibitionCurrentObject_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"exhibitionTargetObjectArray") ) { return exhibitionTargetObjectArray; }
		if (HX_FIELD_EQ(inName,"ChangeExhibitionCurrentVoid") ) { return ChangeExhibitionCurrentVoid_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { return exhibitionVisitedObjectArray; }
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { return visitedCorrectExhibitionBool; }
		if (HX_FIELD_EQ(inName,"GenerateExhibitionTargetVoid") ) { return GenerateExhibitionTargetVoid_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"GetVisitCorrectExhibitionBool") ) { return GetVisitCorrectExhibitionBool_dyn(); }
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
		if (HX_FIELD_EQ(inName,"visitorUIObject") ) { visitorUIObject=inValue.Cast< ::ObjectVisitorUI >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"roomCurrentObject") ) { roomCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { timeExhibitionInt=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { explanationStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitMuseumStructArray") ) { visitMuseumStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { exhibitionCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"visitExhibitionStructArray") ) { visitExhibitionStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"exhibitionTargetObjectArray") ) { exhibitionTargetObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { exhibitionVisitedObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { visitedCorrectExhibitionBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"timeAIAutoExhibitionChangeFloat") ) { timeAIAutoExhibitionChangeFloat=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectVisitor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectVisitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9"));
	outFields->push(HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92"));
	outFields->push(HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f"));
	outFields->push(HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"));
	outFields->push(HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea"));
	outFields->push(HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b"));
	outFields->push(HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"));
	outFields->push(HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"));
	outFields->push(HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"));
	outFields->push(HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"));
	outFields->push(HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"));
	outFields->push(HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"));
	outFields->push(HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"));
	outFields->push(HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"));
	outFields->push(HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"));
	outFields->push(HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"));
	outFields->push(HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"));
	outFields->push(HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"));
	outFields->push(HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"));
	outFields->push(HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectVisitor_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionCurrentObject),HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionTargetObjectArray),HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionVisitedObjectArray),HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,explanationStringArray),HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,finishedBool),HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,floorCurrentObject),HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexGlobalInt),HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsString,(int)offsetof(ObjectVisitor_obj,nameString),HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,roomCurrentObject),HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,scoreInt),HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,sentenceStringArray),HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,tagCounterStructArray),HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,tagObjectArray),HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,targetInt),HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69")},
	{hx::fsFloat,(int)offsetof(ObjectVisitor_obj,timeAIAutoExhibitionChangeFloat),HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeExhibitionInt),HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeMuseumInt),HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,visitedCorrectExhibitionBool),HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitExhibitionStructArray),HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitMuseumStructArray),HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75")},
	{hx::fsObject /*::ObjectVisitorUI*/ ,(int)offsetof(ObjectVisitor_obj,visitorUIObject),HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9"),
	HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92"),
	HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f"),
	HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"),
	HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea"),
	HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b"),
	HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"),
	HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"),
	HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"),
	HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"),
	HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"),
	HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"),
	HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"),
	HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"),
	HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"),
	HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"),
	HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"),
	HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"),
	HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"),
	HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9"),
	HX_HCSTRING("AddRemoveVisitorFromExhibitionVoid","\xb6","\xdd","\xf7","\x95"),
	HX_HCSTRING("AddTagCounterVoid","\x17","\x32","\xf9","\x30"),
	HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"),
	HX_HCSTRING("GenerateSentenceVoid","\x8c","\x84","\xc8","\x9a"),
	HX_HCSTRING("SortTagCounterVoid","\x54","\x9c","\x8b","\xe3"),
	HX_HCSTRING("AIAutoExhibitionChangeVoid","\x2a","\xa8","\xc9","\xe7"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"),
	HX_HCSTRING("GetExhibitionCurrentObject","\x33","\x60","\x47","\xbe"),
	HX_HCSTRING("GetFinishedBool","\x52","\x42","\x6d","\x6e"),
	HX_HCSTRING("GetIndexLocalInt","\x20","\xaf","\x52","\x2f"),
	HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"),
	HX_HCSTRING("GetScoreInt","\x53","\x0b","\xe2","\x18"),
	HX_HCSTRING("GetSentenceStringArray","\x4f","\xb0","\xad","\xc7"),
	HX_HCSTRING("GetTagCounterStructArray","\x0c","\xfe","\x1c","\x41"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetVisitorUIObject","\x0b","\xfa","\x1c","\x10"),
	HX_HCSTRING("GetVisitCorrectExhibitionBool","\x6e","\x16","\x32","\x7b"),
	HX_HCSTRING("SetIndexLocalIntVoid","\x08","\x66","\x8d","\xd2"),
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
	__mClass->mSetStaticField = &ObjectVisitor_obj::__SetStatic;
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

