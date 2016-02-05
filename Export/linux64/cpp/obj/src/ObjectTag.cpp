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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void ObjectTag_obj::__construct(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameString,::EnumTagType _typeEnum)
{
HX_STACK_FRAME("ObjectTag","new",0x440a0f2d,"ObjectTag.new","ObjectTag.hx",2,0x2198b4e3)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_feelEnum,"_feelEnum")
HX_STACK_ARG(_generalTagBool,"_generalTagBool")
HX_STACK_ARG(_nameString,"_nameString")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(18)
	this->verbSString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(17)
	this->verbIngString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(16)
	this->verb3String = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(15)
	this->verb2String = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(14)
	this->verb1String = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(13)
	this->typeEnum = null();
	HX_STACK_LINE(12)
	this->nounString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(11)
	this->nounSString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(10)
	this->nounSPosString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(9)
	this->nounPosString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(8)
	this->nameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(7)
	this->generalTagBool = true;
	HX_STACK_LINE(6)
	this->feelEnum = null();
	HX_STACK_LINE(5)
	this->adverbString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(4)
	this->adjectiveString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(3)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(26)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(27)
	this->feelEnum = _feelEnum;
	HX_STACK_LINE(28)
	this->generalTagBool = _generalTagBool;
	HX_STACK_LINE(29)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(30)
	::String tmp = (_nameString + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::EnumTagType tmp1 = this->typeEnum;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	this->nameString = tmp3;
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
		bool tmp = this->generalTagBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(35)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			tmp2->GetTagGeneralObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(36)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			tmp3->GetTagObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(38)
			bool tmp2 = this->generalTagBool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			if ((tmp3)){
				HX_STACK_LINE(39)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(39)
				tmp4->GetTagGeneralObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(40)
				::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				tmp5->GetTagObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,AddToArrayVoid,(void))

::String ObjectTag_obj::GetAdjectiveString( ){
	HX_STACK_FRAME("ObjectTag","GetAdjectiveString",0xc3e17257,"ObjectTag.GetAdjectiveString","ObjectTag.hx",43,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::String tmp = this->adjectiveString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetAdjectiveString,return )

::String ObjectTag_obj::GetAdverbString( ){
	HX_STACK_FRAME("ObjectTag","GetAdverbString",0xbf251d56,"ObjectTag.GetAdverbString","ObjectTag.hx",44,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::String tmp = this->adverbString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetAdverbString,return )

::EnumTagFeelType ObjectTag_obj::GetFeelEnum( ){
	HX_STACK_FRAME("ObjectTag","GetFeelEnum",0x47eeafea,"ObjectTag.GetFeelEnum","ObjectTag.hx",45,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::EnumTagFeelType tmp = this->feelEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetFeelEnum,return )

bool ObjectTag_obj::GetGeneralTagBool( ){
	HX_STACK_FRAME("ObjectTag","GetGeneralTagBool",0xf0dc4bff,"ObjectTag.GetGeneralTagBool","ObjectTag.hx",46,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	bool tmp = this->generalTagBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetGeneralTagBool,return )

::String ObjectTag_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectTag","GetNameString",0x8d5da69f,"ObjectTag.GetNameString","ObjectTag.hx",47,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::String tmp = this->nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNameString,return )

::String ObjectTag_obj::GetNounPosString( ){
	HX_STACK_FRAME("ObjectTag","GetNounPosString",0x32388808,"ObjectTag.GetNounPosString","ObjectTag.hx",48,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::String tmp = this->nounPosString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounPosString,return )

::String ObjectTag_obj::GetNounSPosString( ){
	HX_STACK_FRAME("ObjectTag","GetNounSPosString",0xbdbca6af,"ObjectTag.GetNounSPosString","ObjectTag.hx",49,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	::String tmp = this->nounSPosString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounSPosString,return )

::String ObjectTag_obj::GetNounSString( ){
	HX_STACK_FRAME("ObjectTag","GetNounSString",0x3ded6567,"ObjectTag.GetNounSString","ObjectTag.hx",50,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::String tmp = this->nounSString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounSString,return )

::String ObjectTag_obj::GetNounString( ){
	HX_STACK_FRAME("ObjectTag","GetNounString",0x5666226e,"ObjectTag.GetNounString","ObjectTag.hx",51,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::String tmp = this->nounString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounString,return )

::EnumTagType ObjectTag_obj::GetTypeEnum( ){
	HX_STACK_FRAME("ObjectTag","GetTypeEnum",0x067d1d3e,"ObjectTag.GetTypeEnum","ObjectTag.hx",52,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	::EnumTagType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetTypeEnum,return )

::String ObjectTag_obj::GetVerb1String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb1String",0x14ecb6a0,"ObjectTag.GetVerb1String","ObjectTag.hx",53,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::String tmp = this->verb1String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb1String,return )

::String ObjectTag_obj::GetVerb2String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb2String",0x3e822d61,"ObjectTag.GetVerb2String","ObjectTag.hx",54,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::String tmp = this->verb2String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb2String,return )

::String ObjectTag_obj::GetVerb3String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb3String",0x6817a422,"ObjectTag.GetVerb3String","ObjectTag.hx",55,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::String tmp = this->verb3String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb3String,return )

::String ObjectTag_obj::GetVerbIngString( ){
	HX_STACK_FRAME("ObjectTag","GetVerbIngString",0x57db6971,"ObjectTag.GetVerbIngString","ObjectTag.hx",56,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::String tmp = this->verbIngString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerbIngString,return )

::String ObjectTag_obj::GetVerbSString( ){
	HX_STACK_FRAME("ObjectTag","GetVerbSString",0x9ac67c42,"ObjectTag.GetVerbSString","ObjectTag.hx",57,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	::String tmp = this->verbSString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerbSString,return )

Void ObjectTag_obj::RemoveFromArray( ){
{
		HX_STACK_FRAME("ObjectTag","RemoveFromArray",0xf202b918,"ObjectTag.RemoveFromArray","ObjectTag.hx",58,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		bool tmp = this->generalTagBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		if ((tmp1)){
			HX_STACK_LINE(60)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("ObjectTag.hx","\xe3","\xb4","\x98","\x21"),60,HX_HCSTRING("ObjectTag","\xbb","\xf4","\x55","\xe5"),HX_HCSTRING("RemoveFromArray","\xcb","\xfa","\xc2","\x7b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::haxe::Log_obj::trace(HX_HCSTRING("LOL","\x69","\xf0","\x39","\x00"),tmp2);
			HX_STACK_LINE(60)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			tmp3->GetTagGeneralObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(61)
			bool tmp2 = this->generalTagBool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			if ((tmp3)){
				HX_STACK_LINE(61)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("ObjectTag.hx","\xe3","\xb4","\x98","\x21"),61,HX_HCSTRING("ObjectTag","\xbb","\xf4","\x55","\xe5"),HX_HCSTRING("RemoveFromArray","\xcb","\xfa","\xc2","\x7b"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				::haxe::Log_obj::trace(HX_HCSTRING("LOL1","\xa8","\x6b","\x78","\x32"),tmp4);
				HX_STACK_LINE(61)
				::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				tmp5->GetTagObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,RemoveFromArray,(void))

::ObjectTag ObjectTag_obj::SetAdjectiveStringObject( ::String _adjectiveString){
	HX_STACK_FRAME("ObjectTag","SetAdjectiveStringObject",0x6ffcc1ea,"ObjectTag.SetAdjectiveStringObject","ObjectTag.hx",65,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_adjectiveString,"_adjectiveString")
	HX_STACK_LINE(65)
	this->adjectiveString = _adjectiveString;
	HX_STACK_LINE(65)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetAdjectiveStringObject,return )

::ObjectTag ObjectTag_obj::SetAdverbStringObject( ::String _adverbString){
	HX_STACK_FRAME("ObjectTag","SetAdverbStringObject",0xad6b82c1,"ObjectTag.SetAdverbStringObject","ObjectTag.hx",66,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_adverbString,"_adverbString")
	HX_STACK_LINE(66)
	this->adverbString = _adverbString;
	HX_STACK_LINE(66)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetAdverbStringObject,return )

::ObjectTag ObjectTag_obj::SetFeelEnumObject( ::EnumTagFeelType _feelEnum){
	HX_STACK_FRAME("ObjectTag","SetFeelEnumObject",0x8a7c4655,"ObjectTag.SetFeelEnumObject","ObjectTag.hx",67,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_feelEnum,"_feelEnum")
	HX_STACK_LINE(67)
	this->feelEnum = _feelEnum;
	HX_STACK_LINE(67)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetFeelEnumObject,return )

::ObjectTag ObjectTag_obj::SetGeneralTagBoolObject( bool _generalTagBool){
	HX_STACK_FRAME("ObjectTag","SetGeneralTagBoolObject",0x7fbd312a,"ObjectTag.SetGeneralTagBoolObject","ObjectTag.hx",68,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_generalTagBool,"_generalTagBool")
	HX_STACK_LINE(69)
	this->generalTagBool = _generalTagBool;
	HX_STACK_LINE(70)
	this->AddToArrayVoid();
	HX_STACK_LINE(71)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetGeneralTagBoolObject,return )

::ObjectTag ObjectTag_obj::SetNameStringObject( ::String _nameString){
	HX_STACK_FRAME("ObjectTag","SetNameStringObject",0xb663cdca,"ObjectTag.SetNameStringObject","ObjectTag.hx",73,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(73)
	this->nameString = _nameString;
	HX_STACK_LINE(73)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNameStringObject,return )

::ObjectTag ObjectTag_obj::SetNounPosStringObject( ::String _nounPosString){
	HX_STACK_FRAME("ObjectTag","SetNounPosStringObject",0xdd79ad5b,"ObjectTag.SetNounPosStringObject","ObjectTag.hx",74,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounPosString,"_nounPosString")
	HX_STACK_LINE(74)
	this->nounPosString = _nounPosString;
	HX_STACK_LINE(74)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounPosStringObject,return )

::ObjectTag ObjectTag_obj::SetNounSPosStringObject( ::String _nounSPosString){
	HX_STACK_FRAME("ObjectTag","SetNounSPosStringObject",0x571eafda,"ObjectTag.SetNounSPosStringObject","ObjectTag.hx",75,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounSPosString,"_nounSPosString")
	HX_STACK_LINE(75)
	this->nounSPosString = _nounSPosString;
	HX_STACK_LINE(75)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounSPosStringObject,return )

::ObjectTag ObjectTag_obj::SetNounSStringObject( ::String _nounSString){
	HX_STACK_FRAME("ObjectTag","SetNounSStringObject",0xb73596fa,"ObjectTag.SetNounSStringObject","ObjectTag.hx",76,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounSString,"_nounSString")
	HX_STACK_LINE(76)
	this->nounSString = _nounSString;
	HX_STACK_LINE(76)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounSStringObject,return )

::ObjectTag ObjectTag_obj::SetNounStringObject( ::String _nounString){
	HX_STACK_FRAME("ObjectTag","SetNounStringObject",0x65558ed9,"ObjectTag.SetNounStringObject","ObjectTag.hx",77,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounString,"_nounString")
	HX_STACK_LINE(77)
	this->nounString = _nounString;
	HX_STACK_LINE(77)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounStringObject,return )

Void ObjectTag_obj::SetTypeEnumVoid( ::EnumTagType _typeEnum){
{
		HX_STACK_FRAME("ObjectTag","SetTypeEnumVoid",0x0fa000be,"ObjectTag.SetTypeEnumVoid","ObjectTag.hx",78,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_typeEnum,"_typeEnum")
		HX_STACK_LINE(78)
		this->typeEnum = _typeEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetTypeEnumVoid,(void))

::ObjectTag ObjectTag_obj::SetVerb1StringObject( ::String _verb1String){
	HX_STACK_FRAME("ObjectTag","SetVerb1StringObject",0xe44f18f3,"ObjectTag.SetVerb1StringObject","ObjectTag.hx",79,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verb1String,"_verb1String")
	HX_STACK_LINE(79)
	this->verb1String = _verb1String;
	HX_STACK_LINE(79)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb1StringObject,return )

::ObjectTag ObjectTag_obj::SetVerb2StringObject( ::String _verb2String){
	HX_STACK_FRAME("ObjectTag","SetVerb2StringObject",0x2a0f9674,"ObjectTag.SetVerb2StringObject","ObjectTag.hx",80,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verb2String,"_verb2String")
	HX_STACK_LINE(80)
	this->verb2String = _verb2String;
	HX_STACK_LINE(80)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb2StringObject,return )

::ObjectTag ObjectTag_obj::SetVerb3StringObject( ::String _verb3String){
	HX_STACK_FRAME("ObjectTag","SetVerb3StringObject",0x6fd013f5,"ObjectTag.SetVerb3StringObject","ObjectTag.hx",81,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verb3String,"_verb3String")
	HX_STACK_LINE(81)
	this->verb3String = _verb3String;
	HX_STACK_LINE(81)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb3StringObject,return )

::ObjectTag ObjectTag_obj::SetVerbIngStringObject( ::String _verbIngString){
	HX_STACK_FRAME("ObjectTag","SetVerbIngStringObject",0x54490384,"ObjectTag.SetVerbIngStringObject","ObjectTag.hx",82,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verbIngString,"_verbIngString")
	HX_STACK_LINE(82)
	this->verbIngString = _verbIngString;
	HX_STACK_LINE(82)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerbIngStringObject,return )

::ObjectTag ObjectTag_obj::SetVerbSStringObject( ::String _verbSString){
	HX_STACK_FRAME("ObjectTag","SetVerbSStringObject",0x27dfc415,"ObjectTag.SetVerbSStringObject","ObjectTag.hx",83,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verbSString,"_verbSString")
	HX_STACK_LINE(83)
	this->verbSString = _verbSString;
	HX_STACK_LINE(83)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerbSStringObject,return )


ObjectTag_obj::ObjectTag_obj()
{
}

void ObjectTag_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectTag);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(adjectiveString,"adjectiveString");
	HX_MARK_MEMBER_NAME(adverbString,"adverbString");
	HX_MARK_MEMBER_NAME(feelEnum,"feelEnum");
	HX_MARK_MEMBER_NAME(generalTagBool,"generalTagBool");
	HX_MARK_MEMBER_NAME(nameString,"nameString");
	HX_MARK_MEMBER_NAME(nounPosString,"nounPosString");
	HX_MARK_MEMBER_NAME(nounSPosString,"nounSPosString");
	HX_MARK_MEMBER_NAME(nounSString,"nounSString");
	HX_MARK_MEMBER_NAME(nounString,"nounString");
	HX_MARK_MEMBER_NAME(typeEnum,"typeEnum");
	HX_MARK_MEMBER_NAME(verb1String,"verb1String");
	HX_MARK_MEMBER_NAME(verb2String,"verb2String");
	HX_MARK_MEMBER_NAME(verb3String,"verb3String");
	HX_MARK_MEMBER_NAME(verbIngString,"verbIngString");
	HX_MARK_MEMBER_NAME(verbSString,"verbSString");
	HX_MARK_END_CLASS();
}

void ObjectTag_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(adjectiveString,"adjectiveString");
	HX_VISIT_MEMBER_NAME(adverbString,"adverbString");
	HX_VISIT_MEMBER_NAME(feelEnum,"feelEnum");
	HX_VISIT_MEMBER_NAME(generalTagBool,"generalTagBool");
	HX_VISIT_MEMBER_NAME(nameString,"nameString");
	HX_VISIT_MEMBER_NAME(nounPosString,"nounPosString");
	HX_VISIT_MEMBER_NAME(nounSPosString,"nounSPosString");
	HX_VISIT_MEMBER_NAME(nounSString,"nounSString");
	HX_VISIT_MEMBER_NAME(nounString,"nounString");
	HX_VISIT_MEMBER_NAME(typeEnum,"typeEnum");
	HX_VISIT_MEMBER_NAME(verb1String,"verb1String");
	HX_VISIT_MEMBER_NAME(verb2String,"verb2String");
	HX_VISIT_MEMBER_NAME(verb3String,"verb3String");
	HX_VISIT_MEMBER_NAME(verbIngString,"verbIngString");
	HX_VISIT_MEMBER_NAME(verbSString,"verbSString");
}

Dynamic ObjectTag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"feelEnum") ) { return feelEnum; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { return typeEnum; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { return nameString; }
		if (HX_FIELD_EQ(inName,"nounString") ) { return nounString; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nounSString") ) { return nounSString; }
		if (HX_FIELD_EQ(inName,"verb1String") ) { return verb1String; }
		if (HX_FIELD_EQ(inName,"verb2String") ) { return verb2String; }
		if (HX_FIELD_EQ(inName,"verb3String") ) { return verb3String; }
		if (HX_FIELD_EQ(inName,"verbSString") ) { return verbSString; }
		if (HX_FIELD_EQ(inName,"GetFeelEnum") ) { return GetFeelEnum_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTypeEnum") ) { return GetTypeEnum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"adverbString") ) { return adverbString; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nounPosString") ) { return nounPosString; }
		if (HX_FIELD_EQ(inName,"verbIngString") ) { return verbIngString; }
		if (HX_FIELD_EQ(inName,"GetNameString") ) { return GetNameString_dyn(); }
		if (HX_FIELD_EQ(inName,"GetNounString") ) { return GetNounString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generalTagBool") ) { return generalTagBool; }
		if (HX_FIELD_EQ(inName,"nounSPosString") ) { return nounSPosString; }
		if (HX_FIELD_EQ(inName,"AddToArrayVoid") ) { return AddToArrayVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetNounSString") ) { return GetNounSString_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVerb1String") ) { return GetVerb1String_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVerb2String") ) { return GetVerb2String_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVerb3String") ) { return GetVerb3String_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVerbSString") ) { return GetVerbSString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"adjectiveString") ) { return adjectiveString; }
		if (HX_FIELD_EQ(inName,"GetAdverbString") ) { return GetAdverbString_dyn(); }
		if (HX_FIELD_EQ(inName,"RemoveFromArray") ) { return RemoveFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTypeEnumVoid") ) { return SetTypeEnumVoid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetNounPosString") ) { return GetNounPosString_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVerbIngString") ) { return GetVerbIngString_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetGeneralTagBool") ) { return GetGeneralTagBool_dyn(); }
		if (HX_FIELD_EQ(inName,"GetNounSPosString") ) { return GetNounSPosString_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFeelEnumObject") ) { return SetFeelEnumObject_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"GetAdjectiveString") ) { return GetAdjectiveString_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"SetNameStringObject") ) { return SetNameStringObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNounStringObject") ) { return SetNounStringObject_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SetNounSStringObject") ) { return SetNounSStringObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerb1StringObject") ) { return SetVerb1StringObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerb2StringObject") ) { return SetVerb2StringObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerb3StringObject") ) { return SetVerb3StringObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerbSStringObject") ) { return SetVerbSStringObject_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SetAdverbStringObject") ) { return SetAdverbStringObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"SetNounPosStringObject") ) { return SetNounPosStringObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerbIngStringObject") ) { return SetVerbIngStringObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"SetGeneralTagBoolObject") ) { return SetGeneralTagBoolObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNounSPosStringObject") ) { return SetNounSPosStringObject_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"SetAdjectiveStringObject") ) { return SetAdjectiveStringObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectTag_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"feelEnum") ) { feelEnum=inValue.Cast< ::EnumTagFeelType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { typeEnum=inValue.Cast< ::EnumTagType >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { nameString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nounString") ) { nounString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nounSString") ) { nounSString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verb1String") ) { verb1String=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verb2String") ) { verb2String=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verb3String") ) { verb3String=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verbSString") ) { verbSString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"adverbString") ) { adverbString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nounPosString") ) { nounPosString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verbIngString") ) { verbIngString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generalTagBool") ) { generalTagBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nounSPosString") ) { nounSPosString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"adjectiveString") ) { adjectiveString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectTag_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("adjectiveString","\x5a","\x3e","\x09","\xd9"));
	outFields->push(HX_HCSTRING("adverbString","\x73","\x01","\x6f","\xc5"));
	outFields->push(HX_HCSTRING("feelEnum","\x87","\x01","\x53","\xf1"));
	outFields->push(HX_HCSTRING("generalTagBool","\x5c","\x31","\x7d","\x88"));
	outFields->push(HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"));
	outFields->push(HX_HCSTRING("nounPosString","\x4b","\x3d","\x96","\xac"));
	outFields->push(HX_HCSTRING("nounSPosString","\x0c","\x8c","\x5d","\x55"));
	outFields->push(HX_HCSTRING("nounSString","\xea","\x33","\x18","\x7d"));
	outFields->push(HX_HCSTRING("nounString","\x4b","\xd5","\xb7","\x5e"));
	outFields->push(HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"));
	outFields->push(HX_HCSTRING("verb1String","\x23","\x85","\x17","\x54"));
	outFields->push(HX_HCSTRING("verb2String","\xe4","\xfb","\xac","\x7d"));
	outFields->push(HX_HCSTRING("verb3String","\xa5","\x72","\x42","\xa7"));
	outFields->push(HX_HCSTRING("verbIngString","\xb4","\x1e","\x39","\xd2"));
	outFields->push(HX_HCSTRING("verbSString","\xc5","\x4a","\xf1","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectTag_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,adjectiveString),HX_HCSTRING("adjectiveString","\x5a","\x3e","\x09","\xd9")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,adverbString),HX_HCSTRING("adverbString","\x73","\x01","\x6f","\xc5")},
	{hx::fsObject /*::EnumTagFeelType*/ ,(int)offsetof(ObjectTag_obj,feelEnum),HX_HCSTRING("feelEnum","\x87","\x01","\x53","\xf1")},
	{hx::fsBool,(int)offsetof(ObjectTag_obj,generalTagBool),HX_HCSTRING("generalTagBool","\x5c","\x31","\x7d","\x88")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,nameString),HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,nounPosString),HX_HCSTRING("nounPosString","\x4b","\x3d","\x96","\xac")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,nounSPosString),HX_HCSTRING("nounSPosString","\x0c","\x8c","\x5d","\x55")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,nounSString),HX_HCSTRING("nounSString","\xea","\x33","\x18","\x7d")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,nounString),HX_HCSTRING("nounString","\x4b","\xd5","\xb7","\x5e")},
	{hx::fsObject /*::EnumTagType*/ ,(int)offsetof(ObjectTag_obj,typeEnum),HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,verb1String),HX_HCSTRING("verb1String","\x23","\x85","\x17","\x54")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,verb2String),HX_HCSTRING("verb2String","\xe4","\xfb","\xac","\x7d")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,verb3String),HX_HCSTRING("verb3String","\xa5","\x72","\x42","\xa7")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,verbIngString),HX_HCSTRING("verbIngString","\xb4","\x1e","\x39","\xd2")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,verbSString),HX_HCSTRING("verbSString","\xc5","\x4a","\xf1","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
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
	HX_HCSTRING("AddToArrayVoid","\x11","\xac","\xd7","\x3e"),
	HX_HCSTRING("GetAdjectiveString","\x84","\x02","\x51","\x3f"),
	HX_HCSTRING("GetAdverbString","\x09","\x5f","\xe5","\x48"),
	HX_HCSTRING("GetFeelEnum","\x1d","\x5c","\x79","\xfb"),
	HX_HCSTRING("GetGeneralTagBool","\x72","\xa0","\x76","\x9c"),
	HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"),
	HX_HCSTRING("GetNounPosString","\xf5","\xc2","\xb1","\x30"),
	HX_HCSTRING("GetNounSPosString","\x22","\xfb","\x56","\x69"),
	HX_HCSTRING("GetNounSString","\x14","\x1b","\x0c","\xaf"),
	HX_HCSTRING("GetNounString","\x61","\x81","\x1a","\x03"),
	HX_HCSTRING("GetTypeEnum","\x71","\xc9","\x07","\xba"),
	HX_HCSTRING("GetVerb1String","\x4d","\x6c","\x0b","\x86"),
	HX_HCSTRING("GetVerb2String","\x0e","\xe3","\xa0","\xaf"),
	HX_HCSTRING("GetVerb3String","\xcf","\x59","\x36","\xd9"),
	HX_HCSTRING("GetVerbIngString","\x5e","\xa4","\x54","\x56"),
	HX_HCSTRING("GetVerbSString","\xef","\x31","\xe5","\x0b"),
	HX_HCSTRING("RemoveFromArray","\xcb","\xfa","\xc2","\x7b"),
	HX_HCSTRING("SetAdjectiveStringObject","\xd7","\x31","\xbe","\x0a"),
	HX_HCSTRING("SetAdverbStringObject","\xb4","\x8c","\xd4","\x0d"),
	HX_HCSTRING("SetFeelEnumObject","\xc8","\x9a","\x16","\x36"),
	HX_HCSTRING("SetGeneralTagBoolObject","\xdd","\xdd","\xf2","\x93"),
	HX_HCSTRING("SetNameStringObject","\xfd","\x64","\x92","\x3c"),
	HX_HCSTRING("SetNounPosStringObject","\x08","\x58","\xf9","\xd8"),
	HX_HCSTRING("SetNounSPosStringObject","\x8d","\x5c","\x54","\x6b"),
	HX_HCSTRING("SetNounSStringObject","\x67","\x4c","\xcb","\x99"),
	HX_HCSTRING("SetNounStringObject","\x0c","\x26","\x84","\xeb"),
	HX_HCSTRING("SetTypeEnumVoid","\x71","\x42","\x60","\x99"),
	HX_HCSTRING("SetVerb1StringObject","\x60","\xce","\xe4","\xc6"),
	HX_HCSTRING("SetVerb2StringObject","\xe1","\x4b","\xa5","\x0c"),
	HX_HCSTRING("SetVerb3StringObject","\x62","\xc9","\x65","\x52"),
	HX_HCSTRING("SetVerbIngStringObject","\x31","\xae","\xc8","\x4f"),
	HX_HCSTRING("SetVerbSStringObject","\x82","\x79","\x75","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectTag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectTag_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectTag_obj::__mClass;

void ObjectTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectTag","\xbb","\xf4","\x55","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

