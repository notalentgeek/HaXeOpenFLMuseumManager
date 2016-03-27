#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_richtext_syntax_CSSSyntax
#include <haxe/ui/richtext/syntax/CSSSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{

Void CSSSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.syntax.CSSSyntax","new",0xa6ee7880,"haxe.ui.richtext.syntax.CSSSyntax.new","haxe/ui/richtext/syntax/CSSSyntax.hx",4,0x118f1fb0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->_identifier = HX_HCSTRING("css","\xc3","\x83","\x4b","\x00");
	HX_STACK_LINE(7)
	this->addRule(HX_HCSTRING("(#|\\w|.)(.*?){|}","\x49","\x64","\x42","\xc2"),(int)255,true);
	HX_STACK_LINE(8)
	this->addRule(HX_HCSTRING("(\\w*)\\:","\x20","\x2b","\xc1","\xe8"),(int)3840511,true);
	HX_STACK_LINE(9)
	this->addRule(HX_HCSTRING(":(.*?)\\;","\x53","\x3d","\xcb","\x31"),(int)8912896,null());
}
;
	return null();
}

//CSSSyntax_obj::~CSSSyntax_obj() { }

Dynamic CSSSyntax_obj::__CreateEmpty() { return  new CSSSyntax_obj; }
hx::ObjectPtr< CSSSyntax_obj > CSSSyntax_obj::__new()
{  hx::ObjectPtr< CSSSyntax_obj > _result_ = new CSSSyntax_obj();
	_result_->__construct();
	return _result_;}

Dynamic CSSSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CSSSyntax_obj > _result_ = new CSSSyntax_obj();
	_result_->__construct();
	return _result_;}


CSSSyntax_obj::CSSSyntax_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CSSSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CSSSyntax_obj::__mClass,"__mClass");
};

#endif

hx::Class CSSSyntax_obj::__mClass;

void CSSSyntax_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.syntax.CSSSyntax","\x8e","\x78","\xb0","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CSSSyntax_obj >;
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
} // end namespace ui
} // end namespace richtext
} // end namespace syntax
