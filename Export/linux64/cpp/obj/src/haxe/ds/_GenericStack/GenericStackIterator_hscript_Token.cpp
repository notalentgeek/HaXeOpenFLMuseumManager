#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace haxe{
namespace ds{
namespace _GenericStack{

Void GenericStackIterator_hscript_Token_obj::__construct(::haxe::ds::GenericCell_hscript_Token head)
{
HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","new",0xbf5d5a94,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.new","/usr/share/haxe/std/haxe/ds/GenericStack.hx",40,0x427260fb)
HX_STACK_THIS(this)
HX_STACK_ARG(head,"head")
{
	HX_STACK_LINE(40)
	this->current = head;
}
;
	return null();
}

//GenericStackIterator_hscript_Token_obj::~GenericStackIterator_hscript_Token_obj() { }

Dynamic GenericStackIterator_hscript_Token_obj::__CreateEmpty() { return  new GenericStackIterator_hscript_Token_obj; }
hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > GenericStackIterator_hscript_Token_obj::__new(::haxe::ds::GenericCell_hscript_Token head)
{  hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > _result_ = new GenericStackIterator_hscript_Token_obj();
	_result_->__construct(head);
	return _result_;}

Dynamic GenericStackIterator_hscript_Token_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > _result_ = new GenericStackIterator_hscript_Token_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool GenericStackIterator_hscript_Token_obj::hasNext( ){
	HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","hasNext",0xccb359a1,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.hasNext","/usr/share/haxe/std/haxe/ds/GenericStack.hx",37,0x427260fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::haxe::ds::GenericCell_hscript_Token tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStackIterator_hscript_Token_obj,hasNext,return )

::hscript::Token GenericStackIterator_hscript_Token_obj::next( ){
	HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","next",0xb251e83f,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.next","/usr/share/haxe/std/haxe/ds/GenericStack.hx",38,0x427260fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::haxe::ds::GenericCell_hscript_Token tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::hscript::Token result = tmp->elt;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(38)
	::haxe::ds::GenericCell_hscript_Token tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	this->current = tmp1->next;
	HX_STACK_LINE(38)
	::hscript::Token tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStackIterator_hscript_Token_obj,next,return )


GenericStackIterator_hscript_Token_obj::GenericStackIterator_hscript_Token_obj()
{
}

void GenericStackIterator_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStackIterator_hscript_Token);
	HX_MARK_MEMBER_NAME(current,"current");
	::cpp::FastIterator_obj< ::hscript::Token >::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GenericStackIterator_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	::cpp::FastIterator_obj< ::hscript::Token >::__Visit(HX_VISIT_ARG);
}

Dynamic GenericStackIterator_hscript_Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericStackIterator_hscript_Token_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStackIterator_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::GenericCell_hscript_Token*/ ,(int)offsetof(GenericStackIterator_hscript_Token_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericStackIterator_hscript_Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericStackIterator_hscript_Token_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericStackIterator_hscript_Token_obj::__mClass;

void GenericStackIterator_hscript_Token_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","\xa2","\xc0","\xd7","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericStackIterator_hscript_Token_obj >;
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
} // end namespace _GenericStack
