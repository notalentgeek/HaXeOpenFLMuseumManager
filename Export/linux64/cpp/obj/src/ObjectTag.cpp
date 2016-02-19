#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumCompanyWordPosition
#include <EnumCompanyWordPosition.h>
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
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

Void ObjectTag_obj::__construct(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameOriginalString,::EnumTagType _typeEnum)
{
HX_STACK_FRAME("ObjectTag","new",0x440a0f2d,"ObjectTag.new","ObjectTag.hx",8,0x2198b4e3)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_feelEnum,"_feelEnum")
HX_STACK_ARG(_generalTagBool,"_generalTagBool")
HX_STACK_ARG(_nameOriginalString,"_nameOriginalString")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(32)
	this->verbSString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(31)
	this->verbIngString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(30)
	this->verb3String = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(29)
	this->verb2String = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(28)
	this->verb1String = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(27)
	this->typeEnum = null();
	HX_STACK_LINE(26)
	this->nounString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(25)
	this->nounSString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(24)
	this->nounSPosString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(23)
	this->nounPosString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(22)
	this->nameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(21)
	this->nameOriginalString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(20)
	this->generalTagBool = true;
	HX_STACK_LINE(19)
	this->feelEnum = null();
	HX_STACK_LINE(18)
	this->companyWordStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(17)
	this->companyWordStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(16)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(15)
	this->adverbString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(14)
	this->adjectiveString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(46)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(47)
	this->feelEnum = _feelEnum;
	HX_STACK_LINE(48)
	this->generalTagBool = _generalTagBool;
	HX_STACK_LINE(49)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(50)
	this->nameOriginalString = _nameOriginalString;
	HX_STACK_LINE(51)
	::String tmp = this->nameOriginalString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::String tmp1 = (tmp + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	::EnumTagType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	this->nameString = tmp4;
	HX_STACK_LINE(52)
	this->AddToArrayVoid();
	HX_STACK_LINE(56)
	::EnumTagType tmp5 = this->typeEnum;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	bool tmp6 = (tmp5 != ::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	if ((tmp7)){
		HX_STACK_LINE(57)
		::EnumTagType tmp9 = this->typeEnum;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		::EnumTagType tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		::EnumTagType tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		tmp8 = (tmp11 != ::EnumTagType_obj::ADV);
	}
	else{
		HX_STACK_LINE(56)
		tmp8 = false;
	}
	HX_STACK_LINE(56)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(56)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(56)
	if ((tmp9)){
		HX_STACK_LINE(58)
		::EnumTagType tmp11 = this->typeEnum;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		::EnumTagType tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		::EnumTagType tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		tmp10 = (tmp13 != ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);
	}
	else{
		HX_STACK_LINE(56)
		tmp10 = false;
	}
	HX_STACK_LINE(56)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	if ((tmp10)){
		HX_STACK_LINE(59)
		::EnumTagType tmp12 = this->typeEnum;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		::EnumTagType tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(59)
		tmp11 = (tmp13 != ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);
	}
	else{
		HX_STACK_LINE(56)
		tmp11 = false;
	}
	HX_STACK_LINE(55)
	if ((tmp11)){
		HX_STACK_LINE(62)
		::String part1String = HX_HCSTRING("python3 WordnikGetPhrase.py '","\x6c","\x24","\x08","\xc8");		HX_STACK_VAR(part1String,"part1String");
		HX_STACK_LINE(63)
		::String tmp12 = this->nameOriginalString;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(63)
		::String part2String = tmp12;		HX_STACK_VAR(part2String,"part2String");
		HX_STACK_LINE(64)
		::String part3String = HX_HCSTRING("' > Phrase.txt","\xd6","\x9b","\x55","\xad");		HX_STACK_VAR(part3String,"part3String");
		HX_STACK_LINE(65)
		::String tmp13 = (part1String + part2String);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(65)
		::String tmp14 = part3String;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(65)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(65)
		::String partAllString = tmp15;		HX_STACK_VAR(partAllString,"partAllString");
		HX_STACK_LINE(67)
		::String tmp16 = partAllString;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(67)
		::Sys_obj::command(tmp16,null());
		HX_STACK_LINE(68)
		::sys::io::FileInput tmp17 = ::sys::io::File_obj::read(HX_HCSTRING("./Phrase.txt","\x1c","\xa7","\xef","\xbd"),false);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(68)
		::sys::io::FileInput fileTXTObject = tmp17;		HX_STACK_VAR(fileTXTObject,"fileTXTObject");
		HX_STACK_LINE(69)
		try
		{
		HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
		{
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(72)
				::String tmp18 = fileTXTObject->readLine();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(72)
				::String receivedString = tmp18;		HX_STACK_VAR(receivedString,"receivedString");
				HX_STACK_LINE(73)
				Array< ::String > receivedStringArray = receivedString.split(HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(receivedStringArray,"receivedStringArray");
				HX_STACK_LINE(74)
				::String tmp19 = receivedStringArray->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(74)
				::EnumCompanyWordPosition tmp20 = ::Type_obj::createEnum(hx::ClassOf< ::EnumCompanyWordPosition >(),tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(74)
				::EnumCompanyWordPosition companyWordPositionEnum = tmp20;		HX_STACK_VAR(companyWordPositionEnum,"companyWordPositionEnum");
				HX_STACK_LINE(75)
				::String tmp21 = receivedStringArray->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(75)
				::String stringString = tmp21;		HX_STACK_VAR(stringString,"stringString");
				HX_STACK_LINE(77)
				::EnumCompanyWordPosition tmp22 = companyWordPositionEnum;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(78)
				::String tmp23 = this->nameOriginalString;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(79)
				::String tmp24 = stringString;		HX_STACK_VAR(tmp24,"tmp24");
				struct _Function_4_1{
					inline static Dynamic Block( ::EnumCompanyWordPosition &tmp22,::String &tmp23,::String &tmp24){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectTag.hx",76,0x2198b4e3)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("companyWordPositionEnum","\x91","\x10","\x19","\x46") , tmp22,false);
							__result->Add(HX_HCSTRING("mainWordString","\xd4","\x2f","\x6b","\x75") , tmp23,false);
							__result->Add(HX_HCSTRING("stringString","\x82","\xb8","\x88","\xa8") , tmp24,false);
							__result->Add(HX_HCSTRING("tagFeelTypeEnum","\xdb","\x85","\x08","\x8d") , ::EnumTagFeelType_obj::NEUTRAL,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(76)
				Dynamic tmp25 = _Function_4_1::Block(tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(76)
				Dynamic companyWordStruct = tmp25;		HX_STACK_VAR(companyWordStruct,"companyWordStruct");
				HX_STACK_LINE(82)
				Dynamic tmp26 = companyWordStruct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(82)
				this->companyWordStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
			}
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::haxe::io::Eof >() ){
				HX_STACK_BEGIN_CATCH
				::haxe::io::Eof _exception = __e;{
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(87)
		fileTXTObject->close();
	}
}
;
	return null();
}

//ObjectTag_obj::~ObjectTag_obj() { }

Dynamic ObjectTag_obj::__CreateEmpty() { return  new ObjectTag_obj; }
hx::ObjectPtr< ObjectTag_obj > ObjectTag_obj::__new(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameOriginalString,::EnumTagType _typeEnum)
{  hx::ObjectPtr< ObjectTag_obj > _result_ = new ObjectTag_obj();
	_result_->__construct(_collectionGlobalObject,_feelEnum,_generalTagBool,_nameOriginalString,_typeEnum);
	return _result_;}

Dynamic ObjectTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectTag_obj > _result_ = new ObjectTag_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void ObjectTag_obj::AddToArrayVoid( ){
{
		HX_STACK_FRAME("ObjectTag","AddToArrayVoid",0xcdb8f664,"ObjectTag.AddToArrayVoid","ObjectTag.hx",97,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		bool tmp = this->generalTagBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		if ((tmp1)){
			HX_STACK_LINE(99)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			tmp2->GetTagGeneralObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(100)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			tmp3->GetTagObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(102)
			bool tmp2 = this->generalTagBool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			if ((tmp3)){
				HX_STACK_LINE(103)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				tmp4->GetTagGeneralObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(104)
				::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				tmp5->GetTagObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,AddToArrayVoid,(void))

::String ObjectTag_obj::GetAdjectiveString( ){
	HX_STACK_FRAME("ObjectTag","GetAdjectiveString",0xc3e17257,"ObjectTag.GetAdjectiveString","ObjectTag.hx",107,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	::String tmp = this->adjectiveString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetAdjectiveString,return )

::String ObjectTag_obj::GetAdverbString( ){
	HX_STACK_FRAME("ObjectTag","GetAdverbString",0xbf251d56,"ObjectTag.GetAdverbString","ObjectTag.hx",108,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	::String tmp = this->adverbString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetAdverbString,return )

cpp::ArrayBase ObjectTag_obj::GetCompanyWordStructArray( ){
	HX_STACK_FRAME("ObjectTag","GetCompanyWordStructArray",0x4dd21a40,"ObjectTag.GetCompanyWordStructArray","ObjectTag.hx",109,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return this->companyWordStructArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetCompanyWordStructArray,return )

::EnumTagFeelType ObjectTag_obj::GetFeelEnum( ){
	HX_STACK_FRAME("ObjectTag","GetFeelEnum",0x47eeafea,"ObjectTag.GetFeelEnum","ObjectTag.hx",110,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	::EnumTagFeelType tmp = this->feelEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetFeelEnum,return )

bool ObjectTag_obj::GetGeneralTagBool( ){
	HX_STACK_FRAME("ObjectTag","GetGeneralTagBool",0xf0dc4bff,"ObjectTag.GetGeneralTagBool","ObjectTag.hx",111,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	bool tmp = this->generalTagBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetGeneralTagBool,return )

::String ObjectTag_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectTag","GetNameString",0x8d5da69f,"ObjectTag.GetNameString","ObjectTag.hx",112,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	::String tmp = this->nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNameString,return )

::String ObjectTag_obj::GetNounPosString( ){
	HX_STACK_FRAME("ObjectTag","GetNounPosString",0x32388808,"ObjectTag.GetNounPosString","ObjectTag.hx",113,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::String tmp = this->nounPosString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounPosString,return )

::String ObjectTag_obj::GetNounSPosString( ){
	HX_STACK_FRAME("ObjectTag","GetNounSPosString",0xbdbca6af,"ObjectTag.GetNounSPosString","ObjectTag.hx",114,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::String tmp = this->nounSPosString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounSPosString,return )

::String ObjectTag_obj::GetNounSString( ){
	HX_STACK_FRAME("ObjectTag","GetNounSString",0x3ded6567,"ObjectTag.GetNounSString","ObjectTag.hx",115,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	::String tmp = this->nounSString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounSString,return )

::String ObjectTag_obj::GetNounString( ){
	HX_STACK_FRAME("ObjectTag","GetNounString",0x5666226e,"ObjectTag.GetNounString","ObjectTag.hx",116,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	::String tmp = this->nounString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNounString,return )

::EnumTagType ObjectTag_obj::GetTypeEnum( ){
	HX_STACK_FRAME("ObjectTag","GetTypeEnum",0x067d1d3e,"ObjectTag.GetTypeEnum","ObjectTag.hx",117,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	::EnumTagType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetTypeEnum,return )

::String ObjectTag_obj::GetVerb1String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb1String",0x14ecb6a0,"ObjectTag.GetVerb1String","ObjectTag.hx",118,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	::String tmp = this->verb1String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb1String,return )

::String ObjectTag_obj::GetVerb2String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb2String",0x3e822d61,"ObjectTag.GetVerb2String","ObjectTag.hx",119,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::String tmp = this->verb2String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb2String,return )

::String ObjectTag_obj::GetVerb3String( ){
	HX_STACK_FRAME("ObjectTag","GetVerb3String",0x6817a422,"ObjectTag.GetVerb3String","ObjectTag.hx",120,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	::String tmp = this->verb3String;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerb3String,return )

::String ObjectTag_obj::GetVerbIngString( ){
	HX_STACK_FRAME("ObjectTag","GetVerbIngString",0x57db6971,"ObjectTag.GetVerbIngString","ObjectTag.hx",121,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	::String tmp = this->verbIngString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerbIngString,return )

::String ObjectTag_obj::GetVerbSString( ){
	HX_STACK_FRAME("ObjectTag","GetVerbSString",0x9ac67c42,"ObjectTag.GetVerbSString","ObjectTag.hx",122,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::String tmp = this->verbSString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetVerbSString,return )

Void ObjectTag_obj::RemoveFromArray( ){
{
		HX_STACK_FRAME("ObjectTag","RemoveFromArray",0xf202b918,"ObjectTag.RemoveFromArray","ObjectTag.hx",123,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		bool tmp = this->generalTagBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(125)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			tmp2->GetTagGeneralObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(126)
			bool tmp2 = this->generalTagBool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			if ((tmp3)){
				HX_STACK_LINE(126)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				tmp4->GetTagObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,RemoveFromArray,(void))

::ObjectTag ObjectTag_obj::SetAdjectiveStringObject( ::String _adjectiveString){
	HX_STACK_FRAME("ObjectTag","SetAdjectiveStringObject",0x6ffcc1ea,"ObjectTag.SetAdjectiveStringObject","ObjectTag.hx",130,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_adjectiveString,"_adjectiveString")
	HX_STACK_LINE(130)
	this->adjectiveString = _adjectiveString;
	HX_STACK_LINE(130)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetAdjectiveStringObject,return )

::ObjectTag ObjectTag_obj::SetAdverbStringObject( ::String _adverbString){
	HX_STACK_FRAME("ObjectTag","SetAdverbStringObject",0xad6b82c1,"ObjectTag.SetAdverbStringObject","ObjectTag.hx",131,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_adverbString,"_adverbString")
	HX_STACK_LINE(131)
	this->adverbString = _adverbString;
	HX_STACK_LINE(131)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetAdverbStringObject,return )

::ObjectTag ObjectTag_obj::SetFeelEnumObject( ::EnumTagFeelType _feelEnum){
	HX_STACK_FRAME("ObjectTag","SetFeelEnumObject",0x8a7c4655,"ObjectTag.SetFeelEnumObject","ObjectTag.hx",132,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_feelEnum,"_feelEnum")
	HX_STACK_LINE(132)
	this->feelEnum = _feelEnum;
	HX_STACK_LINE(132)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetFeelEnumObject,return )

::ObjectTag ObjectTag_obj::SetGeneralTagBoolObject( bool _generalTagBool){
	HX_STACK_FRAME("ObjectTag","SetGeneralTagBoolObject",0x7fbd312a,"ObjectTag.SetGeneralTagBoolObject","ObjectTag.hx",133,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_generalTagBool,"_generalTagBool")
	HX_STACK_LINE(134)
	this->generalTagBool = _generalTagBool;
	HX_STACK_LINE(135)
	this->AddToArrayVoid();
	HX_STACK_LINE(136)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetGeneralTagBoolObject,return )

::ObjectTag ObjectTag_obj::SetNameStringObject( ::String _nameString){
	HX_STACK_FRAME("ObjectTag","SetNameStringObject",0xb663cdca,"ObjectTag.SetNameStringObject","ObjectTag.hx",138,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(138)
	this->nameString = _nameString;
	HX_STACK_LINE(138)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNameStringObject,return )

::ObjectTag ObjectTag_obj::SetNounPosStringObject( ::String _nounPosString){
	HX_STACK_FRAME("ObjectTag","SetNounPosStringObject",0xdd79ad5b,"ObjectTag.SetNounPosStringObject","ObjectTag.hx",139,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounPosString,"_nounPosString")
	HX_STACK_LINE(139)
	this->nounPosString = _nounPosString;
	HX_STACK_LINE(139)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounPosStringObject,return )

::ObjectTag ObjectTag_obj::SetNounSPosStringObject( ::String _nounSPosString){
	HX_STACK_FRAME("ObjectTag","SetNounSPosStringObject",0x571eafda,"ObjectTag.SetNounSPosStringObject","ObjectTag.hx",140,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounSPosString,"_nounSPosString")
	HX_STACK_LINE(140)
	this->nounSPosString = _nounSPosString;
	HX_STACK_LINE(140)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounSPosStringObject,return )

::ObjectTag ObjectTag_obj::SetNounSStringObject( ::String _nounSString){
	HX_STACK_FRAME("ObjectTag","SetNounSStringObject",0xb73596fa,"ObjectTag.SetNounSStringObject","ObjectTag.hx",141,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounSString,"_nounSString")
	HX_STACK_LINE(141)
	this->nounSString = _nounSString;
	HX_STACK_LINE(141)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounSStringObject,return )

::ObjectTag ObjectTag_obj::SetNounStringObject( ::String _nounString){
	HX_STACK_FRAME("ObjectTag","SetNounStringObject",0x65558ed9,"ObjectTag.SetNounStringObject","ObjectTag.hx",142,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_nounString,"_nounString")
	HX_STACK_LINE(142)
	this->nounString = _nounString;
	HX_STACK_LINE(142)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNounStringObject,return )

Void ObjectTag_obj::SetTypeEnumVoid( ::EnumTagType _typeEnum){
{
		HX_STACK_FRAME("ObjectTag","SetTypeEnumVoid",0x0fa000be,"ObjectTag.SetTypeEnumVoid","ObjectTag.hx",143,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_typeEnum,"_typeEnum")
		HX_STACK_LINE(143)
		this->typeEnum = _typeEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetTypeEnumVoid,(void))

::ObjectTag ObjectTag_obj::SetVerb1StringObject( ::String _verb1String){
	HX_STACK_FRAME("ObjectTag","SetVerb1StringObject",0xe44f18f3,"ObjectTag.SetVerb1StringObject","ObjectTag.hx",144,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verb1String,"_verb1String")
	HX_STACK_LINE(144)
	this->verb1String = _verb1String;
	HX_STACK_LINE(144)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb1StringObject,return )

::ObjectTag ObjectTag_obj::SetVerb2StringObject( ::String _verb2String){
	HX_STACK_FRAME("ObjectTag","SetVerb2StringObject",0x2a0f9674,"ObjectTag.SetVerb2StringObject","ObjectTag.hx",145,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verb2String,"_verb2String")
	HX_STACK_LINE(145)
	this->verb2String = _verb2String;
	HX_STACK_LINE(145)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb2StringObject,return )

::ObjectTag ObjectTag_obj::SetVerb3StringObject( ::String _verb3String){
	HX_STACK_FRAME("ObjectTag","SetVerb3StringObject",0x6fd013f5,"ObjectTag.SetVerb3StringObject","ObjectTag.hx",146,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verb3String,"_verb3String")
	HX_STACK_LINE(146)
	this->verb3String = _verb3String;
	HX_STACK_LINE(146)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerb3StringObject,return )

::ObjectTag ObjectTag_obj::SetVerbIngStringObject( ::String _verbIngString){
	HX_STACK_FRAME("ObjectTag","SetVerbIngStringObject",0x54490384,"ObjectTag.SetVerbIngStringObject","ObjectTag.hx",147,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verbIngString,"_verbIngString")
	HX_STACK_LINE(147)
	this->verbIngString = _verbIngString;
	HX_STACK_LINE(147)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerbIngStringObject,return )

::ObjectTag ObjectTag_obj::SetVerbSStringObject( ::String _verbSString){
	HX_STACK_FRAME("ObjectTag","SetVerbSStringObject",0x27dfc415,"ObjectTag.SetVerbSStringObject","ObjectTag.hx",148,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verbSString,"_verbSString")
	HX_STACK_LINE(148)
	this->verbSString = _verbSString;
	HX_STACK_LINE(148)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetVerbSStringObject,return )


ObjectTag_obj::ObjectTag_obj()
{
}

void ObjectTag_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectTag);
	HX_MARK_MEMBER_NAME(adjectiveString,"adjectiveString");
	HX_MARK_MEMBER_NAME(adverbString,"adverbString");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(companyWordStringArray,"companyWordStringArray");
	HX_MARK_MEMBER_NAME(companyWordStructArray,"companyWordStructArray");
	HX_MARK_MEMBER_NAME(feelEnum,"feelEnum");
	HX_MARK_MEMBER_NAME(generalTagBool,"generalTagBool");
	HX_MARK_MEMBER_NAME(nameOriginalString,"nameOriginalString");
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
	HX_VISIT_MEMBER_NAME(adjectiveString,"adjectiveString");
	HX_VISIT_MEMBER_NAME(adverbString,"adverbString");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(companyWordStringArray,"companyWordStringArray");
	HX_VISIT_MEMBER_NAME(companyWordStructArray,"companyWordStructArray");
	HX_VISIT_MEMBER_NAME(feelEnum,"feelEnum");
	HX_VISIT_MEMBER_NAME(generalTagBool,"generalTagBool");
	HX_VISIT_MEMBER_NAME(nameOriginalString,"nameOriginalString");
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
		if (HX_FIELD_EQ(inName,"nameOriginalString") ) { return nameOriginalString; }
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
		if (HX_FIELD_EQ(inName,"companyWordStringArray") ) { return companyWordStringArray; }
		if (HX_FIELD_EQ(inName,"companyWordStructArray") ) { return companyWordStructArray; }
		if (HX_FIELD_EQ(inName,"SetNounPosStringObject") ) { return SetNounPosStringObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVerbIngStringObject") ) { return SetVerbIngStringObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"SetGeneralTagBoolObject") ) { return SetGeneralTagBoolObject_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNounSPosStringObject") ) { return SetNounSPosStringObject_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"SetAdjectiveStringObject") ) { return SetAdjectiveStringObject_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"GetCompanyWordStructArray") ) { return GetCompanyWordStructArray_dyn(); }
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
	case 18:
		if (HX_FIELD_EQ(inName,"nameOriginalString") ) { nameOriginalString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"companyWordStringArray") ) { companyWordStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"companyWordStructArray") ) { companyWordStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectTag_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("adjectiveString","\x5a","\x3e","\x09","\xd9"));
	outFields->push(HX_HCSTRING("adverbString","\x73","\x01","\x6f","\xc5"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("companyWordStringArray","\xa1","\x34","\x7e","\x02"));
	outFields->push(HX_HCSTRING("companyWordStructArray","\x9d","\x24","\x13","\x1a"));
	outFields->push(HX_HCSTRING("feelEnum","\x87","\x01","\x53","\xf1"));
	outFields->push(HX_HCSTRING("generalTagBool","\x5c","\x31","\x7d","\x88"));
	outFields->push(HX_HCSTRING("nameOriginalString","\xad","\xb7","\x86","\x0f"));
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
	{hx::fsString,(int)offsetof(ObjectTag_obj,adjectiveString),HX_HCSTRING("adjectiveString","\x5a","\x3e","\x09","\xd9")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,adverbString),HX_HCSTRING("adverbString","\x73","\x01","\x6f","\xc5")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectTag_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectTag_obj,companyWordStringArray),HX_HCSTRING("companyWordStringArray","\xa1","\x34","\x7e","\x02")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectTag_obj,companyWordStructArray),HX_HCSTRING("companyWordStructArray","\x9d","\x24","\x13","\x1a")},
	{hx::fsObject /*::EnumTagFeelType*/ ,(int)offsetof(ObjectTag_obj,feelEnum),HX_HCSTRING("feelEnum","\x87","\x01","\x53","\xf1")},
	{hx::fsBool,(int)offsetof(ObjectTag_obj,generalTagBool),HX_HCSTRING("generalTagBool","\x5c","\x31","\x7d","\x88")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,nameOriginalString),HX_HCSTRING("nameOriginalString","\xad","\xb7","\x86","\x0f")},
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
	HX_HCSTRING("adjectiveString","\x5a","\x3e","\x09","\xd9"),
	HX_HCSTRING("adverbString","\x73","\x01","\x6f","\xc5"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("companyWordStringArray","\xa1","\x34","\x7e","\x02"),
	HX_HCSTRING("companyWordStructArray","\x9d","\x24","\x13","\x1a"),
	HX_HCSTRING("feelEnum","\x87","\x01","\x53","\xf1"),
	HX_HCSTRING("generalTagBool","\x5c","\x31","\x7d","\x88"),
	HX_HCSTRING("nameOriginalString","\xad","\xb7","\x86","\x0f"),
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
	HX_HCSTRING("GetCompanyWordStructArray","\xb3","\x99","\x52","\x1c"),
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

