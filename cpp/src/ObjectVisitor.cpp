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
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
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
	this->visitMuseumStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(25)
	this->visitExhibitionStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(24)
	this->visitedCorrectExhibitionBool = false;
	HX_STACK_LINE(23)
	this->timeMuseumInt = (int)0;
	HX_STACK_LINE(22)
	this->timeExhibitionInt = (int)0;
	HX_STACK_LINE(21)
	this->timeAIAutoExhibitionChangeFloat = ((Float)0);
	HX_STACK_LINE(20)
	this->targetInt = (int)3;
	struct _Function_1_1{
		inline static ::haxe::ds::ObjectMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",19,0xe713038f)
			{
				HX_STACK_LINE(19)
				::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(19)
				::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(19)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(19)
	this->tagStructMap = _Function_1_1::Block();
	HX_STACK_LINE(18)
	this->tagCounterStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(17)
	this->sentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(16)
	this->scoreInt = (int)0;
	HX_STACK_LINE(15)
	this->roomCurrentObject = null();
	HX_STACK_LINE(14)
	this->nameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(13)
	this->justChangeExhibitionBool = false;
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
	::ObjectMuseum tmp = _exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	this->ChangeExhibitionCurrentVoid(tmp);
	HX_STACK_LINE(36)
	this->nameString = _nameString;
	HX_STACK_LINE(37)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
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
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",39,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(40)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		if ((tmp)){
			HX_STACK_LINE(40)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(41)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			if ((tmp1)){
				HX_STACK_LINE(41)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(41)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",43,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::haxe::ds::ObjectMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::haxe::ds::ObjectMap tmp1 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			::haxe::ds::ObjectMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			tmp = tmp2;
		}
		HX_STACK_LINE(44)
		this->tagStructMap = tmp;
		HX_STACK_LINE(45)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(46)
		int tmp1 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		bool tmp2 = (tmp1 >= (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		if ((tmp2)){
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				int tmp3 = loopCounter1Int;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				int tmp4 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				int tmp5 = (tmp4 - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				::ObjectMuseum tmp6 = this->exhibitionVisitedObjectArray->__get(tmp5).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				int tmp7 = tmp6->GetTagStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				bool tmp8 = (tmp3 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				if ((tmp9)){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					int tmp10 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					int tmp11 = (tmp10 - (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(48)
					::ObjectMuseum tmp12 = this->exhibitionVisitedObjectArray->__get(tmp11).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(48)
					Dynamic tmp13 = tmp12->GetTagStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(48)
					Dynamic key = tmp13;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(48)
					::haxe::ds::ObjectMap tmp14 = this->tagStructMap;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(48)
					Dynamic tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(48)
					tmp14->set(tmp15,true);
				}
				HX_STACK_LINE(49)
				(loopCounter1Int)++;
			}
		}
		HX_STACK_LINE(52)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(53)
		while((true)){
			HX_STACK_LINE(53)
			int tmp3 = loopCounter1Int;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			int tmp5 = tmp4->GetTagStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			if ((tmp7)){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(54)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(55)
			::String tagCounterEntry1String = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagCounterEntry1String,"tagCounterEntry1String");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",56,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagStruct","\x4f","\x48","\x71","\x42") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(56)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			Dynamic tagCounterStruct = tmp8;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(60)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(61)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			Dynamic tmp10 = tmp9->GetTagStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagStruct","\x4f","\x48","\x71","\x42")) = tmp10;
			HX_STACK_LINE(62)
			Dynamic tmp11 = tagCounterStruct->__Field(HX_HCSTRING("tagStruct","\x4f","\x48","\x71","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(62)
			tagCounterEntry1String = tmp11->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );
			HX_STACK_LINE(63)
			while((true)){
				HX_STACK_LINE(63)
				int tmp12 = tagIndexInt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				int tmp13 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(63)
				if ((tmp15)){
					HX_STACK_LINE(63)
					break;
				}
				HX_STACK_LINE(64)
				::String tmp16 = tagCounterEntry1String;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(64)
				Dynamic tmp17 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(64)
				Dynamic tmp18 = tmp17->__Field(HX_HCSTRING("tagStruct","\x4f","\x48","\x71","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(64)
				::String tmp19 = tmp18->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(64)
				bool tmp20 = (tmp16 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(64)
				if ((tmp20)){
					HX_STACK_LINE(64)
					newTagBool = false;
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(65)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(67)
			bool tmp12 = (newTagBool == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			if ((tmp12)){
				HX_STACK_LINE(67)
				Dynamic tmp13 = tagCounterStruct;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
			else{
				HX_STACK_LINE(68)
				bool tmp13 = (newTagBool == false);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(68)
				if ((tmp13)){
					HX_STACK_LINE(68)
					Dynamic tmp14 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					(tmp14->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(69)
			(loopCounter1Int)++;
			HX_STACK_LINE(70)
			::haxe::ds::ObjectMap tmp13 = this->tagStructMap;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			Dynamic tmp14 = tagCounterStruct->__Field(HX_HCSTRING("tagStruct","\x4f","\x48","\x71","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			tmp13->set(tmp14,true);
		}
		HX_STACK_LINE(72)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",74,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		HX_STACK_LINE(75)
		Dynamic tmp = _exhibitionTargetObject->GetNameStruct();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		::String tmp1 = tmp->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		bool tmp2 = (tmp1 == HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		if ((tmp2)){
			HX_STACK_LINE(76)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(77)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			this->roomCurrentObject = tmp3;
			HX_STACK_LINE(78)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			this->floorCurrentObject = tmp4;
			HX_STACK_LINE(79)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			this->exhibitionVisitedObjectArray->push(tmp5);
		}
		else{
			HX_STACK_LINE(82)
			this->justChangeExhibitionBool = true;
			HX_STACK_LINE(83)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			if ((tmp4)){
				HX_STACK_LINE(84)
				::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				this->roomCurrentObject = tmp6;
				HX_STACK_LINE(85)
				::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(85)
				::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(85)
				this->floorCurrentObject = tmp8;
				HX_STACK_LINE(86)
				this->AddRemoveVisitorFromExhibitionVoid(false);
				HX_STACK_LINE(87)
				::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				::ObjectMuseum tmp10 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				int tmp11 = tmp10->GetVisitorCurrentInt();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				tmp9->SetVisitorCurrentIntVoid(tmp12);
				HX_STACK_LINE(88)
				::ObjectMuseum tmp13 = this->roomCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(88)
				::ObjectMuseum tmp14 = this->roomCurrentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				int tmp15 = tmp14->GetVisitorCurrentInt();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(88)
				int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(88)
				tmp13->SetVisitorCurrentIntVoid(tmp16);
				HX_STACK_LINE(89)
				::ObjectMuseum tmp17 = this->floorCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(89)
				::ObjectMuseum tmp18 = this->floorCurrentObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(89)
				int tmp19 = tmp18->GetVisitorCurrentInt();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(89)
				int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(89)
				tmp17->SetVisitorCurrentIntVoid(tmp20);
			}
			HX_STACK_LINE(91)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(92)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(92)
			this->roomCurrentObject = tmp6;
			HX_STACK_LINE(93)
			::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			this->floorCurrentObject = tmp8;
			HX_STACK_LINE(94)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			this->exhibitionVisitedObjectArray->push(tmp9);
			HX_STACK_LINE(95)
			this->AddTagCounterVoid();
			HX_STACK_LINE(96)
			int tmp10 = this->targetInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			this->GenerateExhibitionTargetVoid(tmp10);
			HX_STACK_LINE(97)
			Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
			HX_STACK_LINE(98)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(99)
				::ObjectMuseum tmp12 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(99)
				int tmp13 = tmp12->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(99)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(99)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(99)
				if ((tmp15)){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(100)
				int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(100)
				indexIntArray->push(tmp16);
				HX_STACK_LINE(101)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(103)
			Float tmp11 = ::Math_obj::random();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(103)
			int tmp12 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(103)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(103)
			int tmp15 = indexIntArray->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(103)
			int indexRandomInt = tmp15;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
			HX_STACK_LINE(104)
			int tmp16 = indexRandomInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(104)
			indexIntArray->remove(tmp16);
			HX_STACK_LINE(105)
			::ObjectMuseum tmp17 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(105)
			::String tmp18 = tmp17->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(105)
			::String explanationString = tmp18;		HX_STACK_VAR(explanationString,"explanationString");
			HX_STACK_LINE(106)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(108)
				::String tmp19 = explanationString;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(108)
				bool tmp20 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(108)
				bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(108)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(108)
				if ((tmp21)){
					HX_STACK_LINE(109)
					int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(109)
					::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(109)
					::ObjectMuseum tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(109)
					int tmp26 = tmp25->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(109)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(109)
					tmp22 = (tmp23 < tmp27);
				}
				else{
					HX_STACK_LINE(108)
					tmp22 = false;
				}
				HX_STACK_LINE(108)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(107)
				if ((tmp23)){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(111)
				Float tmp24 = ::Math_obj::random();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(111)
				int tmp25 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(111)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(111)
				int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(111)
				int tmp28 = indexIntArray->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(111)
				indexRandomInt = tmp28;
				HX_STACK_LINE(112)
				int tmp29 = indexRandomInt;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(112)
				indexIntArray->remove(tmp29);
				HX_STACK_LINE(113)
				::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(113)
				::String tmp31 = tmp30->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(113)
				explanationString = tmp31;
				HX_STACK_LINE(114)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(116)
			::String tmp19 = explanationString;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(116)
			this->explanationStringArray->push(tmp19);
			HX_STACK_LINE(117)
			this->visitedCorrectExhibitionBool = false;
			HX_STACK_LINE(118)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				int tmp20 = loopCounter1Int;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(119)
				int tmp21 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(119)
				bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(119)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(119)
				if ((tmp23)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(120)
				::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(120)
				Dynamic tmp25 = tmp24->GetNameStruct();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(120)
				::String tmp26 = tmp25->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(120)
				::ObjectMuseum tmp27 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(120)
				Dynamic tmp28 = tmp27->GetNameStruct();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(120)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(120)
				bool tmp30 = (tmp26 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(120)
				if ((tmp30)){
					HX_STACK_LINE(120)
					this->visitedCorrectExhibitionBool = true;
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(121)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(123)
			bool tmp20 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(123)
			bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(123)
			if ((tmp21)){
				HX_STACK_LINE(123)
				(this->scoreInt)++;
			}
			else{
				HX_STACK_LINE(124)
				bool tmp22 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(124)
				bool tmp23 = (tmp22 == false);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(124)
				if ((tmp23)){
					HX_STACK_LINE(124)
					(this->scoreInt)--;
				}
			}
			HX_STACK_LINE(125)
			::ObjectMuseum tmp22 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(125)
			::ObjectMuseum tmp23 = tmp22->GetParentObject();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(125)
			this->roomCurrentObject = tmp23;
			HX_STACK_LINE(126)
			::ObjectMuseum tmp24 = this->roomCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(126)
			::ObjectMuseum tmp25 = tmp24->GetParentObject();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(126)
			this->floorCurrentObject = tmp25;
			HX_STACK_LINE(127)
			::ObjectMuseum tmp26 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(127)
			::ObjectMuseum tmp27 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(127)
			int tmp28 = tmp27->GetVisitorCurrentInt();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(127)
			int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(127)
			tmp26->SetVisitorCurrentIntVoid(tmp29);
			HX_STACK_LINE(128)
			::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(128)
			::ObjectMuseum tmp31 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(128)
			int tmp32 = tmp31->GetVisitorTotalInt();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(128)
			int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(128)
			tmp30->SetVisitorTotalIntVoid(tmp33);
			HX_STACK_LINE(129)
			::ObjectMuseum tmp34 = this->floorCurrentObject;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(129)
			::ObjectMuseum tmp35 = this->roomCurrentObject;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(129)
			int tmp36 = tmp35->GetVisitorCurrentInt();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(129)
			int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(129)
			tmp34->SetVisitorCurrentIntVoid(tmp37);
			HX_STACK_LINE(130)
			::ObjectMuseum tmp38 = this->floorCurrentObject;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(130)
			::ObjectMuseum tmp39 = this->roomCurrentObject;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(130)
			int tmp40 = tmp39->GetVisitorTotalInt();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(130)
			int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(130)
			tmp38->SetVisitorTotalIntVoid(tmp41);
			HX_STACK_LINE(131)
			::ObjectMuseum tmp42 = this->roomCurrentObject;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(131)
			::ObjectMuseum tmp43 = this->floorCurrentObject;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(131)
			int tmp44 = tmp43->GetVisitorCurrentInt();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(131)
			int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(131)
			tmp42->SetVisitorCurrentIntVoid(tmp45);
			HX_STACK_LINE(132)
			::ObjectMuseum tmp46 = this->roomCurrentObject;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(132)
			::ObjectMuseum tmp47 = this->floorCurrentObject;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(132)
			int tmp48 = tmp47->GetVisitorTotalInt();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(132)
			int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(132)
			tmp46->SetVisitorTotalIntVoid(tmp49);
			HX_STACK_LINE(133)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				int tmp50 = loopCounter1Int;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(134)
				::CollectionGlobal tmp51 = this->collectionGlobalObject;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(134)
				int tmp52 = tmp51->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(134)
				bool tmp53 = (tmp50 < tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(134)
				bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(134)
				if ((tmp54)){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(135)
				::CollectionGlobal tmp55 = this->collectionGlobalObject;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(135)
				::ObjectVisitor tmp56 = tmp55->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(135)
				tmp56->DetermineIndexLocalVoid();
				HX_STACK_LINE(136)
				::CollectionGlobal tmp57 = this->collectionGlobalObject;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(136)
				::ObjectVisitor tmp58 = tmp57->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(136)
				int tmp59 = this->targetInt;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(136)
				tmp58->GenerateExhibitionTargetVoid(tmp59);
				HX_STACK_LINE(137)
				(loopCounter1Int)++;
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",139,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b") , (int)0,false);
						__result->Add(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(139)
			Dynamic tmp50 = _Function_2_1::Block();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(139)
			Dynamic visitorVisitExhibitionStruct = tmp50;		HX_STACK_VAR(visitorVisitExhibitionStruct,"visitorVisitExhibitionStruct");
			HX_STACK_LINE(143)
			int tmp51 = this->timeExhibitionInt;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(143)
			visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b")) = tmp51;
			HX_STACK_LINE(144)
			::ObjectMuseum tmp52 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(144)
			Dynamic tmp53 = tmp52->GetNameStruct();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(144)
			visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c")) = tmp53->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
			HX_STACK_LINE(145)
			Dynamic tmp54 = visitorVisitExhibitionStruct;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(145)
			this->visitExhibitionStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp54);
			HX_STACK_LINE(146)
			int tmp55 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(146)
			bool tmp56 = (tmp55 > (int)1);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(146)
			if ((tmp56)){
				HX_STACK_LINE(147)
				::String tmp57 = this->GenerateSentenceVoid((int)3);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(147)
				::String threeSentenceString = tmp57;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
				HX_STACK_LINE(148)
				::String tmp58 = threeSentenceString;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(148)
				this->sentenceStringArray->push(tmp58);
			}
			HX_STACK_LINE(150)
			int tmp57 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(150)
			::CollectionGlobal tmp58 = this->collectionGlobalObject;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(150)
			int tmp59 = tmp58->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(150)
			bool tmp60 = (tmp57 >= tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(150)
			if ((tmp60)){
				HX_STACK_LINE(150)
				this->finishedBool = true;
			}
			HX_STACK_LINE(151)
			this->timeExhibitionInt = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",154,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		Dynamic tmp1 = tmp->GetChildStruct();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		int tmp2 = tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		this->indexLocalInt = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( int _targetInt){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",157,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_targetInt,"_targetInt")
		HX_STACK_LINE(158)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(160)
		while((true)){
			HX_STACK_LINE(160)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(160)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			if ((tmp4)){
				HX_STACK_LINE(160)
				break;
			}
			HX_STACK_LINE(161)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			Dynamic tmp6 = tmp5->GetNameStruct();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			::String tmp7 = tmp6->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			::ObjectMuseum tmp9 = tmp8->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			Dynamic tmp10 = tmp9->GetNameStruct();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(161)
			::String tmp11 = tmp10->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(161)
			bool tmp12 = (tmp7 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(161)
			if ((tmp12)){
				HX_STACK_LINE(162)
				::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(162)
				::ObjectMuseum tmp14 = tmp13->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(162)
				this->exhibitionTargetObjectArray->push(tmp14);
			}
			HX_STACK_LINE(164)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(167)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			if ((tmp3)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(169)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			::EnumMuseumMode tmp5 = tmp4->GetMuseumModeEnum();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			bool tmp6 = (tmp5 == ::EnumMuseumMode_obj::MRK_DEL);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			if ((tmp6)){
				HX_STACK_LINE(170)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(170)
				this->exhibitionTargetObjectArray->remove(tmp7);
			}
			HX_STACK_LINE(172)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(175)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(176)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			if ((tmp3)){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(177)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			bool tmp5 = tmp4->GetFullBool();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			if ((tmp6)){
				HX_STACK_LINE(178)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				this->exhibitionTargetObjectArray->remove(tmp7);
			}
			HX_STACK_LINE(180)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(180)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(180)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(180)
			if ((tmp9)){
				HX_STACK_LINE(180)
				break;
			}
			HX_STACK_LINE(181)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(184)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(185)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			if ((tmp3)){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(186)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(187)
				int tmp5 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(187)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(187)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				if ((tmp7)){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(188)
				Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				bool tmp9 = (tmp8 > ((Float)0.9));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(189)
					::ObjectMuseum tmp10 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(189)
					this->exhibitionTargetObjectArray->remove(tmp10);
				}
				HX_STACK_LINE(191)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(193)
			int tmp4 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			int tmp5 = _targetInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(193)
			bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			if ((tmp6)){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(194)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(197)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(198)
		while((true)){
			HX_STACK_LINE(198)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(198)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(198)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			if ((tmp3)){
				HX_STACK_LINE(198)
				break;
			}
			HX_STACK_LINE(199)
			Float accumPercentageFloat = (int)0;		HX_STACK_VAR(accumPercentageFloat,"accumPercentageFloat");
			HX_STACK_LINE(200)
			Float basePercentageFloat = ((Float)0.1);		HX_STACK_VAR(basePercentageFloat,"basePercentageFloat");
			HX_STACK_LINE(201)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(202)
			int tagSameCounterInt = (int)0;		HX_STACK_VAR(tagSameCounterInt,"tagSameCounterInt");
			HX_STACK_LINE(204)
			while((true)){
				HX_STACK_LINE(204)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(204)
				::ObjectMuseum tmp5 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(204)
				int tmp6 = tmp5->GetTagStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(204)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(204)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(204)
				if ((tmp8)){
					HX_STACK_LINE(204)
					break;
				}
				HX_STACK_LINE(205)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(205)
				{
					HX_STACK_LINE(205)
					::ObjectMuseum tmp10 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(205)
					Dynamic tmp11 = tmp10->GetTagStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(205)
					Dynamic key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(205)
					::haxe::ds::ObjectMap tmp12 = this->tagStructMap;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(205)
					Dynamic tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(205)
					tmp9 = tmp12->exists(tmp13);
				}
				HX_STACK_LINE(205)
				if ((tmp9)){
					HX_STACK_LINE(206)
					(tagSameCounterInt)++;
				}
				HX_STACK_LINE(208)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(210)
			Float tmp4 = basePercentageFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			Float tmp5 = (Float(tagSameCounterInt) / Float((int)10));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(210)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(210)
			accumPercentageFloat = tmp6;
			HX_STACK_LINE(211)
			bool tmp7 = (accumPercentageFloat >= ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(211)
			if ((tmp7)){
				HX_STACK_LINE(211)
				accumPercentageFloat = ((Float)1.0);
			}
			HX_STACK_LINE(212)
			Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			Float tmp9 = accumPercentageFloat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(212)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(212)
			if ((tmp10)){
				HX_STACK_LINE(212)
				::ObjectMuseum tmp11 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(212)
				this->exhibitionTargetObjectArray->remove(tmp11);
			}
			HX_STACK_LINE(213)
			int tmp11 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			int tmp12 = _targetInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			if ((tmp13)){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(214)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(217)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(218)
		while((true)){
			HX_STACK_LINE(218)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(218)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(218)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			if ((tmp3)){
				HX_STACK_LINE(218)
				break;
			}
			HX_STACK_LINE(219)
			int sameCounterInt = (int)0;		HX_STACK_VAR(sameCounterInt,"sameCounterInt");
			HX_STACK_LINE(220)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(220)
			::ObjectMuseum tmp5 = tmp4->GetParentObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(220)
			::ObjectMuseum roomTargetObject = tmp5;		HX_STACK_VAR(roomTargetObject,"roomTargetObject");
			HX_STACK_LINE(221)
			::ObjectMuseum tmp6 = roomTargetObject->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(221)
			::ObjectMuseum floorTargetObject = tmp6;		HX_STACK_VAR(floorTargetObject,"floorTargetObject");
			HX_STACK_LINE(222)
			::ObjectMuseum tmp7 = roomTargetObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			::ObjectMuseum tmp8 = this->roomCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(222)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(222)
			if ((tmp9)){
				HX_STACK_LINE(222)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(223)
			::ObjectMuseum tmp10 = floorTargetObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			::ObjectMuseum tmp11 = this->floorCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			if ((tmp12)){
				HX_STACK_LINE(223)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(224)
			bool tmp13 = (sameCounterInt == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(224)
			if ((tmp13)){
				HX_STACK_LINE(224)
				Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(224)
				bool tmp15 = (tmp14 > ((Float)0.50));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(224)
				if ((tmp15)){
					HX_STACK_LINE(224)
					::ObjectMuseum tmp16 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(224)
					this->exhibitionTargetObjectArray->remove(tmp16);
				}
			}
			else{
				HX_STACK_LINE(225)
				bool tmp14 = (sameCounterInt == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(225)
				if ((tmp14)){
					HX_STACK_LINE(225)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(225)
					bool tmp16 = (tmp15 > ((Float)0.25));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(225)
					if ((tmp16)){
						HX_STACK_LINE(225)
						::ObjectMuseum tmp17 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(225)
						this->exhibitionTargetObjectArray->remove(tmp17);
					}
				}
			}
			HX_STACK_LINE(226)
			int tmp14 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(226)
			int tmp15 = _targetInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(226)
			bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(226)
			if ((tmp16)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(227)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			int tmp = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(229)
			int tmp1 = _targetInt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			if ((tmp3)){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			this->exhibitionTargetObjectArray->pop().StaticCast< ::ObjectMuseum >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::String ObjectVisitor_obj::GenerateSentenceVoid( int _amount){
	HX_STACK_FRAME("ObjectVisitor","GenerateSentenceVoid",0xc52238cb,"ObjectVisitor.GenerateSentenceVoid","ObjectVisitor.hx",231,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_amount,"_amount")
	HX_STACK_LINE(231)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateSentenceVoid,return )

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",232,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",232,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(232)
				int tmp = (_a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(232)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(232)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

Void ObjectVisitor_obj::AIAutoExhibitionChangeVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AIAutoExhibitionChangeVoid",0x2e2a95a9,"ObjectVisitor.AIAutoExhibitionChangeVoid","ObjectVisitor.hx",233,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		if ((tmp1)){
			HX_STACK_LINE(235)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			Float randomFloat = tmp2;		HX_STACK_VAR(randomFloat,"randomFloat");
			HX_STACK_LINE(236)
			hx::AddEq(this->timeAIAutoExhibitionChangeFloat,((Float)0.01));
			HX_STACK_LINE(237)
			Float tmp3 = randomFloat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			Float tmp4 = this->timeAIAutoExhibitionChangeFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			if ((tmp6)){
				HX_STACK_LINE(238)
				Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				int tmp8 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(238)
				int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(238)
				int randomInt = tmp11;		HX_STACK_VAR(randomInt,"randomInt");
				HX_STACK_LINE(239)
				::ObjectMuseum tmp12 = this->exhibitionTargetObjectArray->__get(randomInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(239)
				this->ChangeExhibitionCurrentVoid(tmp12);
				HX_STACK_LINE(240)
				this->timeAIAutoExhibitionChangeFloat = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AIAutoExhibitionChangeVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",244,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionCurrentObject,return )

bool ObjectVisitor_obj::GetFinishedBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetFinishedBool",0x56cdf673,"ObjectVisitor.GetFinishedBool","ObjectVisitor.hx",245,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetFinishedBool,return )

bool ObjectVisitor_obj::GetJustChangeExhibitionBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetJustChangeExhibitionBool",0xccbc122c,"ObjectVisitor.GetJustChangeExhibitionBool","ObjectVisitor.hx",246,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	bool tmp = this->justChangeExhibitionBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetJustChangeExhibitionBool,return )

cpp::ArrayBase ObjectVisitor_obj::GetTagCounterStructArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagCounterStructArray",0x729f3dcb,"ObjectVisitor.GetTagCounterStructArray","ObjectVisitor.hx",247,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	return this->tagCounterStructArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagCounterStructArray,return )

::haxe::ds::ObjectMap ObjectVisitor_obj::GetTagStructMap( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagStructMap",0x51d56744,"ObjectVisitor.GetTagStructMap","ObjectVisitor.hx",248,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(248)
	::haxe::ds::ObjectMap tmp = this->tagStructMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagStructMap,return )

Void ObjectVisitor_obj::SetJustChangeExhibitionBoolVoid( bool _justChangeExhibitionBool){
{
		HX_STACK_FRAME("ObjectVisitor","SetJustChangeExhibitionBoolVoid",0x52bedcac,"ObjectVisitor.SetJustChangeExhibitionBoolVoid","ObjectVisitor.hx",249,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_justChangeExhibitionBool,"_justChangeExhibitionBool")
		HX_STACK_LINE(249)
		this->justChangeExhibitionBool = _justChangeExhibitionBool;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,SetJustChangeExhibitionBoolVoid,(void))


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
	HX_MARK_MEMBER_NAME(justChangeExhibitionBool,"justChangeExhibitionBool");
	HX_MARK_MEMBER_NAME(nameString,"nameString");
	HX_MARK_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_MARK_MEMBER_NAME(scoreInt,"scoreInt");
	HX_MARK_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_MARK_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_MARK_MEMBER_NAME(tagStructMap,"tagStructMap");
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
	HX_VISIT_MEMBER_NAME(justChangeExhibitionBool,"justChangeExhibitionBool");
	HX_VISIT_MEMBER_NAME(nameString,"nameString");
	HX_VISIT_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_VISIT_MEMBER_NAME(scoreInt,"scoreInt");
	HX_VISIT_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_VISIT_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_VISIT_MEMBER_NAME(tagStructMap,"tagStructMap");
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
		if (HX_FIELD_EQ(inName,"tagStructMap") ) { return tagStructMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		if (HX_FIELD_EQ(inName,"timeMuseumInt") ) { return timeMuseumInt; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"GetFinishedBool") ) { return GetFinishedBool_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagStructMap") ) { return GetTagStructMap_dyn(); }
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
	case 24:
		if (HX_FIELD_EQ(inName,"justChangeExhibitionBool") ) { return justChangeExhibitionBool; }
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
		if (HX_FIELD_EQ(inName,"GetJustChangeExhibitionBool") ) { return GetJustChangeExhibitionBool_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { return exhibitionVisitedObjectArray; }
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { return visitedCorrectExhibitionBool; }
		if (HX_FIELD_EQ(inName,"GenerateExhibitionTargetVoid") ) { return GenerateExhibitionTargetVoid_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"timeAIAutoExhibitionChangeFloat") ) { return timeAIAutoExhibitionChangeFloat; }
		if (HX_FIELD_EQ(inName,"SetJustChangeExhibitionBoolVoid") ) { return SetJustChangeExhibitionBoolVoid_dyn(); }
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
		if (HX_FIELD_EQ(inName,"tagStructMap") ) { tagStructMap=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
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
	case 24:
		if (HX_FIELD_EQ(inName,"justChangeExhibitionBool") ) { justChangeExhibitionBool=inValue.Cast< bool >(); return inValue; }
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
	outFields->push(HX_HCSTRING("justChangeExhibitionBool","\xf5","\xc9","\x75","\xd5"));
	outFields->push(HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"));
	outFields->push(HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"));
	outFields->push(HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"));
	outFields->push(HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"));
	outFields->push(HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"));
	outFields->push(HX_HCSTRING("tagStructMap","\x8d","\x55","\xfe","\xe5"));
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
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,justChangeExhibitionBool),HX_HCSTRING("justChangeExhibitionBool","\xf5","\xc9","\x75","\xd5")},
	{hx::fsString,(int)offsetof(ObjectVisitor_obj,nameString),HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,roomCurrentObject),HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,scoreInt),HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,sentenceStringArray),HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,tagCounterStructArray),HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(ObjectVisitor_obj,tagStructMap),HX_HCSTRING("tagStructMap","\x8d","\x55","\xfe","\xe5")},
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
	HX_HCSTRING("justChangeExhibitionBool","\xf5","\xc9","\x75","\xd5"),
	HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"),
	HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"),
	HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"),
	HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"),
	HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"),
	HX_HCSTRING("tagStructMap","\x8d","\x55","\xfe","\xe5"),
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
	HX_HCSTRING("GetJustChangeExhibitionBool","\x8b","\x30","\x4d","\x7e"),
	HX_HCSTRING("GetTagCounterStructArray","\x0c","\xfe","\x1c","\x41"),
	HX_HCSTRING("GetTagStructMap","\x23","\xb3","\x74","\x69"),
	HX_HCSTRING("SetJustChangeExhibitionBoolVoid","\x8b","\x16","\x48","\x59"),
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

