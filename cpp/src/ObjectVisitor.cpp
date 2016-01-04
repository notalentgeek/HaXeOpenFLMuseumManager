#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif

Void ObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,::String _exhibitionCurrentNameAltString,int _indexGlobalInt,::String _nameString)
{
HX_STACK_FRAME("ObjectVisitor","new",0x49949701,"ObjectVisitor.new","ObjectVisitor.hx",3,0xe713038f)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_exhibitionCurrentNameAltString,"_exhibitionCurrentNameAltString")
HX_STACK_ARG(_indexGlobalInt,"_indexGlobalInt")
HX_STACK_ARG(_nameString,"_nameString")
{
	HX_STACK_LINE(25)
	this->visitMuseumStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(24)
	this->visitExhibitionStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(23)
	this->visitedCorrectExhibitionBool = false;
	HX_STACK_LINE(22)
	this->timeMuseumInt = (int)0;
	HX_STACK_LINE(21)
	this->timeExhibitionInt = (int)0;
	HX_STACK_LINE(20)
	this->timeAIAutoExhibitionChangeFloat = ((Float)0);
	HX_STACK_LINE(19)
	this->targetInt = (int)3;
	struct _Function_1_1{
		inline static ::haxe::ds::ObjectMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",18,0xe713038f)
			{
				HX_STACK_LINE(18)
				::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(18)
				::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(18)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	this->tagObjectMap = _Function_1_1::Block();
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
	HX_STACK_LINE(32)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(33)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::String tmp1 = _exhibitionCurrentNameAltString;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	::ObjectMuseum tmp2 = ::CollectionFunction_obj::FindMuseumObject(tmp,::EnumMuseumType_obj::EXH,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	this->ChangeExhibitionCurrentVoid(tmp2);
	HX_STACK_LINE(34)
	this->indexGlobalInt = _indexGlobalInt;
	HX_STACK_LINE(35)
	this->nameString = _nameString;
}
;
	return null();
}

//ObjectVisitor_obj::~ObjectVisitor_obj() { }

Dynamic ObjectVisitor_obj::__CreateEmpty() { return  new ObjectVisitor_obj; }
hx::ObjectPtr< ObjectVisitor_obj > ObjectVisitor_obj::__new(::CollectionGlobal _collectionGlobalObject,::String _exhibitionCurrentNameAltString,int _indexGlobalInt,::String _nameString)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(_collectionGlobalObject,_exhibitionCurrentNameAltString,_indexGlobalInt,_nameString);
	return _result_;}

Dynamic ObjectVisitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void ObjectVisitor_obj::AddRemoveVisitorFromExhibitionVoid( bool _isAdd){
{
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",37,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(38)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(38)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(38)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(39)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			if ((tmp1)){
				HX_STACK_LINE(39)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(39)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(39)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",41,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::haxe::ds::ObjectMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::haxe::ds::ObjectMap tmp1 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			::haxe::ds::ObjectMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			tmp = tmp2;
		}
		HX_STACK_LINE(42)
		this->tagObjectMap = tmp;
		HX_STACK_LINE(43)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(44)
		int tmp1 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		bool tmp2 = (tmp1 >= (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				int tmp3 = loopCounterInt;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				int tmp4 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				int tmp5 = (tmp4 - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				::ObjectMuseum tmp6 = this->exhibitionVisitedObjectArray->__get(tmp5).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				int tmp7 = tmp6->GetTagObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				bool tmp8 = (tmp3 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(45)
				if ((tmp9)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					int tmp10 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					int tmp11 = (tmp10 - (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					::ObjectMuseum tmp12 = this->exhibitionVisitedObjectArray->__get(tmp11).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					::ObjectTag tmp13 = tmp12->GetTagObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					::ObjectTag key = tmp13;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(46)
					::haxe::ds::ObjectMap tmp14 = this->tagObjectMap;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(46)
					::ObjectTag tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(46)
					tmp14->set(tmp15,true);
				}
				HX_STACK_LINE(47)
				(loopCounterInt)++;
			}
		}
		HX_STACK_LINE(50)
		loopCounterInt = (int)0;
		HX_STACK_LINE(51)
		while((true)){
			HX_STACK_LINE(51)
			int tmp3 = loopCounterInt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = tmp4->GetTagObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			if ((tmp7)){
				HX_STACK_LINE(51)
				break;
			}
			HX_STACK_LINE(52)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(53)
			::String tagCounterNameAltString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagCounterNameAltString,"tagCounterNameAltString");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",54,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(54)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			Dynamic tagCounterStruct = tmp8;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(58)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(59)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")) = tmp10;
			HX_STACK_LINE(60)
			Dynamic tmp11 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			tagCounterNameAltString = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				int tmp12 = tagIndexInt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int tmp13 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(61)
				if ((tmp15)){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(62)
				::String tmp16 = tagCounterNameAltString;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(62)
				Dynamic tmp17 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(62)
				Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(62)
				::String tmp19 = tmp18->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(62)
				bool tmp20 = (tmp16 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(62)
				if ((tmp20)){
					HX_STACK_LINE(62)
					newTagBool = false;
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(63)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(66)
			bool tmp12 = (newTagBool == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(66)
			if ((tmp12)){
				HX_STACK_LINE(67)
				Dynamic tmp13 = tagCounterStruct;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
			else{
				HX_STACK_LINE(69)
				bool tmp13 = (newTagBool == false);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(69)
				if ((tmp13)){
					HX_STACK_LINE(70)
					Dynamic tmp14 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(70)
					(tmp14->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(72)
			(loopCounterInt)++;
			HX_STACK_LINE(73)
			::haxe::ds::ObjectMap tmp13 = this->tagObjectMap;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			::ObjectTag tmp14 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(73)
			tmp13->set(tmp14,true);
		}
		HX_STACK_LINE(75)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",77,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",78,0xe713038f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b") , (int)0,false);
					__result->Add(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		Dynamic visitorVisitExhibitionStruct = tmp;		HX_STACK_VAR(visitorVisitExhibitionStruct,"visitorVisitExhibitionStruct");
		HX_STACK_LINE(82)
		int tmp1 = this->timeExhibitionInt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b")) = tmp1;
		HX_STACK_LINE(83)
		::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Dynamic tmp3 = tmp2->GetNameStruct();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c")) = tmp3->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
		HX_STACK_LINE(84)
		Dynamic tmp4 = visitorVisitExhibitionStruct;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		this->visitExhibitionStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(85)
		::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		this->roomCurrentObject = tmp6;
		HX_STACK_LINE(86)
		::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(86)
		this->floorCurrentObject = tmp8;
		HX_STACK_LINE(87)
		::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		if ((tmp10)){
			HX_STACK_LINE(88)
			this->AddRemoveVisitorFromExhibitionVoid(false);
			HX_STACK_LINE(89)
			::ObjectMuseum tmp11 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			::ObjectMuseum tmp12 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			int tmp13 = tmp12->GetVisitorCurrentInt();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(89)
			int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(89)
			tmp11->SetVisitorCurrentInt(tmp14);
			HX_STACK_LINE(90)
			::ObjectMuseum tmp15 = this->roomCurrentObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(90)
			::ObjectMuseum tmp16 = this->roomCurrentObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(90)
			int tmp17 = tmp16->GetVisitorCurrentInt();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(90)
			int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(90)
			tmp15->SetVisitorCurrentInt(tmp18);
			HX_STACK_LINE(91)
			::ObjectMuseum tmp19 = this->floorCurrentObject;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(91)
			::ObjectMuseum tmp20 = this->floorCurrentObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(91)
			int tmp21 = tmp20->GetVisitorCurrentInt();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(91)
			int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(91)
			tmp19->SetVisitorCurrentInt(tmp22);
		}
		HX_STACK_LINE(93)
		this->exhibitionCurrentObject = _exhibitionTargetObject;
		HX_STACK_LINE(94)
		::ObjectMuseum tmp11 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(94)
		this->exhibitionVisitedObjectArray->push(tmp11);
		HX_STACK_LINE(95)
		this->AddTagCounterVoid();
		HX_STACK_LINE(96)
		Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
		HX_STACK_LINE(97)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			int tmp12 = loopCounterInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(98)
			::ObjectMuseum tmp13 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(98)
			int tmp14 = tmp13->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(98)
			bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(98)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(98)
			if ((tmp16)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(99)
			int tmp17 = loopCounterInt;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(99)
			indexIntArray->push(tmp17);
			HX_STACK_LINE(100)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(102)
		Float tmp12 = ::Math_obj::random();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(102)
		int tmp13 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(102)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(102)
		int tmp16 = indexIntArray->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(102)
		int indexRandomInt = tmp16;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
		HX_STACK_LINE(103)
		int tmp17 = indexRandomInt;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(103)
		indexIntArray->remove(tmp17);
		HX_STACK_LINE(104)
		::ObjectMuseum tmp18 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(104)
		::String tmp19 = tmp18->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(104)
		::String explanationString = tmp19;		HX_STACK_VAR(explanationString,"explanationString");
		HX_STACK_LINE(105)
		loopCounterInt = (int)0;
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(107)
			::String tmp20 = explanationString;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(107)
			bool tmp21 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(107)
			bool tmp22 = (tmp21 == true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(107)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(107)
			if ((tmp22)){
				HX_STACK_LINE(108)
				int tmp24 = loopCounterInt;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(108)
				::ObjectMuseum tmp25 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(108)
				::ObjectMuseum tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(108)
				int tmp27 = tmp26->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(108)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(108)
				tmp23 = (tmp24 < tmp28);
			}
			else{
				HX_STACK_LINE(107)
				tmp23 = false;
			}
			HX_STACK_LINE(107)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(106)
			if ((tmp24)){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(110)
			Float tmp25 = ::Math_obj::random();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(110)
			int tmp26 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(110)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(110)
			int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(110)
			int tmp29 = indexIntArray->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(110)
			indexRandomInt = tmp29;
			HX_STACK_LINE(111)
			int tmp30 = indexRandomInt;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(111)
			indexIntArray->remove(tmp30);
			HX_STACK_LINE(112)
			::ObjectMuseum tmp31 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(112)
			::String tmp32 = tmp31->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(112)
			explanationString = tmp32;
			HX_STACK_LINE(113)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(115)
		::String tmp20 = explanationString;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(115)
		this->explanationStringArray->push(tmp20);
		HX_STACK_LINE(116)
		this->visitedCorrectExhibitionBool = false;
		HX_STACK_LINE(117)
		loopCounterInt = (int)0;
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			int tmp21 = loopCounterInt;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(118)
			int tmp22 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(118)
			bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(118)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(118)
			if ((tmp24)){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(119)
			::ObjectMuseum tmp25 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(119)
			Dynamic tmp26 = tmp25->GetNameStruct();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(119)
			::String tmp27 = tmp26->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(119)
			::ObjectMuseum tmp28 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(119)
			Dynamic tmp29 = tmp28->GetNameStruct();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(119)
			::String tmp30 = tmp29->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(119)
			bool tmp31 = (tmp27 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(119)
			if ((tmp31)){
				HX_STACK_LINE(119)
				this->visitedCorrectExhibitionBool = true;
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(120)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(122)
		bool tmp21 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(122)
		bool tmp22 = (tmp21 == true);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(122)
		if ((tmp22)){
			HX_STACK_LINE(122)
			(this->scoreInt)++;
		}
		else{
			HX_STACK_LINE(123)
			bool tmp23 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(123)
			bool tmp24 = (tmp23 == false);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(123)
			if ((tmp24)){
				HX_STACK_LINE(123)
				(this->scoreInt)--;
			}
		}
		HX_STACK_LINE(124)
		::ObjectMuseum tmp23 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(124)
		::ObjectMuseum tmp24 = tmp23->GetParentObject();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(124)
		this->roomCurrentObject = tmp24;
		HX_STACK_LINE(125)
		::ObjectMuseum tmp25 = this->roomCurrentObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(125)
		::ObjectMuseum tmp26 = tmp25->GetParentObject();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(125)
		this->floorCurrentObject = tmp26;
		HX_STACK_LINE(126)
		::ObjectMuseum tmp27 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(126)
		::ObjectMuseum tmp28 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(126)
		int tmp29 = tmp28->GetVisitorCurrentInt();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(126)
		int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(126)
		tmp27->SetVisitorCurrentInt(tmp30);
		HX_STACK_LINE(127)
		::ObjectMuseum tmp31 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(127)
		::ObjectMuseum tmp32 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(127)
		int tmp33 = tmp32->GetVisitorTotalInt();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(127)
		int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(127)
		tmp31->SetVisitorTotalInt(tmp34);
		HX_STACK_LINE(128)
		::ObjectMuseum tmp35 = this->floorCurrentObject;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(128)
		::ObjectMuseum tmp36 = this->roomCurrentObject;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(128)
		int tmp37 = tmp36->GetVisitorCurrentInt();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(128)
		int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(128)
		tmp35->SetVisitorCurrentInt(tmp38);
		HX_STACK_LINE(129)
		::ObjectMuseum tmp39 = this->floorCurrentObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(129)
		::ObjectMuseum tmp40 = this->roomCurrentObject;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(129)
		int tmp41 = tmp40->GetVisitorTotalInt();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(129)
		int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(129)
		tmp39->SetVisitorTotalInt(tmp42);
		HX_STACK_LINE(130)
		::ObjectMuseum tmp43 = this->roomCurrentObject;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(130)
		::ObjectMuseum tmp44 = this->floorCurrentObject;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(130)
		int tmp45 = tmp44->GetVisitorCurrentInt();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(130)
		int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(130)
		tmp43->SetVisitorCurrentInt(tmp46);
		HX_STACK_LINE(131)
		::ObjectMuseum tmp47 = this->roomCurrentObject;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(131)
		::ObjectMuseum tmp48 = this->floorCurrentObject;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(131)
		int tmp49 = tmp48->GetVisitorTotalInt();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(131)
		int tmp50 = (tmp49 + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(131)
		tmp47->SetVisitorTotalInt(tmp50);
		HX_STACK_LINE(132)
		loopCounterInt = (int)0;
		HX_STACK_LINE(133)
		while((true)){
			HX_STACK_LINE(133)
			int tmp51 = loopCounterInt;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(133)
			::CollectionGlobal tmp52 = this->collectionGlobalObject;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(133)
			int tmp53 = tmp52->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(133)
			bool tmp54 = (tmp51 < tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(133)
			bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(133)
			if ((tmp55)){
				HX_STACK_LINE(133)
				break;
			}
			HX_STACK_LINE(134)
			::CollectionGlobal tmp56 = this->collectionGlobalObject;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(134)
			::ObjectVisitor tmp57 = tmp56->GetVisitorObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(134)
			tmp57->DetermineIndexLocalVoid();
			HX_STACK_LINE(135)
			::CollectionGlobal tmp58 = this->collectionGlobalObject;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(135)
			::ObjectVisitor tmp59 = tmp58->GetVisitorObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(135)
			int tmp60 = this->targetInt;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(135)
			tmp59->GenerateExhibitionTargetVoid(tmp60);
			HX_STACK_LINE(136)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(138)
		int tmp51 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(138)
		bool tmp52 = (tmp51 > (int)1);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(138)
		if ((tmp52)){
			HX_STACK_LINE(139)
			::String tmp53 = this->GenerateSentenceVoid((int)3);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(139)
			::String threeSentenceString = tmp53;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
			HX_STACK_LINE(140)
			::String tmp54 = threeSentenceString;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(140)
			this->sentenceStringArray->push(tmp54);
		}
		HX_STACK_LINE(142)
		int tmp53 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(142)
		::CollectionGlobal tmp54 = this->collectionGlobalObject;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(142)
		int tmp55 = tmp54->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(142)
		bool tmp56 = (tmp53 >= tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(142)
		if ((tmp56)){
			HX_STACK_LINE(143)
			this->finishedBool = true;
		}
		HX_STACK_LINE(145)
		this->timeExhibitionInt = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

Void ObjectVisitor_obj::AIAutoExhibitionChangeVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AIAutoExhibitionChangeVoid",0x2e2a95a9,"ObjectVisitor.AIAutoExhibitionChangeVoid","ObjectVisitor.hx",147,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(149)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			Float randomFloat = tmp2;		HX_STACK_VAR(randomFloat,"randomFloat");
			HX_STACK_LINE(150)
			(this->timeAIAutoExhibitionChangeFloat)++;
			HX_STACK_LINE(151)
			Float tmp3 = randomFloat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			Float tmp4 = this->timeAIAutoExhibitionChangeFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			if ((tmp6)){
				HX_STACK_LINE(152)
				Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(152)
				int tmp8 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(152)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(152)
				Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(152)
				int randomInt = tmp11;		HX_STACK_VAR(randomInt,"randomInt");
				HX_STACK_LINE(153)
				::ObjectMuseum tmp12 = this->exhibitionTargetObjectArray->__get(randomInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(153)
				this->ChangeExhibitionCurrentVoid(tmp12);
				HX_STACK_LINE(154)
				this->timeAIAutoExhibitionChangeFloat = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AIAutoExhibitionChangeVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",158,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		Dynamic tmp1 = tmp->GetChildStruct();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		int tmp2 = tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		this->indexLocalInt = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( int _targetInt){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",161,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_targetInt,"_targetInt")
		HX_STACK_LINE(162)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(164)
		while((true)){
			HX_STACK_LINE(164)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(164)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(164)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			if ((tmp4)){
				HX_STACK_LINE(164)
				break;
			}
			HX_STACK_LINE(165)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			Dynamic tmp6 = tmp5->GetNameStruct();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			::String tmp7 = tmp6->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			::ObjectMuseum tmp9 = tmp8->GetExhibitionObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			Dynamic tmp10 = tmp9->GetNameStruct();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(165)
			::String tmp11 = tmp10->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(165)
			bool tmp12 = (tmp7 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(165)
			if ((tmp12)){
				HX_STACK_LINE(166)
				::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(166)
				::ObjectMuseum tmp14 = tmp13->GetExhibitionObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(166)
				this->exhibitionTargetObjectArray->push(tmp14);
			}
			HX_STACK_LINE(168)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(171)
		loopCounterInt = (int)0;
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(172)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			if ((tmp3)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(173)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			bool tmp5 = tmp4->GetFullBool();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			if ((tmp6)){
				HX_STACK_LINE(174)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				this->exhibitionTargetObjectArray->remove(tmp7);
			}
			HX_STACK_LINE(176)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(176)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			if ((tmp9)){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(177)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(180)
		loopCounterInt = (int)0;
		HX_STACK_LINE(181)
		while((true)){
			HX_STACK_LINE(181)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(181)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(181)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			if ((tmp3)){
				HX_STACK_LINE(181)
				break;
			}
			HX_STACK_LINE(182)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(183)
			while((true)){
				HX_STACK_LINE(183)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(183)
				int tmp5 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				if ((tmp7)){
					HX_STACK_LINE(183)
					break;
				}
				HX_STACK_LINE(184)
				Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(184)
				bool tmp9 = (tmp8 > ((Float)0.9));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(184)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::ObjectMuseum tmp10 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this->exhibitionTargetObjectArray->remove(tmp10);
				}
				HX_STACK_LINE(187)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(189)
			int tmp4 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			int tmp5 = _targetInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			if ((tmp6)){
				HX_STACK_LINE(189)
				break;
			}
			HX_STACK_LINE(190)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(193)
		loopCounterInt = (int)0;
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(194)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			if ((tmp3)){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(195)
			Float accumPercentageFloat = (int)0;		HX_STACK_VAR(accumPercentageFloat,"accumPercentageFloat");
			HX_STACK_LINE(196)
			Float basePercentageFloat = ((Float)0.1);		HX_STACK_VAR(basePercentageFloat,"basePercentageFloat");
			HX_STACK_LINE(197)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(198)
			int tagSameCounterInt = (int)0;		HX_STACK_VAR(tagSameCounterInt,"tagSameCounterInt");
			HX_STACK_LINE(199)
			while((true)){
				HX_STACK_LINE(199)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(199)
				::ObjectMuseum tmp5 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(199)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(199)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(199)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(199)
				if ((tmp8)){
					HX_STACK_LINE(199)
					break;
				}
				HX_STACK_LINE(200)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::ObjectMuseum tmp10 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(200)
					::ObjectTag tmp11 = tmp10->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(200)
					::ObjectTag key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(200)
					::haxe::ds::ObjectMap tmp12 = this->tagObjectMap;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(200)
					::ObjectTag tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(200)
					tmp9 = tmp12->exists(tmp13);
				}
				HX_STACK_LINE(200)
				if ((tmp9)){
					HX_STACK_LINE(201)
					(tagSameCounterInt)++;
				}
				HX_STACK_LINE(203)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(205)
			Float tmp4 = basePercentageFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(205)
			Float tmp5 = (Float(tagSameCounterInt) / Float((int)10));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(205)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			accumPercentageFloat = tmp6;
			HX_STACK_LINE(206)
			bool tmp7 = (accumPercentageFloat >= ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			if ((tmp7)){
				HX_STACK_LINE(206)
				accumPercentageFloat = ((Float)1.0);
			}
			HX_STACK_LINE(207)
			Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(207)
			Float tmp9 = accumPercentageFloat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(207)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(207)
			if ((tmp10)){
				HX_STACK_LINE(207)
				::ObjectMuseum tmp11 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(207)
				this->exhibitionTargetObjectArray->remove(tmp11);
			}
			HX_STACK_LINE(208)
			int tmp11 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(208)
			int tmp12 = _targetInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(208)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(208)
			if ((tmp13)){
				HX_STACK_LINE(208)
				break;
			}
			HX_STACK_LINE(209)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(212)
		loopCounterInt = (int)0;
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(213)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			if ((tmp3)){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(214)
			int sameCounterInt = (int)0;		HX_STACK_VAR(sameCounterInt,"sameCounterInt");
			HX_STACK_LINE(215)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			::ObjectMuseum tmp5 = tmp4->GetParentObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			::ObjectMuseum roomTargetObject = tmp5;		HX_STACK_VAR(roomTargetObject,"roomTargetObject");
			HX_STACK_LINE(216)
			::ObjectMuseum tmp6 = roomTargetObject->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(216)
			::ObjectMuseum floorTargetObject = tmp6;		HX_STACK_VAR(floorTargetObject,"floorTargetObject");
			HX_STACK_LINE(217)
			::ObjectMuseum tmp7 = roomTargetObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			::ObjectMuseum tmp8 = this->roomCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			if ((tmp9)){
				HX_STACK_LINE(217)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(218)
			::ObjectMuseum tmp10 = floorTargetObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(218)
			::ObjectMuseum tmp11 = this->floorCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(218)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(218)
			if ((tmp12)){
				HX_STACK_LINE(218)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(219)
			bool tmp13 = (sameCounterInt == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(219)
			if ((tmp13)){
				HX_STACK_LINE(219)
				Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(219)
				bool tmp15 = (tmp14 > ((Float)0.50));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(219)
				if ((tmp15)){
					HX_STACK_LINE(219)
					::ObjectMuseum tmp16 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(219)
					this->exhibitionTargetObjectArray->remove(tmp16);
				}
			}
			else{
				HX_STACK_LINE(220)
				bool tmp14 = (sameCounterInt == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(220)
				if ((tmp14)){
					HX_STACK_LINE(220)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(220)
					bool tmp16 = (tmp15 > ((Float)0.25));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(220)
					if ((tmp16)){
						HX_STACK_LINE(220)
						::ObjectMuseum tmp17 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(220)
						this->exhibitionTargetObjectArray->remove(tmp17);
					}
				}
			}
			HX_STACK_LINE(221)
			int tmp14 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(221)
			int tmp15 = _targetInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(221)
			bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(221)
			if ((tmp16)){
				HX_STACK_LINE(221)
				break;
			}
			HX_STACK_LINE(222)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(224)
		while((true)){
			HX_STACK_LINE(224)
			int tmp = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(224)
			int tmp1 = _targetInt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(224)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			if ((tmp3)){
				HX_STACK_LINE(224)
				break;
			}
			HX_STACK_LINE(224)
			this->exhibitionTargetObjectArray->pop().StaticCast< ::ObjectMuseum >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::String ObjectVisitor_obj::GenerateSentenceVoid( int _amount){
	HX_STACK_FRAME("ObjectVisitor","GenerateSentenceVoid",0xc52238cb,"ObjectVisitor.GenerateSentenceVoid","ObjectVisitor.hx",226,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_amount,"_amount")
	HX_STACK_LINE(226)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateSentenceVoid,return )

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",228,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",228,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(228)
				int tmp = (_a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(228)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(228)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",230,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionCurrentObject,return )


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
	HX_MARK_MEMBER_NAME(tagObjectMap,"tagObjectMap");
	HX_MARK_MEMBER_NAME(targetInt,"targetInt");
	HX_MARK_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_MARK_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_MARK_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_MARK_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_MARK_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_MARK_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
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
	HX_VISIT_MEMBER_NAME(tagObjectMap,"tagObjectMap");
	HX_VISIT_MEMBER_NAME(targetInt,"targetInt");
	HX_VISIT_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_VISIT_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_VISIT_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_VISIT_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_VISIT_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_VISIT_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
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
	case 12:
		if (HX_FIELD_EQ(inName,"finishedBool") ) { return finishedBool; }
		if (HX_FIELD_EQ(inName,"tagObjectMap") ) { return tagObjectMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		if (HX_FIELD_EQ(inName,"timeMuseumInt") ) { return timeMuseumInt; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"roomCurrentObject") ) { return roomCurrentObject; }
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { return timeExhibitionInt; }
		if (HX_FIELD_EQ(inName,"AddTagCounterVoid") ) { return AddTagCounterVoid_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"floorCurrentObject") ) { return floorCurrentObject; }
		if (HX_FIELD_EQ(inName,"SortTagCounterVoid") ) { return SortTagCounterVoid_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sentenceStringArray") ) { return sentenceStringArray; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"GenerateSentenceVoid") ) { return GenerateSentenceVoid_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tagCounterStructArray") ) { return tagCounterStructArray; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { return explanationStringArray; }
		if (HX_FIELD_EQ(inName,"visitMuseumStructArray") ) { return visitMuseumStructArray; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { return exhibitionCurrentObject; }
		if (HX_FIELD_EQ(inName,"DetermineIndexLocalVoid") ) { return DetermineIndexLocalVoid_dyn(); }
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
		if (HX_FIELD_EQ(inName,"tagObjectMap") ) { tagObjectMap=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { indexLocalInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeMuseumInt") ) { timeMuseumInt=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { indexGlobalInt=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_HCSTRING("tagObjectMap","\x63","\x2f","\x4b","\xe2"));
	outFields->push(HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"));
	outFields->push(HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"));
	outFields->push(HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"));
	outFields->push(HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"));
	outFields->push(HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"));
	outFields->push(HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"));
	outFields->push(HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"));
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
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(ObjectVisitor_obj,tagObjectMap),HX_HCSTRING("tagObjectMap","\x63","\x2f","\x4b","\xe2")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,targetInt),HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69")},
	{hx::fsFloat,(int)offsetof(ObjectVisitor_obj,timeAIAutoExhibitionChangeFloat),HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeExhibitionInt),HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeMuseumInt),HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,visitedCorrectExhibitionBool),HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitExhibitionStructArray),HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitMuseumStructArray),HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75")},
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
	HX_HCSTRING("tagObjectMap","\x63","\x2f","\x4b","\xe2"),
	HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"),
	HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"),
	HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"),
	HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"),
	HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"),
	HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"),
	HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"),
	HX_HCSTRING("AddRemoveVisitorFromExhibitionVoid","\xb6","\xdd","\xf7","\x95"),
	HX_HCSTRING("AddTagCounterVoid","\x17","\x32","\xf9","\x30"),
	HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"),
	HX_HCSTRING("AIAutoExhibitionChangeVoid","\x2a","\xa8","\xc9","\xe7"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"),
	HX_HCSTRING("GenerateSentenceVoid","\x8c","\x84","\xc8","\x9a"),
	HX_HCSTRING("SortTagCounterVoid","\x54","\x9c","\x8b","\xe3"),
	HX_HCSTRING("GetExhibitionCurrentObject","\x33","\x60","\x47","\xbe"),
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

