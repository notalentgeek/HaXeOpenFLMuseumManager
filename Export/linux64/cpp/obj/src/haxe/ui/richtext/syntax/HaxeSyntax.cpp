#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_HaxeSyntax
#include <haxe/ui/richtext/syntax/HaxeSyntax.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{

Void HaxeSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.syntax.HaxeSyntax","new",0x1b587193,"haxe.ui.richtext.syntax.HaxeSyntax.new","haxe/ui/richtext/syntax/HaxeSyntax.hx",4,0x1d6bc07d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->_identifier = HX_HCSTRING("haxe","\x26","\x34","\x08","\x45");
	HX_STACK_LINE(7)
	this->addRule(HX_HCSTRING("(class )|(extends )|(implements )|(function)|(package )|(import )|(var )|(null)|(if)|(while)|(trace)|(return)","\x05","\xab","\xfb","\xc0"),(int)255,null());
	HX_STACK_LINE(8)
	this->addRule(HX_HCSTRING("(public )|(private )|(static )|(Void)|(Bool)|(Int)|(Dynamic)|(String)|(Float)","\x36","\x14","\xd0","\xc6"),(int)3840511,null());
	HX_STACK_LINE(9)
	this->addRule(HX_HCSTRING("(?:#.*)","\xed","\x72","\x59","\x2c"),(int)8947848,null());
	HX_STACK_LINE(10)
	this->addRule(HX_HCSTRING("(?:/\\*(?:[^*]|(?:\\*+[^*/]))*\\*+/)|(?://.*)","\x1b","\xfb","\x35","\x1a"),(int)34816,null());
}
;
	return null();
}

//HaxeSyntax_obj::~HaxeSyntax_obj() { }

Dynamic HaxeSyntax_obj::__CreateEmpty() { return  new HaxeSyntax_obj; }
hx::ObjectPtr< HaxeSyntax_obj > HaxeSyntax_obj::__new()
{  hx::ObjectPtr< HaxeSyntax_obj > _result_ = new HaxeSyntax_obj();
	_result_->__construct();
	return _result_;}

Dynamic HaxeSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxeSyntax_obj > _result_ = new HaxeSyntax_obj();
	_result_->__construct();
	return _result_;}


HaxeSyntax_obj::HaxeSyntax_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeSyntax_obj::__mClass,"__mClass");
};

#endif

hx::Class HaxeSyntax_obj::__mClass;

void HaxeSyntax_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.syntax.HaxeSyntax","\x21","\xac","\x1d","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HaxeSyntax_obj >;
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
