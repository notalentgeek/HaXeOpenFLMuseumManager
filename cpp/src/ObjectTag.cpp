#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif
#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif

Void ObjectTag_obj::__construct(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameString,::EnumTagType _typeEnum)
{
HX_STACK_FRAME("ObjectTag","new",0x440a0f2d,"ObjectTag.new","ObjectTag.hx",25,0x2198b4e3)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_feelEnum,"_feelEnum")
HX_STACK_ARG(_generalTagBool,"_generalTagBool")
HX_STACK_ARG(_nameString,"_nameString")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(26)
	::ObjectTag_obj::collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(27)
	::ObjectTag_obj::feelEnum = _feelEnum;
	HX_STACK_LINE(28)
	::ObjectTag_obj::generalTagBool = _generalTagBool;
	HX_STACK_LINE(29)
	::ObjectTag_obj::typeEnum = _typeEnum;
	HX_STACK_LINE(30)
	::String tmp = _nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::EnumTagType tmp1 = ::ObjectTag_obj::typeEnum;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::ObjectTag_obj::nameString = tmp3;
	HX_STACK_LINE(31)
	this->AddToArrayVoid();
}
;
	return null();
}

//ObjectTag_obj::~ObjectTag_obj() { }

Dynamic ObjectTag_obj::__CreateEmpty() { return  new ObjectTag_obj; }
hx::ObjectPtr< ObjectTag_obj > ObjectTag_obj::__new(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameString,::EnumTagType _typeEnum)
{  hx::ObjectPtr< ObjectTag_obj > _result_ = new ObjectTag_obj();
	_result_->__construct(_collectionGlobalObject,_feelEnum,_generalTagBool,_nameString,_typeEnum);
	return _result_;}

Dynamic ObjectTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectTag_obj > _result_ = new ObjectTag_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void ObjectTag_obj::AddToArrayVoid( ){
{
		HX_STACK_FRAME("ObjectTag","AddToArrayVoid",0xcdb8f664,"ObjectTag.AddToArrayVoid","ObjectTag.hx",33,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		bool tmp = ::ObjectTag_obj::generalTagBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(35)
			::CollectionGlobal tmp2 = ::ObjectTag_obj::collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			tmp2->GetTagGeneralObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(36)
			::CollectionGlobal tmp3 = ::ObjectTag_obj::collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			tmp3->GetTagObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(38)
			bool tmp2 = ::ObjectTag_obj::generalTagBool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			if ((tmp3)){
				HX_STACK_LINE(39)
				::CollectionGlobal tmp4 = ::ObjectTag_obj::collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(39)
				tmp4->GetTagGeneralObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(40)
				::CollectionGlobal tmp5 = ::ObjectTag_obj::collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				tmp5->GetTagObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,AddToArrayVoid,(void))

::EnumTagFeelType ObjectTag_obj::GetFeelEnum( ){
	HX_STACK_FRAME("ObjectTag","GetFeelEnum",0x47eeafea,"ObjectTag.GetFeelEnum","ObjectTag.hx",45,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::EnumTagFeelType tmp = ::ObjectTag_obj::feelEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetFeelEnum,return )

::String ObjectTag_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectTag","GetNameString",0x8d5da69f,"ObjectTag.GetNameString","ObjectTag.hx",47,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::String tmp = ::ObjectTag_obj::nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNameString,return )

::EnumTagType ObjectTag_obj::GetTypeEnum( ){
	HX_STACK_FRAME("ObjectTag","GetTypeEnum",0x067d1d3e,"ObjectTag.GetTypeEnum","ObjectTag.hx",52,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	::EnumTagType tmp = ::ObjectTag_obj::typeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetTypeEnum,return )

Void ObjectTag_obj::SetAdjectiveStringVoid( ::String _adjectiveString){
{
		HX_STACK_FRAME("ObjectTag","SetAdjectiveStringVoid",0xfb3755bf,"ObjectTag.SetAdjectiveStringVoid","ObjectTag.hx",58,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_adjectiveString,"_adjectiveString")
		HX_STACK_LINE(58)
		::ObjectTag_obj::adjectiveString = _adjectiveString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetAdjectiveStringVoid,(void))

Void ObjectTag_obj::SetAdverbStringVoid( ::String _adverbString){
{
		HX_STACK_FRAME("ObjectTag","SetAdverbStringVoid",0x4eb762d6,"ObjectTag.SetAdverbStringVoid","ObjectTag.hx",59,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_adverbString,"_adverbString")
		HX_STACK_LINE(59)
		::ObjectTag_obj::adverbString = _adverbString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetAdverbStringVoid,(void))

Void ObjectTag_obj::SetFeelEnumVoid( ::EnumTagFeelType _feelEnum){
{
		HX_STACK_FRAME("ObjectTag","SetFeelEnumVoid",0xe72e596a,"ObjectTag.SetFeelEnumVoid","ObjectTag.hx",60,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_feelEnum,"_feelEnum")
		HX_STACK_LINE(60)
		::ObjectTag_obj::feelEnum = _feelEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetFeelEnumVoid,(void))

Void ObjectTag_obj::SetGeneralTagBoolVoid( bool _generalTagBool){
{
		HX_STACK_FRAME("ObjectTag","SetGeneralTagBoolVoid",0xfcc174ff,"ObjectTag.SetGeneralTagBoolVoid","ObjectTag.hx",61,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_generalTagBool,"_generalTagBool")
		HX_STACK_LINE(62)
		::ObjectTag_obj::generalTagBool = _generalTagBool;
		HX_STACK_LINE(63)
		this->AddToArrayVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetGeneralTagBoolVoid,(void))

Void ObjectTag_obj::SetNameStringVoid( ::String _nameString){
{
		HX_STACK_FRAME("ObjectTag","SetNameStringVoid",0x6d79a99f,"ObjectTag.SetNameStringVoid","ObjectTag.hx",65,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameString,"_nameString")
		HX_STACK_LINE(65)
		::ObjectTag_obj::nameString = _nameString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNameStringVoid,(void))

Void ObjectTag_obj::SetNounPosStringVoid( ::String _nounPosString){
{
		HX_STACK_FRAME("ObjectTag","SetNounPosStringVoid",0xce35d2f0,"ObjectTag.SetNounPosStringVoid","ObjectTag.hx",66,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nounPosString,"_nounPosString")
		HX_STACK_LINE(66)
		::ObjectTag_obj::nounPosString = _nounPosString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounPosStringVoid,(void))

Void ObjectTag_obj::SetNounSPosStringVoid( ::String _nounSPosString){
{
		HX_STACK_FRAME("ObjectTag","SetNounSPosStringVoid",0x205ce7af,"ObjectTag.SetNounSPosStringVoid","ObjectTag.hx",67,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nounSPosString,"_nounSPosString")
		HX_STACK_LINE(67)
		::ObjectTag_obj::nounSPosString = _nounSPosString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounSPosStringVoid,(void))

Void ObjectTag_obj::SetNounSStringVoid( ::String _nounSString){
{
		HX_STACK_FRAME("ObjectTag","SetNounSStringVoid",0x1525c6cf,"ObjectTag.SetNounSStringVoid","ObjectTag.hx",68,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nounSString,"_nounSString")
		HX_STACK_LINE(68)
		::ObjectTag_obj::nounSString = _nounSString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounSStringVoid,(void))

Void ObjectTag_obj::SetNounStringVoid( ::String _nounString){
{
		HX_STACK_FRAME("ObjectTag","SetNounStringVoid",0xd3cdb8ee,"ObjectTag.SetNounStringVoid","ObjectTag.hx",69,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nounString,"_nounString")
		HX_STACK_LINE(69)
		::ObjectTag_obj::nounString = _nounString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounStringVoid,(void))

Void ObjectTag_obj::SetTypeEnumVoid( ::EnumTagType _typeEnum){
{
		HX_STACK_FRAME("ObjectTag","SetTypeEnumVoid",0x0fa000be,"ObjectTag.SetTypeEnumVoid","ObjectTag.hx",70,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_typeEnum,"_typeEnum")
		HX_STACK_LINE(70)
		::ObjectTag_obj::typeEnum = _typeEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetTypeEnumVoid,(void))

Void ObjectTag_obj::SetVerb1StringVoid( ::String _verb1String){
{
		HX_STACK_FRAME("ObjectTag","SetVerb1StringVoid",0x1e78a888,"ObjectTag.SetVerb1StringVoid","ObjectTag.hx",71,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_verb1String,"_verb1String")
		HX_STACK_LINE(71)
		::ObjectTag_obj::verb1String = _verb1String;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb1StringVoid,(void))

Void ObjectTag_obj::SetVerb2StringVoid( ::String _verb2String){
{
		HX_STACK_FRAME("ObjectTag","SetVerb2StringVoid",0x9f5713c9,"ObjectTag.SetVerb2StringVoid","ObjectTag.hx",72,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_verb2String,"_verb2String")
		HX_STACK_LINE(72)
		::ObjectTag_obj::verb2String = _verb2String;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb2StringVoid,(void))

Void ObjectTag_obj::SetVerb3StringVoid( ::String _verb3String){
{
		HX_STACK_FRAME("ObjectTag","SetVerb3StringVoid",0x20357f0a,"ObjectTag.SetVerb3StringVoid","ObjectTag.hx",73,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_verb3String,"_verb3String")
		HX_STACK_LINE(73)
		::ObjectTag_obj::verb3String = _verb3String;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb3StringVoid,(void))

Void ObjectTag_obj::SetVerbIngStringVoid( ::String _verbIngString){
{
		HX_STACK_FRAME("ObjectTag","SetVerbIngStringVoid",0x0a701cd9,"ObjectTag.SetVerbIngStringVoid","ObjectTag.hx",74,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_verbIngString,"_verbIngString")
		HX_STACK_LINE(74)
		::ObjectTag_obj::verbIngString = _verbIngString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerbIngStringVoid,(void))

Void ObjectTag_obj::SetVerbSStringVoid( ::String _verbSString){
{
		HX_STACK_FRAME("ObjectTag","SetVerbSStringVoid",0x3c02e72a,"ObjectTag.SetVerbSStringVoid","ObjectTag.hx",75,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_verbSString,"_verbSString")
		HX_STACK_LINE(75)
		::ObjectTag_obj::verbSString = _verbSString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerbSStringVoid,(void))

::CollectionGlobal ObjectTag_obj::collectionGlobalObject;

::String ObjectTag_obj::adjectiveString;

::String ObjectTag_obj::adverbString;

::EnumTagFeelType ObjectTag_obj::feelEnum;

bool ObjectTag_obj::generalTagBool;

::String ObjectTag_obj::nameString;

::String ObjectTag_obj::nounPosString;

::String ObjectTag_obj::nounSPosString;

::String ObjectTag_obj::nounSString;

::String ObjectTag_obj::nounString;

::EnumTagType ObjectTag_obj::typeEnum;

::String ObjectTag_obj::verb1String;

::String ObjectTag_obj::verb2String;

::String ObjectTag_obj::verb3String;

::String ObjectTag_obj::verbIngString;

::String ObjectTag_obj::verbSString;

::String ObjectTag_obj::GetAdjectiveString( ){
	HX_STACK_FRAME("ObjectTag","GetAdjectiveString",0xc3e17257,"ObjectTag.GetAdjectiveString","ObjectTag.hx",43,0x2198b4e3)
	HX_STACK_LINE(43)
	::String tmp = ::ObjectTag_obj::adjectiveString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetAdjectiveString,return )

::String ObjectTag_obj::GetAdverbString( ){
	HX_STACK_FRAME("ObjectTag","GetAdverbString",0xbf251d56,"ObjectTag.GetAdverbString","ObjectTag.hx",44,0x2198b4e3)
	HX_STACK_LINE(44)
	::String tmp = ::ObjectTag_obj::adverbString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetAdverbString,return )

bool ObjectTag_obj::GetGeneralTagBool( ){
	HX_STACK_FRAME("ObjectTag","GetGeneralTagBool",0xf0dc4bff,"ObjectTag.GetGeneralTagBool","ObjectTag.hx",46,0x2198b4e3)
	HX_STACK_LINE(46)
	bool tmp = ::ObjectTag_obj::generalTagBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetGeneralTagBool,return )

::String ObjectTag_obj::GetNounPosString( ){
	HX_STACK_FRAME("ObjectTag","GetNounPosString",0x32388808,"ObjectTag.GetNounPosString","ObjectTag.hx",48,0x2198b4e3)
	HX_STACK_LINE(48)
	::String tmp = ::ObjectTag_obj::nounPosString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounPosString,return )

::String ObjectTag_obj::GetNounSPosString( ){
	HX_STACK_FRAME("ObjectTag","GetNounSPosString",0xbdbca6af,"ObjectTag.GetNounSPosString","ObjectTag.hx",49,0x2198b4e3)
	HX_STACK_LINE(49)
	::String tmp = ::ObjectTag_obj::nounSPosString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounSPosString,return )

::String ObjectTag_obj::GetNounSString( ){
	HX_STACK_FRAME("ObjectTag","GetNounSString",0x3ded6567,"ObjectTag.GetNounSString","ObjectTag.hx",50,0x2198b4e3)
	HX_STACK_LINE(50)
	::String tmp = ::ObjectTag_obj::nounSString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounSString,return )

::String ObjectTag_obj::GetNounString( ){
	HX_STACK_FRAME("ObjectTag","GetNounString",0x5666226e,"ObjectTag.GetNounString","ObjectTag.hx",51,0x2198b4e3)
	HX_STACK_LINE(51)
	::String tmp = ::ObjectTag_obj::nounString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounString,return )

::String ObjectTag_obj::GetVerb1String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb1String",0x14ecb6a0,"ObjectTag.GetVerb1String","ObjectTag.hx",53,0x2198b4e3)
	HX_STACK_LINE(53)
	::String tmp = ::ObjectTag_obj::verb1String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb1String,return )

::String ObjectTag_obj::GetVerb2String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb2String",0x3e822d61,"ObjectTag.GetVerb2String","ObjectTag.hx",54,0x2198b4e3)
	HX_STACK_LINE(54)
	::String tmp = ::ObjectTag_obj::verb2String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb2String,return )

::String ObjectTag_obj::GetVerb3String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb3String",0x6817a422,"ObjectTag.GetVerb3String","ObjectTag.hx",55,0x2198b4e3)
	HX_STACK_LINE(55)
	::String tmp = ::ObjectTag_obj::verb3String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb3String,return )

::String ObjectTag_obj::GetVerbIngString( ){
	HX_STACK_FRAME("ObjectTag","GetVerbIngString",0x57db6971,"ObjectTag.GetVerbIngString","ObjectTag.hx",56,0x2198b4e3)
	HX_STACK_LINE(56)
	::String tmp = ::ObjectTag_obj::verbIngString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerbIngString,return )

::String ObjectTag_obj::GetVerbSString( ){
	HX_STACK_FRAME("ObjectTag","GetVerbSString",0x9ac67c42,"ObjectTag.GetVerbSString","ObjectTag.hx",57,0x2198b4e3)
	HX_STACK_LINE(57)
	::String tmp = ::ObjectTag_obj::verbSString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerbSString,return )


ObjectTag_obj::ObjectTag_obj()
{
}

Dynamic ObjectTag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"GetFeelEnum") ) { return GetFeelEnum_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTypeEnum") ) { return GetTypeEnum_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GetNameString") ) { return GetNameString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"AddToArrayVoid") ) { return AddToArrayVoid_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SetFeelEnumVoid") ) { return SetFeelEnumVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTypeEnumVoid") ) { return SetTypeEnumVoid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SetNameStringVoid") ) { return SetNameStringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNounStringVoid") ) { return SetNounStringVoid_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SetNounSStringVoid") ) { return SetNounSStringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerb1StringVoid") ) { return SetVerb1StringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerb2StringVoid") ) { return SetVerb2StringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerb3StringVoid") ) { return SetVerb3StringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerbSStringVoid") ) { return SetVerbSStringVoid_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"SetAdverbStringVoid") ) { return SetAdverbStringVoid_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SetNounPosStringVoid") ) { return SetNounPosStringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerbIngStringVoid") ) { return SetVerbIngStringVoid_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SetGeneralTagBoolVoid") ) { return SetGeneralTagBoolVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNounSPosStringVoid") ) { return SetNounSPosStringVoid_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"SetAdjectiveStringVoid") ) { return SetAdjectiveStringVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ObjectTag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"feelEnum") ) { outValue = feelEnum; return true;  }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { outValue = typeEnum; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { outValue = nameString; return true;  }
		if (HX_FIELD_EQ(inName,"nounString") ) { outValue = nounString; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nounSString") ) { outValue = nounSString; return true;  }
		if (HX_FIELD_EQ(inName,"verb1String") ) { outValue = verb1String; return true;  }
		if (HX_FIELD_EQ(inName,"verb2String") ) { outValue = verb2String; return true;  }
		if (HX_FIELD_EQ(inName,"verb3String") ) { outValue = verb3String; return true;  }
		if (HX_FIELD_EQ(inName,"verbSString") ) { outValue = verbSString; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"adverbString") ) { outValue = adverbString; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nounPosString") ) { outValue = nounPosString; return true;  }
		if (HX_FIELD_EQ(inName,"verbIngString") ) { outValue = verbIngString; return true;  }
		if (HX_FIELD_EQ(inName,"GetNounString") ) { outValue = GetNounString_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generalTagBool") ) { outValue = generalTagBool; return true;  }
		if (HX_FIELD_EQ(inName,"nounSPosString") ) { outValue = nounSPosString; return true;  }
		if (HX_FIELD_EQ(inName,"GetNounSString") ) { outValue = GetNounSString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetVerb1String") ) { outValue = GetVerb1String_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetVerb2String") ) { outValue = GetVerb2String_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetVerb3String") ) { outValue = GetVerb3String_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetVerbSString") ) { outValue = GetVerbSString_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"adjectiveString") ) { outValue = adjectiveString; return true;  }
		if (HX_FIELD_EQ(inName,"GetAdverbString") ) { outValue = GetAdverbString_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetNounPosString") ) { outValue = GetNounPosString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetVerbIngString") ) { outValue = GetVerbIngString_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetGeneralTagBool") ) { outValue = GetGeneralTagBool_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetNounSPosString") ) { outValue = GetNounSPosString_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"GetAdjectiveString") ) { outValue = GetAdjectiveString_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { outValue = collectionGlobalObject; return true;  }
	}
	return false;
}

bool ObjectTag_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"feelEnum") ) { feelEnum=ioValue.Cast< ::EnumTagFeelType >(); return true; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { typeEnum=ioValue.Cast< ::EnumTagType >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { nameString=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"nounString") ) { nounString=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nounSString") ) { nounSString=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"verb1String") ) { verb1String=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"verb2String") ) { verb2String=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"verb3String") ) { verb3String=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"verbSString") ) { verbSString=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"adverbString") ) { adverbString=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nounPosString") ) { nounPosString=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"verbIngString") ) { verbIngString=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generalTagBool") ) { generalTagBool=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"nounSPosString") ) { nounSPosString=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"adjectiveString") ) { adjectiveString=ioValue.Cast< ::String >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=ioValue.Cast< ::CollectionGlobal >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(void *) &ObjectTag_obj::collectionGlobalObject,HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsString,(void *) &ObjectTag_obj::adjectiveString,HX_HCSTRING("adjectiveString","\x5a","\x3e","\x09","\xd9")},
	{hx::fsString,(void *) &ObjectTag_obj::adverbString,HX_HCSTRING("adverbString","\x73","\x01","\x6f","\xc5")},
	{hx::fsObject /*::EnumTagFeelType*/ ,(void *) &ObjectTag_obj::feelEnum,HX_HCSTRING("feelEnum","\x87","\x01","\x53","\xf1")},
	{hx::fsBool,(void *) &ObjectTag_obj::generalTagBool,HX_HCSTRING("generalTagBool","\x5c","\x31","\x7d","\x88")},
	{hx::fsString,(void *) &ObjectTag_obj::nameString,HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95")},
	{hx::fsString,(void *) &ObjectTag_obj::nounPosString,HX_HCSTRING("nounPosString","\x4b","\x3d","\x96","\xac")},
	{hx::fsString,(void *) &ObjectTag_obj::nounSPosString,HX_HCSTRING("nounSPosString","\x0c","\x8c","\x5d","\x55")},
	{hx::fsString,(void *) &ObjectTag_obj::nounSString,HX_HCSTRING("nounSString","\xea","\x33","\x18","\x7d")},
	{hx::fsString,(void *) &ObjectTag_obj::nounString,HX_HCSTRING("nounString","\x4b","\xd5","\xb7","\x5e")},
	{hx::fsObject /*::EnumTagType*/ ,(void *) &ObjectTag_obj::typeEnum,HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf")},
	{hx::fsString,(void *) &ObjectTag_obj::verb1String,HX_HCSTRING("verb1String","\x23","\x85","\x17","\x54")},
	{hx::fsString,(void *) &ObjectTag_obj::verb2String,HX_HCSTRING("verb2String","\xe4","\xfb","\xac","\x7d")},
	{hx::fsString,(void *) &ObjectTag_obj::verb3String,HX_HCSTRING("verb3String","\xa5","\x72","\x42","\xa7")},
	{hx::fsString,(void *) &ObjectTag_obj::verbIngString,HX_HCSTRING("verbIngString","\xb4","\x1e","\x39","\xd2")},
	{hx::fsString,(void *) &ObjectTag_obj::verbSString,HX_HCSTRING("verbSString","\xc5","\x4a","\xf1","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("AddToArrayVoid","\x11","\xac","\xd7","\x3e"),
	HX_HCSTRING("GetFeelEnum","\x1d","\x5c","\x79","\xfb"),
	HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"),
	HX_HCSTRING("GetTypeEnum","\x71","\xc9","\x07","\xba"),
	HX_HCSTRING("SetAdjectiveStringVoid","\x6c","\x00","\xb7","\xf6"),
	HX_HCSTRING("SetAdverbStringVoid","\x09","\xfa","\xe5","\xd4"),
	HX_HCSTRING("SetFeelEnumVoid","\x1d","\x9b","\xee","\x70"),
	HX_HCSTRING("SetGeneralTagBoolVoid","\xf2","\x7e","\x2a","\x5d"),
	HX_HCSTRING("SetNameStringVoid","\x12","\xfe","\x13","\x19"),
	HX_HCSTRING("SetNounPosStringVoid","\x5d","\x88","\xcb","\xb0"),
	HX_HCSTRING("SetNounSPosStringVoid","\xa2","\xf1","\xc5","\x80"),
	HX_HCSTRING("SetNounSStringVoid","\xfc","\x56","\x95","\x90"),
	HX_HCSTRING("SetNounStringVoid","\x61","\x0d","\x68","\x7f"),
	HX_HCSTRING("SetTypeEnumVoid","\x71","\x42","\x60","\x99"),
	HX_HCSTRING("SetVerb1StringVoid","\xb5","\x38","\xe8","\x99"),
	HX_HCSTRING("SetVerb2StringVoid","\xf6","\xa3","\xc6","\x1a"),
	HX_HCSTRING("SetVerb3StringVoid","\x37","\x0f","\xa5","\x9b"),
	HX_HCSTRING("SetVerbIngStringVoid","\x46","\xd2","\x05","\xed"),
	HX_HCSTRING("SetVerbSStringVoid","\x57","\x77","\x72","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectTag_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::adjectiveString,"adjectiveString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::adverbString,"adverbString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::feelEnum,"feelEnum");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::generalTagBool,"generalTagBool");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::nameString,"nameString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::nounPosString,"nounPosString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::nounSPosString,"nounSPosString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::nounSString,"nounSString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::nounString,"nounString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::typeEnum,"typeEnum");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::verb1String,"verb1String");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::verb2String,"verb2String");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::verb3String,"verb3String");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::verbIngString,"verbIngString");
	HX_MARK_MEMBER_NAME(ObjectTag_obj::verbSString,"verbSString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::adjectiveString,"adjectiveString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::adverbString,"adverbString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::feelEnum,"feelEnum");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::generalTagBool,"generalTagBool");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::nameString,"nameString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::nounPosString,"nounPosString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::nounSPosString,"nounSPosString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::nounSString,"nounSString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::nounString,"nounString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::typeEnum,"typeEnum");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::verb1String,"verb1String");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::verb2String,"verb2String");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::verb3String,"verb3String");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::verbIngString,"verbIngString");
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::verbSString,"verbSString");
};

#endif

hx::Class ObjectTag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("adjectiveString","\x5a","\x3e","\x09","\xd9"),
	HX_HCSTRING("adverbString","\x73","\x01","\x6f","\xc5"),
	HX_HCSTRING("feelEnum","\x87","\x01","\x53","\xf1"),
	HX_HCSTRING("generalTagBool","\x5c","\x31","\x7d","\x88"),
	HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"),
	HX_HCSTRING("nounPosString","\x4b","\x3d","\x96","\xac"),
	HX_HCSTRING("nounSPosString","\x0c","\x8c","\x5d","\x55"),
	HX_HCSTRING("nounSString","\xea","\x33","\x18","\x7d"),
	HX_HCSTRING("nounString","\x4b","\xd5","\xb7","\x5e"),
	HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"),
	HX_HCSTRING("verb1String","\x23","\x85","\x17","\x54"),
	HX_HCSTRING("verb2String","\xe4","\xfb","\xac","\x7d"),
	HX_HCSTRING("verb3String","\xa5","\x72","\x42","\xa7"),
	HX_HCSTRING("verbIngString","\xb4","\x1e","\x39","\xd2"),
	HX_HCSTRING("verbSString","\xc5","\x4a","\xf1","\xd9"),
	HX_HCSTRING("GetAdjectiveString","\x84","\x02","\x51","\x3f"),
	HX_HCSTRING("GetAdverbString","\x09","\x5f","\xe5","\x48"),
	HX_HCSTRING("GetGeneralTagBool","\x72","\xa0","\x76","\x9c"),
	HX_HCSTRING("GetNounPosString","\xf5","\xc2","\xb1","\x30"),
	HX_HCSTRING("GetNounSPosString","\x22","\xfb","\x56","\x69"),
	HX_HCSTRING("GetNounSString","\x14","\x1b","\x0c","\xaf"),
	HX_HCSTRING("GetNounString","\x61","\x81","\x1a","\x03"),
	HX_HCSTRING("GetVerb1String","\x4d","\x6c","\x0b","\x86"),
	HX_HCSTRING("GetVerb2String","\x0e","\xe3","\xa0","\xaf"),
	HX_HCSTRING("GetVerb3String","\xcf","\x59","\x36","\xd9"),
	HX_HCSTRING("GetVerbIngString","\x5e","\xa4","\x54","\x56"),
	HX_HCSTRING("GetVerbSString","\xef","\x31","\xe5","\x0b"),
	::String(null()) };

void ObjectTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectTag","\xbb","\xf4","\x55","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ObjectTag_obj::__GetStatic;
	__mClass->mSetStaticField = &ObjectTag_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectTag_obj >;
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

void ObjectTag_obj::__boot()
{
	collectionGlobalObject= null();
	adjectiveString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	adverbString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	feelEnum= null();
	generalTagBool= true;
	nameString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	nounPosString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	nounSPosString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	nounSString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	nounString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	typeEnum= null();
	verb1String= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	verb2String= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	verb3String= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	verbIngString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	verbSString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

