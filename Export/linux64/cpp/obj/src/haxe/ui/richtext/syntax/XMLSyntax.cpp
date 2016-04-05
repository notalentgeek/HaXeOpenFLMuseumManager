#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_XMLSyntax
#include <haxe/ui/richtext/syntax/XMLSyntax.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{

Void XMLSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.syntax.XMLSyntax","new",0x4f274394,"haxe.ui.richtext.syntax.XMLSyntax.new","haxe/ui/richtext/syntax/XMLSyntax.hx",4,0x2f03531c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->_identifier = HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00");
	HX_STACK_LINE(7)
	this->addRule(HX_HCSTRING("<[\\s\\S]*?>","\xf9","\x0c","\x3a","\x1a"),(int)255,true);
	HX_STACK_LINE(8)
	this->addRule(HX_HCSTRING("(\\w*)\\=","\x23","\x2b","\xc1","\xe8"),(int)3840511,true);
	HX_STACK_LINE(9)
	this->addRule(HX_HCSTRING("\"(.*?)\"","\x96","\xcb","\x81","\x1c"),(int)8912896,null());
}
;
	return null();
}

//XMLSyntax_obj::~XMLSyntax_obj() { }

Dynamic XMLSyntax_obj::__CreateEmpty() { return  new XMLSyntax_obj; }
hx::ObjectPtr< XMLSyntax_obj > XMLSyntax_obj::__new()
{  hx::ObjectPtr< XMLSyntax_obj > _result_ = new XMLSyntax_obj();
	_result_->__construct();
	return _result_;}

Dynamic XMLSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLSyntax_obj > _result_ = new XMLSyntax_obj();
	_result_->__construct();
	return _result_;}


XMLSyntax_obj::XMLSyntax_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XMLSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLSyntax_obj::__mClass,"__mClass");
};

#endif

hx::Class XMLSyntax_obj::__mClass;

void XMLSyntax_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.syntax.XMLSyntax","\xa2","\x29","\x39","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< XMLSyntax_obj >;
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
