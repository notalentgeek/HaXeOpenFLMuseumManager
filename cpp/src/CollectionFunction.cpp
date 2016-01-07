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

Void CollectionFunction_obj::__construct()
{
HX_STACK_FRAME("CollectionFunction","new",0x45549ba8,"CollectionFunction.new","CollectionFunction.hx",3,0xbb6e90c8)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionFunction_obj::~CollectionFunction_obj() { }

Dynamic CollectionFunction_obj::__CreateEmpty() { return  new CollectionFunction_obj; }
hx::ObjectPtr< CollectionFunction_obj > CollectionFunction_obj::__new()
{  hx::ObjectPtr< CollectionFunction_obj > _result_ = new CollectionFunction_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionFunction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionFunction_obj > _result_ = new CollectionFunction_obj();
	_result_->__construct();
	return _result_;}

Void CollectionFunction_obj::ClearArray( cpp::ArrayBase _dynamicArray){
{
		HX_STACK_FRAME("CollectionFunction","ClearArray",0x62f95ea4,"CollectionFunction.ClearArray","CollectionFunction.hx",4,0xbb6e90c8)
		HX_STACK_ARG(_dynamicArray,"_dynamicArray")
		HX_STACK_LINE(6)
		int tmp = _dynamicArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6)
		_dynamicArray->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,ClearArray,(void))

::ObjectMuseum CollectionFunction_obj::FindMuseumObject( ::CollectionGlobal _collectionGlobalObject,::EnumMuseumType _enumMuseumType,::String _nameAlt){
	HX_STACK_FRAME("CollectionFunction","FindMuseumObject",0xae5954e2,"CollectionFunction.FindMuseumObject","CollectionFunction.hx",15,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_enumMuseumType,"_enumMuseumType")
	HX_STACK_ARG(_nameAlt,"_nameAlt")
	HX_STACK_LINE(16)
	Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
	HX_STACK_LINE(17)
	bool tmp = (_enumMuseumType == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(17)
		tempObjectArray = _collectionGlobalObject->GetExhibitionObjectArray();
	}
	else{
		HX_STACK_LINE(18)
		bool tmp1 = (_enumMuseumType == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		if ((tmp1)){
			HX_STACK_LINE(18)
			tempObjectArray = _collectionGlobalObject->GetFloorObjectArray();
		}
		else{
			HX_STACK_LINE(19)
			bool tmp2 = (_enumMuseumType == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			if ((tmp2)){
				HX_STACK_LINE(19)
				tempObjectArray = _collectionGlobalObject->GetRoomObjectArray();
			}
		}
	}
	HX_STACK_LINE(20)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(21)
	while((true)){
		HX_STACK_LINE(21)
		bool tmp1 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		if ((tmp2)){
			HX_STACK_LINE(21)
			break;
		}
		HX_STACK_LINE(22)
		::String tmp3 = _nameAlt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		::ObjectMuseum tmp4 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		Dynamic tmp5 = tmp4->GetNameStruct();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		::String tmp6 = tmp5->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		bool tmp7 = (tmp3 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		if ((tmp7)){
			HX_STACK_LINE(22)
			::ObjectMuseum tmp8 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(22)
			return tmp8;
			HX_STACK_LINE(22)
			break;
		}
		HX_STACK_LINE(23)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(25)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CollectionFunction_obj,FindMuseumObject,return )

Dynamic CollectionFunction_obj::FindTagStruct( ::CollectionGlobal _collectionGlobalObject,::String _tagString){
	HX_STACK_FRAME("CollectionFunction","FindTagStruct",0x8dae0dfe,"CollectionFunction.FindTagStruct","CollectionFunction.hx",30,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_tagString,"_tagString")
	HX_STACK_LINE(31)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(32)
	while((true)){
		HX_STACK_LINE(32)
		int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		int tmp1 = _collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		if ((tmp3)){
			HX_STACK_LINE(32)
			break;
		}
		HX_STACK_LINE(33)
		::String tmp4 = _tagString;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		Dynamic tmp5 = _collectionGlobalObject->GetTagStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		::String tmp6 = tmp5->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		if ((tmp7)){
			HX_STACK_LINE(34)
			Dynamic tmp8 = _collectionGlobalObject->GetTagStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			return tmp8;
			HX_STACK_LINE(35)
			break;
		}
		HX_STACK_LINE(37)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,FindTagStruct,return )

bool CollectionFunction_obj::IsExistInArrayBool( cpp::ArrayBase _dynamicArray,Dynamic _dynamicElement){
	HX_STACK_FRAME("CollectionFunction","IsExistInArrayBool",0xae352629,"CollectionFunction.IsExistInArrayBool","CollectionFunction.hx",41,0xbb6e90c8)
	HX_STACK_ARG(_dynamicArray,"_dynamicArray")
	HX_STACK_ARG(_dynamicElement,"_dynamicElement")
	HX_STACK_LINE(42)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(43)
	while((true)){
		HX_STACK_LINE(43)
		bool tmp = (loopCounter1Int < _dynamicArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		if ((tmp1)){
			HX_STACK_LINE(43)
			break;
		}
		HX_STACK_LINE(44)
		Dynamic tmp2 = _dynamicArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		Dynamic tmp3 = _dynamicElement;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		if ((tmp4)){
			HX_STACK_LINE(44)
			return true;
		}
		HX_STACK_LINE(45)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(47)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,IsExistInArrayBool,return )

Dynamic CollectionFunction_obj::PickRandomFromArrayT( cpp::ArrayBase _tArray){
	HX_STACK_FRAME("CollectionFunction","PickRandomFromArrayT",0xe8ee2c61,"CollectionFunction.PickRandomFromArrayT","CollectionFunction.hx",49,0xbb6e90c8)
	HX_STACK_ARG(_tArray,"_tArray")
	HX_STACK_LINE(50)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = (_tArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	int randomInt = tmp3;		HX_STACK_VAR(randomInt,"randomInt");
	HX_STACK_LINE(51)
	Dynamic tmp4 = _tArray->__GetItem(randomInt);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	Dynamic elementT = tmp4;		HX_STACK_VAR(elementT,"elementT");
	HX_STACK_LINE(52)
	Dynamic tmp5 = elementT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,PickRandomFromArrayT,return )


CollectionFunction_obj::CollectionFunction_obj()
{
}

bool CollectionFunction_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ClearArray") ) { outValue = ClearArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FindTagStruct") ) { outValue = FindTagStruct_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"FindMuseumObject") ) { outValue = FindMuseumObject_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"IsExistInArrayBool") ) { outValue = IsExistInArrayBool_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PickRandomFromArrayT") ) { outValue = PickRandomFromArrayT_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionFunction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionFunction_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionFunction_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ClearArray","\xec","\xb0","\x4a","\xf1"),
	HX_HCSTRING("FindMuseumObject","\x2a","\x8d","\x7d","\xe1"),
	HX_HCSTRING("FindTagStruct","\xb6","\x58","\x13","\x6b"),
	HX_HCSTRING("IsExistInArrayBool","\x71","\x00","\x0e","\x1d"),
	HX_HCSTRING("PickRandomFromArrayT","\xa9","\x28","\x68","\x63"),
	::String(null()) };

void CollectionFunction_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionFunction","\xb6","\xe7","\x2b","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionFunction_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionFunction_obj >;
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

