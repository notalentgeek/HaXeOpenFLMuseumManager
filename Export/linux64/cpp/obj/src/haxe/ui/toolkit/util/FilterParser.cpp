#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#include <haxe/ui/toolkit/util/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_TypeParser
#include <haxe/ui/toolkit/util/TypeParser.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BlurFilter
#include <openfl/_legacy/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_DropShadowFilter
#include <openfl/_legacy/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_GlowFilter
#include <openfl/_legacy/filters/GlowFilter.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void FilterParser_obj::__construct()
{
	return null();
}

//FilterParser_obj::~FilterParser_obj() { }

Dynamic FilterParser_obj::__CreateEmpty() { return  new FilterParser_obj; }
hx::ObjectPtr< FilterParser_obj > FilterParser_obj::__new()
{  hx::ObjectPtr< FilterParser_obj > _result_ = new FilterParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic FilterParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterParser_obj > _result_ = new FilterParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic FilterParser_obj::filterParamDefaults;

::openfl::_legacy::filters::BitmapFilter FilterParser_obj::parseFilter( ::String filterString){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","parseFilter",0x4523f21e,"haxe.ui.toolkit.util.FilterParser.parseFilter","haxe/ui/toolkit/util/FilterParser.hx",15,0x2af1b1dd)
	HX_STACK_ARG(filterString,"filterString")
	HX_STACK_LINE(19)
	::openfl::_legacy::filters::BitmapFilter filter = null();		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(20)
	::String filterName = null();		HX_STACK_VAR(filterName,"filterName");
	HX_STACK_LINE(21)
	::String filterParams = null();		HX_STACK_VAR(filterParams,"filterParams");
	HX_STACK_LINE(23)
	int tmp = filterString.indexOf(HX_HCSTRING("(","\x28","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int n1 = tmp;		HX_STACK_VAR(n1,"n1");
	HX_STACK_LINE(24)
	int tmp1 = filterString.indexOf(HX_HCSTRING(")","\x29","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	int n2 = tmp1;		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(25)
	int tmp2 = n1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	int tmp3 = (int)-1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	if ((tmp4)){
		HX_STACK_LINE(25)
		tmp5 = (n2 != (int)-1);
	}
	else{
		HX_STACK_LINE(25)
		tmp5 = false;
	}
	HX_STACK_LINE(25)
	if ((tmp5)){
		HX_STACK_LINE(26)
		int tmp6 = n1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		::String tmp7 = filterString.substr((int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		filterName = tmp7;
		HX_STACK_LINE(27)
		int tmp8 = (n1 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		int tmp9 = (n2 - n1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(27)
		::String tmp11 = filterString.substr(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(27)
		filterParams = tmp11;
	}
	else{
		HX_STACK_LINE(29)
		filterName = filterString;
	}
	HX_STACK_LINE(32)
	bool tmp6 = (filterName != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	if ((tmp6)){
		HX_STACK_LINE(33)
		::String tmp7 = filterName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		::String tmp8 = ::StringTools_obj::trim(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		filterName = tmp8;
		HX_STACK_LINE(34)
		::String tmp9 = filterName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		::String tmp10 = filterParams;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		::openfl::_legacy::filters::BitmapFilter tmp11 = ::haxe::ui::toolkit::util::FilterParser_obj::createFilter(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		filter = tmp11;
	}
	HX_STACK_LINE(37)
	::openfl::_legacy::filters::BitmapFilter tmp7 = filter;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseFilter,return )

::openfl::_legacy::filters::BitmapFilter FilterParser_obj::createFilter( ::String filterName,::String filterParams){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createFilter",0x7eb952a1,"haxe.ui.toolkit.util.FilterParser.createFilter","haxe/ui/toolkit/util/FilterParser.hx",40,0x2af1b1dd)
	HX_STACK_ARG(filterName,"filterName")
	HX_STACK_ARG(filterParams,"filterParams")
	HX_STACK_LINE(41)
	::openfl::_legacy::filters::BitmapFilter filter = null();		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(43)
	Array< ::String > params = null();		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(44)
	bool tmp = (filterParams != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	if ((tmp)){
		HX_STACK_LINE(45)
		params = filterParams.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(48)
	::String tmp1 = filterName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	params = ::haxe::ui::toolkit::util::FilterParser_obj::copyFilterDefaults(tmp1,params);
	HX_STACK_LINE(50)
	bool tmp2 = (filterName == HX_HCSTRING("blur","\xa7","\x42","\x19","\x41"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp2)){
		HX_STACK_LINE(51)
		::openfl::_legacy::filters::BlurFilter tmp3 = ::haxe::ui::toolkit::util::FilterParser_obj::createBlurFilter(params);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		filter = tmp3;
	}
	else{
		HX_STACK_LINE(52)
		bool tmp3 = (filterName == HX_HCSTRING("dropShadow","\x6f","\x41","\x90","\x5c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		if ((tmp3)){
			HX_STACK_LINE(53)
			::openfl::_legacy::filters::DropShadowFilter tmp4 = ::haxe::ui::toolkit::util::FilterParser_obj::createDropShadowFilter(params);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			filter = tmp4;
		}
		else{
			HX_STACK_LINE(54)
			bool tmp4 = (filterName == HX_HCSTRING("glow","\x8d","\x4e","\x67","\x44"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			if ((tmp4)){
				HX_STACK_LINE(55)
				::openfl::_legacy::filters::GlowFilter tmp5 = ::haxe::ui::toolkit::util::FilterParser_obj::createGlowFilter(params);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				filter = tmp5;
			}
		}
	}
	HX_STACK_LINE(58)
	::openfl::_legacy::filters::BitmapFilter tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FilterParser_obj,createFilter,return )

::openfl::_legacy::filters::BlurFilter FilterParser_obj::createBlurFilter( Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createBlurFilter",0x39a32928,"haxe.ui.toolkit.util.FilterParser.createBlurFilter","haxe/ui/toolkit/util/FilterParser.hx",62,0x2af1b1dd)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(64)
	::String tmp = params->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	::String tmp2 = params->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	::String tmp4 = params->__get((int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	int tmp5 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	::openfl::_legacy::filters::BlurFilter tmp6 = ::openfl::_legacy::filters::BlurFilter_obj::__new(tmp1,tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	::openfl::_legacy::filters::BlurFilter filter = tmp6;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(68)
	::openfl::_legacy::filters::BlurFilter tmp7 = filter;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,createBlurFilter,return )

::openfl::_legacy::filters::DropShadowFilter FilterParser_obj::createDropShadowFilter( Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createDropShadowFilter",0x1f3562b0,"haxe.ui.toolkit.util.FilterParser.createDropShadowFilter","haxe/ui/toolkit/util/FilterParser.hx",72,0x2af1b1dd)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(74)
	::String tmp = params->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Float tmp1 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	::String tmp2 = params->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	Float tmp3 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	::String tmp4 = params->__get((int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	int tmp5 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	::String tmp6 = params->__get((int)3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	Float tmp7 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	::String tmp8 = params->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(78)
	Float tmp9 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(79)
	::String tmp10 = params->__get((int)5);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(79)
	Float tmp11 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(80)
	::String tmp12 = params->__get((int)6);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(80)
	Float tmp13 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(81)
	::String tmp14 = params->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(81)
	int tmp15 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(82)
	::String tmp16 = params->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(82)
	bool tmp17 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(83)
	::String tmp18 = params->__get((int)9);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(83)
	bool tmp19 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(84)
	::String tmp20 = params->__get((int)10);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(84)
	bool tmp21 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(73)
	::openfl::_legacy::filters::DropShadowFilter tmp22 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new(tmp1,tmp3,tmp5,tmp7,tmp9,tmp11,tmp13,tmp15,tmp17,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(73)
	::openfl::_legacy::filters::DropShadowFilter filter = tmp22;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(86)
	::openfl::_legacy::filters::DropShadowFilter tmp23 = filter;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(86)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,createDropShadowFilter,return )

::openfl::_legacy::filters::GlowFilter FilterParser_obj::createGlowFilter( Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createGlowFilter",0x73d4258e,"haxe.ui.toolkit.util.FilterParser.createGlowFilter","haxe/ui/toolkit/util/FilterParser.hx",90,0x2af1b1dd)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(92)
	::String tmp = params->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	int tmp1 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	::String tmp2 = params->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	Float tmp3 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	::String tmp4 = params->__get((int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	Float tmp5 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	::String tmp6 = params->__get((int)3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	Float tmp7 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	::String tmp8 = params->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	Float tmp9 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	::String tmp10 = params->__get((int)5);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	int tmp11 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(98)
	::String tmp12 = params->__get((int)6);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(98)
	bool tmp13 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(99)
	::String tmp14 = params->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	bool tmp15 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(91)
	::openfl::_legacy::filters::GlowFilter tmp16 = ::openfl::_legacy::filters::GlowFilter_obj::__new(tmp1,tmp3,tmp5,tmp7,tmp9,tmp11,tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(91)
	::openfl::_legacy::filters::GlowFilter filter = tmp16;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(101)
	::openfl::_legacy::filters::GlowFilter tmp17 = filter;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(101)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,createGlowFilter,return )

Array< ::String > FilterParser_obj::copyFilterDefaults( ::String filterName,Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","copyFilterDefaults",0xc80f318c,"haxe.ui.toolkit.util.FilterParser.copyFilterDefaults","haxe/ui/toolkit/util/FilterParser.hx",104,0x2af1b1dd)
	HX_STACK_ARG(filterName,"filterName")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(105)
	Array< ::String > copy = Array_obj< ::String >::__new();		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(107)
	Dynamic tmp = ::haxe::ui::toolkit::util::FilterParser_obj::filterParamDefaults;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	::String tmp1 = filterName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	Array< ::String > defaultParams = tmp2;		HX_STACK_VAR(defaultParams,"defaultParams");
	HX_STACK_LINE(108)
	bool tmp3 = (defaultParams != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	if ((tmp3)){
		HX_STACK_LINE(109)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			bool tmp4 = (_g < defaultParams->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			if ((tmp5)){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(109)
			::String tmp6 = defaultParams->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			::String p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(109)
			++(_g);
			HX_STACK_LINE(110)
			::String tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(110)
			copy->push(tmp7);
		}
	}
	HX_STACK_LINE(113)
	bool tmp4 = (params != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	if ((tmp4)){
		HX_STACK_LINE(114)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			while((true)){
				HX_STACK_LINE(115)
				bool tmp5 = (_g < params->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(115)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(115)
				if ((tmp6)){
					HX_STACK_LINE(115)
					break;
				}
				HX_STACK_LINE(115)
				::String tmp7 = params->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(115)
				::String p = tmp7;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(115)
				++(_g);
				HX_STACK_LINE(116)
				::String tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(116)
				copy[n] = tmp8;
				HX_STACK_LINE(117)
				(n)++;
			}
		}
	}
	HX_STACK_LINE(121)
	return copy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FilterParser_obj,copyFilterDefaults,return )

::openfl::_legacy::filters::BitmapFilter FilterParser_obj::changeFilterQuality( ::openfl::_legacy::filters::BitmapFilter filter,int quality){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","changeFilterQuality",0xb6403d2a,"haxe.ui.toolkit.util.FilterParser.changeFilterQuality","haxe/ui/toolkit/util/FilterParser.hx",124,0x2af1b1dd)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(125)
	bool tmp = (filter == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	if ((tmp)){
		HX_STACK_LINE(126)
		return null();
	}
	HX_STACK_LINE(128)
	::openfl::_legacy::filters::BitmapFilter tmp1 = filter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::openfl::_legacy::filters::BlurFilter >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	if ((tmp2)){
		HX_STACK_LINE(129)
		::openfl::_legacy::filters::BlurFilter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		tmp3 = hx::TCast< ::openfl::_legacy::filters::BlurFilter >::cast(filter);
		HX_STACK_LINE(129)
		tmp3->quality = quality;
	}
	else{
		HX_STACK_LINE(130)
		::openfl::_legacy::filters::BitmapFilter tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::_legacy::filters::DropShadowFilter >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		if ((tmp4)){
			HX_STACK_LINE(131)
			::openfl::_legacy::filters::DropShadowFilter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			tmp5 = hx::TCast< ::openfl::_legacy::filters::DropShadowFilter >::cast(filter);
			HX_STACK_LINE(131)
			tmp5->quality = quality;
		}
		else{
			HX_STACK_LINE(132)
			::openfl::_legacy::filters::BitmapFilter tmp5 = filter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::_legacy::filters::GlowFilter >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			if ((tmp6)){
				HX_STACK_LINE(133)
				::openfl::_legacy::filters::GlowFilter tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(133)
				tmp7 = hx::TCast< ::openfl::_legacy::filters::GlowFilter >::cast(filter);
				HX_STACK_LINE(133)
				tmp7->quality = quality;
			}
		}
	}
	HX_STACK_LINE(135)
	::openfl::_legacy::filters::BitmapFilter tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FilterParser_obj,changeFilterQuality,return )


FilterParser_obj::FilterParser_obj()
{
}

bool FilterParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"parseFilter") ) { outValue = parseFilter_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createFilter") ) { outValue = createFilter_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createBlurFilter") ) { outValue = createBlurFilter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createGlowFilter") ) { outValue = createGlowFilter_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyFilterDefaults") ) { outValue = copyFilterDefaults_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"filterParamDefaults") ) { outValue = filterParamDefaults; return true;  }
		if (HX_FIELD_EQ(inName,"changeFilterQuality") ) { outValue = changeFilterQuality_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createDropShadowFilter") ) { outValue = createDropShadowFilter_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FilterParser_obj::filterParamDefaults,HX_HCSTRING("filterParamDefaults","\x67","\x9f","\x5f","\xd6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FilterParser_obj::filterParamDefaults,"filterParamDefaults");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FilterParser_obj::filterParamDefaults,"filterParamDefaults");
};

#endif

hx::Class FilterParser_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("filterParamDefaults","\x67","\x9f","\x5f","\xd6"),
	HX_HCSTRING("parseFilter","\x4b","\xcc","\x71","\x00"),
	HX_HCSTRING("createFilter","\xd4","\x5f","\x8a","\xa7"),
	HX_HCSTRING("createBlurFilter","\xdb","\x4b","\xee","\x31"),
	HX_HCSTRING("createDropShadowFilter","\xa3","\x0d","\x08","\xcf"),
	HX_HCSTRING("createGlowFilter","\x41","\x48","\x1f","\x6c"),
	HX_HCSTRING("copyFilterDefaults","\xff","\xa6","\x6e","\xc3"),
	HX_HCSTRING("changeFilterQuality","\x57","\x8c","\x67","\xae"),
	::String(null()) };

void FilterParser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.FilterParser","\xc1","\x55","\x82","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FilterParser_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FilterParser_obj >;
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

void FilterParser_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/util/FilterParser.hx",9,0x2af1b1dd)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_HCSTRING("blur","\xa7","\x42","\x19","\x41") , Array_obj< ::String >::__new().Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")),false);
			__result->Add(HX_HCSTRING("dropShadow","\x6f","\x41","\x90","\x5c") , Array_obj< ::String >::__new().Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("45","\x81","\x2d","\x00","\x00")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb")).Add(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb")).Add(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb")),false);
			__result->Add(HX_HCSTRING("glow","\x8d","\x4e","\x67","\x44") , Array_obj< ::String >::__new().Add(HX_HCSTRING("16711680","\xdc","\xc8","\xfe","\x0c")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("2","\x32","\x00","\x00","\x00")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb")).Add(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb")),false);
			return __result;
		}
		return null();
	}
};
	filterParamDefaults= _Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
