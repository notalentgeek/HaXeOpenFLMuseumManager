#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace haxe{
namespace ds{

Void GenericCell_hscript_Token_obj::__construct(::hscript::Token elt,::haxe::ds::GenericCell_hscript_Token next)
{
HX_STACK_FRAME("haxe.ds.GenericCell_hscript_Token","new",0x1c0e2ea2,"haxe.ds.GenericCell_hscript_Token.new","/usr/share/haxe/std/haxe/ds/GenericStack.hx",30,0x427260fb)
HX_STACK_THIS(this)
HX_STACK_ARG(elt,"elt")
HX_STACK_ARG(next,"next")
{
	HX_STACK_LINE(30)
	this->elt = elt;
	HX_STACK_LINE(30)
	this->next = next;
}
;
	return null();
}

//GenericCell_hscript_Token_obj::~GenericCell_hscript_Token_obj() { }

Dynamic GenericCell_hscript_Token_obj::__CreateEmpty() { return  new GenericCell_hscript_Token_obj; }
hx::ObjectPtr< GenericCell_hscript_Token_obj > GenericCell_hscript_Token_obj::__new(::hscript::Token elt,::haxe::ds::GenericCell_hscript_Token next)
{  hx::ObjectPtr< GenericCell_hscript_Token_obj > _result_ = new GenericCell_hscript_Token_obj();
	_result_->__construct(elt,next);
	return _result_;}

Dynamic GenericCell_hscript_Token_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericCell_hscript_Token_obj > _result_ = new GenericCell_hscript_Token_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


GenericCell_hscript_Token_obj::GenericCell_hscript_Token_obj()
{
}

void GenericCell_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericCell_hscript_Token);
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void GenericCell_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elt,"elt");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic GenericCell_hscript_Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericCell_hscript_Token_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::hscript::Token >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericCell_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hscript::Token*/ ,(int)offsetof(GenericCell_hscript_Token_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{hx::fsObject /*::haxe::ds::GenericCell_hscript_Token*/ ,(int)offsetof(GenericCell_hscript_Token_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericCell_hscript_Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericCell_hscript_Token_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericCell_hscript_Token_obj::__mClass;

void GenericCell_hscript_Token_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.GenericCell_hscript_Token","\xb0","\xf5","\x2d","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericCell_hscript_Token_obj >;
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

} // end namespace haxe
} // end namespace ds
