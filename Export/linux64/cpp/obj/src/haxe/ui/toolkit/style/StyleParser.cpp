#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#include <haxe/ui/toolkit/util/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleParser_obj::__construct()
{
	return null();
}

//StyleParser_obj::~StyleParser_obj() { }

Dynamic StyleParser_obj::__CreateEmpty() { return  new StyleParser_obj; }
hx::ObjectPtr< StyleParser_obj > StyleParser_obj::__new()
{  hx::ObjectPtr< StyleParser_obj > _result_ = new StyleParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic StyleParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleParser_obj > _result_ = new StyleParser_obj();
	_result_->__construct();
	return _result_;}

::haxe::ui::toolkit::style::Styles StyleParser_obj::fromString( ::String styleString,hx::Null< bool >  __o_storeRaw){
bool storeRaw = __o_storeRaw.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleParser","fromString",0xb7a75218,"haxe.ui.toolkit.style.StyleParser.fromString","haxe/ui/toolkit/style/StyleParser.hx",10,0xa41d672f)
	HX_STACK_ARG(styleString,"styleString")
	HX_STACK_ARG(storeRaw,"storeRaw")
{
		HX_STACK_LINE(11)
		bool tmp = (styleString == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11)
		if ((tmp1)){
			HX_STACK_LINE(11)
			tmp2 = (styleString.length == (int)0);
		}
		else{
			HX_STACK_LINE(11)
			tmp2 = true;
		}
		HX_STACK_LINE(11)
		if ((tmp2)){
			HX_STACK_LINE(12)
			::haxe::ui::toolkit::style::Styles tmp3 = ::haxe::ui::toolkit::style::Styles_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12)
			return tmp3;
		}
		HX_STACK_LINE(16)
		int tmp3 = styleString.indexOf(HX_HCSTRING("/*","\x1b","\x29","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		int n1 = tmp3;		HX_STACK_VAR(n1,"n1");
		HX_STACK_LINE(17)
		while((true)){
			HX_STACK_LINE(17)
			bool tmp4 = (n1 != (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17)
			if ((tmp5)){
				HX_STACK_LINE(17)
				break;
			}
			HX_STACK_LINE(18)
			int tmp6 = n1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(18)
			int tmp7 = styleString.indexOf(HX_HCSTRING("*/","\xc5","\x24","\x00","\x00"),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(18)
			int n2 = tmp7;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(19)
			bool tmp8 = (n2 == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(19)
			if ((tmp8)){
				HX_STACK_LINE(20)
				break;
			}
			HX_STACK_LINE(23)
			int tmp9 = n1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(23)
			::String tmp10 = styleString.substring((int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(23)
			::String before = tmp10;		HX_STACK_VAR(before,"before");
			HX_STACK_LINE(24)
			int tmp11 = (n2 + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(24)
			int tmp12 = styleString.length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(24)
			::String tmp13 = styleString.substring(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(24)
			::String after = tmp13;		HX_STACK_VAR(after,"after");
			HX_STACK_LINE(25)
			::String tmp14 = (before + after);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(25)
			styleString = tmp14;
			HX_STACK_LINE(26)
			int tmp15 = styleString.indexOf(HX_HCSTRING("/*","\x1b","\x29","\x00","\x00"),null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(26)
			n1 = tmp15;
		}
		HX_STACK_LINE(29)
		::haxe::ui::toolkit::style::Styles tmp4 = ::haxe::ui::toolkit::style::Styles_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::haxe::ui::toolkit::style::Styles styles = tmp4;		HX_STACK_VAR(styles,"styles");
		HX_STACK_LINE(30)
		int n11 = (int)-1;		HX_STACK_VAR(n11,"n11");
		HX_STACK_LINE(31)
		int tmp5 = styleString.indexOf(HX_HCSTRING("{","\x7b","\x00","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		int n2 = tmp5;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			bool tmp6 = (n2 > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			if ((tmp7)){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(33)
			int tmp8 = n2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			int tmp9 = styleString.indexOf(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(33)
			int n3 = tmp9;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(35)
			int tmp10 = (n11 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			int tmp11 = (n2 - n11);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			::String tmp13 = styleString.substr(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			::String tmp14 = ::StringTools_obj::trim(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(35)
			::String styleName = tmp14;		HX_STACK_VAR(styleName,"styleName");
			HX_STACK_LINE(36)
			int tmp15 = (n2 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(36)
			int tmp16 = (n3 - n2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(36)
			int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(36)
			::String tmp18 = styleString.substr(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(36)
			::String styleData = tmp18;		HX_STACK_VAR(styleData,"styleData");
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::style::Style tmp19 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::style::Style style = tmp19;		HX_STACK_VAR(style,"style");
			HX_STACK_LINE(38)
			Array< ::String > props = styleData.split(HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(props,"props");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(39)
				while((true)){
					HX_STACK_LINE(39)
					bool tmp20 = (_g < props->length);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(39)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(39)
					if ((tmp21)){
						HX_STACK_LINE(39)
						break;
					}
					HX_STACK_LINE(39)
					::String tmp22 = props->__get(_g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(39)
					::String prop = tmp22;		HX_STACK_VAR(prop,"prop");
					HX_STACK_LINE(39)
					++(_g);
					HX_STACK_LINE(40)
					::String tmp23 = prop;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(40)
					::String tmp24 = ::StringTools_obj::trim(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(40)
					prop = tmp24;
					HX_STACK_LINE(41)
					bool tmp25 = (prop.length == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(41)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(41)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(41)
					if ((tmp26)){
						HX_STACK_LINE(41)
						::String tmp28 = prop;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(41)
						::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(41)
						tmp27 = ::StringTools_obj::startsWith(tmp29,HX_HCSTRING("//","\x20","\x29","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(41)
						tmp27 = true;
					}
					HX_STACK_LINE(41)
					if ((tmp27)){
						HX_STACK_LINE(42)
						continue;
					}
					HX_STACK_LINE(44)
					bool tmp28 = (storeRaw == true);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(44)
					if ((tmp28)){
						HX_STACK_LINE(45)
						::String tmp29 = prop;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(45)
						style->addRawProperty(tmp29);
					}
					HX_STACK_LINE(48)
					bool tmp29 = (prop != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(48)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(48)
					if ((tmp29)){
						HX_STACK_LINE(48)
						tmp30 = (prop.length > (int)0);
					}
					else{
						HX_STACK_LINE(48)
						tmp30 = false;
					}
					HX_STACK_LINE(48)
					if ((tmp30)){
						HX_STACK_LINE(49)
						Array< ::String > temp = prop.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(50)
						::String tmp31 = temp->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(50)
						::String tmp32 = ::StringTools_obj::trim(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(50)
						::String propName = tmp32;		HX_STACK_VAR(propName,"propName");
						HX_STACK_LINE(51)
						::String tmp33 = propName;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(51)
						::String tmp34 = ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeHyphens(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(51)
						propName = tmp34;
						HX_STACK_LINE(52)
						::haxe::ui::toolkit::style::Style tmp35 = style;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(52)
						::String tmp36 = (HX_HCSTRING("set_","\x7d","\x92","\x50","\x4c") + propName);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(52)
						Dynamic tmp37 = ::Reflect_obj::field(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(52)
						bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(52)
						if ((tmp38)){
							HX_STACK_LINE(53)
							::String tmp39 = (HX_HCSTRING("Warning: ","\xe2","\x3b","\x0f","\x9a") + propName);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(53)
							::String tmp40 = (tmp39 + HX_HCSTRING(" not found","\x55","\xf3","\xa5","\x21"));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(53)
							Dynamic tmp41 = hx::SourceInfo(HX_HCSTRING("StyleParser.hx","\xee","\xdb","\x39","\x92"),53,HX_HCSTRING("haxe.ui.toolkit.style.StyleParser","\x11","\x09","\x75","\x57"),HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(53)
							::haxe::Log_obj::trace(tmp40,tmp41);
							HX_STACK_LINE(54)
							continue;
						}
						HX_STACK_LINE(57)
						::String tmp39 = temp->__get((int)1);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(57)
						::String tmp40 = ::StringTools_obj::trim(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(57)
						::String propValue = tmp40;		HX_STACK_VAR(propValue,"propValue");
						HX_STACK_LINE(58)
						bool tmp41 = (temp->length == (int)3);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(58)
						if ((tmp41)){
							HX_STACK_LINE(59)
							::String tmp42 = temp->__get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(59)
							::String tmp43 = ::StringTools_obj::trim(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(59)
							::String tmp44 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(59)
							hx::AddEq(propValue,tmp44);
						}
						HX_STACK_LINE(62)
						::String tmp42 = propValue;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(62)
						::String tmp43 = ::StringTools_obj::replace(tmp42,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(62)
						propValue = tmp43;
						HX_STACK_LINE(63)
						::String tmp44 = propValue;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(63)
						::String tmp45 = ::StringTools_obj::replace(tmp44,HX_HCSTRING("'","\x27","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(63)
						propValue = tmp45;
						HX_STACK_LINE(64)
						::String tmp46 = propValue;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(64)
						::String tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(64)
						bool tmp48 = ::haxe::ui::toolkit::hscript::ScriptUtils_obj::isScript(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(64)
						bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(64)
						if ((tmp48)){
							HX_STACK_LINE(64)
							::String tmp50 = propName;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(64)
							::String tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(64)
							bool tmp52 = ::haxe::ui::toolkit::hscript::ScriptUtils_obj::isCssException(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(64)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(64)
							bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(64)
							tmp49 = !(tmp54);
						}
						else{
							HX_STACK_LINE(64)
							tmp49 = false;
						}
						HX_STACK_LINE(64)
						if ((tmp49)){
							HX_STACK_LINE(65)
							::String tmp50 = propName;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(65)
							::String tmp51 = propValue;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(65)
							style->addDynamicValue(tmp50,tmp51);
							HX_STACK_LINE(66)
							continue;
						}
						HX_STACK_LINE(69)
						bool tmp50 = (propName == HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(69)
						bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(69)
						if ((tmp50)){
							HX_STACK_LINE(69)
							int tmp52 = propValue.indexOf(HX_HCSTRING("%","\x25","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(69)
							int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(69)
							tmp51 = (tmp53 != (int)-1);
						}
						else{
							HX_STACK_LINE(69)
							tmp51 = false;
						}
						HX_STACK_LINE(69)
						if ((tmp51)){
							HX_STACK_LINE(70)
							propName = HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe");
							HX_STACK_LINE(71)
							int tmp52 = (propValue.length - (int)1);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(71)
							::String tmp53 = propValue.substr((int)0,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(71)
							propValue = tmp53;
						}
						else{
							HX_STACK_LINE(72)
							bool tmp52 = (propName == HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(72)
							bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(72)
							if ((tmp52)){
								HX_STACK_LINE(72)
								int tmp54 = propValue.indexOf(HX_HCSTRING("%","\x25","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(72)
								int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(72)
								tmp53 = (tmp55 != (int)-1);
							}
							else{
								HX_STACK_LINE(72)
								tmp53 = false;
							}
							HX_STACK_LINE(72)
							if ((tmp53)){
								HX_STACK_LINE(73)
								propName = HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10");
								HX_STACK_LINE(74)
								int tmp54 = (propValue.length - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(74)
								::String tmp55 = propValue.substr((int)0,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(74)
								propValue = tmp55;
							}
							else{
								HX_STACK_LINE(75)
								bool tmp54 = (propName == HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(75)
								if ((tmp54)){
									HX_STACK_LINE(76)
									::String tmp55 = propValue;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(76)
									::openfl::_legacy::filters::BitmapFilter tmp56 = ::haxe::ui::toolkit::util::FilterParser_obj::parseFilter(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(76)
									style->set_filter(tmp56);
									HX_STACK_LINE(77)
									continue;
								}
								else{
									HX_STACK_LINE(78)
									bool tmp55 = (propName == HX_HCSTRING("backgroundImageScale9","\xdc","\xc2","\x85","\x79"));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(78)
									if ((tmp55)){
										HX_STACK_LINE(79)
										Array< ::String > coords = propValue.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(coords,"coords");
										HX_STACK_LINE(80)
										::String tmp56 = coords->__get((int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(80)
										Dynamic tmp57 = ::Std_obj::parseInt(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(80)
										int x1 = tmp57;		HX_STACK_VAR(x1,"x1");
										HX_STACK_LINE(81)
										::String tmp58 = coords->__get((int)1);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(81)
										Dynamic tmp59 = ::Std_obj::parseInt(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(81)
										int y1 = tmp59;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(82)
										::String tmp60 = coords->__get((int)2);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(82)
										Dynamic tmp61 = ::Std_obj::parseInt(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(82)
										int x2 = tmp61;		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(83)
										::String tmp62 = coords->__get((int)3);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(83)
										Dynamic tmp63 = ::Std_obj::parseInt(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(83)
										int y2 = tmp63;		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(84)
										::openfl::_legacy::geom::Rectangle tmp64 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(84)
										::openfl::_legacy::geom::Rectangle scale9 = tmp64;		HX_STACK_VAR(scale9,"scale9");
										HX_STACK_LINE(85)
										int tmp65 = x1;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(85)
										scale9->set_left(tmp65);
										HX_STACK_LINE(86)
										int tmp66 = y1;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(86)
										scale9->set_top(tmp66);
										HX_STACK_LINE(87)
										int tmp67 = x2;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(87)
										scale9->set_right(tmp67);
										HX_STACK_LINE(88)
										int tmp68 = y2;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(88)
										scale9->set_bottom(tmp68);
										HX_STACK_LINE(89)
										::openfl::_legacy::geom::Rectangle tmp69 = scale9;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(89)
										style->set_backgroundImageScale9(tmp69);
										HX_STACK_LINE(90)
										continue;
									}
									else{
										HX_STACK_LINE(91)
										bool tmp56 = (propName == HX_HCSTRING("backgroundImageRect","\x51","\x40","\x02","\x06"));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(91)
										if ((tmp56)){
											HX_STACK_LINE(92)
											Array< ::String > arr = propValue.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(93)
											::String tmp57 = arr->__get((int)0);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(93)
											Dynamic tmp58 = ::Std_obj::parseInt(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(93)
											::String tmp59 = arr->__get((int)1);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(93)
											Dynamic tmp60 = ::Std_obj::parseInt(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(93)
											::String tmp61 = arr->__get((int)2);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(93)
											Dynamic tmp62 = ::Std_obj::parseInt(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(93)
											::String tmp63 = arr->__get((int)3);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(93)
											Dynamic tmp64 = ::Std_obj::parseInt(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(93)
											::openfl::_legacy::geom::Rectangle tmp65 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp58,tmp60,tmp62,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(93)
											style->set_backgroundImageRect(tmp65);
											HX_STACK_LINE(94)
											continue;
										}
									}
								}
							}
						}
						HX_STACK_LINE(97)
						int tmp52 = propValue.indexOf(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(97)
						int tmp53 = (int)-1;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(97)
						bool tmp54 = (tmp52 != tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(97)
						bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(97)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(97)
						if ((tmp55)){
							HX_STACK_LINE(97)
							::String tmp57 = propValue;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(97)
							::String tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(97)
							bool tmp59 = ::StringTools_obj::startsWith(tmp58,HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(97)
							bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(97)
							bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(97)
							bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(97)
							bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(97)
							bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(97)
							bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(97)
							if ((tmp65)){
								HX_STACK_LINE(97)
								::String tmp66 = propValue;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(97)
								::String tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(97)
								::String tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(97)
								Float tmp69 = ::Std_obj::parseFloat(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(97)
								Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(97)
								Float tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(97)
								Float tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(97)
								Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(97)
								::String tmp74 = ::Std_obj::string(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(97)
								::String tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(97)
								::String tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(97)
								Float tmp77 = ::Math_obj::NaN;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(97)
								Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(97)
								Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(97)
								Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(97)
								Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(97)
								::String tmp82 = ::Std_obj::string(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(97)
								::String tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(97)
								::String tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(97)
								tmp56 = (tmp76 == tmp84);
							}
							else{
								HX_STACK_LINE(97)
								tmp56 = false;
							}
						}
						else{
							HX_STACK_LINE(97)
							tmp56 = true;
						}
						HX_STACK_LINE(97)
						if ((tmp56)){
							HX_STACK_LINE(98)
							bool tmp57 = (propValue == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(98)
							bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(98)
							bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(98)
							if ((tmp58)){
								HX_STACK_LINE(98)
								tmp59 = (propValue == HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));
							}
							else{
								HX_STACK_LINE(98)
								tmp59 = true;
							}
							HX_STACK_LINE(98)
							if ((tmp59)){
								HX_STACK_LINE(99)
								::haxe::ui::toolkit::style::Style tmp60 = style;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(99)
								::String tmp61 = propName;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(99)
								bool tmp62 = (propValue == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(99)
								::Reflect_obj::setProperty(tmp60,tmp61,tmp62);
							}
							else{
								HX_STACK_LINE(101)
								::haxe::ui::toolkit::style::Style tmp60 = style;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(101)
								::String tmp61 = propName;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(101)
								::String tmp62 = propValue;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(101)
								::Reflect_obj::setProperty(tmp60,tmp61,tmp62);
							}
						}
						else{
							HX_STACK_LINE(104)
							::String tmp57 = propValue;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(104)
							bool tmp58 = ::StringTools_obj::startsWith(tmp57,HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(104)
							if ((tmp58)){
								HX_STACK_LINE(105)
								int tmp59 = (propValue.length - (int)1);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(105)
								::String tmp60 = propValue.substr((int)1,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(105)
								::String tmp61 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(105)
								propValue = tmp61;
							}
							HX_STACK_LINE(107)
							::String tmp59 = propValue;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(107)
							bool tmp60 = ::StringTools_obj::startsWith(tmp59,HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"));		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(107)
							if ((tmp60)){
								HX_STACK_LINE(108)
								::haxe::ui::toolkit::style::Style tmp61 = style;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(108)
								::String tmp62 = propName;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(108)
								::String tmp63 = propValue;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(108)
								Dynamic tmp64 = ::Std_obj::parseInt(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(108)
								::Reflect_obj::setProperty(tmp61,tmp62,tmp64);
							}
							else{
								HX_STACK_LINE(110)
								::haxe::ui::toolkit::style::Style tmp61 = style;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(110)
								::String tmp62 = propName;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(110)
								::String tmp63 = propValue;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(110)
								Float tmp64 = ::Std_obj::parseFloat(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(110)
								::Reflect_obj::setProperty(tmp61,tmp62,tmp64);
							}
						}
					}
				}
			}
			HX_STACK_LINE(116)
			int tmp20 = styleName.indexOf(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(116)
			bool tmp21 = (tmp20 == (int)-1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(116)
			if ((tmp21)){
				HX_STACK_LINE(117)
				::String tmp22 = styleName;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(117)
				::haxe::ui::toolkit::style::Style tmp23 = style;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(117)
				styles->addStyle(tmp22,tmp23);
			}
			else{
				HX_STACK_LINE(119)
				Array< ::String > arr = styleName.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(120)
					while((true)){
						HX_STACK_LINE(120)
						bool tmp22 = (_g < arr->length);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(120)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(120)
						if ((tmp23)){
							HX_STACK_LINE(120)
							break;
						}
						HX_STACK_LINE(120)
						::String tmp24 = arr->__get(_g);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(120)
						::String s = tmp24;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(120)
						++(_g);
						HX_STACK_LINE(121)
						::String tmp25 = s;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(121)
						::String tmp26 = ::StringTools_obj::trim(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(121)
						s = tmp26;
						HX_STACK_LINE(122)
						::String tmp27 = s;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(122)
						::haxe::ui::toolkit::style::Style tmp28 = style->clone();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(122)
						styles->addStyle(tmp27,tmp28);
					}
				}
			}
			HX_STACK_LINE(126)
			n11 = n3;
			HX_STACK_LINE(127)
			int tmp22 = n11;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(127)
			int tmp23 = styleString.indexOf(HX_HCSTRING("{","\x7b","\x00","\x00","\x00"),tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(127)
			n2 = tmp23;
		}
		HX_STACK_LINE(130)
		::haxe::ui::toolkit::style::Styles tmp6 = styles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StyleParser_obj,fromString,return )


StyleParser_obj::StyleParser_obj()
{
}

bool StyleParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleParser_obj::__mClass,"__mClass");
};

#endif

hx::Class StyleParser_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	::String(null()) };

void StyleParser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style.StyleParser","\x11","\x09","\x75","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleParser_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StyleParser_obj >;
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
