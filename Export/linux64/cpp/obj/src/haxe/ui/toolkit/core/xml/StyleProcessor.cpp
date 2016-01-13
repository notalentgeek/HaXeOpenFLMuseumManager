#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor
#include <haxe/ui/toolkit/core/xml/StyleProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void StyleProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.StyleProcessor","new",0x1d2b1957,"haxe.ui.toolkit.core.xml.StyleProcessor.new","haxe/ui/toolkit/core/xml/StyleProcessor.hx",9,0x911d3318)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//StyleProcessor_obj::~StyleProcessor_obj() { }

Dynamic StyleProcessor_obj::__CreateEmpty() { return  new StyleProcessor_obj; }
hx::ObjectPtr< StyleProcessor_obj > StyleProcessor_obj::__new()
{  hx::ObjectPtr< StyleProcessor_obj > _result_ = new StyleProcessor_obj();
	_result_->__construct();
	return _result_;}

Dynamic StyleProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleProcessor_obj > _result_ = new StyleProcessor_obj();
	_result_->__construct();
	return _result_;}

Dynamic StyleProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.StyleProcessor","process",0xd75f32e6,"haxe.ui.toolkit.core.xml.StyleProcessor.process","haxe/ui/toolkit/core/xml/StyleProcessor.hx",12,0x911d3318)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(13)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	{
		HX_STACK_LINE(13)
		::Xml tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		{
			HX_STACK_LINE(13)
			{
				HX_STACK_LINE(13)
				int tmp2 = node->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13)
				int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(13)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(13)
				if ((tmp4)){
					HX_STACK_LINE(13)
					int tmp6 = node->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(13)
					int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(13)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(13)
					tmp5 = (tmp6 != tmp8);
				}
				else{
					HX_STACK_LINE(13)
					tmp5 = false;
				}
				HX_STACK_LINE(13)
				if ((tmp5)){
					HX_STACK_LINE(13)
					::String tmp6 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + node->nodeType);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(13)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(13)
			tmp1 = node->children->__get((int)0).StaticCast< ::Xml >();
		}
		HX_STACK_LINE(13)
		::Xml _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(13)
		int tmp2 = _this->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(13)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(13)
		if ((tmp5)){
			HX_STACK_LINE(13)
			int tmp7 = _this->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(13)
			int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(13)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(13)
			tmp6 = (tmp7 == tmp9);
		}
		else{
			HX_STACK_LINE(13)
			tmp6 = true;
		}
		HX_STACK_LINE(13)
		if ((tmp6)){
			HX_STACK_LINE(13)
			::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + _this->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(13)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(13)
		tmp = _this->nodeValue;
	}
	HX_STACK_LINE(13)
	::String styleData = tmp;		HX_STACK_VAR(styleData,"styleData");
	HX_STACK_LINE(14)
	::String tmp1 = styleData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	styleData = tmp2;
	HX_STACK_LINE(15)
	::String tmp3 = styleData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	::haxe::ui::toolkit::style::Styles tmp4 = ::haxe::ui::toolkit::style::StyleParser_obj::fromString(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	::haxe::ui::toolkit::style::Styles styles = tmp4;		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(16)
	::haxe::ui::toolkit::style::StyleManager tmp5 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16)
	::haxe::ui::toolkit::style::Styles tmp6 = styles;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16)
	tmp5->addStyles(tmp6);
	HX_STACK_LINE(17)
	return null();
}



StyleProcessor_obj::StyleProcessor_obj()
{
}

Dynamic StyleProcessor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleProcessor_obj::__mClass,"__mClass");
};

#endif

hx::Class StyleProcessor_obj::__mClass;

void StyleProcessor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.xml.StyleProcessor","\xe5","\x21","\x88","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StyleProcessor_obj >;
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
} // end namespace toolkit
} // end namespace core
} // end namespace xml
