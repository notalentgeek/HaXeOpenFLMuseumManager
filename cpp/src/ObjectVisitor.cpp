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
	HX_STACK_LINE(23)
	this->visitStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(22)
	this->visitedCorrectExhibitionBool = false;
	HX_STACK_LINE(21)
	this->timeMuseumInt = (int)0;
	HX_STACK_LINE(20)
	this->timeExhibitionInt = (int)0;
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
	HX_STACK_LINE(30)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(31)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::String tmp1 = _exhibitionCurrentNameAltString;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	::ObjectMuseum tmp2 = ::CollectionFunction_obj::FindMuseumObject(tmp,::EnumMuseumType_obj::EXH,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	this->exhibitionCurrentObject = tmp2;
	HX_STACK_LINE(32)
	this->indexGlobalInt = _indexGlobalInt;
	HX_STACK_LINE(33)
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
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",35,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(36)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(36)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(37)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			if ((tmp1)){
				HX_STACK_LINE(37)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",39,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::haxe::ds::ObjectMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::haxe::ds::ObjectMap tmp1 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			::haxe::ds::ObjectMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			tmp = tmp2;
		}
		HX_STACK_LINE(40)
		this->tagObjectMap = tmp;
		HX_STACK_LINE(41)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(42)
		int tmp1 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		bool tmp2 = (tmp1 >= (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		if ((tmp2)){
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				int tmp3 = loopCounterInt;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(43)
				int tmp4 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				int tmp5 = (tmp4 - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				::ObjectMuseum tmp6 = this->exhibitionVisitedObjectArray->__get(tmp5).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				int tmp7 = tmp6->GetTagObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				bool tmp8 = (tmp3 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(43)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(43)
				if ((tmp9)){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					int tmp10 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(44)
					int tmp11 = (tmp10 - (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(44)
					::ObjectMuseum tmp12 = this->exhibitionVisitedObjectArray->__get(tmp11).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(44)
					::ObjectTag tmp13 = tmp12->GetTagObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(44)
					::ObjectTag key = tmp13;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(44)
					::haxe::ds::ObjectMap tmp14 = this->tagObjectMap;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(44)
					::ObjectTag tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(44)
					tmp14->set(tmp15,true);
				}
				HX_STACK_LINE(45)
				(loopCounterInt)++;
			}
		}
		HX_STACK_LINE(48)
		loopCounterInt = (int)0;
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			int tmp3 = loopCounterInt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			int tmp5 = tmp4->GetTagObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			if ((tmp7)){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(50)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(51)
			::String tagCounterNameAltString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagCounterNameAltString,"tagCounterNameAltString");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",52,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(52)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			Dynamic tagCounterStruct = tmp8;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(56)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(57)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(57)
			::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")) = tmp10;
			HX_STACK_LINE(58)
			Dynamic tmp11 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(58)
			tagCounterNameAltString = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
			HX_STACK_LINE(59)
			while((true)){
				HX_STACK_LINE(59)
				int tmp12 = tagIndexInt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(59)
				int tmp13 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(59)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(59)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(59)
				if ((tmp15)){
					HX_STACK_LINE(59)
					break;
				}
				HX_STACK_LINE(60)
				::String tmp16 = tagCounterNameAltString;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				Dynamic tmp17 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(60)
				Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(60)
				::String tmp19 = tmp18->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(60)
				bool tmp20 = (tmp16 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(60)
				if ((tmp20)){
					HX_STACK_LINE(60)
					newTagBool = false;
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(61)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(64)
			bool tmp12 = (newTagBool == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(64)
			if ((tmp12)){
				HX_STACK_LINE(65)
				Dynamic tmp13 = tagCounterStruct;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(65)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
			else{
				HX_STACK_LINE(67)
				bool tmp13 = (newTagBool == false);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				if ((tmp13)){
					HX_STACK_LINE(68)
					Dynamic tmp14 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					(tmp14->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(70)
			(loopCounterInt)++;
			HX_STACK_LINE(71)
			::haxe::ds::ObjectMap tmp13 = this->tagObjectMap;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			::ObjectTag tmp14 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			tmp13->set(tmp14,true);
		}
		HX_STACK_LINE(73)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",75,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		HX_STACK_LINE(76)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		::ObjectMuseum tmp1 = tmp->GetParentObject();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		this->roomCurrentObject = tmp1;
		HX_STACK_LINE(77)
		::ObjectMuseum tmp2 = this->roomCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::ObjectMuseum tmp3 = tmp2->GetParentObject();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		this->floorCurrentObject = tmp3;
		HX_STACK_LINE(78)
		::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		if ((tmp5)){
			HX_STACK_LINE(79)
			this->AddRemoveVisitorFromExhibitionVoid(false);
			HX_STACK_LINE(80)
			::ObjectMuseum tmp6 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			::ObjectMuseum tmp7 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			int tmp8 = tmp7->GetVisitorCurrentInt();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			tmp6->SetVisitorCurrentInt(tmp9);
			HX_STACK_LINE(81)
			::ObjectMuseum tmp10 = this->roomCurrentObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			::ObjectMuseum tmp11 = this->roomCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			int tmp12 = tmp11->GetVisitorCurrentInt();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			tmp10->SetVisitorCurrentInt(tmp13);
			HX_STACK_LINE(82)
			::ObjectMuseum tmp14 = this->floorCurrentObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			::ObjectMuseum tmp15 = this->floorCurrentObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			int tmp16 = tmp15->GetVisitorCurrentInt();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(82)
			int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			tmp14->SetVisitorCurrentInt(tmp17);
		}
		HX_STACK_LINE(84)
		this->exhibitionCurrentObject = _exhibitionTargetObject;
		HX_STACK_LINE(85)
		::ObjectMuseum tmp6 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		this->exhibitionVisitedObjectArray->push(tmp6);
		HX_STACK_LINE(86)
		this->AddTagCounterVoid();
		HX_STACK_LINE(87)
		Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
		HX_STACK_LINE(88)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			int tmp7 = loopCounterInt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			::ObjectMuseum tmp8 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			int tmp9 = tmp8->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			if ((tmp11)){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(90)
			int tmp12 = loopCounterInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			indexIntArray->push(tmp12);
			HX_STACK_LINE(91)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(93)
		Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		int tmp8 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		int tmp11 = indexIntArray->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		int indexRandomInt = tmp11;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
		HX_STACK_LINE(94)
		int tmp12 = indexRandomInt;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		indexIntArray->remove(tmp12);
		HX_STACK_LINE(95)
		::ObjectMuseum tmp13 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		::String tmp14 = tmp13->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		::String explanationString = tmp14;		HX_STACK_VAR(explanationString,"explanationString");
		HX_STACK_LINE(96)
		loopCounterInt = (int)0;
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(98)
			::String tmp15 = explanationString;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(98)
			bool tmp16 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(98)
			bool tmp17 = (tmp16 == true);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(98)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(98)
			if ((tmp17)){
				HX_STACK_LINE(99)
				int tmp19 = loopCounterInt;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(99)
				::ObjectMuseum tmp20 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(99)
				::ObjectMuseum tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(99)
				int tmp22 = tmp21->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(99)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(99)
				tmp18 = (tmp19 < tmp23);
			}
			else{
				HX_STACK_LINE(98)
				tmp18 = false;
			}
			HX_STACK_LINE(98)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(97)
			if ((tmp19)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(101)
			Float tmp20 = ::Math_obj::random();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			int tmp21 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(101)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(101)
			int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(101)
			int tmp24 = indexIntArray->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(101)
			indexRandomInt = tmp24;
			HX_STACK_LINE(102)
			int tmp25 = indexRandomInt;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(102)
			indexIntArray->remove(tmp25);
			HX_STACK_LINE(103)
			::ObjectMuseum tmp26 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(103)
			::String tmp27 = tmp26->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(103)
			explanationString = tmp27;
			HX_STACK_LINE(104)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(106)
		::String tmp15 = explanationString;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		this->explanationStringArray->push(tmp15);
		HX_STACK_LINE(107)
		this->visitedCorrectExhibitionBool = false;
		HX_STACK_LINE(108)
		loopCounterInt = (int)0;
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			int tmp16 = loopCounterInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(109)
			int tmp17 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(109)
			bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(109)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(109)
			if ((tmp19)){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(110)
			::ObjectMuseum tmp20 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(110)
			Dynamic tmp21 = tmp20->GetNameStruct();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(110)
			::String tmp22 = tmp21->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(110)
			::ObjectMuseum tmp23 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(110)
			Dynamic tmp24 = tmp23->GetNameStruct();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(110)
			::String tmp25 = tmp24->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(110)
			bool tmp26 = (tmp22 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(110)
			if ((tmp26)){
				HX_STACK_LINE(110)
				this->visitedCorrectExhibitionBool = true;
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(111)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(113)
		bool tmp16 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(113)
		bool tmp17 = (tmp16 == true);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		if ((tmp17)){
			HX_STACK_LINE(113)
			(this->scoreInt)++;
		}
		else{
			HX_STACK_LINE(114)
			bool tmp18 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(114)
			bool tmp19 = (tmp18 == false);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(114)
			if ((tmp19)){
				HX_STACK_LINE(114)
				(this->scoreInt)--;
			}
		}
		HX_STACK_LINE(115)
		::ObjectMuseum tmp18 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(115)
		::ObjectMuseum tmp19 = tmp18->GetParentObject();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(115)
		this->roomCurrentObject = tmp19;
		HX_STACK_LINE(116)
		::ObjectMuseum tmp20 = this->roomCurrentObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(116)
		::ObjectMuseum tmp21 = tmp20->GetParentObject();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(116)
		this->floorCurrentObject = tmp21;
		HX_STACK_LINE(117)
		::ObjectMuseum tmp22 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(117)
		::ObjectMuseum tmp23 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(117)
		int tmp24 = tmp23->GetVisitorCurrentInt();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(117)
		int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(117)
		tmp22->SetVisitorCurrentInt(tmp25);
		HX_STACK_LINE(118)
		::ObjectMuseum tmp26 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(118)
		::ObjectMuseum tmp27 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(118)
		int tmp28 = tmp27->GetVisitorTotalInt();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(118)
		int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(118)
		tmp26->SetVisitorTotalInt(tmp29);
		HX_STACK_LINE(119)
		::ObjectMuseum tmp30 = this->floorCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(119)
		::ObjectMuseum tmp31 = this->roomCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(119)
		int tmp32 = tmp31->GetVisitorCurrentInt();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(119)
		int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(119)
		tmp30->SetVisitorCurrentInt(tmp33);
		HX_STACK_LINE(120)
		::ObjectMuseum tmp34 = this->floorCurrentObject;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(120)
		::ObjectMuseum tmp35 = this->roomCurrentObject;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(120)
		int tmp36 = tmp35->GetVisitorTotalInt();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(120)
		int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(120)
		tmp34->SetVisitorTotalInt(tmp37);
		HX_STACK_LINE(121)
		::ObjectMuseum tmp38 = this->roomCurrentObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(121)
		::ObjectMuseum tmp39 = this->floorCurrentObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(121)
		int tmp40 = tmp39->GetVisitorCurrentInt();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(121)
		int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(121)
		tmp38->SetVisitorCurrentInt(tmp41);
		HX_STACK_LINE(122)
		::ObjectMuseum tmp42 = this->roomCurrentObject;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(122)
		::ObjectMuseum tmp43 = this->floorCurrentObject;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(122)
		int tmp44 = tmp43->GetVisitorTotalInt();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(122)
		int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(122)
		tmp42->SetVisitorTotalInt(tmp45);
		HX_STACK_LINE(123)
		loopCounterInt = (int)0;
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			int tmp46 = loopCounterInt;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(124)
			::CollectionGlobal tmp47 = this->collectionGlobalObject;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(124)
			int tmp48 = tmp47->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(124)
			bool tmp49 = (tmp46 < tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(124)
			bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(124)
			if ((tmp50)){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(125)
			::CollectionGlobal tmp51 = this->collectionGlobalObject;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(125)
			::ObjectVisitor tmp52 = tmp51->GetVisitorObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(125)
			tmp52->DetermineIndexLocalVoid();
			HX_STACK_LINE(126)
			::CollectionGlobal tmp53 = this->collectionGlobalObject;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(126)
			::ObjectVisitor tmp54 = tmp53->GetVisitorObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(126)
			int tmp55 = this->targetInt;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(126)
			tmp54->GenerateExhibitionTargetVoid(tmp55);
			HX_STACK_LINE(127)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(129)
		int tmp46 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(129)
		bool tmp47 = (tmp46 > (int)1);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(129)
		if ((tmp47)){
			HX_STACK_LINE(130)
			::String tmp48 = this->GenerateSentenceVoid((int)3);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(130)
			::String threeSentenceString = tmp48;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
			HX_STACK_LINE(131)
			::String tmp49 = threeSentenceString;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(131)
			this->sentenceStringArray->push(tmp49);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",134,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		Dynamic tmp1 = tmp->GetChildStruct();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		int tmp2 = tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		this->indexLocalInt = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( int _targetInt){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",137,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_targetInt,"_targetInt")
		HX_STACK_LINE(138)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			if ((tmp4)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(141)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			Dynamic tmp6 = tmp5->GetNameStruct();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(141)
			::String tmp7 = tmp6->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(141)
			::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(141)
			::ObjectMuseum tmp9 = tmp8->GetExhibitionObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(141)
			Dynamic tmp10 = tmp9->GetNameStruct();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(141)
			::String tmp11 = tmp10->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(141)
			bool tmp12 = (tmp7 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(141)
			if ((tmp12)){
				HX_STACK_LINE(142)
				::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(142)
				::ObjectMuseum tmp14 = tmp13->GetExhibitionObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(142)
				this->exhibitionTargetObjectArray->push(tmp14);
			}
			HX_STACK_LINE(144)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(147)
		loopCounterInt = (int)0;
		HX_STACK_LINE(148)
		while((true)){
			HX_STACK_LINE(148)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(148)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(148)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			if ((tmp3)){
				HX_STACK_LINE(148)
				break;
			}
			HX_STACK_LINE(149)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			bool tmp5 = tmp4->GetFullBool();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			if ((tmp6)){
				HX_STACK_LINE(150)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(150)
				this->exhibitionTargetObjectArray->remove(tmp7);
			}
			HX_STACK_LINE(152)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			if ((tmp9)){
				HX_STACK_LINE(152)
				break;
			}
			HX_STACK_LINE(153)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(156)
		loopCounterInt = (int)0;
		HX_STACK_LINE(157)
		while((true)){
			HX_STACK_LINE(157)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(157)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			if ((tmp3)){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(158)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(159)
			while((true)){
				HX_STACK_LINE(159)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				int tmp5 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(159)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(159)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(159)
				if ((tmp7)){
					HX_STACK_LINE(159)
					break;
				}
				HX_STACK_LINE(160)
				Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(160)
				bool tmp9 = (tmp8 > ((Float)0.9));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(160)
				if ((tmp9)){
					HX_STACK_LINE(161)
					::ObjectMuseum tmp10 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(161)
					this->exhibitionTargetObjectArray->remove(tmp10);
				}
				HX_STACK_LINE(163)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(165)
			int tmp4 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			int tmp5 = _targetInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			if ((tmp6)){
				HX_STACK_LINE(165)
				break;
			}
			HX_STACK_LINE(166)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(169)
		loopCounterInt = (int)0;
		HX_STACK_LINE(170)
		while((true)){
			HX_STACK_LINE(170)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(170)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(170)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			if ((tmp3)){
				HX_STACK_LINE(170)
				break;
			}
			HX_STACK_LINE(171)
			Float accumPercentageFloat = (int)0;		HX_STACK_VAR(accumPercentageFloat,"accumPercentageFloat");
			HX_STACK_LINE(172)
			Float basePercentageFloat = ((Float)0.1);		HX_STACK_VAR(basePercentageFloat,"basePercentageFloat");
			HX_STACK_LINE(173)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(174)
			int tagSameCounterInt = (int)0;		HX_STACK_VAR(tagSameCounterInt,"tagSameCounterInt");
			HX_STACK_LINE(175)
			while((true)){
				HX_STACK_LINE(175)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(175)
				::ObjectMuseum tmp5 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(175)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(175)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(175)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(175)
				if ((tmp8)){
					HX_STACK_LINE(175)
					break;
				}
				HX_STACK_LINE(176)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::ObjectMuseum tmp10 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					::ObjectTag tmp11 = tmp10->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(176)
					::ObjectTag key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(176)
					::haxe::ds::ObjectMap tmp12 = this->tagObjectMap;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(176)
					::ObjectTag tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					tmp9 = tmp12->exists(tmp13);
				}
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(177)
					(tagSameCounterInt)++;
				}
				HX_STACK_LINE(179)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(181)
			Float tmp4 = basePercentageFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			Float tmp5 = (Float(tagSameCounterInt) / Float((int)10));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			accumPercentageFloat = tmp6;
			HX_STACK_LINE(182)
			bool tmp7 = (accumPercentageFloat >= ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			if ((tmp7)){
				HX_STACK_LINE(182)
				accumPercentageFloat = ((Float)1.0);
			}
			HX_STACK_LINE(183)
			Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			Float tmp9 = accumPercentageFloat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			if ((tmp10)){
				HX_STACK_LINE(183)
				::ObjectMuseum tmp11 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(183)
				this->exhibitionTargetObjectArray->remove(tmp11);
			}
			HX_STACK_LINE(184)
			int tmp11 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(184)
			int tmp12 = _targetInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(184)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(184)
			if ((tmp13)){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(185)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(188)
		loopCounterInt = (int)0;
		HX_STACK_LINE(189)
		while((true)){
			HX_STACK_LINE(189)
			int tmp = loopCounterInt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(189)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			if ((tmp3)){
				HX_STACK_LINE(189)
				break;
			}
			HX_STACK_LINE(190)
			int sameCounterInt = (int)0;		HX_STACK_VAR(sameCounterInt,"sameCounterInt");
			HX_STACK_LINE(191)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			::ObjectMuseum tmp5 = tmp4->GetParentObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			::ObjectMuseum roomTargetObject = tmp5;		HX_STACK_VAR(roomTargetObject,"roomTargetObject");
			HX_STACK_LINE(192)
			::ObjectMuseum tmp6 = roomTargetObject->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			::ObjectMuseum floorTargetObject = tmp6;		HX_STACK_VAR(floorTargetObject,"floorTargetObject");
			HX_STACK_LINE(193)
			::ObjectMuseum tmp7 = roomTargetObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			::ObjectMuseum tmp8 = this->roomCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(193)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(193)
			if ((tmp9)){
				HX_STACK_LINE(193)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(194)
			::ObjectMuseum tmp10 = floorTargetObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			::ObjectMuseum tmp11 = this->floorCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(194)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(194)
			if ((tmp12)){
				HX_STACK_LINE(194)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(195)
			bool tmp13 = (sameCounterInt == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			if ((tmp13)){
				HX_STACK_LINE(195)
				Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(195)
				bool tmp15 = (tmp14 > ((Float)0.50));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(195)
				if ((tmp15)){
					HX_STACK_LINE(195)
					::ObjectMuseum tmp16 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(195)
					this->exhibitionTargetObjectArray->remove(tmp16);
				}
			}
			else{
				HX_STACK_LINE(196)
				bool tmp14 = (sameCounterInt == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(196)
				if ((tmp14)){
					HX_STACK_LINE(196)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(196)
					bool tmp16 = (tmp15 > ((Float)0.25));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(196)
					if ((tmp16)){
						HX_STACK_LINE(196)
						::ObjectMuseum tmp17 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(196)
						this->exhibitionTargetObjectArray->remove(tmp17);
					}
				}
			}
			HX_STACK_LINE(197)
			int tmp14 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(197)
			int tmp15 = _targetInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(197)
			bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(197)
			if ((tmp16)){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(198)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(200)
		while((true)){
			HX_STACK_LINE(200)
			int tmp = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(200)
			int tmp1 = _targetInt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(200)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			if ((tmp3)){
				HX_STACK_LINE(200)
				break;
			}
			HX_STACK_LINE(200)
			this->exhibitionTargetObjectArray->pop().StaticCast< ::ObjectMuseum >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::String ObjectVisitor_obj::GenerateSentenceVoid( int _amount){
	HX_STACK_FRAME("ObjectVisitor","GenerateSentenceVoid",0xc52238cb,"ObjectVisitor.GenerateSentenceVoid","ObjectVisitor.hx",202,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_amount,"_amount")
	HX_STACK_LINE(202)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateSentenceVoid,return )

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",204,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",204,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(204)
				int tmp = (_a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(204)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(204)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",206,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
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
	HX_MARK_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_MARK_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_MARK_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_MARK_MEMBER_NAME(visitStructArray,"visitStructArray");
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
	HX_VISIT_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_VISIT_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_VISIT_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_VISIT_MEMBER_NAME(visitStructArray,"visitStructArray");
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
	case 16:
		if (HX_FIELD_EQ(inName,"visitStructArray") ) { return visitStructArray; }
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
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { return exhibitionCurrentObject; }
		if (HX_FIELD_EQ(inName,"DetermineIndexLocalVoid") ) { return DetermineIndexLocalVoid_dyn(); }
		break;
	case 26:
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
	case 16:
		if (HX_FIELD_EQ(inName,"visitStructArray") ) { visitStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
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
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { exhibitionCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"exhibitionTargetObjectArray") ) { exhibitionTargetObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { exhibitionVisitedObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { visitedCorrectExhibitionBool=inValue.Cast< bool >(); return inValue; }
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
	outFields->push(HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"));
	outFields->push(HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"));
	outFields->push(HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"));
	outFields->push(HX_HCSTRING("visitStructArray","\xf9","\xba","\x4e","\xf2"));
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
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeExhibitionInt),HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeMuseumInt),HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,visitedCorrectExhibitionBool),HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitStructArray),HX_HCSTRING("visitStructArray","\xf9","\xba","\x4e","\xf2")},
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
	HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"),
	HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"),
	HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"),
	HX_HCSTRING("visitStructArray","\xf9","\xba","\x4e","\xf2"),
	HX_HCSTRING("AddRemoveVisitorFromExhibitionVoid","\xb6","\xdd","\xf7","\x95"),
	HX_HCSTRING("AddTagCounterVoid","\x17","\x32","\xf9","\x30"),
	HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"),
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

