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

Void CollectionFunction_obj::__construct()
{
HX_STACK_FRAME("CollectionFunction","new",0x45549ba8,"CollectionFunction.new","CollectionFunction.hx",4,0xbb6e90c8)
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
		HX_STACK_FRAME("CollectionFunction","ClearArray",0x62f95ea4,"CollectionFunction.ClearArray","CollectionFunction.hx",5,0xbb6e90c8)
		HX_STACK_ARG(_dynamicArray,"_dynamicArray")
		HX_STACK_LINE(7)
		int tmp = _dynamicArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7)
		_dynamicArray->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,ClearArray,(void))

::ObjectMuseum CollectionFunction_obj::FindMuseumObject( ::CollectionGlobal _collectionGlobalObject,::EnumMuseumType _enumMuseumType,::String _nameString){
	HX_STACK_FRAME("CollectionFunction","FindMuseumObject",0xae5954e2,"CollectionFunction.FindMuseumObject","CollectionFunction.hx",16,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_enumMuseumType,"_enumMuseumType")
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(17)
	Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
	HX_STACK_LINE(18)
	bool tmp = (_enumMuseumType == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	if ((tmp)){
		HX_STACK_LINE(18)
		tempObjectArray = _collectionGlobalObject->GetExhibitionObjectArray();
	}
	else{
		HX_STACK_LINE(19)
		bool tmp1 = (_enumMuseumType == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		if ((tmp1)){
			HX_STACK_LINE(19)
			tempObjectArray = _collectionGlobalObject->GetFloorObjectArray();
		}
		else{
			HX_STACK_LINE(20)
			bool tmp2 = (_enumMuseumType == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			if ((tmp2)){
				HX_STACK_LINE(20)
				tempObjectArray = _collectionGlobalObject->GetRoomObjectArray();
			}
		}
	}
	HX_STACK_LINE(21)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(22)
	while((true)){
		HX_STACK_LINE(22)
		bool tmp1 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		if ((tmp2)){
			HX_STACK_LINE(22)
			break;
		}
		HX_STACK_LINE(23)
		::String tmp3 = _nameString;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		::ObjectMuseum tmp4 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		Dynamic tmp5 = tmp4->GetNameStruct();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		::String tmp6 = tmp5->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		bool tmp7 = (tmp3 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		if ((tmp7)){
			HX_STACK_LINE(23)
			::ObjectMuseum tmp8 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(23)
			return tmp8;
		}
		HX_STACK_LINE(24)
		::String tmp8 = _nameString;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		::ObjectMuseum tmp9 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		Dynamic tmp10 = tmp9->GetNameStruct();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(24)
		::String tmp11 = tmp10->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(24)
		bool tmp12 = (tmp8 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(24)
		if ((tmp12)){
			HX_STACK_LINE(24)
			::ObjectMuseum tmp13 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(24)
			return tmp13;
		}
		HX_STACK_LINE(26)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(28)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CollectionFunction_obj,FindMuseumObject,return )

::ObjectTag CollectionFunction_obj::FindTagObject( ::CollectionGlobal _collectionGlobalObject,::String _nameString){
	HX_STACK_FRAME("CollectionFunction","FindTagObject",0x91b45268,"CollectionFunction.FindTagObject","CollectionFunction.hx",33,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(34)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(35)
	while((true)){
		HX_STACK_LINE(35)
		int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		int tmp1 = _collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		if ((tmp3)){
			HX_STACK_LINE(35)
			break;
		}
		HX_STACK_LINE(36)
		::String tmp4 = _nameString;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		::ObjectTag tmp5 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		::String tmp6 = tmp5->GetNameString();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		if ((tmp7)){
			HX_STACK_LINE(37)
			::ObjectTag tmp8 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			return tmp8;
		}
		HX_STACK_LINE(39)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(41)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,FindTagObject,return )

::ObjectVisitor CollectionFunction_obj::FindVisitorObject( ::CollectionGlobal _collectionGlobalObject,::String _nameString){
	HX_STACK_FRAME("CollectionFunction","FindVisitorObject",0x5dfbd63c,"CollectionFunction.FindVisitorObject","CollectionFunction.hx",46,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(47)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(48)
	while((true)){
		HX_STACK_LINE(48)
		int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		int tmp1 = _collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		if ((tmp3)){
			HX_STACK_LINE(48)
			break;
		}
		HX_STACK_LINE(49)
		::String tmp4 = _nameString;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::ObjectVisitor tmp5 = _collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		::String tmp6 = tmp5->GetNameString();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		if ((tmp7)){
			HX_STACK_LINE(50)
			::ObjectVisitor tmp8 = _collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(50)
			return tmp8;
		}
		HX_STACK_LINE(52)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(54)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,FindVisitorObject,return )

bool CollectionFunction_obj::IsExistInArrayBool( cpp::ArrayBase _dynamicArray,Dynamic _dynamicElement){
	HX_STACK_FRAME("CollectionFunction","IsExistInArrayBool",0xae352629,"CollectionFunction.IsExistInArrayBool","CollectionFunction.hx",56,0xbb6e90c8)
	HX_STACK_ARG(_dynamicArray,"_dynamicArray")
	HX_STACK_ARG(_dynamicElement,"_dynamicElement")
	HX_STACK_LINE(57)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(58)
	while((true)){
		HX_STACK_LINE(58)
		bool tmp = (loopCounter1Int < _dynamicArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(58)
			break;
		}
		HX_STACK_LINE(59)
		Dynamic tmp2 = _dynamicArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Dynamic tmp3 = _dynamicElement;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		if ((tmp4)){
			HX_STACK_LINE(59)
			return true;
		}
		HX_STACK_LINE(60)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(62)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,IsExistInArrayBool,return )

Dynamic CollectionFunction_obj::PickRandomFromArrayT( cpp::ArrayBase _tArray){
	HX_STACK_FRAME("CollectionFunction","PickRandomFromArrayT",0xe8ee2c61,"CollectionFunction.PickRandomFromArrayT","CollectionFunction.hx",64,0xbb6e90c8)
	HX_STACK_ARG(_tArray,"_tArray")
	HX_STACK_LINE(65)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1 = (_tArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	int randomInt = tmp3;		HX_STACK_VAR(randomInt,"randomInt");
	HX_STACK_LINE(66)
	Dynamic tmp4 = _tArray->__GetItem(randomInt);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	Dynamic elementT = tmp4;		HX_STACK_VAR(elementT,"elementT");
	HX_STACK_LINE(67)
	Dynamic tmp5 = elementT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,PickRandomFromArrayT,return )

Array< ::Dynamic > CollectionFunction_obj::PickRandomTagObjectArray( ::CollectionGlobal _collectionGlobalObject){
	HX_STACK_FRAME("CollectionFunction","PickRandomTagObjectArray",0x47ed4edc,"CollectionFunction.PickRandomTagObjectArray","CollectionFunction.hx",69,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_LINE(70)
	Array< ::Dynamic > tempTagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempTagObjectArray,"tempTagObjectArray");
	HX_STACK_LINE(71)
	Float chanceFloat = ((Float)1.0);		HX_STACK_VAR(chanceFloat,"chanceFloat");
	HX_STACK_LINE(72)
	while((true)){
		HX_STACK_LINE(72)
		Float tmp = chanceFloat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(72)
			break;
		}
		HX_STACK_LINE(73)
		Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		int tmp5 = _collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		int randomIndexInt = tmp8;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			::ObjectTag tmp9 = _collectionGlobalObject->GetTagObjectArray()->__get(randomIndexInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			int tmp10 = tempTagObjectArray->indexOf(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			bool tmp11 = (tmp10 > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(74)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			if ((tmp12)){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(75)
			Float tmp13 = ::Math_obj::random();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(75)
			int tmp14 = _collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(75)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(75)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(75)
			int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(75)
			randomIndexInt = tmp17;
		}
		HX_STACK_LINE(77)
		::ObjectTag tmp9 = _collectionGlobalObject->GetTagObjectArray()->__get(randomIndexInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		tempTagObjectArray->push(tmp9);
		HX_STACK_LINE(78)
		hx::SubEq(chanceFloat,((Float)0.05));
	}
	HX_STACK_LINE(80)
	return tempTagObjectArray;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,PickRandomTagObjectArray,return )

Float CollectionFunction_obj::GenerateGreatestCommonDivisorFloat( Float _number1Float,Float _number2Float){
	HX_STACK_FRAME("CollectionFunction","GenerateGreatestCommonDivisorFloat",0x3f62c60f,"CollectionFunction.GenerateGreatestCommonDivisorFloat","CollectionFunction.hx",82,0xbb6e90c8)
	HX_STACK_ARG(_number1Float,"_number1Float")
	HX_STACK_ARG(_number2Float,"_number2Float")
	HX_STACK_LINE(83)
	bool tmp = (_number2Float == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	if ((tmp)){
		HX_STACK_LINE(83)
		Float tmp1 = _number1Float;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		return tmp1;
	}
	else{
		HX_STACK_LINE(84)
		Float tmp1 = _number2Float;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		Float tmp2 = hx::Mod(_number1Float,_number2Float);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = ::CollectionFunction_obj::GenerateGreatestCommonDivisorFloat(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		return tmp3;
	}
	HX_STACK_LINE(83)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,GenerateGreatestCommonDivisorFloat,return )

Float CollectionFunction_obj::GenerateLeastCommonMultipleFloat( Float _number1Float,Float _number2Float){
	HX_STACK_FRAME("CollectionFunction","GenerateLeastCommonMultipleFloat",0xeb3d0685,"CollectionFunction.GenerateLeastCommonMultipleFloat","CollectionFunction.hx",86,0xbb6e90c8)
	HX_STACK_ARG(_number1Float,"_number1Float")
	HX_STACK_ARG(_number2Float,"_number2Float")
	HX_STACK_LINE(87)
	Float tmp = (_number1Float * _number2Float);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	Float tmp1 = _number1Float;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	Float tmp2 = _number2Float;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	Float tmp3 = ::CollectionFunction_obj::GenerateGreatestCommonDivisorFloat(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	Float tmp4 = (Float(tmp) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,GenerateLeastCommonMultipleFloat,return )


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
		if (HX_FIELD_EQ(inName,"FindTagObject") ) { outValue = FindTagObject_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"FindMuseumObject") ) { outValue = FindMuseumObject_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FindVisitorObject") ) { outValue = FindVisitorObject_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"IsExistInArrayBool") ) { outValue = IsExistInArrayBool_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PickRandomFromArrayT") ) { outValue = PickRandomFromArrayT_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"PickRandomTagObjectArray") ) { outValue = PickRandomTagObjectArray_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"GenerateLeastCommonMultipleFloat") ) { outValue = GenerateLeastCommonMultipleFloat_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"GenerateGreatestCommonDivisorFloat") ) { outValue = GenerateGreatestCommonDivisorFloat_dyn(); return true;  }
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
	HX_HCSTRING("FindTagObject","\x20","\x9d","\x19","\x6f"),
	HX_HCSTRING("FindVisitorObject","\xf4","\xdc","\x88","\xea"),
	HX_HCSTRING("IsExistInArrayBool","\x71","\x00","\x0e","\x1d"),
	HX_HCSTRING("PickRandomFromArrayT","\xa9","\x28","\x68","\x63"),
	HX_HCSTRING("PickRandomTagObjectArray","\x24","\x0f","\xef","\x61"),
	HX_HCSTRING("GenerateGreatestCommonDivisorFloat","\x57","\xb0","\xa2","\x53"),
	HX_HCSTRING("GenerateLeastCommonMultipleFloat","\xcd","\x4e","\xe4","\xd0"),
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

