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
	HX_STACK_LINE(20)
	this->visitStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(19)
	this->visitedCorrectExhibitionBool = false;
	HX_STACK_LINE(18)
	this->timeMuseumInt = (int)0;
	HX_STACK_LINE(17)
	this->timeExhibitionInt = (int)0;
	struct _Function_1_1{
		inline static ::haxe::ds::ObjectMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",16,0xe713038f)
			{
				HX_STACK_LINE(16)
				::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(16)
				::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(16)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(16)
	this->tagObjectMap = _Function_1_1::Block();
	HX_STACK_LINE(15)
	this->tagCounterStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(14)
	this->sentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(13)
	this->scoreInt = (int)0;
	HX_STACK_LINE(12)
	this->nameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(11)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(10)
	this->indexGlobalInt = (int)-1;
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
	HX_STACK_LINE(27)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(28)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::String tmp1 = _exhibitionCurrentNameAltString;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	::ObjectMuseum tmp2 = ::CollectionFunction_obj::FindMuseumObject(tmp,::EnumMuseumType_obj::EXH,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	this->exhibitionCurrentObject = tmp2;
	HX_STACK_LINE(29)
	this->indexGlobalInt = _indexGlobalInt;
	HX_STACK_LINE(30)
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
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",32,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(33)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(34)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			if ((tmp1)){
				HX_STACK_LINE(34)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(34)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(34)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",36,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::haxe::ds::ObjectMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::haxe::ds::ObjectMap tmp1 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			::haxe::ds::ObjectMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			tmp = tmp2;
		}
		HX_STACK_LINE(37)
		this->tagObjectMap = tmp;
		HX_STACK_LINE(38)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(39)
		int tmp1 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		bool tmp2 = (tmp1 >= (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		if ((tmp2)){
			HX_STACK_LINE(40)
			while((true)){
				HX_STACK_LINE(40)
				int tmp3 = loopCounterInt;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				int tmp4 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				int tmp5 = (tmp4 - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				::ObjectMuseum tmp6 = this->exhibitionVisitedObjectArray->__get(tmp5).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				int tmp7 = tmp6->GetTagObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(40)
				bool tmp8 = (tmp3 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(40)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(40)
				if ((tmp9)){
					HX_STACK_LINE(40)
					break;
				}
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					int tmp10 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(41)
					int tmp11 = (tmp10 - (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(41)
					::ObjectMuseum tmp12 = this->exhibitionVisitedObjectArray->__get(tmp11).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(41)
					::ObjectTag tmp13 = tmp12->GetTagObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(41)
					::ObjectTag key = tmp13;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(41)
					::haxe::ds::ObjectMap tmp14 = this->tagObjectMap;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(41)
					::ObjectTag tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(41)
					tmp14->set(tmp15,true);
				}
				HX_STACK_LINE(42)
				(loopCounterInt)++;
			}
		}
		HX_STACK_LINE(45)
		loopCounterInt = (int)0;
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			int tmp3 = loopCounterInt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			int tmp5 = tmp4->GetTagObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			if ((tmp7)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(47)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(48)
			::String tagCounterNameAltString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagCounterNameAltString,"tagCounterNameAltString");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",49,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(49)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			Dynamic tagCounterStruct = tmp8;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(53)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(54)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")) = tmp10;
			HX_STACK_LINE(55)
			Dynamic tmp11 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			tagCounterNameAltString = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				int tmp12 = tagIndexInt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				int tmp13 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(56)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(56)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(56)
				if ((tmp15)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(57)
				::String tmp16 = tagCounterNameAltString;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(57)
				Dynamic tmp17 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(57)
				Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(57)
				::String tmp19 = tmp18->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(57)
				bool tmp20 = (tmp16 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(57)
				if ((tmp20)){
					HX_STACK_LINE(57)
					newTagBool = false;
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(58)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(61)
			bool tmp12 = (newTagBool == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			if ((tmp12)){
				HX_STACK_LINE(62)
				Dynamic tmp13 = tagCounterStruct;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(62)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
			else{
				HX_STACK_LINE(64)
				bool tmp13 = (newTagBool == false);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(64)
				if ((tmp13)){
					HX_STACK_LINE(65)
					Dynamic tmp14 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(65)
					(tmp14->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(67)
			(loopCounterInt)++;
			HX_STACK_LINE(68)
			::haxe::ds::ObjectMap tmp13 = this->tagObjectMap;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			::ObjectTag tmp14 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			tmp13->set(tmp14,true);
		}
		HX_STACK_LINE(70)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",72,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		HX_STACK_LINE(73)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::ObjectMuseum tmp1 = tmp->GetParentObject();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		::ObjectMuseum roomCurrentObject = tmp1;		HX_STACK_VAR(roomCurrentObject,"roomCurrentObject");
		HX_STACK_LINE(74)
		::ObjectMuseum tmp2 = roomCurrentObject->GetParentObject();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		::ObjectMuseum floorCurrentObject = tmp2;		HX_STACK_VAR(floorCurrentObject,"floorCurrentObject");
		HX_STACK_LINE(75)
		::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		if ((tmp4)){
			HX_STACK_LINE(76)
			this->AddRemoveVisitorFromExhibitionVoid(false);
			HX_STACK_LINE(77)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			::ObjectMuseum tmp6 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			int tmp7 = tmp6->GetVisitorCurrentInt();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			tmp5->SetVisitorCurrentInt(tmp8);
			HX_STACK_LINE(78)
			int tmp9 = roomCurrentObject->GetVisitorCurrentInt();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(78)
			roomCurrentObject->SetVisitorCurrentInt(tmp10);
			HX_STACK_LINE(79)
			int tmp11 = floorCurrentObject->GetVisitorCurrentInt();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(79)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(79)
			floorCurrentObject->SetVisitorCurrentInt(tmp12);
		}
		HX_STACK_LINE(81)
		this->exhibitionCurrentObject = _exhibitionTargetObject;
		HX_STACK_LINE(82)
		::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		this->exhibitionVisitedObjectArray->push(tmp5);
		HX_STACK_LINE(83)
		this->AddTagCounterVoid();
		HX_STACK_LINE(84)
		Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
		HX_STACK_LINE(85)
		int loopCounterInt = (int)0;		HX_STACK_VAR(loopCounterInt,"loopCounterInt");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			int tmp6 = loopCounterInt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			::ObjectMuseum tmp7 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			int tmp8 = tmp7->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			if ((tmp10)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(87)
			int tmp11 = loopCounterInt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(87)
			indexIntArray->push(tmp11);
			HX_STACK_LINE(88)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(90)
		Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		int tmp7 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(90)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		int tmp9 = ::Math_obj::round(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		int tmp10 = indexIntArray->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(90)
		int indexRandomInt = tmp10;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
		HX_STACK_LINE(91)
		int tmp11 = indexRandomInt;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		indexIntArray->remove(tmp11);
		HX_STACK_LINE(92)
		::ObjectMuseum tmp12 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(92)
		::String tmp13 = tmp12->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(92)
		::String explanationString = tmp13;		HX_STACK_VAR(explanationString,"explanationString");
		HX_STACK_LINE(93)
		loopCounterInt = (int)0;
		HX_STACK_LINE(94)
		while((true)){
			HX_STACK_LINE(95)
			::String tmp14 = explanationString;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(95)
			bool tmp15 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(95)
			bool tmp16 = (tmp15 == true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(95)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(95)
			if ((tmp16)){
				HX_STACK_LINE(96)
				int tmp18 = loopCounterInt;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(96)
				::ObjectMuseum tmp19 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(96)
				::ObjectMuseum tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(96)
				int tmp21 = tmp20->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(96)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(96)
				tmp17 = (tmp18 < tmp22);
			}
			else{
				HX_STACK_LINE(95)
				tmp17 = false;
			}
			HX_STACK_LINE(95)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(94)
			if ((tmp18)){
				HX_STACK_LINE(94)
				break;
			}
			HX_STACK_LINE(98)
			Float tmp19 = ::Math_obj::random();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(98)
			int tmp20 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(98)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(98)
			int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(98)
			int tmp23 = indexIntArray->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(98)
			indexRandomInt = tmp23;
			HX_STACK_LINE(99)
			int tmp24 = indexRandomInt;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(99)
			indexIntArray->remove(tmp24);
			HX_STACK_LINE(100)
			::ObjectMuseum tmp25 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(100)
			::String tmp26 = tmp25->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(100)
			explanationString = tmp26;
			HX_STACK_LINE(101)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(103)
		::String tmp14 = explanationString;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		this->explanationStringArray->push(tmp14);
		HX_STACK_LINE(104)
		this->visitedCorrectExhibitionBool = false;
		HX_STACK_LINE(105)
		loopCounterInt = (int)0;
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(106)
			int tmp15 = loopCounterInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			int tmp16 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(106)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(106)
			if ((tmp18)){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(107)
			::ObjectMuseum tmp19 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(107)
			Dynamic tmp20 = tmp19->GetNameStruct();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(107)
			::String tmp21 = tmp20->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(107)
			::ObjectMuseum tmp22 = this->exhibitionTargetObjectArray->__get(loopCounterInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(107)
			Dynamic tmp23 = tmp22->GetNameStruct();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(107)
			::String tmp24 = tmp23->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(107)
			bool tmp25 = (tmp21 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(107)
			if ((tmp25)){
				HX_STACK_LINE(107)
				this->visitedCorrectExhibitionBool = true;
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(108)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(110)
		bool tmp15 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(110)
		bool tmp16 = (tmp15 == true);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(110)
		if ((tmp16)){
			HX_STACK_LINE(110)
			(this->scoreInt)++;
		}
		else{
			HX_STACK_LINE(111)
			bool tmp17 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(111)
			bool tmp18 = (tmp17 == false);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(111)
			if ((tmp18)){
				HX_STACK_LINE(111)
				(this->scoreInt)--;
			}
		}
		HX_STACK_LINE(112)
		::ObjectMuseum tmp17 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(112)
		::ObjectMuseum tmp18 = tmp17->GetParentObject();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(112)
		roomCurrentObject = tmp18;
		HX_STACK_LINE(113)
		::ObjectMuseum tmp19 = roomCurrentObject->GetParentObject();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(113)
		floorCurrentObject = tmp19;
		HX_STACK_LINE(114)
		::ObjectMuseum tmp20 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(114)
		::ObjectMuseum tmp21 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(114)
		int tmp22 = tmp21->GetVisitorCurrentInt();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(114)
		int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(114)
		tmp20->SetVisitorCurrentInt(tmp23);
		HX_STACK_LINE(115)
		::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(115)
		::ObjectMuseum tmp25 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(115)
		int tmp26 = tmp25->GetVisitorTotalInt();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(115)
		int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(115)
		tmp24->SetVisitorTotalInt(tmp27);
		HX_STACK_LINE(116)
		int tmp28 = roomCurrentObject->GetVisitorCurrentInt();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(116)
		int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(116)
		floorCurrentObject->SetVisitorCurrentInt(tmp29);
		HX_STACK_LINE(117)
		int tmp30 = roomCurrentObject->GetVisitorTotalInt();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(117)
		int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(117)
		floorCurrentObject->SetVisitorTotalInt(tmp31);
		HX_STACK_LINE(118)
		int tmp32 = floorCurrentObject->GetVisitorCurrentInt();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(118)
		int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(118)
		roomCurrentObject->SetVisitorCurrentInt(tmp33);
		HX_STACK_LINE(119)
		int tmp34 = floorCurrentObject->GetVisitorTotalInt();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(119)
		int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(119)
		roomCurrentObject->SetVisitorTotalInt(tmp35);
		HX_STACK_LINE(120)
		loopCounterInt = (int)0;
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			int tmp36 = loopCounterInt;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(121)
			::CollectionGlobal tmp37 = this->collectionGlobalObject;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(121)
			int tmp38 = tmp37->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(121)
			bool tmp39 = (tmp36 < tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(121)
			bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(121)
			if ((tmp40)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(122)
			::CollectionGlobal tmp41 = this->collectionGlobalObject;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(122)
			::ObjectVisitor tmp42 = tmp41->GetVisitorObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(122)
			tmp42->DetermineIndexLocalVoid();
			HX_STACK_LINE(123)
			::CollectionGlobal tmp43 = this->collectionGlobalObject;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(123)
			::ObjectVisitor tmp44 = tmp43->GetVisitorObjectArray()->__get(loopCounterInt).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(123)
			tmp44->GenerateExhibitionTargetVoid();
			HX_STACK_LINE(124)
			(loopCounterInt)++;
		}
		HX_STACK_LINE(126)
		int tmp36 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(126)
		bool tmp37 = (tmp36 > (int)1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(126)
		if ((tmp37)){
			HX_STACK_LINE(127)
			::String tmp38 = this->GenerateSentenceVoid((int)3);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(127)
			::String threeSentenceString = tmp38;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
			HX_STACK_LINE(128)
			::String tmp39 = threeSentenceString;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(128)
			this->sentenceStringArray->push(tmp39);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",131,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		Dynamic tmp1 = tmp->GetChildStruct();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		int tmp2 = tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		this->indexLocalInt = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",134,0xe713038f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::String ObjectVisitor_obj::GenerateSentenceVoid( int _amount){
	HX_STACK_FRAME("ObjectVisitor","GenerateSentenceVoid",0xc52238cb,"ObjectVisitor.GenerateSentenceVoid","ObjectVisitor.hx",136,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_amount,"_amount")
	HX_STACK_LINE(136)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateSentenceVoid,return )

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",138,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",138,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(138)
				int tmp = (_a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(138)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(138)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",140,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionCurrentObject,return )

::String ObjectVisitor_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectVisitor","GetNameString",0xa627bf73,"ObjectVisitor.GetNameString","ObjectVisitor.hx",141,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	::String tmp = this->nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetNameString,return )


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
	HX_MARK_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(nameString,"nameString");
	HX_MARK_MEMBER_NAME(scoreInt,"scoreInt");
	HX_MARK_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_MARK_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_MARK_MEMBER_NAME(tagObjectMap,"tagObjectMap");
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
	HX_VISIT_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(nameString,"nameString");
	HX_VISIT_MEMBER_NAME(scoreInt,"scoreInt");
	HX_VISIT_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_VISIT_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_VISIT_MEMBER_NAME(tagObjectMap,"tagObjectMap");
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
		if (HX_FIELD_EQ(inName,"GetNameString") ) { return GetNameString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visitStructArray") ) { return visitStructArray; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { return timeExhibitionInt; }
		if (HX_FIELD_EQ(inName,"AddTagCounterVoid") ) { return AddTagCounterVoid_dyn(); }
		break;
	case 18:
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
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { timeExhibitionInt=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"));
	outFields->push(HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"));
	outFields->push(HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"));
	outFields->push(HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"));
	outFields->push(HX_HCSTRING("tagObjectMap","\x63","\x2f","\x4b","\xe2"));
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
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexGlobalInt),HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsString,(int)offsetof(ObjectVisitor_obj,nameString),HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,scoreInt),HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,sentenceStringArray),HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,tagCounterStructArray),HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(ObjectVisitor_obj,tagObjectMap),HX_HCSTRING("tagObjectMap","\x63","\x2f","\x4b","\xe2")},
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
	HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"),
	HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"),
	HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"),
	HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"),
	HX_HCSTRING("tagObjectMap","\x63","\x2f","\x4b","\xe2"),
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
	HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"),
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

