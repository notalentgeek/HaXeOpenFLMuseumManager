#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRule
#include <haxe/ui/toolkit/style/_StyleManager/StyleRule.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart
#include <haxe/ui/toolkit/style/_StyleManager/StyleRulePart.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{
namespace _StyleManager{

Void StyleRule_obj::__construct(::String rule,::haxe::ui::toolkit::style::Style style)
{
HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRule","new",0xa985dced,"haxe.ui.toolkit.style._StyleManager.StyleRule.new","haxe/ui/toolkit/style/StyleManager.hx",360,0x60b8f881)
HX_STACK_THIS(this)
HX_STACK_ARG(rule,"rule")
HX_STACK_ARG(style,"style")
{
	HX_STACK_LINE(361)
	this->style = style;
	HX_STACK_LINE(362)
	this->ruleParts = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(363)
	Array< ::String > ruleArr = rule.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(ruleArr,"ruleArr");
	HX_STACK_LINE(364)
	ruleArr->reverse();
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(365)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(365)
		while((true)){
			HX_STACK_LINE(365)
			bool tmp = (_g < ruleArr->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(365)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(365)
			if ((tmp1)){
				HX_STACK_LINE(365)
				break;
			}
			HX_STACK_LINE(365)
			::String tmp2 = ruleArr->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(365)
			::String rulePart = tmp2;		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(365)
			++(_g);
			HX_STACK_LINE(366)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart tmp3 = ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart_obj::__new(rulePart);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			this->ruleParts->push(tmp3);
		}
	}
}
;
	return null();
}

//StyleRule_obj::~StyleRule_obj() { }

Dynamic StyleRule_obj::__CreateEmpty() { return  new StyleRule_obj; }
hx::ObjectPtr< StyleRule_obj > StyleRule_obj::__new(::String rule,::haxe::ui::toolkit::style::Style style)
{  hx::ObjectPtr< StyleRule_obj > _result_ = new StyleRule_obj();
	_result_->__construct(rule,style);
	return _result_;}

Dynamic StyleRule_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleRule_obj > _result_ = new StyleRule_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool StyleRule_obj::containsClassName( ::String className){
	HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRule","containsClassName",0x582465d1,"haxe.ui.toolkit.style._StyleManager.StyleRule.containsClassName","haxe/ui/toolkit/style/StyleManager.hx",370,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_LINE(371)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(372)
	{
		HX_STACK_LINE(372)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(372)
		Array< ::Dynamic > _g1 = this->ruleParts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(372)
		while((true)){
			HX_STACK_LINE(372)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(372)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(372)
			if ((tmp1)){
				HX_STACK_LINE(372)
				break;
			}
			HX_STACK_LINE(372)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart tmp2 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(372)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart = tmp2;		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(372)
			++(_g);
			HX_STACK_LINE(373)
			bool tmp3 = (rulePart->className != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(373)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			if ((tmp3)){
				HX_STACK_LINE(373)
				tmp4 = (rulePart->className == className);
			}
			else{
				HX_STACK_LINE(373)
				tmp4 = false;
			}
			HX_STACK_LINE(373)
			if ((tmp4)){
				HX_STACK_LINE(374)
				found = true;
				HX_STACK_LINE(375)
				break;
			}
		}
	}
	HX_STACK_LINE(378)
	bool tmp = found;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleRule_obj,containsClassName,return )

bool StyleRule_obj::isRelevant( ::String id,::String className,::String state,::String styleName){
	HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRule","isRelevant",0x9e9ac43a,"haxe.ui.toolkit.style._StyleManager.StyleRule.isRelevant","haxe/ui/toolkit/style/StyleManager.hx",381,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(styleName,"styleName")
	HX_STACK_LINE(382)
	bool relevant = false;		HX_STACK_VAR(relevant,"relevant");
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(383)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(383)
		Array< ::Dynamic > _g1 = this->ruleParts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(383)
		while((true)){
			HX_STACK_LINE(383)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(383)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(383)
			if ((tmp1)){
				HX_STACK_LINE(383)
				break;
			}
			HX_STACK_LINE(383)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart tmp2 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(383)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart = tmp2;		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(383)
			++(_g);
			HX_STACK_LINE(384)
			bool tmp3 = (rulePart->id != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			if ((tmp3)){
				HX_STACK_LINE(384)
				tmp4 = (rulePart->id == id);
			}
			else{
				HX_STACK_LINE(384)
				tmp4 = false;
			}
			HX_STACK_LINE(384)
			if ((tmp4)){
				HX_STACK_LINE(385)
				relevant = true;
				HX_STACK_LINE(386)
				break;
			}
			HX_STACK_LINE(388)
			bool tmp5 = (rulePart->className != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(388)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(388)
			if ((tmp5)){
				HX_STACK_LINE(388)
				tmp6 = (rulePart->className == className);
			}
			else{
				HX_STACK_LINE(388)
				tmp6 = false;
			}
			HX_STACK_LINE(388)
			if ((tmp6)){
				HX_STACK_LINE(389)
				relevant = true;
				HX_STACK_LINE(390)
				break;
			}
			HX_STACK_LINE(392)
			bool tmp7 = (rulePart->state != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			if ((tmp7)){
				HX_STACK_LINE(392)
				tmp8 = (rulePart->state == state);
			}
			else{
				HX_STACK_LINE(392)
				tmp8 = false;
			}
			HX_STACK_LINE(392)
			if ((tmp8)){
				HX_STACK_LINE(393)
				relevant = true;
				HX_STACK_LINE(394)
				break;
			}
			HX_STACK_LINE(396)
			bool tmp9 = (rulePart->styleName != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(396)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(396)
			if ((tmp9)){
				HX_STACK_LINE(396)
				tmp10 = (rulePart->styleName == styleName);
			}
			else{
				HX_STACK_LINE(396)
				tmp10 = false;
			}
			HX_STACK_LINE(396)
			if ((tmp10)){
				HX_STACK_LINE(397)
				relevant = true;
				HX_STACK_LINE(398)
				break;
			}
		}
	}
	HX_STACK_LINE(401)
	bool tmp = relevant;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleRule_obj,isRelevant,return )


StyleRule_obj::StyleRule_obj()
{
}

void StyleRule_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleRule);
	HX_MARK_MEMBER_NAME(ruleParts,"ruleParts");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_END_CLASS();
}

void StyleRule_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ruleParts,"ruleParts");
	HX_VISIT_MEMBER_NAME(style,"style");
}

Dynamic StyleRule_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ruleParts") ) { return ruleParts; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isRelevant") ) { return isRelevant_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsClassName") ) { return containsClassName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleRule_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ruleParts") ) { ruleParts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleRule_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StyleRule_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ruleParts","\x84","\x76","\x2b","\x51"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StyleRule_obj,ruleParts),HX_HCSTRING("ruleParts","\x84","\x76","\x2b","\x51")},
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleRule_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ruleParts","\x84","\x76","\x2b","\x51"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("containsClassName","\x84","\x5c","\x5e","\xe1"),
	HX_HCSTRING("isRelevant","\x27","\x75","\x6a","\xff"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleRule_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleRule_obj::__mClass,"__mClass");
};

#endif

hx::Class StyleRule_obj::__mClass;

void StyleRule_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style._StyleManager.StyleRule","\x7b","\xe2","\xe7","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StyleRule_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StyleRule_obj >;
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
} // end namespace _StyleManager
