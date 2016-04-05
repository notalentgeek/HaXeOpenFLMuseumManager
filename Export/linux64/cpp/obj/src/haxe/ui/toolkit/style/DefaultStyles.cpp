#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_DefaultStyles
#include <haxe/ui/toolkit/style/DefaultStyles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_DropShadowFilter
#include <openfl/_legacy/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void DefaultStyles_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.DefaultStyles","new",0xfac61f16,"haxe.ui.toolkit.style.DefaultStyles.new","haxe/ui/toolkit/style/DefaultStyles.hx",7,0xce5e3e7c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
	HX_STACK_LINE(11)
	::openfl::_legacy::text::Font tmp = ::openfl::_legacy::Assets_obj::getFont(HX_HCSTRING("fonts/Oxygen.ttf","\xa3","\xb2","\xcf","\x3c"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::openfl::_legacy::text::Font f = tmp;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(12)
	::openfl::_legacy::text::Font tmp1 = ::openfl::_legacy::Assets_obj::getFont(HX_HCSTRING("fonts/Oxygen-Bold.ttf","\xbf","\x41","\x76","\xf1"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::openfl::_legacy::text::Font fb = tmp1;		HX_STACK_VAR(fb,"fb");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",15,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(15)
	Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	::haxe::ui::toolkit::style::Style tmp3 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	this->addStyle(HX_HCSTRING("Root","\x42","\x1a","\x88","\x36"),tmp3);
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",19,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(19)
	Dynamic tmp4 = _Function_1_2::Block();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::style::Style tmp5 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	this->addStyle(HX_HCSTRING("Root.popup","\x00","\xdb","\x1f","\xde"),tmp5);
	struct _Function_1_3{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",23,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)0,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(23)
	Dynamic tmp6 = _Function_1_3::Block();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::style::Style tmp7 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(23)
	this->addStyle(HX_HCSTRING("Root.fullscreen","\xe7","\xe8","\x9f","\x4c"),tmp7);
	struct _Function_1_4{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",28,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)0,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	Dynamic tmp8 = _Function_1_4::Block();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::style::Style tmp9 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	this->addStyle(HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1"),tmp9);
	struct _Function_1_5{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",33,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , ((Float).7),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	Dynamic tmp10 = _Function_1_5::Block();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::style::Style tmp11 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(33)
	this->addStyle(HX_HCSTRING("#modalOverlay","\x86","\x83","\x7c","\x0a"),tmp11);
	struct _Function_1_6{
		inline static Dynamic Block( ::openfl::_legacy::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",38,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)14,false);
				__result->Add(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb") , f->fontName,false);
				__result->Add(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00") , true,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	Dynamic tmp12 = _Function_1_6::Block(f);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(38)
	::haxe::ui::toolkit::style::Style tmp13 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(38)
	this->addStyle(HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"),tmp13);
	struct _Function_1_7{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",47,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)14,false);
				__result->Add(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb") , HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"),false);
				__result->Add(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00") , false,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(47)
	Dynamic tmp14 = _Function_1_7::Block();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(47)
	::haxe::ui::toolkit::style::Style tmp15 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(47)
	this->addStyle(HX_HCSTRING("Code","\x4d","\xdd","\x9d","\x2c"),tmp15);
	struct _Function_1_8{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",54,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(54)
	Dynamic tmp16 = _Function_1_8::Block();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(54)
	::haxe::ui::toolkit::style::Style tmp17 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(54)
	this->addStyle(HX_HCSTRING("Container","\x21","\x55","\x46","\x61"),tmp17);
	struct _Function_1_9{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",59,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(59)
	Dynamic tmp18 = _Function_1_9::Block();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(59)
	::haxe::ui::toolkit::style::Style tmp19 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(59)
	this->addStyle(HX_HCSTRING("Accordion","\x68","\x4a","\x4f","\x0a"),tmp19);
	struct _Function_1_10{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",63,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)5,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(63)
	Dynamic tmp20 = _Function_1_10::Block();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(63)
	::haxe::ui::toolkit::style::Style tmp21 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(63)
	this->addStyle(HX_HCSTRING(".page","\x7d","\x89","\xc0","\xc6"),tmp21);
	HX_STACK_LINE(71)
	::String tmp22 = f->fontName;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(82)
	::openfl::_legacy::filters::DropShadowFilter tmp23 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	struct _Function_1_11{
		inline static Dynamic Block( ::String &tmp22,::openfl::_legacy::filters::DropShadowFilter &tmp23){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",68,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)14,false);
				__result->Add(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb") , tmp22,false);
				__result->Add(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00") , true,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)10,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)4473924,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp23,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)5,false);
				__result->Add(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba") , HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	Dynamic tmp24 = _Function_1_11::Block(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(68)
	::haxe::ui::toolkit::style::Style tmp25 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(68)
	this->addStyle(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"),tmp25);
	struct _Function_1_12{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",88,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16758635,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16744196,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(88)
	Dynamic tmp26 = _Function_1_12::Block();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(88)
	::haxe::ui::toolkit::style::Style tmp27 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(88)
	this->addStyle(HX_HCSTRING("Button:over","\x3c","\x1f","\xa6","\x4d"),tmp27);
	struct _Function_1_13{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",94,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(94)
	Dynamic tmp28 = _Function_1_13::Block();		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(94)
	::haxe::ui::toolkit::style::Style tmp29 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(94)
	this->addStyle(HX_HCSTRING("Button:down","\x4a","\x86","\x5b","\x46"),tmp29);
	struct _Function_1_14{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",100,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)9211020,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)7105644,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)13421772,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)6710886,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(100)
	Dynamic tmp30 = _Function_1_14::Block();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(100)
	::haxe::ui::toolkit::style::Style tmp31 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(100)
	this->addStyle(HX_HCSTRING("Button:disabled","\x64","\xe3","\x32","\x8f"),tmp31);
	struct _Function_1_15{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",108,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45") , HX_HCSTRING("styles/default/expand.png","\x70","\x3d","\x2b","\xc0"),false);
				__result->Add(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba") , HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(108)
	Dynamic tmp32 = _Function_1_15::Block();		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(108)
	::haxe::ui::toolkit::style::Style tmp33 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(108)
	this->addStyle(HX_HCSTRING("Button.expandable","\xd0","\x75","\x16","\x81"),tmp33);
	struct _Function_1_16{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",113,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45") , HX_HCSTRING("styles/default/collapse.png","\xc3","\x52","\xd1","\xb5"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(113)
	Dynamic tmp34 = _Function_1_16::Block();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::style::Style tmp35 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(113)
	this->addStyle(HX_HCSTRING("Button.expandable:down","\xcc","\x15","\x48","\x62"),tmp35);
	struct _Function_1_17{
		inline static Dynamic Block( ::openfl::_legacy::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",117,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2") , (int)2,false);
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)14,false);
				__result->Add(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb") , f->fontName,false);
				__result->Add(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00") , true,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(117)
	Dynamic tmp36 = _Function_1_17::Block(f);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(117)
	::haxe::ui::toolkit::style::Style tmp37 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(117)
	this->addStyle(HX_HCSTRING("CheckBox, OptionBox","\x1f","\xef","\x93","\x56"),tmp37);
	struct _Function_1_18{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",127,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)32,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)32,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(127)
	Dynamic tmp38 = _Function_1_18::Block();		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(127)
	::haxe::ui::toolkit::style::Style tmp39 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(127)
	this->addStyle(HX_HCSTRING("CheckBoxValue, OptionBoxValue","\xbd","\x65","\xf2","\xe0"),tmp39);
	struct _Function_1_19{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",132,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76") , HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(132)
	Dynamic tmp40 = _Function_1_19::Block();		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(132)
	::haxe::ui::toolkit::style::Style tmp41 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(132)
	this->addStyle(HX_HCSTRING("CheckBoxValue #unselected","\xa5","\x12","\x09","\x29"),tmp41);
	struct _Function_1_20{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",136,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(136)
	Dynamic tmp42 = _Function_1_20::Block();		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(136)
	::haxe::ui::toolkit::style::Style tmp43 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(136)
	this->addStyle(HX_HCSTRING("CheckBoxValue #unselected:disabled","\x71","\xfc","\xf9","\x60"),tmp43);
	struct _Function_1_21{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",139,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45") , HX_HCSTRING("styles/default/cross.png","\x40","\xf4","\x73","\x50"),false);
				__result->Add(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76") , HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(139)
	Dynamic tmp44 = _Function_1_21::Block();		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(139)
	::haxe::ui::toolkit::style::Style tmp45 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(139)
	this->addStyle(HX_HCSTRING("CheckBoxValue #selected","\x0c","\x5d","\x8e","\x32"),tmp45);
	struct _Function_1_22{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",144,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(144)
	Dynamic tmp46 = _Function_1_22::Block();		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(144)
	::haxe::ui::toolkit::style::Style tmp47 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(144)
	this->addStyle(HX_HCSTRING("CheckBoxValue #selected:disabled","\x2a","\xad","\x71","\x63"),tmp47);
	struct _Function_1_23{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",147,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76") , HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(147)
	Dynamic tmp48 = _Function_1_23::Block();		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(147)
	::haxe::ui::toolkit::style::Style tmp49 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(147)
	this->addStyle(HX_HCSTRING("OptionBoxValue #unselected","\x12","\x36","\x35","\xe6"),tmp49);
	struct _Function_1_24{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",151,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(151)
	Dynamic tmp50 = _Function_1_24::Block();		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(151)
	::haxe::ui::toolkit::style::Style tmp51 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(151)
	this->addStyle(HX_HCSTRING("OptionBoxValue #unselected:disabled","\x64","\x83","\x66","\xac"),tmp51);
	struct _Function_1_25{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",154,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45") , HX_HCSTRING("styles/default/circle.png","\x26","\xd4","\xb0","\x6f"),false);
				__result->Add(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76") , HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(154)
	Dynamic tmp52 = _Function_1_25::Block();		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(154)
	::haxe::ui::toolkit::style::Style tmp53 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(154)
	this->addStyle(HX_HCSTRING("OptionBoxValue #selected","\x39","\xdb","\x7c","\xb8"),tmp53);
	struct _Function_1_26{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",159,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(159)
	Dynamic tmp54 = _Function_1_26::Block();		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(159)
	::haxe::ui::toolkit::style::Style tmp55 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(159)
	this->addStyle(HX_HCSTRING("OptionBoxValue #selected:disabled","\x5d","\x81","\xda","\x23"),tmp55);
	HX_STACK_LINE(171)
	::openfl::_legacy::filters::DropShadowFilter tmp56 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)12566463,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(174)
	::String tmp57 = f->fontName;		HX_STACK_VAR(tmp57,"tmp57");
	struct _Function_1_27{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp56,::String &tmp57){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",162,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16777215,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)150,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)42,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)2236962,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)2,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp56,false);
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)14,false);
				__result->Add(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb") , tmp57,false);
				__result->Add(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(162)
	Dynamic tmp58 = _Function_1_27::Block(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(162)
	::haxe::ui::toolkit::style::Style tmp59 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(162)
	this->addStyle(HX_HCSTRING("TextInput","\xfd","\x33","\xde","\xf8"),tmp59);
	struct _Function_1_28{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",179,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)11184810,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(179)
	Dynamic tmp60 = _Function_1_28::Block();		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(179)
	::haxe::ui::toolkit::style::Style tmp61 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(179)
	this->addStyle(HX_HCSTRING("TextInput #placeholder","\x33","\x72","\x78","\xb1"),tmp61);
	struct _Function_1_29{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",183,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45") , HX_HCSTRING("styles/default/up_down.png","\x06","\xbf","\x30","\x8b"),false);
				__result->Add(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76") , HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),false);
				__result->Add(HX_HCSTRING("selectionMethod","\x4d","\xa4","\xf3","\x7e") , HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6"),false);
				__result->Add(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba") , HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(183)
	Dynamic tmp62 = _Function_1_29::Block();		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(183)
	::haxe::ui::toolkit::style::Style tmp63 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(183)
	this->addStyle(HX_HCSTRING("ListSelector, DateSelector","\x7e","\x0a","\xc6","\x53"),tmp63);
	struct _Function_1_30{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",190,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)310,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)310,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)3,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(190)
	Dynamic tmp64 = _Function_1_30::Block();		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(190)
	::haxe::ui::toolkit::style::Style tmp65 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(190)
	this->addStyle(HX_HCSTRING("CalendarView, Calendar","\x75","\x8f","\x75","\x60"),tmp65);
	HX_STACK_LINE(200)
	::openfl::_legacy::filters::DropShadowFilter tmp66 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)2236962,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp66,"tmp66");
	struct _Function_1_31{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp66){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",198,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp66,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)4473924,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)5,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(198)
	Dynamic tmp67 = _Function_1_31::Block(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(198)
	::haxe::ui::toolkit::style::Style tmp68 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(198)
	this->addStyle(HX_HCSTRING("CalendarView","\x63","\x40","\x8d","\xd9"),tmp68);
	struct _Function_1_32{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",208,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(208)
	Dynamic tmp69 = _Function_1_32::Block();		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(208)
	::haxe::ui::toolkit::style::Style tmp70 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(208)
	this->addStyle(HX_HCSTRING("CalendarView Calendar","\x3b","\x56","\x9f","\xbe"),tmp70);
	struct _Function_1_33{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",212,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)50,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(212)
	Dynamic tmp71 = _Function_1_33::Block();		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(212)
	::haxe::ui::toolkit::style::Style tmp72 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(212)
	this->addStyle(HX_HCSTRING("CalendarPopupContent","\x6b","\xc4","\x0d","\xa1"),tmp72);
	struct _Function_1_34{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",216,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)0,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(216)
	Dynamic tmp73 = _Function_1_34::Block();		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(216)
	::haxe::ui::toolkit::style::Style tmp74 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(216)
	this->addStyle(HX_HCSTRING("CalendarDay","\x1e","\x72","\x82","\x24"),tmp74);
	struct _Function_1_35{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",224,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba") , HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(224)
	Dynamic tmp75 = _Function_1_35::Block();		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(224)
	::haxe::ui::toolkit::style::Style tmp76 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(224)
	this->addStyle(HX_HCSTRING("CalendarView #currentMonthYear","\xca","\x78","\x05","\x9b"),tmp76);
	HX_STACK_LINE(231)
	::String tmp77 = f->fontName;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(242)
	::openfl::_legacy::filters::DropShadowFilter tmp78 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp78,"tmp78");
	struct _Function_1_36{
		inline static Dynamic Block( ::String &tmp77,::openfl::_legacy::filters::DropShadowFilter &tmp78){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",228,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)14,false);
				__result->Add(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb") , tmp77,false);
				__result->Add(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00") , true,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)10,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)4473924,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp78,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(228)
	Dynamic tmp79 = _Function_1_36::Block(tmp77,tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(228)
	::haxe::ui::toolkit::style::Style tmp80 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(228)
	this->addStyle(HX_HCSTRING("Calendar #selectedDay","\x00","\x0e","\x4a","\x4c"),tmp80);
	struct _Function_1_37{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",247,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16758635,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16744196,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(247)
	Dynamic tmp81 = _Function_1_37::Block();		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(247)
	::haxe::ui::toolkit::style::Style tmp82 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(247)
	this->addStyle(HX_HCSTRING("CalendarDay:over, Calendar #selectedDay:over","\xb2","\x4f","\xed","\xff"),tmp82);
	struct _Function_1_38{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",253,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(253)
	Dynamic tmp83 = _Function_1_38::Block();		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(253)
	::haxe::ui::toolkit::style::Style tmp84 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(253)
	this->addStyle(HX_HCSTRING("CalendarDay:down, Calendar #selectedDay:down","\xce","\xf6","\xfa","\x59"),tmp84);
	struct _Function_1_39{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",259,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , null(),false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(259)
	Dynamic tmp85 = _Function_1_39::Block();		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(259)
	::haxe::ui::toolkit::style::Style tmp86 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(259)
	this->addStyle(HX_HCSTRING("TabView","\x3a","\x2f","\x16","\x14"),tmp86);
	struct _Function_1_40{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",265,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(265)
	Dynamic tmp87 = _Function_1_40::Block();		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(265)
	::haxe::ui::toolkit::style::Style tmp88 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(265)
	this->addStyle(HX_HCSTRING("TabView Container","\xbb","\x8c","\x40","\xbe"),tmp88);
	struct _Function_1_41{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",269,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)41,false);
				__result->Add(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a") , (int)0,false);
				__result->Add(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85") , (int)0,false);
				__result->Add(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a") , (int)0,false);
				__result->Add(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f") , (int)0,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)0,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , null(),false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(269)
	Dynamic tmp89 = _Function_1_41::Block();		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(269)
	::haxe::ui::toolkit::style::Style tmp90 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(269)
	this->addStyle(HX_HCSTRING("TabBar","\x9e","\xe6","\xd1","\xb0"),tmp90);
	struct _Function_1_42{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",282,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)1,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(282)
	Dynamic tmp91 = _Function_1_42::Block();		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(282)
	::haxe::ui::toolkit::style::Style tmp92 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(282)
	this->addStyle(HX_HCSTRING("TabBar #content","\x38","\x9d","\x41","\x0c"),tmp92);
	struct _Function_1_43{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",287,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(287)
	Dynamic tmp93 = _Function_1_43::Block();		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(287)
	::haxe::ui::toolkit::style::Style tmp94 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(287)
	this->addStyle(HX_HCSTRING("TabBar #container","\x00","\xc3","\xe0","\x84"),tmp94);
	struct _Function_1_44{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",290,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)42,false);
				__result->Add(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76") , HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)0,false);
				__result->Add(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f") , true,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85") , (int)20,false);
				__result->Add(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a") , (int)20,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(290)
	Dynamic tmp95 = _Function_1_44::Block();		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(290)
	::haxe::ui::toolkit::style::Style tmp96 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(290)
	this->addStyle(HX_HCSTRING("TabBar Button","\x54","\xf7","\x1c","\x5c"),tmp96);
	struct _Function_1_45{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",305,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)15658734,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)13421772,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(305)
	Dynamic tmp97 = _Function_1_45::Block();		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(305)
	::haxe::ui::toolkit::style::Style tmp98 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(305)
	this->addStyle(HX_HCSTRING("TabBar Button:down","\xc8","\x95","\x29","\xa2"),tmp98);
	HX_STACK_LINE(319)
	::openfl::_legacy::filters::DropShadowFilter tmp99 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(tmp99,"tmp99");
	struct _Function_1_46{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp99){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",311,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)150,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)30,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)6710886,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)2,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp99,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(311)
	Dynamic tmp100 = _Function_1_46::Block(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(311)
	::haxe::ui::toolkit::style::Style tmp101 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(311)
	this->addStyle(HX_HCSTRING("HProgress","\x15","\x3c","\xc2","\xb3"),tmp101);
	struct _Function_1_47{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",322,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10") , (int)100,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)-1,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(322)
	Dynamic tmp102 = _Function_1_47::Block();		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(322)
	::haxe::ui::toolkit::style::Style tmp103 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp102);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(322)
	this->addStyle(HX_HCSTRING("HProgress #background","\x46","\x79","\x6a","\x21"),tmp103);
	struct _Function_1_48{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",330,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10") , (int)100,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(330)
	Dynamic tmp104 = _Function_1_48::Block();		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(330)
	::haxe::ui::toolkit::style::Style tmp105 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(330)
	this->addStyle(HX_HCSTRING("HProgress #value","\x19","\x99","\x45","\x0f"),tmp105);
	HX_STACK_LINE(346)
	::openfl::_legacy::filters::DropShadowFilter tmp106 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(tmp106,"tmp106");
	struct _Function_1_49{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp106){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",338,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)30,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)150,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)6710886,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)2,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp106,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(338)
	Dynamic tmp107 = _Function_1_49::Block(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(338)
	::haxe::ui::toolkit::style::Style tmp108 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(338)
	this->addStyle(HX_HCSTRING("VProgress","\x23","\xfa","\xf5","\x3c"),tmp108);
	struct _Function_1_50{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",349,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10") , (int)100,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)-1,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(349)
	Dynamic tmp109 = _Function_1_50::Block();		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(349)
	::haxe::ui::toolkit::style::Style tmp110 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(349)
	this->addStyle(HX_HCSTRING("VProgress #background","\x54","\x14","\xca","\xd8"),tmp110);
	struct _Function_1_51{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",357,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4") , HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(357)
	Dynamic tmp111 = _Function_1_51::Block();		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(357)
	::haxe::ui::toolkit::style::Style tmp112 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(357)
	this->addStyle(HX_HCSTRING("VProgress #value","\xcb","\xd8","\xe7","\xf3"),tmp112);
	HX_STACK_LINE(376)
	::openfl::_legacy::filters::DropShadowFilter tmp113 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(tmp113,"tmp113");
	struct _Function_1_52{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp113){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",366,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)150,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)30,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)6710886,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)2,false);
				__result->Add(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85") , (int)2,false);
				__result->Add(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a") , (int)2,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp113,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(366)
	Dynamic tmp114 = _Function_1_52::Block(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(366)
	::haxe::ui::toolkit::style::Style tmp115 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(366)
	this->addStyle(HX_HCSTRING("HSlider","\x89","\xa0","\xa2","\x56"),tmp115);
	struct _Function_1_53{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",379,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10") , (int)100,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)-1,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(379)
	Dynamic tmp116 = _Function_1_53::Block();		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(379)
	::haxe::ui::toolkit::style::Style tmp117 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp116);		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(379)
	this->addStyle(HX_HCSTRING("HSlider #background","\xba","\xbb","\x89","\x60"),tmp117);
	struct _Function_1_54{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",387,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10") , (int)0,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(387)
	Dynamic tmp118 = _Function_1_54::Block();		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(387)
	::haxe::ui::toolkit::style::Style tmp119 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(387)
	this->addStyle(HX_HCSTRING("HSlider #value","\x25","\x6b","\xd5","\x27"),tmp119);
	HX_STACK_LINE(399)
	::openfl::_legacy::filters::DropShadowFilter tmp120 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)6710886,(int)1,(int)2,(int)2,(int)1,(int)3,false,null(),null());		HX_STACK_VAR(tmp120,"tmp120");
	struct _Function_1_55{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp120){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",395,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)26,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)26,false);
				__result->Add(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4") , HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"),false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp120,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(395)
	Dynamic tmp121 = _Function_1_55::Block(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(395)
	::haxe::ui::toolkit::style::Style tmp122 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(395)
	this->addStyle(HX_HCSTRING("HSlider Button","\xc9","\x20","\x14","\x06"),tmp122);
	HX_STACK_LINE(412)
	::openfl::_legacy::filters::DropShadowFilter tmp123 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(tmp123,"tmp123");
	struct _Function_1_56{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp123){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",402,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)30,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)150,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)6710886,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)2,false);
				__result->Add(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85") , (int)2,false);
				__result->Add(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a") , (int)2,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp123,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(402)
	Dynamic tmp124 = _Function_1_56::Block(tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(402)
	::haxe::ui::toolkit::style::Style tmp125 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(402)
	this->addStyle(HX_HCSTRING("VSlider","\x17","\x1f","\xcf","\x9c"),tmp125);
	struct _Function_1_57{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",415,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10") , (int)100,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)-1,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(415)
	Dynamic tmp126 = _Function_1_57::Block();		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(415)
	::haxe::ui::toolkit::style::Style tmp127 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(415)
	this->addStyle(HX_HCSTRING("VSlider #background","\x48","\xd7","\x40","\xa7"),tmp127);
	struct _Function_1_58{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",423,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)0,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(423)
	Dynamic tmp128 = _Function_1_58::Block();		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(423)
	::haxe::ui::toolkit::style::Style tmp129 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp128);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(423)
	this->addStyle(HX_HCSTRING("VSlider #value","\x57","\xfa","\x4f","\xcd"),tmp129);
	HX_STACK_LINE(435)
	::openfl::_legacy::filters::DropShadowFilter tmp130 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)6710886,(int)1,(int)2,(int)2,(int)1,(int)3,false,null(),null());		HX_STACK_VAR(tmp130,"tmp130");
	struct _Function_1_59{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp130){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",431,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)26,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)26,false);
				__result->Add(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4") , HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"),false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp130,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(431)
	Dynamic tmp131 = _Function_1_59::Block(tmp130);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(431)
	::haxe::ui::toolkit::style::Style tmp132 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(431)
	this->addStyle(HX_HCSTRING("VSlider Button","\xfb","\xaf","\x8e","\xab"),tmp132);
	HX_STACK_LINE(444)
	::openfl::_legacy::filters::DropShadowFilter tmp133 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(tmp133,"tmp133");
	struct _Function_1_60{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp133){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",438,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)4473924,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp133,false);
				__result->Add(HX_HCSTRING("inlineScrolls","\x6d","\x7e","\x60","\x4b") , true,false);
				__result->Add(HX_HCSTRING("autoHideScrolls","\xf5","\xc3","\x3e","\x9c") , true,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(438)
	Dynamic tmp134 = _Function_1_60::Block(tmp133);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(438)
	::haxe::ui::toolkit::style::Style tmp135 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp134);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(438)
	this->addStyle(HX_HCSTRING("ScrollView","\x32","\xc5","\xbf","\x02"),tmp135);
	struct _Function_1_61{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",451,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(451)
	Dynamic tmp136 = _Function_1_61::Block();		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(451)
	::haxe::ui::toolkit::style::Style tmp137 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp136);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(451)
	this->addStyle(HX_HCSTRING("ListView","\x03","\xbe","\xf5","\x07"),tmp137);
	struct _Function_1_62{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",455,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)4473924,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)0,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(455)
	Dynamic tmp138 = _Function_1_62::Block();		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(455)
	::haxe::ui::toolkit::style::Style tmp139 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp138);		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(455)
	this->addStyle(HX_HCSTRING("ListView #content","\x33","\x31","\xcc","\xa0"),tmp139);
	struct _Function_1_63{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",462,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)10,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)6710886,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(462)
	Dynamic tmp140 = _Function_1_63::Block();		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(462)
	::haxe::ui::toolkit::style::Style tmp141 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(462)
	this->addStyle(HX_HCSTRING(".even, .odd","\xfd","\xd6","\x01","\xd3"),tmp141);
	struct _Function_1_64{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",467,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16758635,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16744196,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(467)
	Dynamic tmp142 = _Function_1_64::Block();		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(467)
	::haxe::ui::toolkit::style::Style tmp143 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp142);		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(467)
	this->addStyle(HX_HCSTRING(".even:over, .odd:over","\x33","\xfa","\xa4","\x3b"),tmp143);
	struct _Function_1_65{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",473,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(473)
	Dynamic tmp144 = _Function_1_65::Block();		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(473)
	::haxe::ui::toolkit::style::Style tmp145 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp144);		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(473)
	this->addStyle(HX_HCSTRING(".even:selected, .odd:selected","\x93","\xd4","\xf1","\xc2"),tmp145);
	struct _Function_1_66{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",479,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)16754764,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(479)
	Dynamic tmp146 = _Function_1_66::Block();		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(479)
	::haxe::ui::toolkit::style::Style tmp147 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp146);		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(479)
	this->addStyle(HX_HCSTRING(".even #text, .odd #text","\x1d","\x6d","\x01","\xce"),tmp147);
	struct _Function_1_67{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",482,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(482)
	Dynamic tmp148 = _Function_1_67::Block();		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(482)
	::haxe::ui::toolkit::style::Style tmp149 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp148);		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(482)
	this->addStyle(HX_HCSTRING(".even #text:over, .odd #text:over","\xf3","\xdf","\xd8","\xf2"),tmp149);
	struct _Function_1_68{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",485,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(485)
	Dynamic tmp150 = _Function_1_68::Block();		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(485)
	::haxe::ui::toolkit::style::Style tmp151 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp150);		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(485)
	this->addStyle(HX_HCSTRING(".even #text:selected, .odd #text:selected","\x13","\xdb","\x36","\x11"),tmp151);
	struct _Function_1_69{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",489,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)10,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)100,false);
				__result->Add(HX_HCSTRING("hasButtons","\x07","\x3a","\x29","\x55") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(489)
	Dynamic tmp152 = _Function_1_69::Block();		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(489)
	::haxe::ui::toolkit::style::Style tmp153 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp152);		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(489)
	this->addStyle(HX_HCSTRING("VScroll","\x03","\x31","\x2f","\x74"),tmp153);
	struct _Function_1_70{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",494,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4") , HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"),false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(494)
	Dynamic tmp154 = _Function_1_70::Block();		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(494)
	::haxe::ui::toolkit::style::Style tmp155 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp154);		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(494)
	this->addStyle(HX_HCSTRING("VScroll Button","\x8f","\xf3","\x43","\x94"),tmp155);
	struct _Function_1_71{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",500,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)100,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)10,false);
				__result->Add(HX_HCSTRING("hasButtons","\x07","\x3a","\x29","\x55") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(500)
	Dynamic tmp156 = _Function_1_71::Block();		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(500)
	::haxe::ui::toolkit::style::Style tmp157 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp156);		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(500)
	this->addStyle(HX_HCSTRING("HScroll","\x75","\xb2","\x02","\x2e"),tmp157);
	struct _Function_1_72{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",505,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4") , HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"),false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(505)
	Dynamic tmp158 = _Function_1_72::Block();		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(505)
	::haxe::ui::toolkit::style::Style tmp159 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp158);		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(505)
	this->addStyle(HX_HCSTRING("HScroll Button","\x5d","\x64","\xc9","\xee"),tmp159);
	HX_STACK_LINE(518)
	::openfl::_legacy::filters::DropShadowFilter tmp160 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp160,"tmp160");
	struct _Function_1_73{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp160){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",511,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)14671325,false);
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)10,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)5,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)0,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp160,false);
				__result->Add(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(511)
	Dynamic tmp161 = _Function_1_73::Block(tmp160);		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(511)
	::haxe::ui::toolkit::style::Style tmp162 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp161);		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(511)
	this->addStyle(HX_HCSTRING("MenuBar","\x54","\x59","\x9c","\x87"),tmp162);
	struct _Function_1_74{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",522,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)14671325,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(522)
	Dynamic tmp163 = _Function_1_74::Block();		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(522)
	::haxe::ui::toolkit::style::Style tmp164 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp163);		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(522)
	this->addStyle(HX_HCSTRING("MenuBar Container","\x55","\x1b","\x76","\xa9"),tmp164);
	HX_STACK_LINE(528)
	::openfl::_legacy::filters::DropShadowFilter tmp165 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp165,"tmp165");
	struct _Function_1_75{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp165){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",526,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp165,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)8947848,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)1,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)1,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)400,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(526)
	Dynamic tmp166 = _Function_1_75::Block(tmp165);		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(526)
	::haxe::ui::toolkit::style::Style tmp167 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp166);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(526)
	this->addStyle(HX_HCSTRING("Popup","\x0c","\x7a","\xc2","\x59"),tmp167);
	struct _Function_1_76{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",537,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(537)
	Dynamic tmp168 = _Function_1_76::Block();		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(537)
	::haxe::ui::toolkit::style::Style tmp169 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp168);		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(537)
	this->addStyle(HX_HCSTRING("Popup Container","\x0d","\x52","\x61","\x54"),tmp169);
	struct _Function_1_77{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",542,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)45,false);
				__result->Add(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a") , (int)5,false);
				__result->Add(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f") , (int)5,false);
				__result->Add(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85") , (int)5,false);
				__result->Add(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(542)
	Dynamic tmp170 = _Function_1_77::Block();		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(542)
	::haxe::ui::toolkit::style::Style tmp171 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp170);		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(542)
	this->addStyle(HX_HCSTRING("Popup #titleBar","\x2a","\x3b","\xe7","\x96"),tmp171);
	struct _Function_1_78{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",551,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f") , false,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)23,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)24,false);
				__result->Add(HX_HCSTRING("horizontalAlignment","\x5f","\x09","\x40","\xb6") , HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),false);
				__result->Add(HX_HCSTRING("verticalAlignment","\x8d","\xc7","\xb6","\x09") , HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , null(),false);
				__result->Add(HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80") , HX_HCSTRING("styles/default/cross.png","\x40","\xf4","\x73","\x50"),false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(551)
	Dynamic tmp172 = _Function_1_78::Block();		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(551)
	::haxe::ui::toolkit::style::Style tmp173 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp172);		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(551)
	this->addStyle(HX_HCSTRING("Popup #titleBar Button.close","\x12","\xa3","\x78","\x67"),tmp173);
	struct _Function_1_79{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",563,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)5,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(563)
	Dynamic tmp174 = _Function_1_79::Block();		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(563)
	::haxe::ui::toolkit::style::Style tmp175 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp174);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(563)
	this->addStyle(HX_HCSTRING("Popup #popupContent","\xfc","\x93","\x1f","\x08"),tmp175);
	struct _Function_1_80{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",568,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a") , (int)5,false);
				__result->Add(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f") , (int)5,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)55,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(568)
	Dynamic tmp176 = _Function_1_80::Block();		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(568)
	::haxe::ui::toolkit::style::Style tmp177 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp176);		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(568)
	this->addStyle(HX_HCSTRING("Popup #buttonBar","\x12","\x00","\xab","\x5e"),tmp177);
	struct _Function_1_81{
		inline static Dynamic Block( ::openfl::_legacy::text::Font &fb){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",576,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb") , fb->fontName,false);
				__result->Add(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00") , true,false);
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)24,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)8947848,false);
				__result->Add(HX_HCSTRING("horizontalAlignment","\x5f","\x09","\x40","\xb6") , HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(576)
	Dynamic tmp178 = _Function_1_81::Block(fb);		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(576)
	::haxe::ui::toolkit::style::Style tmp179 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp178);		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(576)
	this->addStyle(HX_HCSTRING("Popup #titleBar #title","\xcb","\x6c","\xf4","\x67"),tmp179);
	struct _Function_1_82{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",586,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)2,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(586)
	Dynamic tmp180 = _Function_1_82::Block();		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(586)
	::haxe::ui::toolkit::style::Style tmp181 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp180);		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(586)
	this->addStyle(HX_HCSTRING("ListPopupContent ListView, ListPopupContent #popupContent","\x67","\x50","\x2f","\x20"),tmp181);
	HX_STACK_LINE(593)
	::openfl::_legacy::filters::DropShadowFilter tmp182 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp182,"tmp182");
	struct _Function_1_83{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp182){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",591,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp182,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)4473924,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)1,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)175,false);
				__result->Add(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(591)
	Dynamic tmp183 = _Function_1_83::Block(tmp182);		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(591)
	::haxe::ui::toolkit::style::Style tmp184 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp183);		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(591)
	this->addStyle(HX_HCSTRING("Menu","\xbf","\x71","\x32","\x33"),tmp184);
	struct _Function_1_84{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",602,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)14671325,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)14671325,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , (int)10,false);
				__result->Add(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6") , (int)-1,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)2,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(602)
	Dynamic tmp185 = _Function_1_84::Block();		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(602)
	::haxe::ui::toolkit::style::Style tmp186 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp185);		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(602)
	this->addStyle(HX_HCSTRING("MenuButton","\x11","\xa1","\x15","\xb3"),tmp186);
	HX_STACK_LINE(618)
	::openfl::_legacy::filters::DropShadowFilter tmp187 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp187,"tmp187");
	struct _Function_1_85{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp187){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",614,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16758635,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16744196,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp187,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(614)
	Dynamic tmp188 = _Function_1_85::Block(tmp187);		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(614)
	::haxe::ui::toolkit::style::Style tmp189 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp188);		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(614)
	this->addStyle(HX_HCSTRING("MenuButton:over","\xdd","\x17","\xea","\xf0"),tmp189);
	HX_STACK_LINE(625)
	::openfl::_legacy::filters::DropShadowFilter tmp190 = ::openfl::_legacy::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(tmp190,"tmp190");
	struct _Function_1_86{
		inline static Dynamic Block( ::openfl::_legacy::filters::DropShadowFilter &tmp190){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",621,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , tmp190,false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(621)
	Dynamic tmp191 = _Function_1_86::Block(tmp190);		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(621)
	::haxe::ui::toolkit::style::Style tmp192 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp191);		HX_STACK_VAR(tmp192,"tmp192");
	HX_STACK_LINE(621)
	this->addStyle(HX_HCSTRING("MenuButton:down","\xeb","\x7e","\x9f","\xe9"),tmp192);
	struct _Function_1_87{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",630,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76") , HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),false);
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , null(),false);
				__result->Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06") , (int)0,false);
				__result->Add(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d") , (int)0,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)13421772,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				__result->Add(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba") , HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(630)
	Dynamic tmp193 = _Function_1_87::Block();		HX_STACK_VAR(tmp193,"tmp193");
	HX_STACK_LINE(630)
	::haxe::ui::toolkit::style::Style tmp194 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp193);		HX_STACK_VAR(tmp194,"tmp194");
	HX_STACK_LINE(630)
	this->addStyle(HX_HCSTRING("MenuItem","\x72","\xae","\xe0","\x25"),tmp194);
	struct _Function_1_88{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",641,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16758635,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16744196,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(641)
	Dynamic tmp195 = _Function_1_88::Block();		HX_STACK_VAR(tmp195,"tmp195");
	HX_STACK_LINE(641)
	::haxe::ui::toolkit::style::Style tmp196 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp195);		HX_STACK_VAR(tmp196,"tmp196");
	HX_STACK_LINE(641)
	this->addStyle(HX_HCSTRING("MenuItem:over","\xdc","\xea","\x8d","\xea"),tmp196);
	struct _Function_1_89{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",647,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)16754764,false);
				__result->Add(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9") , (int)16743181,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(647)
	Dynamic tmp197 = _Function_1_89::Block();		HX_STACK_VAR(tmp197,"tmp197");
	HX_STACK_LINE(647)
	::haxe::ui::toolkit::style::Style tmp198 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp197);		HX_STACK_VAR(tmp198,"tmp198");
	HX_STACK_LINE(647)
	this->addStyle(HX_HCSTRING("MenuItem:down","\xea","\x51","\x43","\xe3"),tmp198);
	struct _Function_1_90{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",653,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45") , HX_HCSTRING("styles/default/expand.png","\x70","\x3d","\x2b","\xc0"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(653)
	Dynamic tmp199 = _Function_1_90::Block();		HX_STACK_VAR(tmp199,"tmp199");
	HX_STACK_LINE(653)
	::haxe::ui::toolkit::style::Style tmp200 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp199);		HX_STACK_VAR(tmp200,"tmp200");
	HX_STACK_LINE(653)
	this->addStyle(HX_HCSTRING("MenuItem.expandable","\x70","\xb9","\xd2","\xc7"),tmp200);
	struct _Function_1_91{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",657,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a") , (int)2,false);
				__result->Add(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85") , (int)5,false);
				__result->Add(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f") , (int)3,false);
				__result->Add(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(657)
	Dynamic tmp201 = _Function_1_91::Block();		HX_STACK_VAR(tmp201,"tmp201");
	HX_STACK_LINE(657)
	::haxe::ui::toolkit::style::Style tmp202 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp201);		HX_STACK_VAR(tmp202,"tmp202");
	HX_STACK_LINE(657)
	this->addStyle(HX_HCSTRING("MenuSeparator","\xa6","\x1e","\x59","\x00"),tmp202);
	struct _Function_1_92{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",666,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)0,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(666)
	Dynamic tmp203 = _Function_1_92::Block();		HX_STACK_VAR(tmp203,"tmp203");
	HX_STACK_LINE(666)
	::haxe::ui::toolkit::style::Style tmp204 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp203);		HX_STACK_VAR(tmp204,"tmp204");
	HX_STACK_LINE(666)
	this->addStyle(HX_HCSTRING("MenuSeparator #line","\x9d","\x90","\x13","\xfe"),tmp204);
	struct _Function_1_93{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",671,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a") , (int)5,false);
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(671)
	Dynamic tmp205 = _Function_1_93::Block();		HX_STACK_VAR(tmp205,"tmp205");
	HX_STACK_LINE(671)
	::haxe::ui::toolkit::style::Style tmp206 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp205);		HX_STACK_VAR(tmp206,"tmp206");
	HX_STACK_LINE(671)
	this->addStyle(HX_HCSTRING("Divider","\xb9","\x82","\x28","\x3e"),tmp206);
	struct _Function_1_94{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",676,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce") , (int)16,false);
				__result->Add(HX_HCSTRING("fontBold","\xf4","\x9e","\x99","\xc3") , true,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)6710886,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(676)
	Dynamic tmp207 = _Function_1_94::Block();		HX_STACK_VAR(tmp207,"tmp207");
	HX_STACK_LINE(676)
	::haxe::ui::toolkit::style::Style tmp208 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp207);		HX_STACK_VAR(tmp208,"tmp208");
	HX_STACK_LINE(676)
	this->addStyle(HX_HCSTRING("Divider #text","\xa9","\x79","\xe4","\x7e"),tmp208);
	struct _Function_1_95{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",682,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)2,false);
				__result->Add(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d") , (int)6710886,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(682)
	Dynamic tmp209 = _Function_1_95::Block();		HX_STACK_VAR(tmp209,"tmp209");
	HX_STACK_LINE(682)
	::haxe::ui::toolkit::style::Style tmp210 = ::haxe::ui::toolkit::style::Style_obj::__new(tmp209);		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(682)
	this->addStyle(HX_HCSTRING("Divider #line","\xf0","\xc4","\x9d","\x79"),tmp210);
}
;
	return null();
}

//DefaultStyles_obj::~DefaultStyles_obj() { }

Dynamic DefaultStyles_obj::__CreateEmpty() { return  new DefaultStyles_obj; }
hx::ObjectPtr< DefaultStyles_obj > DefaultStyles_obj::__new()
{  hx::ObjectPtr< DefaultStyles_obj > _result_ = new DefaultStyles_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultStyles_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultStyles_obj > _result_ = new DefaultStyles_obj();
	_result_->__construct();
	return _result_;}


DefaultStyles_obj::DefaultStyles_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultStyles_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultStyles_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultStyles_obj::__mClass;

void DefaultStyles_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style.DefaultStyles","\x24","\x9c","\x9f","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DefaultStyles_obj >;
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
