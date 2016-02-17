#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
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

Void StyleManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","new",0x91bf8c6d,"haxe.ui.toolkit.style.StyleManager.new","haxe/ui/toolkit/style/StyleManager.hx",15,0x60b8f881)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->_cacheStyles = true;
	HX_STACK_LINE(31)
	this->stylesBuilt = (int)0;
	HX_STACK_LINE(40)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->_styles = tmp;
	HX_STACK_LINE(41)
	this->_rules = Array_obj< ::String >::__new();
	HX_STACK_LINE(42)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(42)
	this->stylesBuiltFor = tmp1;
}
;
	return null();
}

//StyleManager_obj::~StyleManager_obj() { }

Dynamic StyleManager_obj::__CreateEmpty() { return  new StyleManager_obj; }
hx::ObjectPtr< StyleManager_obj > StyleManager_obj::__new()
{  hx::ObjectPtr< StyleManager_obj > _result_ = new StyleManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic StyleManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleManager_obj > _result_ = new StyleManager_obj();
	_result_->__construct();
	return _result_;}

Array< ::String > StyleManager_obj::getRules( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","getRules",0x065be854,"haxe.ui.toolkit.style.StyleManager.getRules","haxe/ui/toolkit/style/StyleManager.hx",46,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->_rules;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,getRules,return )

Void StyleManager_obj::removeStyle( ::String rule){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","removeStyle",0xf61b935a,"haxe.ui.toolkit.style.StyleManager.removeStyle","haxe/ui/toolkit/style/StyleManager.hx",49,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rule,"rule")
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp = this->_styles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::String tmp1 = rule;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		tmp->remove(tmp1);
		HX_STACK_LINE(51)
		::String tmp2 = rule;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		this->_rules->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,removeStyle,(void))

Void StyleManager_obj::addStyle( ::String rule,::haxe::ui::toolkit::style::Style style){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","addStyle",0xb2a94023,"haxe.ui.toolkit.style.StyleManager.addStyle","haxe/ui/toolkit/style/StyleManager.hx",54,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rule,"rule")
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(55)
		this->_cachedStyles = null();
		HX_STACK_LINE(56)
		Array< ::String > arr = rule.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp = (_g < arr->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(57)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				if ((tmp1)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::String tmp2 = arr->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				::String a = tmp2;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				::String tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				::String tmp4 = ::StringTools_obj::trim(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				a = tmp4;
				HX_STACK_LINE(59)
				::haxe::ds::StringMap tmp5 = this->_styles;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				::String tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(59)
				::haxe::ui::toolkit::style::_StyleManager::StyleRule existingStyleRule = tmp7;		HX_STACK_VAR(existingStyleRule,"existingStyleRule");
				HX_STACK_LINE(60)
				::haxe::ui::toolkit::style::Style existingStyle = null();		HX_STACK_VAR(existingStyle,"existingStyle");
				HX_STACK_LINE(61)
				bool tmp8 = (existingStyleRule != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				if ((tmp8)){
					HX_STACK_LINE(62)
					::haxe::ui::toolkit::style::Style existingStyle1 = existingStyleRule->style;		HX_STACK_VAR(existingStyle1,"existingStyle1");
					HX_STACK_LINE(63)
					::haxe::ui::toolkit::style::Style tmp9 = style;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(63)
					existingStyle1->merge(tmp9);
					HX_STACK_LINE(64)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp10 = ::haxe::ui::toolkit::style::_StyleManager::StyleRule_obj::__new(a,existingStyle1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(64)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = tmp10;		HX_STACK_VAR(styleRule,"styleRule");
					HX_STACK_LINE(65)
					::haxe::ds::StringMap tmp11 = this->_styles;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					::String tmp12 = a;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(65)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp13 = styleRule;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(65)
					tmp11->set(tmp12,tmp13);
				}
				else{
					HX_STACK_LINE(67)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp9 = ::haxe::ui::toolkit::style::_StyleManager::StyleRule_obj::__new(a,style);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(67)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = tmp9;		HX_STACK_VAR(styleRule,"styleRule");
					HX_STACK_LINE(68)
					::haxe::ds::StringMap tmp10 = this->_styles;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(68)
					::String tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(68)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp12 = styleRule;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(68)
					tmp10->set(tmp11,tmp12);
					HX_STACK_LINE(69)
					::String tmp13 = a;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					this->_rules->push(tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,addStyle,(void))

Void StyleManager_obj::addStyles( ::haxe::ui::toolkit::style::Styles styles){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","addStyles",0xa16edef0,"haxe.ui.toolkit.style.StyleManager.addStyles","haxe/ui/toolkit/style/StyleManager.hx",74,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(styles,"styles")
		HX_STACK_LINE(75)
		Dynamic tmp = styles->get_rules();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp);  __it->hasNext(); ){
			::String rule = __it->next();
			{
				HX_STACK_LINE(76)
				::String tmp1 = rule;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(76)
				::String tmp2 = rule;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(76)
				::haxe::ui::toolkit::style::Style tmp3 = styles->getStyle(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				this->addStyle(tmp1,tmp3);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,addStyles,(void))

::haxe::ui::toolkit::style::Style StyleManager_obj::findStyle( ::String rule){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","findStyle",0x468c9a05,"haxe.ui.toolkit.style.StyleManager.findStyle","haxe/ui/toolkit/style/StyleManager.hx",80,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_LINE(81)
	::haxe::ds::StringMap tmp = this->_styles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::String tmp1 = rule;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule existingStyleRule = tmp2;		HX_STACK_VAR(existingStyleRule,"existingStyleRule");
	HX_STACK_LINE(82)
	bool tmp3 = (existingStyleRule != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	if ((tmp3)){
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::style::Style tmp4 = existingStyleRule->style;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		return tmp4;
	}
	HX_STACK_LINE(85)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,findStyle,return )

Void StyleManager_obj::clear( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","clear",0xd9380ada,"haxe.ui.toolkit.style.StyleManager.clear","haxe/ui/toolkit/style/StyleManager.hx",88,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		this->_styles = tmp;
		HX_STACK_LINE(90)
		this->_rules = Array_obj< ::String >::__new();
		HX_STACK_LINE(91)
		::haxe::ui::toolkit::style::StyleHelper_obj::clearCache();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,clear,(void))

bool StyleManager_obj::get_useCache( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","get_useCache",0x9a9e8ad7,"haxe.ui.toolkit.style.StyleManager.get_useCache","haxe/ui/toolkit/style/StyleManager.hx",95,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	bool tmp = this->_cacheStyles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,get_useCache,return )

bool StyleManager_obj::set_useCache( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","set_useCache",0xaf97ae4b,"haxe.ui.toolkit.style.StyleManager.set_useCache","haxe/ui/toolkit/style/StyleManager.hx",98,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(99)
	this->_cacheStyles = false;
	HX_STACK_LINE(100)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,set_useCache,return )

Void StyleManager_obj::clearCache( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","clearCache",0x4b726908,"haxe.ui.toolkit.style.StyleManager.clearCache","haxe/ui/toolkit/style/StyleManager.hx",103,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			tmp = tmp2;
		}
		HX_STACK_LINE(104)
		this->_cachedStyles = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,clearCache,(void))

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer StyleManager_obj::findAncestor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","findAncestor",0x5e024bff,"haxe.ui.toolkit.style.StyleManager.findAncestor","haxe/ui/toolkit/style/StyleManager.hx",107,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rulePart,"rulePart")
	HX_STACK_LINE(108)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer a = null();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(109)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer t = c;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(111)
	while((true)){
		HX_STACK_LINE(111)
		bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(111)
			break;
		}
		HX_STACK_LINE(112)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::haxe::ui::toolkit::style::_StyleManager::StyleRulePart tmp3 = rulePart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		bool tmp4 = this->rulePartMatch(tmp2,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		if ((tmp5)){
			HX_STACK_LINE(113)
			a = t;
		}
		else{
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = t->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			t = tmp6;
			HX_STACK_LINE(116)
			bool tmp7 = (t == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			if ((tmp7)){
				HX_STACK_LINE(117)
				break;
			}
		}
	}
	HX_STACK_LINE(122)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,findAncestor,return )

bool StyleManager_obj::rulePartMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart,::String state,::String overriddenClassName){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","rulePartMatch",0xf2793a03,"haxe.ui.toolkit.style.StyleManager.rulePartMatch","haxe/ui/toolkit/style/StyleManager.hx",125,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rulePart,"rulePart")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(overriddenClassName,"overriddenClassName")
	HX_STACK_LINE(126)
	bool match = false;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(128)
	bool tmp = (state == HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	if ((tmp)){
		HX_STACK_LINE(129)
		state = null();
	}
	HX_STACK_LINE(132)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	::String className = tmp3;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(133)
	int tmp4 = className.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(133)
	int n = tmp4;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(134)
	int tmp5 = (n + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(134)
	int tmp6 = className.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(134)
	::String tmp7 = className.substr(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(134)
	className = tmp7;
	HX_STACK_LINE(135)
	bool tmp8 = (overriddenClassName != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(135)
	if ((tmp8)){
		HX_STACK_LINE(136)
		className = overriddenClassName;
	}
	HX_STACK_LINE(138)
	::String tmp9 = c->get_id();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(138)
	::String id = tmp9;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(139)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(140)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(140)
	bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(140)
	if ((tmp11)){
		HX_STACK_LINE(141)
		::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(141)
		tmp12 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c);
		HX_STACK_LINE(141)
		::String tmp13 = tmp12->get_styleName();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(141)
		styleName = tmp13;
	}
	HX_STACK_LINE(144)
	::String rulePartId = rulePart->id;		HX_STACK_VAR(rulePartId,"rulePartId");
	HX_STACK_LINE(145)
	::String rulePartClassName = rulePart->className;		HX_STACK_VAR(rulePartClassName,"rulePartClassName");
	HX_STACK_LINE(146)
	::String rulePartState = rulePart->state;		HX_STACK_VAR(rulePartState,"rulePartState");
	HX_STACK_LINE(147)
	::String rulePartStyleName = rulePart->styleName;		HX_STACK_VAR(rulePartStyleName,"rulePartStyleName");
	HX_STACK_LINE(149)
	bool tmp12 = (rulePartStyleName != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(149)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(149)
	if ((tmp12)){
		HX_STACK_LINE(149)
		tmp13 = (rulePartStyleName.length == (int)0);
	}
	else{
		HX_STACK_LINE(149)
		tmp13 = false;
	}
	HX_STACK_LINE(149)
	if ((tmp13)){
		HX_STACK_LINE(150)
		rulePartStyleName = null();
	}
	HX_STACK_LINE(153)
	::haxe::ui::toolkit::style::Style tmp14 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(153)
	::haxe::ui::toolkit::style::Style s = tmp14;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(154)
	bool tmp15 = (rulePartId != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(154)
	if ((tmp15)){
		HX_STACK_LINE(155)
		bool tmp16 = (rulePartId == id);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(155)
		match = tmp16;
		HX_STACK_LINE(156)
		bool tmp17 = (rulePartStyleName != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(156)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(156)
		if ((tmp17)){
			HX_STACK_LINE(156)
			tmp18 = (match == true);
		}
		else{
			HX_STACK_LINE(156)
			tmp18 = false;
		}
		HX_STACK_LINE(156)
		if ((tmp18)){
			HX_STACK_LINE(157)
			bool tmp19 = (rulePartStyleName == styleName);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(157)
			match = tmp19;
		}
	}
	else{
		HX_STACK_LINE(159)
		bool tmp16 = (rulePartClassName != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(159)
		if ((tmp16)){
			HX_STACK_LINE(160)
			bool tmp17 = (rulePartClassName == className);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(160)
			match = tmp17;
			HX_STACK_LINE(161)
			bool tmp18 = (rulePartStyleName != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(161)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(161)
			if ((tmp18)){
				HX_STACK_LINE(161)
				tmp19 = (match == true);
			}
			else{
				HX_STACK_LINE(161)
				tmp19 = false;
			}
			HX_STACK_LINE(161)
			if ((tmp19)){
				HX_STACK_LINE(162)
				bool tmp20 = (rulePartStyleName == styleName);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(162)
				match = tmp20;
			}
		}
		else{
			HX_STACK_LINE(164)
			bool tmp17 = (rulePartStyleName != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(164)
			if ((tmp17)){
				HX_STACK_LINE(165)
				bool tmp18 = (rulePartStyleName == styleName);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(165)
				match = tmp18;
			}
		}
	}
	HX_STACK_LINE(168)
	bool tmp16 = (rulePartState != null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(168)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(168)
	if ((tmp16)){
		HX_STACK_LINE(168)
		tmp17 = (match == true);
	}
	else{
		HX_STACK_LINE(168)
		tmp17 = false;
	}
	HX_STACK_LINE(168)
	if ((tmp17)){
		HX_STACK_LINE(169)
		bool tmp18 = (rulePartState == state);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(169)
		match = tmp18;
	}
	HX_STACK_LINE(172)
	bool tmp18 = match;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(172)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleManager_obj,rulePartMatch,return )

bool StyleManager_obj::ruleMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String rule,::String state,::String overriddenClassName){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","ruleMatch",0x6a70f276,"haxe.ui.toolkit.style.StyleManager.ruleMatch","haxe/ui/toolkit/style/StyleManager.hx",175,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rule,"rule")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(overriddenClassName,"overriddenClassName")
	HX_STACK_LINE(176)
	bool match = true;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(178)
	bool tmp = (state == HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	if ((tmp)){
		HX_STACK_LINE(179)
		state = null();
	}
	HX_STACK_LINE(182)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	::String className = tmp3;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(183)
	int tmp4 = className.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	int n = tmp4;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(184)
	int tmp5 = (n + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	int tmp6 = className.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(184)
	::String tmp7 = className.substr(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(184)
	className = tmp7;
	HX_STACK_LINE(185)
	bool tmp8 = (overriddenClassName != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(185)
	if ((tmp8)){
		HX_STACK_LINE(186)
		className = overriddenClassName;
	}
	HX_STACK_LINE(188)
	::String tmp9 = c->get_id();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(188)
	::String id = tmp9;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(189)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(190)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(190)
	bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(190)
	if ((tmp11)){
		HX_STACK_LINE(191)
		::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(191)
		tmp12 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c);
		HX_STACK_LINE(191)
		::String tmp13 = tmp12->get_styleName();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(191)
		styleName = tmp13;
	}
	HX_STACK_LINE(194)
	::haxe::ds::StringMap tmp12 = this->_styles;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(194)
	::String tmp13 = rule;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(194)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(194)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = tmp14;		HX_STACK_VAR(styleRule,"styleRule");
	HX_STACK_LINE(196)
	bool skipRule = true;		HX_STACK_VAR(skipRule,"skipRule");
	HX_STACK_LINE(198)
	::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(198)
	::String tmp16 = className;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(198)
	::String tmp17 = state;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(198)
	::String tmp18 = styleName;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(198)
	bool tmp19 = styleRule->isRelevant(tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(198)
	bool tmp20 = (tmp19 == true);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(198)
	if ((tmp20)){
		HX_STACK_LINE(199)
		skipRule = false;
	}
	HX_STACK_LINE(202)
	bool tmp21 = (styleName != null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(202)
	bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(202)
	if ((tmp21)){
		HX_STACK_LINE(202)
		::String tmp23 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + styleName);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(202)
		::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(202)
		::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(202)
		int tmp26 = rule.indexOf(tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(202)
		int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(202)
		tmp22 = (tmp27 != (int)-1);
	}
	else{
		HX_STACK_LINE(202)
		tmp22 = false;
	}
	HX_STACK_LINE(202)
	if ((tmp22)){
		HX_STACK_LINE(203)
		skipRule = false;
	}
	HX_STACK_LINE(206)
	bool tmp23 = (skipRule == true);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(206)
	if ((tmp23)){
		HX_STACK_LINE(207)
		return false;
	}
	HX_STACK_LINE(210)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer t = c;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(212)
	{
		HX_STACK_LINE(212)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		Array< ::Dynamic > _g1 = styleRule->ruleParts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(212)
		while((true)){
			HX_STACK_LINE(212)
			bool tmp24 = (_g < _g1->length);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(212)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(212)
			if ((tmp25)){
				HX_STACK_LINE(212)
				break;
			}
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart tmp26 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart = tmp26;		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(212)
			++(_g);
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart tmp28 = rulePart;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(213)
			::String tmp29 = state;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(213)
			::String tmp30 = overriddenClassName;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(213)
			bool tmp31 = this->rulePartMatch(tmp27,tmp28,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(213)
			bool partMatch = tmp31;		HX_STACK_VAR(partMatch,"partMatch");
			HX_STACK_LINE(214)
			bool tmp32 = (partMatch == false);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(214)
			if ((tmp32)){
				HX_STACK_LINE(215)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp33 = t;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(215)
				::haxe::ui::toolkit::style::_StyleManager::StyleRulePart tmp34 = rulePart;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(215)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp35 = this->findAncestor(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(215)
				t = tmp35;
				HX_STACK_LINE(216)
				bool tmp36 = (t == null());		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(216)
				if ((tmp36)){
					HX_STACK_LINE(217)
					match = false;
					HX_STACK_LINE(218)
					break;
				}
				else{
					HX_STACK_LINE(220)
					state = null();
				}
			}
		}
	}
	HX_STACK_LINE(225)
	bool tmp24 = match;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(225)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleManager_obj,ruleMatch,return )

::haxe::ui::toolkit::style::Style StyleManager_obj::buildStyleFor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildStyleFor",0xdedb11f3,"haxe.ui.toolkit.style.StyleManager.buildStyleFor","haxe/ui/toolkit/style/StyleManager.hx",228,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(229)
	bool tmp = (state == HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	if ((tmp)){
		HX_STACK_LINE(230)
		state = null();
	}
	HX_STACK_LINE(233)
	::String cacheKey = null();		HX_STACK_VAR(cacheKey,"cacheKey");
	HX_STACK_LINE(234)
	bool tmp1 = this->_cacheStyles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	bool tmp2 = (tmp1 == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	if ((tmp2)){
		HX_STACK_LINE(235)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		::String tmp4 = state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		::String tmp5 = this->buildFullCacheKey(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		cacheKey = tmp5;
		HX_STACK_LINE(236)
		::haxe::ds::StringMap tmp6 = this->_cachedStyles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(236)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(236)
		if ((tmp7)){
			HX_STACK_LINE(237)
			::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(237)
			this->_cachedStyles = tmp8;
		}
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp8 = this->_cachedStyles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		::String tmp9 = cacheKey;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(239)
		::haxe::ui::toolkit::style::Style tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(239)
		::haxe::ui::toolkit::style::Style tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(239)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(239)
		if ((tmp12)){
			HX_STACK_LINE(240)
			::haxe::ds::StringMap tmp13 = this->_cachedStyles;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(240)
			::String tmp14 = cacheKey;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(240)
			::haxe::ui::toolkit::style::Style tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(240)
			::haxe::ui::toolkit::style::Style tmp16 = tmp15->clone();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(240)
			return tmp16;
		}
	}
	HX_STACK_LINE(244)
	::haxe::ui::toolkit::style::Style tmp3 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	::haxe::ui::toolkit::style::Style style = tmp3;		HX_STACK_VAR(style,"style");
	HX_STACK_LINE(245)
	style->set_autoApply(false);
	HX_STACK_LINE(247)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(247)
	::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(247)
	::hx::Class tmp6 = ::Type_obj::getSuperClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(247)
	::hx::Class superClass = tmp6;		HX_STACK_VAR(superClass,"superClass");
	HX_STACK_LINE(248)
	while((true)){
		HX_STACK_LINE(248)
		bool tmp7 = (superClass != hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(248)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(248)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(248)
		if ((tmp8)){
			HX_STACK_LINE(249)
			tmp9 = (superClass != hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >());
		}
		else{
			HX_STACK_LINE(248)
			tmp9 = false;
		}
		HX_STACK_LINE(248)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(248)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(248)
		if ((tmp10)){
			HX_STACK_LINE(250)
			tmp11 = (superClass != hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >());
		}
		else{
			HX_STACK_LINE(248)
			tmp11 = false;
		}
		HX_STACK_LINE(248)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(248)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(248)
		if ((tmp12)){
			HX_STACK_LINE(251)
			tmp13 = (superClass != hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObjectContainer >());
		}
		else{
			HX_STACK_LINE(248)
			tmp13 = false;
		}
		HX_STACK_LINE(248)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(248)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(248)
		if ((tmp14)){
			HX_STACK_LINE(252)
			tmp15 = (superClass != hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObject >());
		}
		else{
			HX_STACK_LINE(248)
			tmp15 = false;
		}
		HX_STACK_LINE(248)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(248)
		if ((tmp15)){
			HX_STACK_LINE(253)
			tmp16 = (superClass != null());
		}
		else{
			HX_STACK_LINE(248)
			tmp16 = false;
		}
		HX_STACK_LINE(248)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(248)
		if ((tmp17)){
			HX_STACK_LINE(248)
			break;
		}
		HX_STACK_LINE(254)
		::hx::Class tmp18 = superClass;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(254)
		::String tmp19 = ::Type_obj::getClassName(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(254)
		::String superClassName = tmp19;		HX_STACK_VAR(superClassName,"superClassName");
		HX_STACK_LINE(255)
		int tmp20 = superClassName.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(255)
		int n = tmp20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(256)
		int tmp21 = (n + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(256)
		int tmp22 = superClassName.length;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(256)
		::String tmp23 = superClassName.substr(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(256)
		superClassName = tmp23;
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(258)
			Array< ::String > _g1 = this->_rules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(258)
			while((true)){
				HX_STACK_LINE(258)
				bool tmp24 = (_g < _g1->length);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(258)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(258)
				if ((tmp25)){
					HX_STACK_LINE(258)
					break;
				}
				HX_STACK_LINE(258)
				::String tmp26 = _g1->__get(_g);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(258)
				::String rule = tmp26;		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(258)
				++(_g);
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp27 = c;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(259)
				::String tmp28 = rule;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(259)
				::String tmp29 = state;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(259)
				::String tmp30 = superClassName;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(259)
				bool tmp31 = this->ruleMatch(tmp27,tmp28,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(259)
				bool tmp32 = (tmp31 == true);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(259)
				if ((tmp32)){
					HX_STACK_LINE(260)
					::haxe::ds::StringMap tmp33 = this->_styles;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(260)
					::String tmp34 = rule;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(260)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp35 = tmp33->get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(260)
					::haxe::ui::toolkit::style::Style matchedStyle = tmp35->style;		HX_STACK_VAR(matchedStyle,"matchedStyle");
					HX_STACK_LINE(261)
					::haxe::ui::toolkit::style::Style tmp36 = matchedStyle;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(261)
					style->merge(tmp36);
				}
			}
		}
		HX_STACK_LINE(265)
		::hx::Class tmp24 = superClass;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(265)
		::hx::Class tmp25 = ::Type_obj::getSuperClass(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(265)
		superClass = tmp25;
	}
	HX_STACK_LINE(268)
	{
		HX_STACK_LINE(268)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(268)
		Array< ::String > _g1 = this->_rules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(268)
		while((true)){
			HX_STACK_LINE(268)
			bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(268)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(268)
			if ((tmp8)){
				HX_STACK_LINE(268)
				break;
			}
			HX_STACK_LINE(268)
			::String tmp9 = _g1->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(268)
			::String rule = tmp9;		HX_STACK_VAR(rule,"rule");
			HX_STACK_LINE(268)
			++(_g);
			HX_STACK_LINE(269)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(269)
			::String tmp11 = rule;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(269)
			::String tmp12 = state;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(269)
			bool tmp13 = this->ruleMatch(tmp10,tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(269)
			bool tmp14 = (tmp13 == true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(269)
			if ((tmp14)){
				HX_STACK_LINE(270)
				::haxe::ds::StringMap tmp15 = this->_styles;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(270)
				::String tmp16 = rule;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(270)
				::haxe::ui::toolkit::style::_StyleManager::StyleRule tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(270)
				::haxe::ui::toolkit::style::Style matchedStyle = tmp17->style;		HX_STACK_VAR(matchedStyle,"matchedStyle");
				HX_STACK_LINE(271)
				::haxe::ui::toolkit::style::Style tmp18 = matchedStyle;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(271)
				style->merge(tmp18);
			}
		}
	}
	HX_STACK_LINE(275)
	(this->stylesBuilt)++;
	HX_STACK_LINE(276)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(276)
	::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(276)
	::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(276)
	::String className = tmp9;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(277)
	::haxe::ds::StringMap tmp10 = this->stylesBuiltFor;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(277)
	::String tmp11 = className;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(277)
	Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(277)
	Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(277)
	bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(277)
	if ((tmp14)){
		HX_STACK_LINE(278)
		::haxe::ds::StringMap tmp15 = this->stylesBuiltFor;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(278)
		::String tmp16 = className;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(278)
		tmp15->set(tmp16,(int)0);
	}
	HX_STACK_LINE(280)
	::haxe::ds::StringMap tmp15 = this->stylesBuiltFor;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(280)
	::String tmp16 = className;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(280)
	Dynamic tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(280)
	int n = tmp17;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(281)
	(n)++;
	HX_STACK_LINE(282)
	::haxe::ds::StringMap tmp18 = this->stylesBuiltFor;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(282)
	::String tmp19 = className;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(282)
	int tmp20 = n;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(282)
	tmp18->set(tmp19,tmp20);
	HX_STACK_LINE(284)
	bool tmp21 = this->_cacheStyles;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(284)
	bool tmp22 = (tmp21 == true);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(284)
	bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(284)
	if ((tmp22)){
		HX_STACK_LINE(284)
		tmp23 = (cacheKey != null());
	}
	else{
		HX_STACK_LINE(284)
		tmp23 = false;
	}
	HX_STACK_LINE(284)
	if ((tmp23)){
		HX_STACK_LINE(285)
		::haxe::ds::StringMap tmp24 = this->_cachedStyles;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(285)
		::String tmp25 = cacheKey;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(285)
		::haxe::ui::toolkit::style::Style tmp26 = style;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(285)
		tmp24->set(tmp25,tmp26);
	}
	HX_STACK_LINE(288)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(288)
	style->set_target(tmp24);
	HX_STACK_LINE(289)
	style->set_autoApply(true);
	HX_STACK_LINE(290)
	::haxe::ui::toolkit::style::Style tmp25 = style->clone();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(290)
	return tmp25;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildStyleFor,return )

::String StyleManager_obj::buildCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildCacheKey",0x1c2ba018,"haxe.ui.toolkit.style.StyleManager.buildCacheKey","haxe/ui/toolkit/style/StyleManager.hx",293,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(294)
	bool tmp = (state == HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	if ((tmp)){
		HX_STACK_LINE(295)
		state = null();
	}
	HX_STACK_LINE(298)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(298)
	::String className = tmp3;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(299)
	int tmp4 = className.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	int n = tmp4;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(300)
	int tmp5 = (n + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(300)
	int tmp6 = className.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(300)
	::String tmp7 = className.substr(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(300)
	className = tmp7;
	HX_STACK_LINE(302)
	::String tmp8 = c->get_id();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(302)
	::String id = tmp8;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(303)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(304)
	::String styleString = null();		HX_STACK_VAR(styleString,"styleString");
	HX_STACK_LINE(305)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(305)
	bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(305)
	if ((tmp10)){
		HX_STACK_LINE(306)
		::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(306)
		tmp11 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c);
		HX_STACK_LINE(306)
		::String tmp12 = tmp11->get_styleName();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(306)
		styleName = tmp12;
		HX_STACK_LINE(307)
		::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(307)
		tmp13 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c);
		HX_STACK_LINE(307)
		::String tmp14 = tmp13->get_styleString();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(307)
		styleString = tmp14;
	}
	HX_STACK_LINE(310)
	::String s = className;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(311)
	bool tmp11 = (id != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(311)
	if ((tmp11)){
		HX_STACK_LINE(312)
		::String tmp12 = (HX_HCSTRING("#","\x23","\x00","\x00","\x00") + id);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(312)
		hx::AddEq(s,tmp12);
	}
	HX_STACK_LINE(314)
	bool tmp12 = (styleName != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(314)
	if ((tmp12)){
		HX_STACK_LINE(315)
		::String tmp13 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + styleName);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(315)
		hx::AddEq(s,tmp13);
	}
	HX_STACK_LINE(317)
	bool tmp13 = (state != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(317)
	if ((tmp13)){
		HX_STACK_LINE(318)
		::String tmp14 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + state);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(318)
		hx::AddEq(s,tmp14);
	}
	HX_STACK_LINE(320)
	bool tmp14 = (styleString != null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(320)
	if ((tmp14)){
		HX_STACK_LINE(321)
		::String tmp15 = (HX_HCSTRING("{","\x7b","\x00","\x00","\x00") + styleString);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(321)
		::String tmp16 = (tmp15 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(321)
		hx::AddEq(s,tmp16);
	}
	HX_STACK_LINE(324)
	::String tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(324)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildCacheKey,return )

::String StyleManager_obj::buildFullCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildFullCacheKey",0x87b65647,"haxe.ui.toolkit.style.StyleManager.buildFullCacheKey","haxe/ui/toolkit/style/StyleManager.hx",327,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(328)
	bool tmp = (state == HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	if ((tmp)){
		HX_STACK_LINE(329)
		state = null();
	}
	HX_STACK_LINE(332)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	::String tmp2 = state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	::String tmp3 = this->buildCacheKey(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(332)
	::String key = tmp3;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(333)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = c->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(333)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer p = tmp4;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(334)
	while((true)){
		HX_STACK_LINE(334)
		bool tmp5 = (p != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(334)
		if ((tmp6)){
			HX_STACK_LINE(334)
			break;
		}
		HX_STACK_LINE(335)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(335)
		::String tmp8 = this->buildCacheKey(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(335)
		::String tmp9 = (HX_HCSTRING(">","\x3e","\x00","\x00","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(335)
		hx::AddEq(key,tmp9);
		HX_STACK_LINE(336)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = p->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(336)
		p = tmp10;
	}
	HX_STACK_LINE(338)
	::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(338)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildFullCacheKey,return )

Void StyleManager_obj::dump( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","dump",0xef4b4c87,"haxe.ui.toolkit.style.StyleManager.dump","haxe/ui/toolkit/style/StyleManager.hx",341,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		::haxe::ds::StringMap tmp = this->stylesBuiltFor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(343)
				::String tmp2 = (HX_HCSTRING("> ","\x22","\x36","\x00","\x00") + key);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(343)
				::String tmp3 = (tmp2 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(343)
				::haxe::ds::StringMap tmp4 = this->stylesBuiltFor;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(343)
				::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(343)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(343)
				::String tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(343)
				Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("StyleManager.hx","\xe2","\xaa","\x82","\xcb"),343,HX_HCSTRING("haxe.ui.toolkit.style.StyleManager","\xfb","\xd1","\xb3","\x58"),HX_HCSTRING("dump","\x34","\x7d","\x72","\x42"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(343)
				::haxe::Log_obj::trace(tmp8,tmp9);
			}
;
		}
		HX_STACK_LINE(345)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("StyleManager.hx","\xe2","\xaa","\x82","\xcb"),345,HX_HCSTRING("haxe.ui.toolkit.style.StyleManager","\xfb","\xd1","\xb3","\x58"),HX_HCSTRING("dump","\x34","\x7d","\x72","\x42"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		::haxe::Log_obj::trace(HX_HCSTRING(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>","\x40","\x85","\x93","\x00"),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,dump,(void))

bool StyleManager_obj::get_hasStyles( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","get_hasStyles",0x9f599b40,"haxe.ui.toolkit.style.StyleManager.get_hasStyles","haxe/ui/toolkit/style/StyleManager.hx",348,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_LINE(349)
	::haxe::ds::StringMap tmp = this->_styles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	if ((tmp1)){
		HX_STACK_LINE(350)
		return false;
	}
	HX_STACK_LINE(352)
	::haxe::ds::StringMap tmp2 = this->_styles;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(352)
	Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(352)
	bool tmp4 = tmp3->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(352)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,get_hasStyles,return )

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::_instance;

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::instance;

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","get_instance",0xebffadf1,"haxe.ui.toolkit.style.StyleManager.get_instance","haxe/ui/toolkit/style/StyleManager.hx",18,0x60b8f881)
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::style::StyleManager tmp = ::haxe::ui::toolkit::style::StyleManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(20)
		::haxe::ui::toolkit::style::StyleManager tmp2 = ::haxe::ui::toolkit::style::StyleManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::haxe::ui::toolkit::style::StyleManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::style::StyleManager tmp2 = ::haxe::ui::toolkit::style::StyleManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,get_instance,return )


StyleManager_obj::StyleManager_obj()
{
}

void StyleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleManager);
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	HX_MARK_MEMBER_NAME(_rules,"_rules");
	HX_MARK_MEMBER_NAME(stylesBuilt,"stylesBuilt");
	HX_MARK_MEMBER_NAME(stylesBuiltFor,"stylesBuiltFor");
	HX_MARK_MEMBER_NAME(hasStyles,"hasStyles");
	HX_MARK_MEMBER_NAME(_cacheStyles,"_cacheStyles");
	HX_MARK_MEMBER_NAME(_cachedStyles,"_cachedStyles");
	HX_MARK_END_CLASS();
}

void StyleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	HX_VISIT_MEMBER_NAME(_rules,"_rules");
	HX_VISIT_MEMBER_NAME(stylesBuilt,"stylesBuilt");
	HX_VISIT_MEMBER_NAME(stylesBuiltFor,"stylesBuiltFor");
	HX_VISIT_MEMBER_NAME(hasStyles,"hasStyles");
	HX_VISIT_MEMBER_NAME(_cacheStyles,"_cacheStyles");
	HX_VISIT_MEMBER_NAME(_cachedStyles,"_cachedStyles");
}

Dynamic StyleManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { return _rules; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRules") ) { return getRules_dyn(); }
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"useCache") ) { if (inCallProp == hx::paccAlways) return get_useCache(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStyles") ) { return inCallProp == hx::paccAlways ? get_hasStyles() : hasStyles; }
		if (HX_FIELD_EQ(inName,"addStyles") ) { return addStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"findStyle") ) { return findStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"ruleMatch") ) { return ruleMatch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stylesBuilt") ) { return stylesBuilt; }
		if (HX_FIELD_EQ(inName,"removeStyle") ) { return removeStyle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cacheStyles") ) { return _cacheStyles; }
		if (HX_FIELD_EQ(inName,"get_useCache") ) { return get_useCache_dyn(); }
		if (HX_FIELD_EQ(inName,"set_useCache") ) { return set_useCache_dyn(); }
		if (HX_FIELD_EQ(inName,"findAncestor") ) { return findAncestor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cachedStyles") ) { return _cachedStyles; }
		if (HX_FIELD_EQ(inName,"rulePartMatch") ) { return rulePartMatch_dyn(); }
		if (HX_FIELD_EQ(inName,"buildStyleFor") ) { return buildStyleFor_dyn(); }
		if (HX_FIELD_EQ(inName,"buildCacheKey") ) { return buildCacheKey_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasStyles") ) { return get_hasStyles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stylesBuiltFor") ) { return stylesBuiltFor; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buildFullCacheKey") ) { return buildFullCacheKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool StyleManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic StyleManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { if (inCallProp == hx::paccAlways) return set_useCache(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStyles") ) { hasStyles=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stylesBuilt") ) { stylesBuilt=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cacheStyles") ) { _cacheStyles=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cachedStyles") ) { _cachedStyles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stylesBuiltFor") ) { stylesBuiltFor=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::style::StyleManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::style::StyleManager >(); return true; }
	}
	return false;
}

void StyleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84"));
	outFields->push(HX_HCSTRING("_rules","\x38","\xab","\x3d","\xed"));
	outFields->push(HX_HCSTRING("stylesBuilt","\xbc","\xe9","\x25","\x8c"));
	outFields->push(HX_HCSTRING("stylesBuiltFor","\xad","\x52","\x2b","\x58"));
	outFields->push(HX_HCSTRING("hasStyles","\x1c","\x99","\xbb","\x56"));
	outFields->push(HX_HCSTRING("_cacheStyles","\x05","\xc0","\x7d","\x9a"));
	outFields->push(HX_HCSTRING("_cachedStyles","\x83","\x62","\x4c","\x4c"));
	outFields->push(HX_HCSTRING("useCache","\x7b","\xfc","\x7f","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,_styles),HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StyleManager_obj,_rules),HX_HCSTRING("_rules","\x38","\xab","\x3d","\xed")},
	{hx::fsInt,(int)offsetof(StyleManager_obj,stylesBuilt),HX_HCSTRING("stylesBuilt","\xbc","\xe9","\x25","\x8c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,stylesBuiltFor),HX_HCSTRING("stylesBuiltFor","\xad","\x52","\x2b","\x58")},
	{hx::fsBool,(int)offsetof(StyleManager_obj,hasStyles),HX_HCSTRING("hasStyles","\x1c","\x99","\xbb","\x56")},
	{hx::fsBool,(int)offsetof(StyleManager_obj,_cacheStyles),HX_HCSTRING("_cacheStyles","\x05","\xc0","\x7d","\x9a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,_cachedStyles),HX_HCSTRING("_cachedStyles","\x83","\x62","\x4c","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::style::StyleManager*/ ,(void *) &StyleManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::style::StyleManager*/ ,(void *) &StyleManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84"),
	HX_HCSTRING("_rules","\x38","\xab","\x3d","\xed"),
	HX_HCSTRING("stylesBuilt","\xbc","\xe9","\x25","\x8c"),
	HX_HCSTRING("stylesBuiltFor","\xad","\x52","\x2b","\x58"),
	HX_HCSTRING("hasStyles","\x1c","\x99","\xbb","\x56"),
	HX_HCSTRING("_cacheStyles","\x05","\xc0","\x7d","\x9a"),
	HX_HCSTRING("_cachedStyles","\x83","\x62","\x4c","\x4c"),
	HX_HCSTRING("getRules","\x81","\x73","\x2d","\x51"),
	HX_HCSTRING("removeStyle","\x4d","\x82","\x51","\x82"),
	HX_HCSTRING("addStyle","\x50","\xcb","\x7a","\xfd"),
	HX_HCSTRING("addStyles","\x23","\x1b","\xf7","\xcd"),
	HX_HCSTRING("findStyle","\x38","\xd6","\x14","\x73"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_useCache","\x84","\xb0","\x99","\xbd"),
	HX_HCSTRING("set_useCache","\xf8","\xd3","\x92","\xd2"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	HX_HCSTRING("findAncestor","\xac","\x71","\xfd","\x80"),
	HX_HCSTRING("rulePartMatch","\xb6","\x0b","\x3f","\x6b"),
	HX_HCSTRING("ruleMatch","\xa9","\x2e","\xf9","\x96"),
	HX_HCSTRING("buildStyleFor","\xa6","\xe3","\xa0","\x57"),
	HX_HCSTRING("buildCacheKey","\xcb","\x71","\xf1","\x94"),
	HX_HCSTRING("buildFullCacheKey","\x7a","\x7d","\xf2","\x16"),
	HX_HCSTRING("dump","\x34","\x7d","\x72","\x42"),
	HX_HCSTRING("get_hasStyles","\xf3","\x6c","\x1f","\x18"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StyleManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(StyleManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StyleManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(StyleManager_obj::instance,"instance");
};

#endif

hx::Class StyleManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void StyleManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style.StyleManager","\xfb","\xd1","\xb3","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleManager_obj::__GetStatic;
	__mClass->mSetStaticField = &StyleManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StyleManager_obj >;
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
