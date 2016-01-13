#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_RTF
#include <haxe/ui/richtext/RTF.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_RTFToolButton
#include <haxe/ui/richtext/RTFToolButton.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_RTFView
#include <haxe/ui/richtext/RTFView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#include <haxe/ui/toolkit/controls/selection/ListSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{

Void RTFView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.RTFView","new",0x70641128,"haxe.ui.richtext.RTFView.new","haxe/ui/richtext/RTFView.hx",16,0xe51823e9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->_systemFonts = false;
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	::haxe::ui::richtext::RTF tmp = ::haxe::ui::richtext::RTF_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->_rtf = tmp;
	HX_STACK_LINE(35)
	::haxe::ui::richtext::RTF tmp1 = this->_rtf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	tmp1->set_multiline(true);
	HX_STACK_LINE(36)
	::haxe::ui::richtext::RTF tmp2 = this->_rtf;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	tmp2->set_wrapLines(true);
	HX_STACK_LINE(37)
	::haxe::ui::richtext::RTF tmp3 = this->_rtf;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	tmp3->set_percentWidth((int)100);
	HX_STACK_LINE(38)
	::haxe::ui::richtext::RTF tmp4 = this->_rtf;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	tmp4->set_percentHeight((int)100);
}
;
	return null();
}

//RTFView_obj::~RTFView_obj() { }

Dynamic RTFView_obj::__CreateEmpty() { return  new RTFView_obj; }
hx::ObjectPtr< RTFView_obj > RTFView_obj::__new()
{  hx::ObjectPtr< RTFView_obj > _result_ = new RTFView_obj();
	_result_->__construct();
	return _result_;}

Dynamic RTFView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RTFView_obj > _result_ = new RTFView_obj();
	_result_->__construct();
	return _result_;}

Void RTFView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","initialize",0xea9c1988,"haxe.ui.richtext.RTFView.initialize","haxe/ui/richtext/RTFView.hx",44,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::initialize();
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::containers::HBox tmp = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::containers::HBox hbox = tmp;		HX_STACK_VAR(hbox,"hbox");
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp1 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		this->_fontNameList = tmp1;
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->_fontNameList;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp2->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp3 = this->_fontNameList;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		tmp3->set_width((int)200);
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = this->_fontNameList;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		tmp4->set_autoSize(false);
		HX_STACK_LINE(53)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->_fontNameList;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		tmp5->set_text(HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"));
		HX_STACK_LINE(54)
		bool tmp6 = this->_systemFonts;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		bool tmp7 = (tmp6 == true);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		if ((tmp7)){
			HX_STACK_LINE(56)
			Array< ::Dynamic > fonts = ::openfl::_legacy::text::Font_obj::enumerateFonts(true);		HX_STACK_VAR(fonts,"fonts");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 2; }
			int run(::openfl::_legacy::text::Font f1,::openfl::_legacy::text::Font f2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/richtext/RTFView.hx",57,0xe51823e9)
				HX_STACK_ARG(f1,"f1")
				HX_STACK_ARG(f2,"f2")
				{
					HX_STACK_LINE(58)
					::String tmp8 = f1->fontName.toLowerCase();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(58)
					::String a = tmp8;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(59)
					::String tmp9 = f2->fontName.toLowerCase();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					::String b = tmp9;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(60)
					bool tmp10 = (a < b);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					if ((tmp10)){
						HX_STACK_LINE(60)
						return (int)-1;
					}
					HX_STACK_LINE(61)
					bool tmp11 = (a > b);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					if ((tmp11)){
						HX_STACK_LINE(61)
						return (int)1;
					}
					HX_STACK_LINE(62)
					return (int)0;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(57)
			fonts->sort( Dynamic(new _Function_2_1()));
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(65)
				while((true)){
					HX_STACK_LINE(65)
					bool tmp8 = (_g < fonts->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					if ((tmp9)){
						HX_STACK_LINE(65)
						break;
					}
					HX_STACK_LINE(65)
					::openfl::_legacy::text::Font tmp10 = fonts->__get(_g).StaticCast< ::openfl::_legacy::text::Font >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					::openfl::_legacy::text::Font font = tmp10;		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(65)
					++(_g);
					HX_STACK_LINE(66)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = this->_fontNameList;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(66)
					::haxe::ui::toolkit::data::IDataSource tmp12 = tmp11->get_dataSource();		HX_STACK_VAR(tmp12,"tmp12");
					struct _Function_4_1{
						inline static Dynamic Block( ::openfl::_legacy::text::Font &font){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",66,0xe51823e9)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , font->fontName,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(66)
					Dynamic tmp13 = _Function_4_1::Block(font);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(66)
					tmp12->add(tmp13);
				}
			}
		}
		else{
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = this->_fontNameList;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::data::IDataSource tmp9 = tmp8->get_dataSource();		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",70,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(70)
			Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			tmp9->add(tmp10);
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = this->_fontNameList;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::data::IDataSource tmp12 = tmp11->get_dataSource();		HX_STACK_VAR(tmp12,"tmp12");
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",71,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(71)
			Dynamic tmp13 = _Function_2_2::Block();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			tmp12->add(tmp13);
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->_fontNameList;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::data::IDataSource tmp15 = tmp14->get_dataSource();		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",72,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(72)
			Dynamic tmp16 = _Function_2_3::Block();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(72)
			tmp15->add(tmp16);
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->_fontNameList;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::data::IDataSource tmp18 = tmp17->get_dataSource();		HX_STACK_VAR(tmp18,"tmp18");
			struct _Function_2_4{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",73,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Arial","\x23","\x09","\xb6","\xb8"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(73)
			Dynamic tmp19 = _Function_2_4::Block();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(73)
			tmp18->add(tmp19);
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->_fontNameList;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::data::IDataSource tmp21 = tmp20->get_dataSource();		HX_STACK_VAR(tmp21,"tmp21");
			struct _Function_2_5{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",74,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Courier","\x8d","\x58","\x47","\xed"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(74)
			Dynamic tmp22 = _Function_2_5::Block();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(74)
			tmp21->add(tmp22);
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->_fontNameList;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::data::IDataSource tmp24 = tmp23->get_dataSource();		HX_STACK_VAR(tmp24,"tmp24");
			struct _Function_2_6{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",75,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Courier New","\x2d","\x7f","\xb5","\x24"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(75)
			Dynamic tmp25 = _Function_2_6::Block();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(75)
			tmp24->add(tmp25);
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->_fontNameList;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::data::IDataSource tmp27 = tmp26->get_dataSource();		HX_STACK_VAR(tmp27,"tmp27");
			struct _Function_2_7{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",76,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Geneva","\x60","\xb8","\xd1","\xd3"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(76)
			Dynamic tmp28 = _Function_2_7::Block();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(76)
			tmp27->add(tmp28);
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->_fontNameList;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::data::IDataSource tmp30 = tmp29->get_dataSource();		HX_STACK_VAR(tmp30,"tmp30");
			struct _Function_2_8{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",77,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Georgia","\xbe","\x9b","\xa2","\x1f"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(77)
			Dynamic tmp31 = _Function_2_8::Block();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(77)
			tmp30->add(tmp31);
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp32 = this->_fontNameList;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::data::IDataSource tmp33 = tmp32->get_dataSource();		HX_STACK_VAR(tmp33,"tmp33");
			struct _Function_2_9{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",78,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Helvetica","\xf1","\x95","\x6c","\x12"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(78)
			Dynamic tmp34 = _Function_2_9::Block();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(78)
			tmp33->add(tmp34);
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->_fontNameList;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
			struct _Function_2_10{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",79,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Times New Roman","\x03","\x86","\x44","\xc3"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(79)
			Dynamic tmp37 = _Function_2_10::Block();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(79)
			tmp36->add(tmp37);
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = this->_fontNameList;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::data::IDataSource tmp39 = tmp38->get_dataSource();		HX_STACK_VAR(tmp39,"tmp39");
			struct _Function_2_11{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",80,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Times","\xa6","\x2f","\x63","\xa3"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(80)
			Dynamic tmp40 = _Function_2_11::Block();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(80)
			tmp39->add(tmp40);
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp41 = this->_fontNameList;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::data::IDataSource tmp42 = tmp41->get_dataSource();		HX_STACK_VAR(tmp42,"tmp42");
			struct _Function_2_12{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",81,0xe51823e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Verdana","\xb3","\xc8","\x52","\x40"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(81)
			Dynamic tmp43 = _Function_2_12::Block();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(81)
			tmp42->add(tmp43);
		}
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = this->_fontNameList;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::String tmp9 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		Dynamic tmp10 = this->_onFontNameChange_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
		HX_STACK_LINE(84)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = this->_fontNameList;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		hbox->addChild(tmp11);
		HX_STACK_LINE(86)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(86)
		this->_fontSizeList = tmp12;
		HX_STACK_LINE(87)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->_fontSizeList;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(87)
		tmp13->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->_fontSizeList;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(88)
		tmp14->set_text(HX_HCSTRING("13","\xe2","\x2a","\x00","\x00"));
		HX_STACK_LINE(89)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = this->_fontSizeList;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(89)
		::haxe::ui::toolkit::data::IDataSource tmp16 = tmp15->get_dataSource();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",89,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(89)
		Dynamic tmp17 = _Function_1_1::Block();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(89)
		tmp16->add(tmp17);
		HX_STACK_LINE(90)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->_fontSizeList;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(90)
		::haxe::ui::toolkit::data::IDataSource tmp19 = tmp18->get_dataSource();		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",90,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(90)
		Dynamic tmp20 = _Function_1_2::Block();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(90)
		tmp19->add(tmp20);
		HX_STACK_LINE(91)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->_fontSizeList;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(91)
		::haxe::ui::toolkit::data::IDataSource tmp22 = tmp21->get_dataSource();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",91,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(91)
		Dynamic tmp23 = _Function_1_3::Block();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(91)
		tmp22->add(tmp23);
		HX_STACK_LINE(92)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = this->_fontSizeList;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(92)
		::haxe::ui::toolkit::data::IDataSource tmp25 = tmp24->get_dataSource();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",92,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)14,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(92)
		Dynamic tmp26 = _Function_1_4::Block();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(92)
		tmp25->add(tmp26);
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp27 = this->_fontSizeList;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::data::IDataSource tmp28 = tmp27->get_dataSource();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",93,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)16,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(93)
		Dynamic tmp29 = _Function_1_5::Block();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(93)
		tmp28->add(tmp29);
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = this->_fontSizeList;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::data::IDataSource tmp31 = tmp30->get_dataSource();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",94,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)18,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		Dynamic tmp32 = _Function_1_6::Block();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(94)
		tmp31->add(tmp32);
		HX_STACK_LINE(95)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = this->_fontSizeList;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(95)
		::haxe::ui::toolkit::data::IDataSource tmp34 = tmp33->get_dataSource();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",95,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)20,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		Dynamic tmp35 = _Function_1_7::Block();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(95)
		tmp34->add(tmp35);
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp36 = this->_fontSizeList;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::data::IDataSource tmp37 = tmp36->get_dataSource();		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",96,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)24,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		Dynamic tmp38 = _Function_1_8::Block();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(96)
		tmp37->add(tmp38);
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp39 = this->_fontSizeList;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::data::IDataSource tmp40 = tmp39->get_dataSource();		HX_STACK_VAR(tmp40,"tmp40");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",97,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)26,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		Dynamic tmp41 = _Function_1_9::Block();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(97)
		tmp40->add(tmp41);
		HX_STACK_LINE(98)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp42 = this->_fontSizeList;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(98)
		::haxe::ui::toolkit::data::IDataSource tmp43 = tmp42->get_dataSource();		HX_STACK_VAR(tmp43,"tmp43");
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",98,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)28,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(98)
		Dynamic tmp44 = _Function_1_10::Block();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(98)
		tmp43->add(tmp44);
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp45 = this->_fontSizeList;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::data::IDataSource tmp46 = tmp45->get_dataSource();		HX_STACK_VAR(tmp46,"tmp46");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",99,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)36,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(99)
		Dynamic tmp47 = _Function_1_11::Block();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(99)
		tmp46->add(tmp47);
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp48 = this->_fontSizeList;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::data::IDataSource tmp49 = tmp48->get_dataSource();		HX_STACK_VAR(tmp49,"tmp49");
		struct _Function_1_12{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",100,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)48,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		Dynamic tmp50 = _Function_1_12::Block();		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(100)
		tmp49->add(tmp50);
		HX_STACK_LINE(101)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp51 = this->_fontSizeList;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(101)
		::haxe::ui::toolkit::data::IDataSource tmp52 = tmp51->get_dataSource();		HX_STACK_VAR(tmp52,"tmp52");
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/richtext/RTFView.hx",101,0xe51823e9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , (int)72,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(101)
		Dynamic tmp53 = _Function_1_13::Block();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(101)
		tmp52->add(tmp53);
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp54 = this->_fontSizeList;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(102)
		::String tmp55 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(102)
		Dynamic tmp56 = this->_onFontSizeChange_dyn();		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(102)
		tmp54->addEventListener(tmp55,tmp56,null(),null(),null());
		HX_STACK_LINE(103)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp57 = this->_fontSizeList;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(103)
		hbox->addChild(tmp57);
		HX_STACK_LINE(105)
		::haxe::ui::toolkit::controls::Spacer tmp58 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(105)
		::haxe::ui::toolkit::controls::Spacer spacer = tmp58;		HX_STACK_VAR(spacer,"spacer");
		HX_STACK_LINE(106)
		spacer->set_width((int)10);
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::controls::Spacer tmp59 = spacer;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(107)
		hbox->addChild(tmp59);
		HX_STACK_LINE(109)
		::haxe::ui::richtext::RTFToolButton tmp60 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(109)
		this->_boldButton = tmp60;
		HX_STACK_LINE(110)
		::haxe::ui::richtext::RTFToolButton tmp61 = this->_boldButton;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(110)
		tmp61->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(111)
		::haxe::ui::richtext::RTFToolButton tmp62 = this->_boldButton;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(111)
		tmp62->set_id(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
		HX_STACK_LINE(112)
		::haxe::ui::richtext::RTFToolButton tmp63 = this->_boldButton;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(112)
		::String tmp64 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(112)
		Dynamic tmp65 = this->_onBoldClick_dyn();		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(112)
		tmp63->addEventListener(tmp64,tmp65,null(),null(),null());
		HX_STACK_LINE(113)
		::haxe::ui::richtext::RTFToolButton tmp66 = this->_boldButton;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(113)
		hbox->addChild(tmp66);
		HX_STACK_LINE(115)
		::haxe::ui::richtext::RTFToolButton tmp67 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(115)
		this->_italicButton = tmp67;
		HX_STACK_LINE(116)
		::haxe::ui::richtext::RTFToolButton tmp68 = this->_italicButton;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(116)
		tmp68->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(117)
		::haxe::ui::richtext::RTFToolButton tmp69 = this->_italicButton;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(117)
		tmp69->set_id(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
		HX_STACK_LINE(118)
		::haxe::ui::richtext::RTFToolButton tmp70 = this->_italicButton;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(118)
		::String tmp71 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(118)
		Dynamic tmp72 = this->_onItalicClick_dyn();		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(118)
		tmp70->addEventListener(tmp71,tmp72,null(),null(),null());
		HX_STACK_LINE(119)
		::haxe::ui::richtext::RTFToolButton tmp73 = this->_italicButton;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(119)
		hbox->addChild(tmp73);
		HX_STACK_LINE(121)
		::haxe::ui::richtext::RTFToolButton tmp74 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(121)
		this->_underlineButton = tmp74;
		HX_STACK_LINE(122)
		::haxe::ui::richtext::RTFToolButton tmp75 = this->_underlineButton;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(122)
		tmp75->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(123)
		::haxe::ui::richtext::RTFToolButton tmp76 = this->_underlineButton;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(123)
		tmp76->set_id(HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"));
		HX_STACK_LINE(124)
		::haxe::ui::richtext::RTFToolButton tmp77 = this->_underlineButton;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(124)
		::String tmp78 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(124)
		Dynamic tmp79 = this->_onUnderlineClick_dyn();		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(124)
		tmp77->addEventListener(tmp78,tmp79,null(),null(),null());
		HX_STACK_LINE(125)
		::haxe::ui::richtext::RTFToolButton tmp80 = this->_underlineButton;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(125)
		hbox->addChild(tmp80);
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::Spacer tmp81 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::Spacer spacer1 = tmp81;		HX_STACK_VAR(spacer1,"spacer1");
		HX_STACK_LINE(128)
		spacer1->set_width((int)10);
		HX_STACK_LINE(129)
		::haxe::ui::toolkit::controls::Spacer tmp82 = spacer1;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(129)
		hbox->addChild(tmp82);
		HX_STACK_LINE(131)
		::haxe::ui::richtext::RTFToolButton tmp83 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(131)
		this->_bulletButton = tmp83;
		HX_STACK_LINE(132)
		::haxe::ui::richtext::RTFToolButton tmp84 = this->_bulletButton;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(132)
		tmp84->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(133)
		::haxe::ui::richtext::RTFToolButton tmp85 = this->_bulletButton;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(133)
		tmp85->set_id(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"));
		HX_STACK_LINE(134)
		::haxe::ui::richtext::RTFToolButton tmp86 = this->_bulletButton;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(134)
		::String tmp87 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(134)
		Dynamic tmp88 = this->_onBulletClick_dyn();		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(134)
		tmp86->addEventListener(tmp87,tmp88,null(),null(),null());
		HX_STACK_LINE(135)
		::haxe::ui::richtext::RTFToolButton tmp89 = this->_bulletButton;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(135)
		hbox->addChild(tmp89);
		HX_STACK_LINE(137)
		::haxe::ui::toolkit::controls::Spacer tmp90 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(137)
		::haxe::ui::toolkit::controls::Spacer spacer2 = tmp90;		HX_STACK_VAR(spacer2,"spacer2");
		HX_STACK_LINE(138)
		spacer2->set_width((int)10);
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::controls::Spacer tmp91 = spacer2;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(139)
		hbox->addChild(tmp91);
		HX_STACK_LINE(141)
		::haxe::ui::richtext::RTFToolButton tmp92 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(141)
		this->_leftAlignButton = tmp92;
		HX_STACK_LINE(142)
		::haxe::ui::richtext::RTFToolButton tmp93 = this->_leftAlignButton;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(142)
		tmp93->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(143)
		::haxe::ui::richtext::RTFToolButton tmp94 = this->_leftAlignButton;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(143)
		tmp94->set_id(HX_HCSTRING("alignLeft","\x6c","\xd1","\x6d","\xd4"));
		HX_STACK_LINE(144)
		::haxe::ui::richtext::RTFToolButton tmp95 = this->_leftAlignButton;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(144)
		::String tmp96 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(144)
		Dynamic tmp97 = this->_onLeftAlignClick_dyn();		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(144)
		tmp95->addEventListener(tmp96,tmp97,null(),null(),null());
		HX_STACK_LINE(145)
		::haxe::ui::richtext::RTFToolButton tmp98 = this->_leftAlignButton;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(145)
		hbox->addChild(tmp98);
		HX_STACK_LINE(147)
		::haxe::ui::richtext::RTFToolButton tmp99 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(147)
		this->_centerAlignButton = tmp99;
		HX_STACK_LINE(148)
		::haxe::ui::richtext::RTFToolButton tmp100 = this->_centerAlignButton;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(148)
		tmp100->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(149)
		::haxe::ui::richtext::RTFToolButton tmp101 = this->_centerAlignButton;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(149)
		tmp101->set_id(HX_HCSTRING("alignCenter","\x7a","\xd2","\xa9","\x94"));
		HX_STACK_LINE(150)
		::haxe::ui::richtext::RTFToolButton tmp102 = this->_centerAlignButton;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(150)
		::String tmp103 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(150)
		Dynamic tmp104 = this->_onCenterAlignClick_dyn();		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(150)
		tmp102->addEventListener(tmp103,tmp104,null(),null(),null());
		HX_STACK_LINE(151)
		::haxe::ui::richtext::RTFToolButton tmp105 = this->_centerAlignButton;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(151)
		hbox->addChild(tmp105);
		HX_STACK_LINE(153)
		::haxe::ui::richtext::RTFToolButton tmp106 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(153)
		this->_rightAlignButton = tmp106;
		HX_STACK_LINE(154)
		::haxe::ui::richtext::RTFToolButton tmp107 = this->_rightAlignButton;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(154)
		tmp107->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(155)
		::haxe::ui::richtext::RTFToolButton tmp108 = this->_rightAlignButton;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(155)
		tmp108->set_id(HX_HCSTRING("alignRight","\xd7","\x7a","\xb6","\x82"));
		HX_STACK_LINE(156)
		::haxe::ui::richtext::RTFToolButton tmp109 = this->_rightAlignButton;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(156)
		::String tmp110 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(156)
		Dynamic tmp111 = this->_onRightAlignClick_dyn();		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(156)
		tmp109->addEventListener(tmp110,tmp111,null(),null(),null());
		HX_STACK_LINE(157)
		::haxe::ui::richtext::RTFToolButton tmp112 = this->_rightAlignButton;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(157)
		hbox->addChild(tmp112);
		HX_STACK_LINE(159)
		::haxe::ui::richtext::RTFToolButton tmp113 = ::haxe::ui::richtext::RTFToolButton_obj::__new();		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(159)
		this->_justifyAlignButton = tmp113;
		HX_STACK_LINE(160)
		::haxe::ui::richtext::RTFToolButton tmp114 = this->_justifyAlignButton;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(160)
		tmp114->set_styleName(HX_HCSTRING("alternate","\x3a","\xc9","\x33","\x35"));
		HX_STACK_LINE(161)
		::haxe::ui::richtext::RTFToolButton tmp115 = this->_justifyAlignButton;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(161)
		tmp115->set_id(HX_HCSTRING("alignJustify","\x0b","\x43","\xbe","\xe9"));
		HX_STACK_LINE(162)
		::haxe::ui::richtext::RTFToolButton tmp116 = this->_justifyAlignButton;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(162)
		::String tmp117 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(162)
		Dynamic tmp118 = this->_onJustifyAlignClick_dyn();		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(162)
		tmp116->addEventListener(tmp117,tmp118,null(),null(),null());
		HX_STACK_LINE(163)
		::haxe::ui::richtext::RTFToolButton tmp119 = this->_justifyAlignButton;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(163)
		hbox->addChild(tmp119);
		HX_STACK_LINE(165)
		::haxe::ui::toolkit::containers::HBox tmp120 = hbox;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(165)
		this->addChild(tmp120);
		HX_STACK_LINE(166)
		::haxe::ui::richtext::RTF tmp121 = this->_rtf;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(166)
		this->addChild(tmp121);
	}
return null();
}


::String RTFView_obj::get_htmlText( ){
	HX_STACK_FRAME("haxe.ui.richtext.RTFView","get_htmlText",0xab6739f9,"haxe.ui.richtext.RTFView.get_htmlText","haxe/ui/richtext/RTFView.hx",177,0xe51823e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	::String tmp1 = tmp->get_htmlText();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(RTFView_obj,get_htmlText,return )

::String RTFView_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("haxe.ui.richtext.RTFView","set_htmlText",0xc0605d6d,"haxe.ui.richtext.RTFView.set_htmlText","haxe/ui/richtext/RTFView.hx",181,0xe51823e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(182)
	::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	tmp->set_htmlText(tmp1);
	HX_STACK_LINE(183)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,set_htmlText,return )

::String RTFView_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.richtext.RTFView","set_text",0x9f79cbe2,"haxe.ui.richtext.RTFView.set_text","haxe/ui/richtext/RTFView.hx",186,0xe51823e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(187)
	::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	tmp->set_text(tmp1);
	HX_STACK_LINE(188)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	return tmp2;
}


Void RTFView_obj::_onBoldClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onBoldClick",0x5df5bf9d,"haxe.ui.richtext.RTFView._onBoldClick","haxe/ui/richtext/RTFView.hx",194,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(195)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		tmp->bold();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onBoldClick,(void))

Void RTFView_obj::_onItalicClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onItalicClick",0xcf0908d2,"haxe.ui.richtext.RTFView._onItalicClick","haxe/ui/richtext/RTFView.hx",198,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(199)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		tmp->italic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onItalicClick,(void))

Void RTFView_obj::_onUnderlineClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onUnderlineClick",0x065d1642,"haxe.ui.richtext.RTFView._onUnderlineClick","haxe/ui/richtext/RTFView.hx",202,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(203)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		tmp->underline();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onUnderlineClick,(void))

Void RTFView_obj::_onBulletClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onBulletClick",0x3f595c40,"haxe.ui.richtext.RTFView._onBulletClick","haxe/ui/richtext/RTFView.hx",206,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(207)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		tmp->bullet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onBulletClick,(void))

Void RTFView_obj::_onFontNameChange( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onFontNameChange",0x04982770,"haxe.ui.richtext.RTFView._onFontNameChange","haxe/ui/richtext/RTFView.hx",210,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(211)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp1 = this->_fontNameList;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		::String tmp2 = tmp1->get_text();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		tmp->fontName(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onFontNameChange,(void))

Void RTFView_obj::_onFontSizeChange( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onFontSizeChange",0x45279266,"haxe.ui.richtext.RTFView._onFontSizeChange","haxe/ui/richtext/RTFView.hx",214,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(215)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->_fontSizeList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		int size = tmp2;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(216)
		::haxe::ui::richtext::RTF tmp3 = this->_rtf;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		int tmp4 = size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		tmp3->fontSize(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onFontSizeChange,(void))

Void RTFView_obj::_onLeftAlignClick( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onLeftAlignClick",0x72e6f0d0,"haxe.ui.richtext.RTFView._onLeftAlignClick","haxe/ui/richtext/RTFView.hx",219,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(220)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		tmp->alignLeft();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onLeftAlignClick,(void))

Void RTFView_obj::_onCenterAlignClick( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onCenterAlignClick",0x4787119e,"haxe.ui.richtext.RTFView._onCenterAlignClick","haxe/ui/richtext/RTFView.hx",223,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(224)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		tmp->alignCenter();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onCenterAlignClick,(void))

Void RTFView_obj::_onRightAlignClick( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onRightAlignClick",0x90692cd9,"haxe.ui.richtext.RTFView._onRightAlignClick","haxe/ui/richtext/RTFView.hx",227,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(228)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		tmp->alignRight();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onRightAlignClick,(void))

Void RTFView_obj::_onJustifyAlignClick( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTFView","_onJustifyAlignClick",0x857bb3cd,"haxe.ui.richtext.RTFView._onJustifyAlignClick","haxe/ui/richtext/RTFView.hx",231,0xe51823e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(232)
		::haxe::ui::richtext::RTF tmp = this->_rtf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		tmp->alignJustify();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onJustifyAlignClick,(void))

::haxe::ui::toolkit::core::DisplayObject RTFView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.richtext.RTFView","clone",0x0d9b1625,"haxe.ui.richtext.RTFView.clone","src/haxe/ui/richtext/RTFView.hx",1,0xc18feafe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::richtext::RTFView c = ((::haxe::ui::richtext::RTFView)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::richtext::RTFView tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject RTFView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.richtext.RTFView","self",0xea78f9c4,"haxe.ui.richtext.RTFView.self","src/haxe/ui/richtext/RTFView.hx",1,0xc18feafe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::richtext::RTFView tmp = ::haxe::ui::richtext::RTFView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



RTFView_obj::RTFView_obj()
{
}

void RTFView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RTFView);
	HX_MARK_MEMBER_NAME(_rtf,"_rtf");
	HX_MARK_MEMBER_NAME(_fontNameList,"_fontNameList");
	HX_MARK_MEMBER_NAME(_fontSizeList,"_fontSizeList");
	HX_MARK_MEMBER_NAME(_boldButton,"_boldButton");
	HX_MARK_MEMBER_NAME(_italicButton,"_italicButton");
	HX_MARK_MEMBER_NAME(_underlineButton,"_underlineButton");
	HX_MARK_MEMBER_NAME(_bulletButton,"_bulletButton");
	HX_MARK_MEMBER_NAME(_leftAlignButton,"_leftAlignButton");
	HX_MARK_MEMBER_NAME(_centerAlignButton,"_centerAlignButton");
	HX_MARK_MEMBER_NAME(_rightAlignButton,"_rightAlignButton");
	HX_MARK_MEMBER_NAME(_justifyAlignButton,"_justifyAlignButton");
	HX_MARK_MEMBER_NAME(_systemFonts,"_systemFonts");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RTFView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rtf,"_rtf");
	HX_VISIT_MEMBER_NAME(_fontNameList,"_fontNameList");
	HX_VISIT_MEMBER_NAME(_fontSizeList,"_fontSizeList");
	HX_VISIT_MEMBER_NAME(_boldButton,"_boldButton");
	HX_VISIT_MEMBER_NAME(_italicButton,"_italicButton");
	HX_VISIT_MEMBER_NAME(_underlineButton,"_underlineButton");
	HX_VISIT_MEMBER_NAME(_bulletButton,"_bulletButton");
	HX_VISIT_MEMBER_NAME(_leftAlignButton,"_leftAlignButton");
	HX_VISIT_MEMBER_NAME(_centerAlignButton,"_centerAlignButton");
	HX_VISIT_MEMBER_NAME(_rightAlignButton,"_rightAlignButton");
	HX_VISIT_MEMBER_NAME(_justifyAlignButton,"_justifyAlignButton");
	HX_VISIT_MEMBER_NAME(_systemFonts,"_systemFonts");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RTFView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_rtf") ) { return _rtf; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_boldButton") ) { return _boldButton; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_systemFonts") ) { return _systemFonts; }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"_onBoldClick") ) { return _onBoldClick_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fontNameList") ) { return _fontNameList; }
		if (HX_FIELD_EQ(inName,"_fontSizeList") ) { return _fontSizeList; }
		if (HX_FIELD_EQ(inName,"_italicButton") ) { return _italicButton; }
		if (HX_FIELD_EQ(inName,"_bulletButton") ) { return _bulletButton; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onItalicClick") ) { return _onItalicClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onBulletClick") ) { return _onBulletClick_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_underlineButton") ) { return _underlineButton; }
		if (HX_FIELD_EQ(inName,"_leftAlignButton") ) { return _leftAlignButton; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rightAlignButton") ) { return _rightAlignButton; }
		if (HX_FIELD_EQ(inName,"_onUnderlineClick") ) { return _onUnderlineClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFontNameChange") ) { return _onFontNameChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFontSizeChange") ) { return _onFontSizeChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onLeftAlignClick") ) { return _onLeftAlignClick_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerAlignButton") ) { return _centerAlignButton; }
		if (HX_FIELD_EQ(inName,"_onRightAlignClick") ) { return _onRightAlignClick_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_justifyAlignButton") ) { return _justifyAlignButton; }
		if (HX_FIELD_EQ(inName,"_onCenterAlignClick") ) { return _onCenterAlignClick_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onJustifyAlignClick") ) { return _onJustifyAlignClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RTFView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_rtf") ) { _rtf=inValue.Cast< ::haxe::ui::richtext::RTF >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_boldButton") ) { _boldButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_systemFonts") ) { _systemFonts=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fontNameList") ) { _fontNameList=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontSizeList") ) { _fontSizeList=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_italicButton") ) { _italicButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bulletButton") ) { _bulletButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_underlineButton") ) { _underlineButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftAlignButton") ) { _leftAlignButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rightAlignButton") ) { _rightAlignButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerAlignButton") ) { _centerAlignButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_justifyAlignButton") ) { _justifyAlignButton=inValue.Cast< ::haxe::ui::richtext::RTFToolButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RTFView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RTFView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_rtf","\x65","\x2b","\x22","\x3f"));
	outFields->push(HX_HCSTRING("_fontNameList","\x17","\xd0","\x73","\x48"));
	outFields->push(HX_HCSTRING("_fontSizeList","\x8d","\x71","\xbf","\xe5"));
	outFields->push(HX_HCSTRING("_boldButton","\x76","\x96","\xd7","\x53"));
	outFields->push(HX_HCSTRING("_italicButton","\xe1","\x6b","\xbd","\xb1"));
	outFields->push(HX_HCSTRING("_underlineButton","\x9f","\x7e","\xa4","\xe9"));
	outFields->push(HX_HCSTRING("_bulletButton","\xb3","\x18","\xb6","\x87"));
	outFields->push(HX_HCSTRING("_leftAlignButton","\x51","\xe0","\xb9","\x75"));
	outFields->push(HX_HCSTRING("_centerAlignButton","\x83","\x7b","\x1a","\x61"));
	outFields->push(HX_HCSTRING("_rightAlignButton","\x7a","\x9e","\xb0","\x28"));
	outFields->push(HX_HCSTRING("_justifyAlignButton","\x46","\xed","\x76","\x57"));
	outFields->push(HX_HCSTRING("_systemFonts","\x56","\xbc","\x11","\x6f"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::richtext::RTF*/ ,(int)offsetof(RTFView_obj,_rtf),HX_HCSTRING("_rtf","\x65","\x2b","\x22","\x3f")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(RTFView_obj,_fontNameList),HX_HCSTRING("_fontNameList","\x17","\xd0","\x73","\x48")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(RTFView_obj,_fontSizeList),HX_HCSTRING("_fontSizeList","\x8d","\x71","\xbf","\xe5")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_boldButton),HX_HCSTRING("_boldButton","\x76","\x96","\xd7","\x53")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_italicButton),HX_HCSTRING("_italicButton","\xe1","\x6b","\xbd","\xb1")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_underlineButton),HX_HCSTRING("_underlineButton","\x9f","\x7e","\xa4","\xe9")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_bulletButton),HX_HCSTRING("_bulletButton","\xb3","\x18","\xb6","\x87")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_leftAlignButton),HX_HCSTRING("_leftAlignButton","\x51","\xe0","\xb9","\x75")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_centerAlignButton),HX_HCSTRING("_centerAlignButton","\x83","\x7b","\x1a","\x61")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_rightAlignButton),HX_HCSTRING("_rightAlignButton","\x7a","\x9e","\xb0","\x28")},
	{hx::fsObject /*::haxe::ui::richtext::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_justifyAlignButton),HX_HCSTRING("_justifyAlignButton","\x46","\xed","\x76","\x57")},
	{hx::fsBool,(int)offsetof(RTFView_obj,_systemFonts),HX_HCSTRING("_systemFonts","\x56","\xbc","\x11","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_rtf","\x65","\x2b","\x22","\x3f"),
	HX_HCSTRING("_fontNameList","\x17","\xd0","\x73","\x48"),
	HX_HCSTRING("_fontSizeList","\x8d","\x71","\xbf","\xe5"),
	HX_HCSTRING("_boldButton","\x76","\x96","\xd7","\x53"),
	HX_HCSTRING("_italicButton","\xe1","\x6b","\xbd","\xb1"),
	HX_HCSTRING("_underlineButton","\x9f","\x7e","\xa4","\xe9"),
	HX_HCSTRING("_bulletButton","\xb3","\x18","\xb6","\x87"),
	HX_HCSTRING("_leftAlignButton","\x51","\xe0","\xb9","\x75"),
	HX_HCSTRING("_centerAlignButton","\x83","\x7b","\x1a","\x61"),
	HX_HCSTRING("_rightAlignButton","\x7a","\x9e","\xb0","\x28"),
	HX_HCSTRING("_justifyAlignButton","\x46","\xed","\x76","\x57"),
	HX_HCSTRING("_systemFonts","\x56","\xbc","\x11","\x6f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("_onBoldClick","\x65","\x59","\xe0","\x77"),
	HX_HCSTRING("_onItalicClick","\x9a","\xa4","\x23","\x2c"),
	HX_HCSTRING("_onUnderlineClick","\x7a","\x07","\xc8","\x4d"),
	HX_HCSTRING("_onBulletClick","\x08","\xf8","\x73","\x9c"),
	HX_HCSTRING("_onFontNameChange","\xa8","\x18","\x03","\x4c"),
	HX_HCSTRING("_onFontSizeChange","\x9e","\x83","\x92","\x8c"),
	HX_HCSTRING("_onLeftAlignClick","\x08","\xe2","\x51","\xba"),
	HX_HCSTRING("_onCenterAlignClick","\xd6","\xc0","\x7a","\x74"),
	HX_HCSTRING("_onRightAlignClick","\xa1","\x4c","\x91","\xc6"),
	HX_HCSTRING("_onJustifyAlignClick","\x95","\x55","\xc1","\xad"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RTFView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RTFView_obj::__mClass,"__mClass");
};

#endif

hx::Class RTFView_obj::__mClass;

void RTFView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.RTFView","\x36","\x9d","\xf2","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RTFView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RTFView_obj >;
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
