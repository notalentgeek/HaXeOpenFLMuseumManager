#include <hxcpp.h>

#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif

Void ObjectTag_obj::__construct(::String _nameAltString,::String _nameFullString,Array< ::String > _tagStringArray,::String _typeString)
{
HX_STACK_FRAME("ObjectTag","new",0x440a0f2d,"ObjectTag.new","ObjectTag.hx",2,0x2198b4e3)
HX_STACK_THIS(this)
HX_STACK_ARG(_nameAltString,"_nameAltString")
HX_STACK_ARG(_nameFullString,"_nameFullString")
HX_STACK_ARG(_tagStringArray,"_tagStringArray")
HX_STACK_ARG(_typeString,"_typeString")
{
	HX_STACK_LINE(5)
	this->typeString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(4)
	this->tagStringArray = Array_obj< ::String >::__new();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectTag.hx",3,0x2198b4e3)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				__result->Add(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(3)
	this->nameStruct = _Function_1_1::Block();
	HX_STACK_LINE(12)
	::String tmp = _nameAltString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	this->SetNameAltStringVoid(tmp);
	HX_STACK_LINE(13)
	::String tmp1 = _nameFullString;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	this->SetNameFullStringVoid(tmp1);
	HX_STACK_LINE(14)
	this->SetTagStringArrayVoid(_tagStringArray);
	HX_STACK_LINE(15)
	::String tmp2 = _typeString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	this->SetTypeStringVoid(tmp2);
}
;
	return null();
}

//ObjectTag_obj::~ObjectTag_obj() { }

Dynamic ObjectTag_obj::__CreateEmpty() { return  new ObjectTag_obj; }
hx::ObjectPtr< ObjectTag_obj > ObjectTag_obj::__new(::String _nameAltString,::String _nameFullString,Array< ::String > _tagStringArray,::String _typeString)
{  hx::ObjectPtr< ObjectTag_obj > _result_ = new ObjectTag_obj();
	_result_->__construct(_nameAltString,_nameFullString,_tagStringArray,_typeString);
	return _result_;}

Dynamic ObjectTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectTag_obj > _result_ = new ObjectTag_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Dynamic ObjectTag_obj::GetNameStruct( ){
	HX_STACK_FRAME("ObjectTag","GetNameStruct",0x8d66b823,"ObjectTag.GetNameStruct","ObjectTag.hx",17,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetNameStruct,return )

Array< ::String > ObjectTag_obj::GetTagStringArray( ){
	HX_STACK_FRAME("ObjectTag","GetTagStringArray",0x95a24171,"ObjectTag.GetTagStringArray","ObjectTag.hx",18,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return this->tagStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetTagStringArray,return )

::String ObjectTag_obj::GetTypeString( ){
	HX_STACK_FRAME("ObjectTag","GetTypeString",0x8155a44e,"ObjectTag.GetTypeString","ObjectTag.hx",19,0x2198b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::String tmp = this->typeString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectTag_obj,GetTypeString,return )

Void ObjectTag_obj::SetNameAltStringVoid( ::String _nameAltString){
{
		HX_STACK_FRAME("ObjectTag","SetNameAltStringVoid",0x0ef76eb4,"ObjectTag.SetNameAltStringVoid","ObjectTag.hx",20,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameAltString,"_nameAltString")
		HX_STACK_LINE(20)
		Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		tmp->__FieldRef(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c")) = _nameAltString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNameAltStringVoid,(void))

Void ObjectTag_obj::SetNameFullStringVoid( ::String _nameFullString){
{
		HX_STACK_FRAME("ObjectTag","SetNameFullStringVoid",0x675f350e,"ObjectTag.SetNameFullStringVoid","ObjectTag.hx",21,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameFullString,"_nameFullString")
		HX_STACK_LINE(21)
		Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		tmp->__FieldRef(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9")) = _nameFullString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetNameFullStringVoid,(void))

Void ObjectTag_obj::SetTagStringArrayVoid( Array< ::String > _tagStringArray){
{
		HX_STACK_FRAME("ObjectTag","SetTagStringArrayVoid",0xb7d40b71,"ObjectTag.SetTagStringArrayVoid","ObjectTag.hx",22,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagStringArray,"_tagStringArray")
		HX_STACK_LINE(22)
		this->tagStringArray = _tagStringArray;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetTagStringArrayVoid,(void))

Void ObjectTag_obj::SetTypeStringVoid( ::String _typeString){
{
		HX_STACK_FRAME("ObjectTag","SetTypeStringVoid",0x4cd3aace,"ObjectTag.SetTypeStringVoid","ObjectTag.hx",23,0x2198b4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_typeString,"_typeString")
		HX_STACK_LINE(23)
		this->typeString = _typeString;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectTag_obj,SetTypeStringVoid,(void))


ObjectTag_obj::ObjectTag_obj()
{
}

void ObjectTag_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectTag);
	HX_MARK_MEMBER_NAME(nameStruct,"nameStruct");
	HX_MARK_MEMBER_NAME(tagStringArray,"tagStringArray");
	HX_MARK_MEMBER_NAME(typeString,"typeString");
	HX_MARK_END_CLASS();
}

void ObjectTag_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nameStruct,"nameStruct");
	HX_VISIT_MEMBER_NAME(tagStringArray,"tagStringArray");
	HX_VISIT_MEMBER_NAME(typeString,"typeString");
}

Dynamic ObjectTag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nameStruct") ) { return nameStruct; }
		if (HX_FIELD_EQ(inName,"typeString") ) { return typeString; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GetNameStruct") ) { return GetNameStruct_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTypeString") ) { return GetTypeString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tagStringArray") ) { return tagStringArray; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetTagStringArray") ) { return GetTagStringArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTypeStringVoid") ) { return SetTypeStringVoid_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SetNameAltStringVoid") ) { return SetNameAltStringVoid_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SetNameFullStringVoid") ) { return SetNameFullStringVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"SetTagStringArrayVoid") ) { return SetTagStringArrayVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectTag_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nameStruct") ) { nameStruct=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeString") ) { typeString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tagStringArray") ) { tagStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectTag_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95"));
	outFields->push(HX_HCSTRING("tagStringArray","\xce","\x26","\x43","\x2d"));
	outFields->push(HX_HCSTRING("typeString","\x2b","\x57","\xa7","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectTag_obj,nameStruct),HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectTag_obj,tagStringArray),HX_HCSTRING("tagStringArray","\xce","\x26","\x43","\x2d")},
	{hx::fsString,(int)offsetof(ObjectTag_obj,typeString),HX_HCSTRING("typeString","\x2b","\x57","\xa7","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95"),
	HX_HCSTRING("tagStringArray","\xce","\x26","\x43","\x2d"),
	HX_HCSTRING("typeString","\x2b","\x57","\xa7","\x89"),
	HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"),
	HX_HCSTRING("GetTagStringArray","\xe4","\x95","\x3c","\x41"),
	HX_HCSTRING("GetTypeString","\x41","\x03","\x0a","\x2e"),
	HX_HCSTRING("SetNameAltStringVoid","\x21","\x24","\x8d","\xf1"),
	HX_HCSTRING("SetNameFullStringVoid","\x01","\x3f","\xc8","\xc7"),
	HX_HCSTRING("SetTagStringArrayVoid","\x64","\x15","\x3d","\x18"),
	HX_HCSTRING("SetTypeStringVoid","\x41","\xff","\x6d","\xf8"),
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

