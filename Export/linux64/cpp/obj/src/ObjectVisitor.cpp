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

Void ObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,::ObjectMuseum _exhibitionCurrentObject,int _indexGlobalInt,::String _nameString)
{
HX_STACK_FRAME("ObjectVisitor","new",0x49949701,"ObjectVisitor.new","ObjectVisitor.hx",3,0xe713038f)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_exhibitionCurrentObject,"_exhibitionCurrentObject")
HX_STACK_ARG(_indexGlobalInt,"_indexGlobalInt")
HX_STACK_ARG(_nameString,"_nameString")
{
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
	HX_STACK_LINE(32)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(33)
	this->indexGlobalInt = _indexGlobalInt;
	HX_STACK_LINE(34)
	::ObjectMuseum tmp = _exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->ChangeExhibitionCurrentVoid(tmp);
	HX_STACK_LINE(35)
	this->nameString = _nameString;
	HX_STACK_LINE(36)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	tmp1->GetVisitorObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
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
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",38,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(39)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(39)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(40)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			if ((tmp1)){
				HX_STACK_LINE(40)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(40)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",42,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(46)
		this->tagObjectArray = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(48)
		int tmp = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = (tmp >= (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(49)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				int tmp3 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				int tmp4 = (tmp3 - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				::ObjectMuseum tmp5 = this->exhibitionVisitedObjectArray->__get(tmp4).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				bool tmp7 = (tmp2 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(50)
				if ((tmp8)){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(51)
				int tmp9 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(51)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(51)
				::ObjectMuseum tmp11 = this->exhibitionVisitedObjectArray->__get(tmp10).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(51)
				::ObjectTag tmp12 = tmp11->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(51)
				::ObjectTag tagObject = tmp12;		HX_STACK_VAR(tagObject,"tagObject");
				HX_STACK_LINE(52)
				::ObjectTag tmp13 = tagObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(52)
				int tmp14 = this->tagObjectArray->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(52)
				bool tmp15 = (tmp14 == (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(52)
				if ((tmp15)){
					HX_STACK_LINE(52)
					::ObjectTag tmp16 = tagObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(52)
					this->tagObjectArray->push(tmp16);
				}
				HX_STACK_LINE(53)
				(loopCounter1Int)++;
			}
		}
		HX_STACK_LINE(57)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			int tmp4 = tmp3->GetTagObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			if ((tmp6)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(59)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(60)
			::String tagNameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagNameString,"tagNameString");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",64,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(64)
			Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			Dynamic tagCounterStruct = tmp7;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(69)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(70)
			::ObjectMuseum tmp8 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			::ObjectTag tmp9 = tmp8->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")) = tmp9;
			HX_STACK_LINE(71)
			::String tmp10 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(71)
			tagNameString = tmp10;
			HX_STACK_LINE(72)
			while((true)){
				HX_STACK_LINE(72)
				int tmp11 = tagIndexInt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(72)
				int tmp12 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(72)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(72)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(72)
				if ((tmp14)){
					HX_STACK_LINE(72)
					break;
				}
				HX_STACK_LINE(73)
				::String tmp15 = tagNameString;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				Dynamic tmp16 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				::String tmp17 = tmp16->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(73)
				bool tmp18 = (tmp15 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(73)
				if ((tmp18)){
					HX_STACK_LINE(73)
					newTagBool = false;
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(74)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(76)
			bool tmp11 = (newTagBool == true);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(76)
			if ((tmp11)){
				HX_STACK_LINE(76)
				Dynamic tmp12 = tagCounterStruct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(76)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
			}
			else{
				HX_STACK_LINE(77)
				bool tmp12 = (newTagBool == false);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(77)
				if ((tmp12)){
					HX_STACK_LINE(77)
					Dynamic tmp13 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(77)
					(tmp13->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(78)
			(loopCounter1Int)++;
			HX_STACK_LINE(80)
			::ObjectTag tmp12 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(80)
			int tmp13 = this->tagObjectArray->indexOf(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(80)
			bool tmp14 = (tmp13 == (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(80)
			if ((tmp14)){
				HX_STACK_LINE(81)
				::ObjectTag tmp15 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(81)
				this->tagObjectArray->push(tmp15);
			}
		}
		HX_STACK_LINE(84)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",86,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		HX_STACK_LINE(87)
		Dynamic tmp = _exhibitionTargetObject->GetNameStruct();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::String tmp1 = tmp->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		bool tmp2 = (tmp1 == HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		if ((tmp2)){
			HX_STACK_LINE(88)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(89)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			this->roomCurrentObject = tmp3;
			HX_STACK_LINE(90)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			this->floorCurrentObject = tmp4;
			HX_STACK_LINE(91)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			this->exhibitionVisitedObjectArray->push(tmp5);
		}
		else{
			HX_STACK_LINE(94)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			if ((tmp4)){
				HX_STACK_LINE(95)
				::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				this->roomCurrentObject = tmp6;
				HX_STACK_LINE(96)
				::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				this->floorCurrentObject = tmp8;
				HX_STACK_LINE(97)
				this->AddRemoveVisitorFromExhibitionVoid(false);
				HX_STACK_LINE(98)
				::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				::ObjectMuseum tmp10 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(98)
				int tmp11 = tmp10->GetVisitorCurrentInt();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(98)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(98)
				tmp9->SetVisitorCurrentIntVoid(tmp12);
				HX_STACK_LINE(99)
				::ObjectMuseum tmp13 = this->roomCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(99)
				::ObjectMuseum tmp14 = this->roomCurrentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(99)
				int tmp15 = tmp14->GetVisitorCurrentInt();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(99)
				int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(99)
				tmp13->SetVisitorCurrentIntVoid(tmp16);
				HX_STACK_LINE(100)
				::ObjectMuseum tmp17 = this->floorCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(100)
				::ObjectMuseum tmp18 = this->floorCurrentObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(100)
				int tmp19 = tmp18->GetVisitorCurrentInt();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(100)
				int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(100)
				tmp17->SetVisitorCurrentIntVoid(tmp20);
			}
			HX_STACK_LINE(102)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(103)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			this->roomCurrentObject = tmp6;
			HX_STACK_LINE(104)
			::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			this->floorCurrentObject = tmp8;
			HX_STACK_LINE(105)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			this->exhibitionVisitedObjectArray->push(tmp9);
			HX_STACK_LINE(106)
			this->AddTagCounterVoid();
			HX_STACK_LINE(107)
			int tmp10 = this->targetInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(107)
			this->GenerateExhibitionTargetVoid(tmp10);
			HX_STACK_LINE(108)
			Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
			HX_STACK_LINE(109)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(110)
				::ObjectMuseum tmp12 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(110)
				int tmp13 = tmp12->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(110)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(110)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(110)
				if ((tmp15)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(111)
				int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(111)
				indexIntArray->push(tmp16);
				HX_STACK_LINE(112)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(114)
			Float tmp11 = ::Math_obj::random();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			int tmp12 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			int tmp15 = indexIntArray->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(114)
			int indexRandomInt = tmp15;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
			HX_STACK_LINE(115)
			int tmp16 = indexRandomInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(115)
			indexIntArray->remove(tmp16);
			HX_STACK_LINE(116)
			::ObjectMuseum tmp17 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			::String tmp18 = tmp17->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(116)
			::String explanationString = tmp18;		HX_STACK_VAR(explanationString,"explanationString");
			HX_STACK_LINE(117)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(118)
			while((true)){
				HX_STACK_LINE(119)
				::String tmp19 = explanationString;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(119)
				bool tmp20 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(119)
				bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(119)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(119)
				if ((tmp21)){
					HX_STACK_LINE(120)
					int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(120)
					::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(120)
					::ObjectMuseum tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(120)
					int tmp26 = tmp25->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(120)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(120)
					tmp22 = (tmp23 < tmp27);
				}
				else{
					HX_STACK_LINE(119)
					tmp22 = false;
				}
				HX_STACK_LINE(119)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(118)
				if ((tmp23)){
					HX_STACK_LINE(118)
					break;
				}
				HX_STACK_LINE(122)
				Float tmp24 = ::Math_obj::random();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(122)
				int tmp25 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(122)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(122)
				int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(122)
				int tmp28 = indexIntArray->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(122)
				indexRandomInt = tmp28;
				HX_STACK_LINE(123)
				int tmp29 = indexRandomInt;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(123)
				indexIntArray->remove(tmp29);
				HX_STACK_LINE(124)
				::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(124)
				::String tmp31 = tmp30->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(124)
				explanationString = tmp31;
				HX_STACK_LINE(125)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(127)
			::String tmp19 = explanationString;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(127)
			this->explanationStringArray->push(tmp19);
			HX_STACK_LINE(128)
			this->visitedCorrectExhibitionBool = false;
			HX_STACK_LINE(129)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(130)
			while((true)){
				HX_STACK_LINE(130)
				int tmp20 = loopCounter1Int;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(130)
				int tmp21 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(130)
				bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(130)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(130)
				if ((tmp23)){
					HX_STACK_LINE(130)
					break;
				}
				HX_STACK_LINE(131)
				::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(131)
				Dynamic tmp25 = tmp24->GetNameStruct();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(131)
				::String tmp26 = tmp25->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(131)
				::ObjectMuseum tmp27 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(131)
				Dynamic tmp28 = tmp27->GetNameStruct();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(131)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(131)
				bool tmp30 = (tmp26 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(131)
				if ((tmp30)){
					HX_STACK_LINE(131)
					this->visitedCorrectExhibitionBool = true;
					HX_STACK_LINE(131)
					break;
				}
				HX_STACK_LINE(132)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(134)
			bool tmp20 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(134)
			bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(134)
			if ((tmp21)){
				HX_STACK_LINE(134)
				(this->scoreInt)++;
			}
			else{
				HX_STACK_LINE(135)
				bool tmp22 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(135)
				bool tmp23 = (tmp22 == false);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(135)
				if ((tmp23)){
					HX_STACK_LINE(135)
					(this->scoreInt)--;
				}
			}
			HX_STACK_LINE(136)
			::ObjectMuseum tmp22 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(136)
			::ObjectMuseum tmp23 = tmp22->GetParentObject();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(136)
			this->roomCurrentObject = tmp23;
			HX_STACK_LINE(137)
			::ObjectMuseum tmp24 = this->roomCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(137)
			::ObjectMuseum tmp25 = tmp24->GetParentObject();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(137)
			this->floorCurrentObject = tmp25;
			HX_STACK_LINE(138)
			::ObjectMuseum tmp26 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(138)
			::ObjectMuseum tmp27 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(138)
			int tmp28 = tmp27->GetVisitorCurrentInt();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(138)
			int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(138)
			tmp26->SetVisitorCurrentIntVoid(tmp29);
			HX_STACK_LINE(139)
			::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(139)
			::ObjectMuseum tmp31 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(139)
			int tmp32 = tmp31->GetVisitorTotalInt();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(139)
			int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(139)
			tmp30->SetVisitorTotalIntVoid(tmp33);
			HX_STACK_LINE(140)
			::ObjectMuseum tmp34 = this->floorCurrentObject;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(140)
			::ObjectMuseum tmp35 = this->roomCurrentObject;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(140)
			int tmp36 = tmp35->GetVisitorCurrentInt();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(140)
			int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(140)
			tmp34->SetVisitorCurrentIntVoid(tmp37);
			HX_STACK_LINE(141)
			::ObjectMuseum tmp38 = this->floorCurrentObject;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(141)
			::ObjectMuseum tmp39 = this->roomCurrentObject;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(141)
			int tmp40 = tmp39->GetVisitorTotalInt();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(141)
			int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(141)
			tmp38->SetVisitorTotalIntVoid(tmp41);
			HX_STACK_LINE(142)
			::ObjectMuseum tmp42 = this->roomCurrentObject;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(142)
			::ObjectMuseum tmp43 = this->floorCurrentObject;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(142)
			int tmp44 = tmp43->GetVisitorCurrentInt();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(142)
			int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(142)
			tmp42->SetVisitorCurrentIntVoid(tmp45);
			HX_STACK_LINE(143)
			::ObjectMuseum tmp46 = this->roomCurrentObject;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(143)
			::ObjectMuseum tmp47 = this->floorCurrentObject;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(143)
			int tmp48 = tmp47->GetVisitorTotalInt();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(143)
			int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(143)
			tmp46->SetVisitorTotalIntVoid(tmp49);
			HX_STACK_LINE(144)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(146)
			::CollectionGlobal tmp50 = this->collectionGlobalObject;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(146)
			::String tmp51 = ::ObjectGeneratorSentence_obj::GenerateSentence3String(tmp50,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(146)
			::String threeSentenceString = tmp51;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
			HX_STACK_LINE(147)
			::String tmp52 = threeSentenceString;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(147)
			this->sentenceStringArray->push(tmp52);
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				int tmp53 = loopCounter1Int;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(149)
				::CollectionGlobal tmp54 = this->collectionGlobalObject;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(149)
				int tmp55 = tmp54->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(149)
				bool tmp56 = (tmp53 < tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(149)
				bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(149)
				if ((tmp57)){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(150)
				::CollectionGlobal tmp58 = this->collectionGlobalObject;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(150)
				::ObjectVisitor tmp59 = tmp58->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(150)
				tmp59->DetermineIndexLocalVoid();
				HX_STACK_LINE(151)
				::CollectionGlobal tmp60 = this->collectionGlobalObject;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(151)
				::ObjectVisitor tmp61 = tmp60->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(151)
				int tmp62 = this->targetInt;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(151)
				tmp61->GenerateExhibitionTargetVoid(tmp62);
				HX_STACK_LINE(152)
				(loopCounter1Int)++;
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",154,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b") , (int)0,false);
						__result->Add(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(154)
			Dynamic tmp53 = _Function_2_1::Block();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(154)
			Dynamic visitorVisitExhibitionStruct = tmp53;		HX_STACK_VAR(visitorVisitExhibitionStruct,"visitorVisitExhibitionStruct");
			HX_STACK_LINE(158)
			int tmp54 = this->timeExhibitionInt;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(158)
			visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b")) = tmp54;
			HX_STACK_LINE(159)
			::ObjectMuseum tmp55 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(159)
			Dynamic tmp56 = tmp55->GetNameStruct();		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(159)
			visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c")) = tmp56->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
			HX_STACK_LINE(160)
			Dynamic tmp57 = visitorVisitExhibitionStruct;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(160)
			this->visitExhibitionStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp57);
			HX_STACK_LINE(161)
			int tmp58 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(161)
			bool tmp59 = (tmp58 > (int)1);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(161)
			if ((tmp59)){
				HX_STACK_LINE(162)
				::String tmp60 = this->GenerateSentenceVoid((int)3);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(162)
				::String threeSentenceString1 = tmp60;		HX_STACK_VAR(threeSentenceString1,"threeSentenceString1");
				HX_STACK_LINE(163)
				::String tmp61 = threeSentenceString1;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(163)
				this->sentenceStringArray->push(tmp61);
			}
			HX_STACK_LINE(165)
			int tmp60 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(165)
			::CollectionGlobal tmp61 = this->collectionGlobalObject;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(165)
			int tmp62 = tmp61->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(165)
			bool tmp63 = (tmp60 >= tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(165)
			if ((tmp63)){
				HX_STACK_LINE(165)
				this->finishedBool = true;
			}
			HX_STACK_LINE(166)
			this->timeExhibitionInt = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",169,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		Dynamic tmp1 = tmp->GetChildStruct();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		int tmp2 = tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		this->indexLocalInt = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( int _targetInt){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",172,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_targetInt,"_targetInt")
		HX_STACK_LINE(173)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(175)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(175)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			if ((tmp4)){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(176)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			Dynamic tmp6 = tmp5->GetNameStruct();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			::String tmp7 = tmp6->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(176)
			::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			::ObjectMuseum tmp9 = tmp8->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			Dynamic tmp10 = tmp9->GetNameStruct();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			::String tmp11 = tmp10->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(176)
			bool tmp12 = (tmp7 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			if ((tmp12)){
				HX_STACK_LINE(177)
				::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(177)
				::ObjectMuseum tmp14 = tmp13->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(177)
				this->exhibitionTargetObjectArray->push(tmp14);
			}
			HX_STACK_LINE(179)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(182)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(183)
		while((true)){
			HX_STACK_LINE(183)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(183)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			if ((tmp3)){
				HX_STACK_LINE(183)
				break;
			}
			HX_STACK_LINE(184)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			::EnumMuseumMode tmp5 = tmp4->GetMuseumModeEnum();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			bool tmp6 = (tmp5 == ::EnumMuseumMode_obj::MRK_DEL);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			if ((tmp6)){
				HX_STACK_LINE(185)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(185)
				this->exhibitionTargetObjectArray->remove(tmp7);
			}
			HX_STACK_LINE(187)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(190)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(191)
		while((true)){
			HX_STACK_LINE(191)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(191)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(191)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(191)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			if ((tmp3)){
				HX_STACK_LINE(191)
				break;
			}
			HX_STACK_LINE(192)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			bool tmp5 = tmp4->GetFullBool();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			if ((tmp6)){
				HX_STACK_LINE(193)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(193)
				this->exhibitionTargetObjectArray->remove(tmp7);
			}
			HX_STACK_LINE(195)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(195)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(195)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(195)
			if ((tmp9)){
				HX_STACK_LINE(195)
				break;
			}
			HX_STACK_LINE(196)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(199)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(200)
		while((true)){
			HX_STACK_LINE(200)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(200)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(200)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			if ((tmp3)){
				HX_STACK_LINE(200)
				break;
			}
			HX_STACK_LINE(201)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(202)
			while((true)){
				HX_STACK_LINE(202)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(202)
				int tmp5 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(202)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				if ((tmp7)){
					HX_STACK_LINE(202)
					break;
				}
				HX_STACK_LINE(203)
				Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				bool tmp9 = (tmp8 > ((Float)0.9));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(203)
				if ((tmp9)){
					HX_STACK_LINE(204)
					::ObjectMuseum tmp10 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(204)
					this->exhibitionTargetObjectArray->remove(tmp10);
				}
				HX_STACK_LINE(206)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(208)
			int tmp4 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			int tmp5 = _targetInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			if ((tmp6)){
				HX_STACK_LINE(208)
				break;
			}
			HX_STACK_LINE(209)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(212)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
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
			Float accumPercentageFloat = (int)0;		HX_STACK_VAR(accumPercentageFloat,"accumPercentageFloat");
			HX_STACK_LINE(215)
			Float basePercentageFloat = ((Float)0.1);		HX_STACK_VAR(basePercentageFloat,"basePercentageFloat");
			HX_STACK_LINE(216)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(217)
			int tagSameCounterInt = (int)0;		HX_STACK_VAR(tagSameCounterInt,"tagSameCounterInt");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				::ObjectMuseum tmp5 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(219)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(219)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(219)
				if ((tmp8)){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(220)
				::ObjectMuseum tmp9 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(220)
				::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(220)
				int tmp11 = this->tagObjectArray->indexOf(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(220)
				bool tmp12 = (tmp11 > (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				if ((tmp12)){
					HX_STACK_LINE(221)
					(tagSameCounterInt)++;
				}
				HX_STACK_LINE(223)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(225)
			Float tmp4 = basePercentageFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			Float tmp5 = (Float(tagSameCounterInt) / Float((int)10));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			accumPercentageFloat = tmp6;
			HX_STACK_LINE(226)
			bool tmp7 = (accumPercentageFloat >= ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(226)
			if ((tmp7)){
				HX_STACK_LINE(226)
				accumPercentageFloat = ((Float)1.0);
			}
			HX_STACK_LINE(227)
			Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			Float tmp9 = accumPercentageFloat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			if ((tmp10)){
				HX_STACK_LINE(227)
				::ObjectMuseum tmp11 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				this->exhibitionTargetObjectArray->remove(tmp11);
			}
			HX_STACK_LINE(228)
			int tmp11 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(228)
			int tmp12 = _targetInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(228)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(228)
			if ((tmp13)){
				HX_STACK_LINE(228)
				break;
			}
			HX_STACK_LINE(229)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(232)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(233)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			if ((tmp3)){
				HX_STACK_LINE(233)
				break;
			}
			HX_STACK_LINE(234)
			int sameCounterInt = (int)0;		HX_STACK_VAR(sameCounterInt,"sameCounterInt");
			HX_STACK_LINE(235)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			::ObjectMuseum tmp5 = tmp4->GetParentObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			::ObjectMuseum roomTargetObject = tmp5;		HX_STACK_VAR(roomTargetObject,"roomTargetObject");
			HX_STACK_LINE(236)
			::ObjectMuseum tmp6 = roomTargetObject->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			::ObjectMuseum floorTargetObject = tmp6;		HX_STACK_VAR(floorTargetObject,"floorTargetObject");
			HX_STACK_LINE(237)
			::ObjectMuseum tmp7 = roomTargetObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			::ObjectMuseum tmp8 = this->roomCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(237)
			if ((tmp9)){
				HX_STACK_LINE(237)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(238)
			::ObjectMuseum tmp10 = floorTargetObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(238)
			::ObjectMuseum tmp11 = this->floorCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(238)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(238)
			if ((tmp12)){
				HX_STACK_LINE(238)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(239)
			bool tmp13 = (sameCounterInt == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(239)
			if ((tmp13)){
				HX_STACK_LINE(239)
				Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(239)
				bool tmp15 = (tmp14 > ((Float)0.50));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(239)
				if ((tmp15)){
					HX_STACK_LINE(239)
					::ObjectMuseum tmp16 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(239)
					this->exhibitionTargetObjectArray->remove(tmp16);
				}
			}
			else{
				HX_STACK_LINE(240)
				bool tmp14 = (sameCounterInt == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(240)
				if ((tmp14)){
					HX_STACK_LINE(240)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(240)
					bool tmp16 = (tmp15 > ((Float)0.25));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(240)
					if ((tmp16)){
						HX_STACK_LINE(240)
						::ObjectMuseum tmp17 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(240)
						this->exhibitionTargetObjectArray->remove(tmp17);
					}
				}
			}
			HX_STACK_LINE(241)
			int tmp14 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			int tmp15 = _targetInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(241)
			bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(241)
			if ((tmp16)){
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(242)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(244)
		while((true)){
			HX_STACK_LINE(244)
			int tmp = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(244)
			int tmp1 = _targetInt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			if ((tmp3)){
				HX_STACK_LINE(244)
				break;
			}
			HX_STACK_LINE(244)
			this->exhibitionTargetObjectArray->pop().StaticCast< ::ObjectMuseum >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::String ObjectVisitor_obj::GenerateSentenceVoid( int _amount){
	HX_STACK_FRAME("ObjectVisitor","GenerateSentenceVoid",0xc52238cb,"ObjectVisitor.GenerateSentenceVoid","ObjectVisitor.hx",246,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_amount,"_amount")
	HX_STACK_LINE(246)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateSentenceVoid,return )

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",247,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",247,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(247)
				int tmp = (_a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(247)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(247)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

Void ObjectVisitor_obj::AIAutoExhibitionChangeVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AIAutoExhibitionChangeVoid",0x2e2a95a9,"ObjectVisitor.AIAutoExhibitionChangeVoid","ObjectVisitor.hx",248,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		if ((tmp1)){
			HX_STACK_LINE(250)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			Float randomFloat = tmp2;		HX_STACK_VAR(randomFloat,"randomFloat");
			HX_STACK_LINE(251)
			hx::AddEq(this->timeAIAutoExhibitionChangeFloat,((Float)0.01));
			HX_STACK_LINE(252)
			Float tmp3 = randomFloat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			Float tmp4 = this->timeAIAutoExhibitionChangeFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			if ((tmp6)){
				HX_STACK_LINE(253)
				Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(253)
				int tmp8 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(253)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(253)
				Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(253)
				int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(253)
				int randomInt = tmp11;		HX_STACK_VAR(randomInt,"randomInt");
				HX_STACK_LINE(254)
				::ObjectMuseum tmp12 = this->exhibitionTargetObjectArray->__get(randomInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(254)
				this->ChangeExhibitionCurrentVoid(tmp12);
				HX_STACK_LINE(255)
				this->timeAIAutoExhibitionChangeFloat = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AIAutoExhibitionChangeVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",259,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionCurrentObject,return )

bool ObjectVisitor_obj::GetFinishedBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetFinishedBool",0x56cdf673,"ObjectVisitor.GetFinishedBool","ObjectVisitor.hx",260,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetFinishedBool,return )

::String ObjectVisitor_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectVisitor","GetNameString",0xa627bf73,"ObjectVisitor.GetNameString","ObjectVisitor.hx",261,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	::String tmp = this->nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetNameString,return )

int ObjectVisitor_obj::GetScoreInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetScoreInt",0x032bdaf4,"ObjectVisitor.GetScoreInt","ObjectVisitor.hx",262,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	int tmp = this->scoreInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetScoreInt,return )

Array< ::String > ObjectVisitor_obj::GetSentenceStringArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetSentenceStringArray",0x830c324e,"ObjectVisitor.GetSentenceStringArray","ObjectVisitor.hx",263,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	return this->sentenceStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetSentenceStringArray,return )

cpp::ArrayBase ObjectVisitor_obj::GetTagCounterStructArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagCounterStructArray",0x729f3dcb,"ObjectVisitor.GetTagCounterStructArray","ObjectVisitor.hx",264,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	return this->tagCounterStructArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagCounterStructArray,return )

Array< ::Dynamic > ObjectVisitor_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagObjectArray",0xee77bf97,"ObjectVisitor.GetTagObjectArray","ObjectVisitor.hx",265,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagObjectArray,return )

bool ObjectVisitor_obj::GetVisitCorrectExhibitionBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitCorrectExhibitionBool",0x6c55624f,"ObjectVisitor.GetVisitCorrectExhibitionBool","ObjectVisitor.hx",266,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	bool tmp = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitCorrectExhibitionBool,return )


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
		if (HX_FIELD_EQ(inName,"GetFinishedBool") ) { return GetFinishedBool_dyn(); }
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
	HX_HCSTRING("AddRemoveVisitorFromExhibitionVoid","\xb6","\xdd","\xf7","\x95"),
	HX_HCSTRING("AddTagCounterVoid","\x17","\x32","\xf9","\x30"),
	HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"),
	HX_HCSTRING("GenerateSentenceVoid","\x8c","\x84","\xc8","\x9a"),
	HX_HCSTRING("SortTagCounterVoid","\x54","\x9c","\x8b","\xe3"),
	HX_HCSTRING("AIAutoExhibitionChangeVoid","\x2a","\xa8","\xc9","\xe7"),
	HX_HCSTRING("GetExhibitionCurrentObject","\x33","\x60","\x47","\xbe"),
	HX_HCSTRING("GetFinishedBool","\x52","\x42","\x6d","\x6e"),
	HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"),
	HX_HCSTRING("GetScoreInt","\x53","\x0b","\xe2","\x18"),
	HX_HCSTRING("GetSentenceStringArray","\x4f","\xb0","\xad","\xc7"),
	HX_HCSTRING("GetTagCounterStructArray","\x0c","\xfe","\x1c","\x41"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetVisitCorrectExhibitionBool","\x6e","\x16","\x32","\x7b"),
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

