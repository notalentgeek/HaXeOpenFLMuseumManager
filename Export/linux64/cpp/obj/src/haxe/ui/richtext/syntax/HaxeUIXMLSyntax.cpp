#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_HaxeUIXMLSyntax
#include <haxe/ui/richtext/syntax/HaxeUIXMLSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_XMLSyntax
#include <haxe/ui/richtext/syntax/XMLSyntax.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{

Void HaxeUIXMLSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.syntax.HaxeUIXMLSyntax","new",0xd118013a,"haxe.ui.richtext.syntax.HaxeUIXMLSyntax.new","haxe/ui/richtext/syntax/HaxeUIXMLSyntax.hx",4,0x0fb39c36)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(7)
	this->addRule(HX_HCSTRING("(#|\\w|.)(.*?){|}","\x49","\x64","\x42","\xc2"),(int)3120138,false);
	HX_STACK_LINE(8)
	this->addRule(HX_HCSTRING("(\\w*)\\:","\x20","\x2b","\xc1","\xe8"),(int)13184044,false);
	HX_STACK_LINE(9)
	this->addRule(HX_HCSTRING(":(.*?)\\;","\x53","\x3d","\xcb","\x31"),(int)10911577,null());
	HX_STACK_LINE(11)
	this->addRule(HX_HCSTRING("\"(.*?)\"","\x96","\xcb","\x81","\x1c"),(int)8912896,null());
	HX_STACK_LINE(13)
	this->addRule(HX_HCSTRING("(?<=<script>)[\\s\\S]*?(?=</script>)","\x0c","\xff","\x07","\x33"),(int)0,null());
}
;
	return null();
}

//HaxeUIXMLSyntax_obj::~HaxeUIXMLSyntax_obj() { }

Dynamic HaxeUIXMLSyntax_obj::__CreateEmpty() { return  new HaxeUIXMLSyntax_obj; }
hx::ObjectPtr< HaxeUIXMLSyntax_obj > HaxeUIXMLSyntax_obj::__new()
{  hx::ObjectPtr< HaxeUIXMLSyntax_obj > _result_ = new HaxeUIXMLSyntax_obj();
	_result_->__construct();
	return _result_;}

Dynamic HaxeUIXMLSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxeUIXMLSyntax_obj > _result_ = new HaxeUIXMLSyntax_obj();
	_result_->__construct();
	return _result_;}


HaxeUIXMLSyntax_obj::HaxeUIXMLSyntax_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeUIXMLSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeUIXMLSyntax_obj::__mClass,"__mClass");
};

#endif

hx::Class HaxeUIXMLSyntax_obj::__mClass;

void HaxeUIXMLSyntax_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.syntax.HaxeUIXMLSyntax","\x48","\x9c","\x04","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HaxeUIXMLSyntax_obj >;
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
