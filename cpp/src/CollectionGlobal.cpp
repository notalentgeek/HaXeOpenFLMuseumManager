#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
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

Void CollectionGlobal_obj::__construct()
{
HX_STACK_FRAME("CollectionGlobal","new",0x069ddff3,"CollectionGlobal.new","CollectionGlobal.hx",2,0xb0d19edd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	this->visitorObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(7)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(6)
	this->roomObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(5)
	this->floorObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(4)
	this->exhibitionObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(3)
	this->exhibitionFullThresholdInt = (int)0;
}
;
	return null();
}

//CollectionGlobal_obj::~CollectionGlobal_obj() { }

Dynamic CollectionGlobal_obj::__CreateEmpty() { return  new CollectionGlobal_obj; }
hx::ObjectPtr< CollectionGlobal_obj > CollectionGlobal_obj::__new()
{  hx::ObjectPtr< CollectionGlobal_obj > _result_ = new CollectionGlobal_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionGlobal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionGlobal_obj > _result_ = new CollectionGlobal_obj();
	_result_->__construct();
	return _result_;}

Void CollectionGlobal_obj::AddExhibitionObjectArrayVoid( ::ObjectMuseum _exhibitionObject){
{
		HX_STACK_FRAME("CollectionGlobal","AddExhibitionObjectArrayVoid",0x4ff56b0b,"CollectionGlobal.AddExhibitionObjectArrayVoid","CollectionGlobal.hx",10,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionObject,"_exhibitionObject")
		HX_STACK_LINE(10)
		::ObjectMuseum tmp = _exhibitionObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		this->exhibitionObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,AddExhibitionObjectArrayVoid,(void))

Void CollectionGlobal_obj::AddFloorObjectArrayVoid( ::ObjectMuseum _floorObject){
{
		HX_STACK_FRAME("CollectionGlobal","AddFloorObjectArrayVoid",0xf342b216,"CollectionGlobal.AddFloorObjectArrayVoid","CollectionGlobal.hx",11,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_floorObject,"_floorObject")
		HX_STACK_LINE(11)
		::ObjectMuseum tmp = _floorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11)
		this->floorObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,AddFloorObjectArrayVoid,(void))

Void CollectionGlobal_obj::AddRoomObjectArrayVoid( ::ObjectMuseum _roomObject){
{
		HX_STACK_FRAME("CollectionGlobal","AddRoomObjectArrayVoid",0x71de69bf,"CollectionGlobal.AddRoomObjectArrayVoid","CollectionGlobal.hx",12,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_roomObject,"_roomObject")
		HX_STACK_LINE(12)
		::ObjectMuseum tmp = _roomObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		this->roomObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,AddRoomObjectArrayVoid,(void))

Void CollectionGlobal_obj::AddTagObjectArrayVoid( ::ObjectTag _tagObject){
{
		HX_STACK_FRAME("CollectionGlobal","AddTagObjectArrayVoid",0xef8fe448,"CollectionGlobal.AddTagObjectArrayVoid","CollectionGlobal.hx",13,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObject,"_tagObject")
		HX_STACK_LINE(13)
		::ObjectTag tmp = _tagObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		this->tagObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,AddTagObjectArrayVoid,(void))

Void CollectionGlobal_obj::AddVisitorObjectArrayVoid( ::ObjectVisitor _visitorObject){
{
		HX_STACK_FRAME("CollectionGlobal","AddVisitorObjectArrayVoid",0x825f2374,"CollectionGlobal.AddVisitorObjectArrayVoid","CollectionGlobal.hx",14,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorObject,"_visitorObject")
		HX_STACK_LINE(14)
		::ObjectVisitor tmp = _visitorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		this->visitorObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,AddVisitorObjectArrayVoid,(void))

Void CollectionGlobal_obj::DetermineExhibitionFullThresholdInt( ){
{
		HX_STACK_FRAME("CollectionGlobal","DetermineExhibitionFullThresholdInt",0x6ea45f88,"CollectionGlobal.DetermineExhibitionFullThresholdInt","CollectionGlobal.hx",15,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		int tmp = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		int tmp1 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		if ((tmp2)){
			HX_STACK_LINE(16)
			int tmp3 = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(16)
			int tmp4 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(16)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(16)
			int tmp6 = ::Math_obj::ceil(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16)
			this->exhibitionFullThresholdInt = tmp6;
		}
		else{
			HX_STACK_LINE(17)
			int tmp3 = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			int tmp4 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17)
			if ((tmp5)){
				HX_STACK_LINE(17)
				int tmp6 = this->visitorObjectArray->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(17)
				int tmp7 = this->exhibitionObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(17)
				Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(17)
				int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(17)
				this->exhibitionFullThresholdInt = tmp9;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,DetermineExhibitionFullThresholdInt,(void))

int CollectionGlobal_obj::GetExhibitionFullThresholdInt( ){
	HX_STACK_FRAME("CollectionGlobal","GetExhibitionFullThresholdInt",0xa536b40b,"CollectionGlobal.GetExhibitionFullThresholdInt","CollectionGlobal.hx",19,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	int tmp = this->exhibitionFullThresholdInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetExhibitionFullThresholdInt,return )

Array< ::Dynamic > CollectionGlobal_obj::GetExhibitionObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetExhibitionObjectArray",0xf6b3d382,"CollectionGlobal.GetExhibitionObjectArray","CollectionGlobal.hx",20,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	return this->exhibitionObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetExhibitionObjectArray,return )

Array< ::Dynamic > CollectionGlobal_obj::GetFloorObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetFloorObjectArray",0xed42d217,"CollectionGlobal.GetFloorObjectArray","CollectionGlobal.hx",21,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return this->floorObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetFloorObjectArray,return )

Array< ::Dynamic > CollectionGlobal_obj::GetRoomObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetRoomObjectArray",0xad6bb5f6,"CollectionGlobal.GetRoomObjectArray","CollectionGlobal.hx",22,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return this->roomObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetRoomObjectArray,return )

Array< ::Dynamic > CollectionGlobal_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetTagObjectArray",0xa40c0c09,"CollectionGlobal.GetTagObjectArray","CollectionGlobal.hx",23,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetTagObjectArray,return )

Array< ::Dynamic > CollectionGlobal_obj::GetVisitorObjectArray( ){
	HX_STACK_FRAME("CollectionGlobal","GetVisitorObjectArray",0x304283b5,"CollectionGlobal.GetVisitorObjectArray","CollectionGlobal.hx",24,0xb0d19edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return this->visitorObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CollectionGlobal_obj,GetVisitorObjectArray,return )

Void CollectionGlobal_obj::SetExhibitionFullThresholdInt( int _exhibitionFullThresholdInt){
{
		HX_STACK_FRAME("CollectionGlobal","SetExhibitionFullThresholdInt",0x670e6e17,"CollectionGlobal.SetExhibitionFullThresholdInt","CollectionGlobal.hx",25,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionFullThresholdInt,"_exhibitionFullThresholdInt")
		HX_STACK_LINE(25)
		this->exhibitionFullThresholdInt = _exhibitionFullThresholdInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetExhibitionFullThresholdInt,(void))

Void CollectionGlobal_obj::SetExhibitionObjectArrayVoid( Array< ::Dynamic > _exhibitionObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetExhibitionObjectArrayVoid",0x6f07f76a,"CollectionGlobal.SetExhibitionObjectArrayVoid","CollectionGlobal.hx",26,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionObjectArray,"_exhibitionObjectArray")
		HX_STACK_LINE(26)
		this->exhibitionObjectArray = _exhibitionObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetExhibitionObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetFloorObjectArrayVoid( Array< ::Dynamic > _floorObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetFloorObjectArrayVoid",0x55d98217,"CollectionGlobal.SetFloorObjectArrayVoid","CollectionGlobal.hx",27,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_floorObjectArray,"_floorObjectArray")
		HX_STACK_LINE(27)
		this->floorObjectArray = _floorObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetFloorObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetRoomObjectArrayVoid( Array< ::Dynamic > _roomObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetRoomObjectArrayVoid",0xd75554de,"CollectionGlobal.SetRoomObjectArrayVoid","CollectionGlobal.hx",28,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_roomObjectArray,"_roomObjectArray")
		HX_STACK_LINE(28)
		this->roomObjectArray = _roomObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetRoomObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetTagObjectArrayVoid( Array< ::Dynamic > _tagObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetTagObjectArrayVoid",0x24d30209,"CollectionGlobal.SetTagObjectArrayVoid","CollectionGlobal.hx",29,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObjectArray,"_tagObjectArray")
		HX_STACK_LINE(29)
		this->tagObjectArray = _tagObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetTagObjectArrayVoid,(void))

Void CollectionGlobal_obj::SetVisitorObjectArrayVoid( Array< ::Dynamic > _visitorObjectArray){
{
		HX_STACK_FRAME("CollectionGlobal","SetVisitorObjectArrayVoid",0xd44ab5b5,"CollectionGlobal.SetVisitorObjectArrayVoid","CollectionGlobal.hx",30,0xb0d19edd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorObjectArray,"_visitorObjectArray")
		HX_STACK_LINE(30)
		this->visitorObjectArray = _visitorObjectArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollectionGlobal_obj,SetVisitorObjectArrayVoid,(void))


CollectionGlobal_obj::CollectionGlobal_obj()
{
}

void CollectionGlobal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollectionGlobal);
	HX_MARK_MEMBER_NAME(exhibitionFullThresholdInt,"exhibitionFullThresholdInt");
	HX_MARK_MEMBER_NAME(exhibitionObjectArray,"exhibitionObjectArray");
	HX_MARK_MEMBER_NAME(floorObjectArray,"floorObjectArray");
	HX_MARK_MEMBER_NAME(roomObjectArray,"roomObjectArray");
	HX_MARK_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_MARK_MEMBER_NAME(visitorObjectArray,"visitorObjectArray");
	HX_MARK_END_CLASS();
}

void CollectionGlobal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(exhibitionFullThresholdInt,"exhibitionFullThresholdInt");
	HX_VISIT_MEMBER_NAME(exhibitionObjectArray,"exhibitionObjectArray");
	HX_VISIT_MEMBER_NAME(floorObjectArray,"floorObjectArray");
	HX_VISIT_MEMBER_NAME(roomObjectArray,"roomObjectArray");
	HX_VISIT_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_VISIT_MEMBER_NAME(visitorObjectArray,"visitorObjectArray");
}

Dynamic CollectionGlobal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { return tagObjectArray; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"roomObjectArray") ) { return roomObjectArray; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"floorObjectArray") ) { return floorObjectArray; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"visitorObjectArray") ) { return visitorObjectArray; }
		if (HX_FIELD_EQ(inName,"GetRoomObjectArray") ) { return GetRoomObjectArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"GetFloorObjectArray") ) { return GetFloorObjectArray_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"exhibitionObjectArray") ) { return exhibitionObjectArray; }
		if (HX_FIELD_EQ(inName,"AddTagObjectArrayVoid") ) { return AddTagObjectArrayVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorObjectArray") ) { return GetVisitorObjectArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTagObjectArrayVoid") ) { return SetTagObjectArrayVoid_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"AddRoomObjectArrayVoid") ) { return AddRoomObjectArrayVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetRoomObjectArrayVoid") ) { return SetRoomObjectArrayVoid_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"AddFloorObjectArrayVoid") ) { return AddFloorObjectArrayVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloorObjectArrayVoid") ) { return SetFloorObjectArrayVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"GetExhibitionObjectArray") ) { return GetExhibitionObjectArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"AddVisitorObjectArrayVoid") ) { return AddVisitorObjectArrayVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVisitorObjectArrayVoid") ) { return SetVisitorObjectArrayVoid_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"exhibitionFullThresholdInt") ) { return exhibitionFullThresholdInt; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"AddExhibitionObjectArrayVoid") ) { return AddExhibitionObjectArrayVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetExhibitionObjectArrayVoid") ) { return SetExhibitionObjectArrayVoid_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"GetExhibitionFullThresholdInt") ) { return GetExhibitionFullThresholdInt_dyn(); }
		if (HX_FIELD_EQ(inName,"SetExhibitionFullThresholdInt") ) { return SetExhibitionFullThresholdInt_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"DetermineExhibitionFullThresholdInt") ) { return DetermineExhibitionFullThresholdInt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollectionGlobal_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { tagObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"roomObjectArray") ) { roomObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"floorObjectArray") ) { floorObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"visitorObjectArray") ) { visitorObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"exhibitionObjectArray") ) { exhibitionObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"exhibitionFullThresholdInt") ) { exhibitionFullThresholdInt=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollectionGlobal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("exhibitionFullThresholdInt","\xa2","\x80","\x16","\xa1"));
	outFields->push(HX_HCSTRING("exhibitionObjectArray","\x4b","\x4e","\xf5","\x56"));
	outFields->push(HX_HCSTRING("floorObjectArray","\xee","\x4b","\x25","\x9f"));
	outFields->push(HX_HCSTRING("roomObjectArray","\xff","\x83","\x1d","\x77"));
	outFields->push(HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"));
	outFields->push(HX_HCSTRING("visitorObjectArray","\x4c","\x61","\x18","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CollectionGlobal_obj,exhibitionFullThresholdInt),HX_HCSTRING("exhibitionFullThresholdInt","\xa2","\x80","\x16","\xa1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,exhibitionObjectArray),HX_HCSTRING("exhibitionObjectArray","\x4b","\x4e","\xf5","\x56")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,floorObjectArray),HX_HCSTRING("floorObjectArray","\xee","\x4b","\x25","\x9f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,roomObjectArray),HX_HCSTRING("roomObjectArray","\xff","\x83","\x1d","\x77")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,tagObjectArray),HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollectionGlobal_obj,visitorObjectArray),HX_HCSTRING("visitorObjectArray","\x4c","\x61","\x18","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("exhibitionFullThresholdInt","\xa2","\x80","\x16","\xa1"),
	HX_HCSTRING("exhibitionObjectArray","\x4b","\x4e","\xf5","\x56"),
	HX_HCSTRING("floorObjectArray","\xee","\x4b","\x25","\x9f"),
	HX_HCSTRING("roomObjectArray","\xff","\x83","\x1d","\x77"),
	HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"),
	HX_HCSTRING("visitorObjectArray","\x4c","\x61","\x18","\xfb"),
	HX_HCSTRING("AddExhibitionObjectArrayVoid","\xfe","\xda","\xa8","\x16"),
	HX_HCSTRING("AddFloorObjectArrayVoid","\x03","\x47","\x8b","\xbb"),
	HX_HCSTRING("AddRoomObjectArrayVoid","\x72","\x91","\x78","\x70"),
	HX_HCSTRING("AddTagObjectArrayVoid","\xf5","\x73","\x13","\xe4"),
	HX_HCSTRING("AddVisitorObjectArrayVoid","\xa1","\x8d","\xa8","\x5d"),
	HX_HCSTRING("DetermineExhibitionFullThresholdInt","\xf5","\x23","\xaf","\x5e"),
	HX_HCSTRING("GetExhibitionFullThresholdInt","\xb8","\x38","\x85","\xbb"),
	HX_HCSTRING("GetExhibitionObjectArray","\xf5","\x8d","\xed","\x6d"),
	HX_HCSTRING("GetFloorObjectArray","\x84","\x2c","\xa9","\xb7"),
	HX_HCSTRING("GetRoomObjectArray","\x29","\x48","\x65","\xdd"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetVisitorObjectArray","\x62","\x13","\xc6","\x24"),
	HX_HCSTRING("SetExhibitionFullThresholdInt","\xc4","\xf2","\x5c","\x7d"),
	HX_HCSTRING("SetExhibitionObjectArrayVoid","\x5d","\x67","\xbb","\x35"),
	HX_HCSTRING("SetFloorObjectArrayVoid","\x04","\x17","\x22","\x1e"),
	HX_HCSTRING("SetRoomObjectArrayVoid","\x91","\x7c","\xef","\xd5"),
	HX_HCSTRING("SetTagObjectArrayVoid","\xb6","\x91","\x56","\x19"),
	HX_HCSTRING("SetVisitorObjectArrayVoid","\xe2","\x1f","\x94","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionGlobal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionGlobal_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionGlobal_obj::__mClass;

void CollectionGlobal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionGlobal","\x81","\x6a","\xb4","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CollectionGlobal_obj >;
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

