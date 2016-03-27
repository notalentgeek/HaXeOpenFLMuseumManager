#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void Styles_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","new",0x60628713,"haxe.ui.toolkit.style.Styles.new","haxe/ui/toolkit/style/Styles.hx",11,0x4c5a7a1b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	this->_styles = tmp;
	HX_STACK_LINE(13)
	this->_styleRules = Array_obj< ::String >::__new();
}
;
	return null();
}

//Styles_obj::~Styles_obj() { }

Dynamic Styles_obj::__CreateEmpty() { return  new Styles_obj; }
hx::ObjectPtr< Styles_obj > Styles_obj::__new()
{  hx::ObjectPtr< Styles_obj > _result_ = new Styles_obj();
	_result_->__construct();
	return _result_;}

Dynamic Styles_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Styles_obj > _result_ = new Styles_obj();
	_result_->__construct();
	return _result_;}

::haxe::ui::toolkit::style::Style Styles_obj::addStyle( ::String rule,::haxe::ui::toolkit::style::Style style){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","addStyle",0x3039ebbd,"haxe.ui.toolkit.style.Styles.addStyle","haxe/ui/toolkit/style/Styles.hx",16,0x4c5a7a1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(17)
	int tmp = rule.indexOf(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	bool tmp1 = (tmp != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	if ((tmp1)){
		HX_STACK_LINE(18)
		Array< ::String > rules = rule.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(rules,"rules");
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(19)
			while((true)){
				HX_STACK_LINE(19)
				bool tmp2 = (_g < rules->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(19)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(19)
				if ((tmp3)){
					HX_STACK_LINE(19)
					break;
				}
				HX_STACK_LINE(19)
				::String tmp4 = rules->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(19)
				::String r = tmp4;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(19)
				++(_g);
				HX_STACK_LINE(20)
				::String tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(20)
				::String tmp6 = ::StringTools_obj::trim(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(20)
				r = tmp6;
				HX_STACK_LINE(21)
				::String tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(21)
				::haxe::ui::toolkit::style::Style tmp8 = style;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(21)
				this->addStyle(tmp7,tmp8);
			}
		}
		HX_STACK_LINE(23)
		return null();
	}
	HX_STACK_LINE(26)
	::String tmp2 = rule;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::style::Style tmp3 = this->getStyle(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::style::Style currentStyle = tmp3;		HX_STACK_VAR(currentStyle,"currentStyle");
	HX_STACK_LINE(27)
	bool tmp4 = (currentStyle != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	if ((tmp4)){
		HX_STACK_LINE(28)
		::haxe::ui::toolkit::style::Style tmp5 = style;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		currentStyle->merge(tmp5);
		HX_STACK_LINE(29)
		style = currentStyle;
	}
	else{
		HX_STACK_LINE(31)
		::String tmp5 = rule;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		this->_styleRules->push(tmp5);
	}
	HX_STACK_LINE(34)
	::haxe::ds::StringMap tmp5 = this->_styles;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	::String tmp6 = rule;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::style::Style tmp7 = style;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	tmp5->set(tmp6,tmp7);
	HX_STACK_LINE(35)
	::haxe::ui::toolkit::style::Style tmp8 = style;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Styles_obj,addStyle,return )

::haxe::ui::toolkit::style::Style Styles_obj::getStyle( ::String rule){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","getStyle",0x16b3d528,"haxe.ui.toolkit.style.Styles.getStyle","haxe/ui/toolkit/style/Styles.hx",38,0x4c5a7a1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_LINE(39)
	::haxe::ds::StringMap tmp = this->_styles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::String tmp1 = rule;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::haxe::ui::toolkit::style::Style tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Styles_obj,getStyle,return )

Dynamic Styles_obj::get_rules( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","get_rules",0x697cff41,"haxe.ui.toolkit.style.Styles.get_rules","haxe/ui/toolkit/style/Styles.hx",42,0x4c5a7a1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	Dynamic tmp = this->_styleRules->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Styles_obj,get_rules,return )


Styles_obj::Styles_obj()
{
}

void Styles_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Styles);
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	HX_MARK_MEMBER_NAME(_styleRules,"_styleRules");
	HX_MARK_MEMBER_NAME(rules,"rules");
	HX_MARK_END_CLASS();
}

void Styles_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	HX_VISIT_MEMBER_NAME(_styleRules,"_styleRules");
	HX_VISIT_MEMBER_NAME(rules,"rules");
}

Dynamic Styles_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { return inCallProp == hx::paccAlways ? get_rules() : rules; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_rules") ) { return get_rules_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_styleRules") ) { return _styleRules; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Styles_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { rules=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_styleRules") ) { _styleRules=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Styles_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84"));
	outFields->push(HX_HCSTRING("_styleRules","\x25","\x8a","\xd6","\x43"));
	outFields->push(HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Styles_obj,_styles),HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Styles_obj,_styleRules),HX_HCSTRING("_styleRules","\x25","\x8a","\xd6","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Styles_obj,rules),HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84"),
	HX_HCSTRING("_styleRules","\x25","\x8a","\xd6","\x43"),
	HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"),
	HX_HCSTRING("addStyle","\x50","\xcb","\x7a","\xfd"),
	HX_HCSTRING("getStyle","\xbb","\xb4","\xf4","\xe3"),
	HX_HCSTRING("get_rules","\x4e","\xc0","\xff","\x34"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Styles_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Styles_obj::__mClass,"__mClass");
};

#endif

hx::Class Styles_obj::__mClass;

void Styles_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style.Styles","\xa1","\x01","\x0f","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Styles_obj >;
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
} // end namespace style
