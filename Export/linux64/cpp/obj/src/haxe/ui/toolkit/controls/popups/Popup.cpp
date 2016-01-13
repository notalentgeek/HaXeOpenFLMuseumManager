#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#include <haxe/ui/toolkit/core/PopupButtonInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void Popup_obj::__construct(::String title,::haxe::ui::toolkit::controls::popups::PopupContent content,Dynamic config,Dynamic fn)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","new",0x5adff88d,"haxe.ui.toolkit.controls.popups.Popup.new","haxe/ui/toolkit/controls/popups/Popup.hx",37,0x52c99b44)
HX_STACK_THIS(this)
HX_STACK_ARG(title,"title")
HX_STACK_ARG(content,"content")
HX_STACK_ARG(config,"config")
HX_STACK_ARG(fn,"fn")
{
	HX_STACK_LINE(37)
	::haxe::ui::toolkit::controls::popups::Popup _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->_autoSize = true;
	HX_STACK_LINE(41)
	bool tmp = (title != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::containers::Box tmp1 = ::haxe::ui::toolkit::containers::Box_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		this->_titleBar = tmp1;
		HX_STACK_LINE(43)
		::haxe::ui::toolkit::containers::Box tmp2 = this->_titleBar;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		tmp2->set_autoSize(false);
		HX_STACK_LINE(44)
		::haxe::ui::toolkit::containers::Box tmp3 = this->_titleBar;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		tmp3->set_id(HX_HCSTRING("titleBar","\x1b","\xe3","\xca","\xcc"));
	}
	HX_STACK_LINE(47)
	this->_content = content;
	HX_STACK_LINE(48)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp1 = this->_content;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	tmp1->popup = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(50)
	bool tmp2 = (title != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp2)){
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::controls::Text tmp3 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		this->_title = tmp3;
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_title;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		tmp4->set_id(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
		HX_STACK_LINE(53)
		::haxe::ui::toolkit::controls::Text tmp5 = this->_title;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		::String tmp6 = title;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		tmp5->set_text(tmp6);
	}
	HX_STACK_LINE(56)
	::haxe::ui::toolkit::containers::Box tmp3 = ::haxe::ui::toolkit::containers::Box_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	this->_buttonBar = tmp3;
	HX_STACK_LINE(57)
	::haxe::ui::toolkit::containers::Box tmp4 = this->_buttonBar;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	tmp4->set_id(HX_HCSTRING("buttonBar","\x01","\x4b","\xfa","\x4f"));
	HX_STACK_LINE(59)
	::haxe::ui::toolkit::containers::Box tmp5 = this->_buttonBar;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	tmp5->set_horizontalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	HX_STACK_LINE(61)
	this->_config = config;
	HX_STACK_LINE(62)
	Dynamic tmp6 = this->_config;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	if ((tmp7)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/popups/Popup.hx",63,0x52c99b44)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(63)
		Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		this->_config = tmp8;
		HX_STACK_LINE(64)
		Dynamic tmp9 = this->_config;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		tmp9->__FieldRef(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")) = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(66)
	Dynamic tmp8 = this->_config;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(66)
	bool tmp9 = (tmp8->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(66)
	if ((tmp9)){
		HX_STACK_LINE(67)
		Dynamic tmp10 = this->_config;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(67)
		this->set_id(tmp10->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ));
	}
	HX_STACK_LINE(69)
	Dynamic tmp10 = this->_config;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(69)
	bool tmp11 = (tmp10->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(69)
	if ((tmp11)){
		HX_STACK_LINE(70)
		Dynamic tmp12 = this->_config;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(70)
		this->set_styleName(tmp12->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic ));
	}
	HX_STACK_LINE(72)
	Dynamic tmp12 = this->_config;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(72)
	bool tmp13 = (tmp12->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(72)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(72)
	if ((tmp13)){
		HX_STACK_LINE(72)
		Dynamic tmp15 = this->_config;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(72)
		Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(72)
		int tmp17 = (int(tmp16->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic )) & int((int)65536));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(72)
		int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(72)
		tmp14 = (tmp18 > (int)0);
	}
	else{
		HX_STACK_LINE(72)
		tmp14 = false;
	}
	HX_STACK_LINE(72)
	if ((tmp14)){
		HX_STACK_LINE(73)
		::String tmp15 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp15,"tmp15");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",73,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(74)
				::haxe::ui::toolkit::core::PopupManager tmp16 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(74)
				::haxe::ui::toolkit::controls::popups::Popup tmp17 = _g;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(74)
				tmp16->hidePopup(tmp17,null());
				HX_STACK_LINE(75)
				_g->callClosingCallback((int)4096);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(73)
		this->addEventListener(tmp15, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(78)
	this->_fn = fn;
}
;
	return null();
}

//Popup_obj::~Popup_obj() { }

Dynamic Popup_obj::__CreateEmpty() { return  new Popup_obj; }
hx::ObjectPtr< Popup_obj > Popup_obj::__new(::String title,::haxe::ui::toolkit::controls::popups::PopupContent content,Dynamic config,Dynamic fn)
{  hx::ObjectPtr< Popup_obj > _result_ = new Popup_obj();
	_result_->__construct(title,content,config,fn);
	return _result_;}

Dynamic Popup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Popup_obj > _result_ = new Popup_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *Popup_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDraggable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDraggable_obj *();
	return super::__ToInterface(inType);
}

Popup_obj::operator ::haxe::ui::toolkit::core::interfaces::IDraggable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDraggable_delegate_< Popup_obj >(this); }
Void Popup_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","initialize",0x2b6218c3,"haxe.ui.toolkit.controls.popups.Popup.initialize","haxe/ui/toolkit/controls/popups/Popup.hx",84,0x52c99b44)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::haxe::ui::toolkit::controls::popups::Popup _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		this->super::initialize();
		HX_STACK_LINE(87)
		::haxe::ui::toolkit::containers::Box tmp = this->_titleBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::containers::Box tmp2 = this->_titleBar;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			tmp2->set_percentWidth((int)100);
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::containers::Box tmp3 = this->_titleBar;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::controls::Text tmp4 = this->_title;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			tmp3->addChild(tmp4);
			HX_STACK_LINE(90)
			Dynamic tmp5 = this->_config;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			bool tmp6 = (tmp5->__Field(HX_HCSTRING("closeButton","\xca","\x87","\x30","\x94"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			if ((tmp6)){
				HX_STACK_LINE(91)
				::haxe::ui::toolkit::controls::Button tmp7 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(91)
				this->_exitButton = tmp7;
				HX_STACK_LINE(92)
				::haxe::ui::toolkit::controls::Button tmp8 = this->_exitButton;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				tmp8->set_text(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
				HX_STACK_LINE(93)
				::haxe::ui::toolkit::controls::Button tmp9 = this->_exitButton;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				tmp9->set_id(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"));
				HX_STACK_LINE(94)
				::haxe::ui::toolkit::controls::Button tmp10 = this->_exitButton;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(94)
				tmp10->set_styleName(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"));
				HX_STACK_LINE(95)
				::haxe::ui::toolkit::controls::Button tmp11 = this->_exitButton;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp12,"tmp12");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","haxe/ui/toolkit/controls/popups/Popup.hx",95,0x52c99b44)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(96)
						::haxe::ui::toolkit::core::PopupManager tmp13 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(96)
						::haxe::ui::toolkit::controls::popups::Popup tmp14 = _g;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(96)
						tmp13->hidePopup(tmp14,null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(95)
				tmp11->addEventListener(tmp12, Dynamic(new _Function_3_1(_g)),null(),null(),null());
				HX_STACK_LINE(98)
				::haxe::ui::toolkit::containers::Box tmp13 = this->_titleBar;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(98)
				::haxe::ui::toolkit::controls::Button tmp14 = this->_exitButton;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				tmp13->addChild(tmp14);
			}
			HX_STACK_LINE(100)
			Dynamic tmp7 = this->_config;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			bool tmp8 = (tmp7->__Field(HX_HCSTRING("disableDrag","\xfc","\xd5","\x80","\x12"), hx::paccDynamic ) == false);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			if ((tmp9)){
				HX_STACK_LINE(100)
				Dynamic tmp11 = this->_config;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(100)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(100)
				tmp10 = (tmp12->__Field(HX_HCSTRING("disableDrag","\xfc","\xd5","\x80","\x12"), hx::paccDynamic ) == null());
			}
			else{
				HX_STACK_LINE(100)
				tmp10 = true;
			}
			HX_STACK_LINE(100)
			if ((tmp10)){
				HX_STACK_LINE(101)
				::haxe::ui::toolkit::containers::Box tmp11 = this->_titleBar;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				::openfl::_legacy::display::Sprite tmp12 = tmp11->get_sprite();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(101)
				tmp12->buttonMode = true;
				HX_STACK_LINE(102)
				::haxe::ui::toolkit::containers::Box tmp13 = this->_titleBar;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				::openfl::_legacy::display::Sprite tmp14 = tmp13->get_sprite();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				tmp14->useHandCursor = true;
			}
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::containers::Box tmp11 = this->_titleBar;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(104)
			this->addChild(tmp11);
		}
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::controls::popups::PopupContent tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		if ((tmp3)){
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp4 = ::haxe::ui::toolkit::controls::popups::PopupContent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			this->_content = tmp4;
		}
		HX_STACK_LINE(110)
		::haxe::ui::toolkit::controls::popups::PopupContent tmp4 = this->_content;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		tmp4->set_id(HX_HCSTRING("popupContent","\x6d","\x88","\xf4","\x19"));
		HX_STACK_LINE(111)
		::haxe::ui::toolkit::controls::popups::PopupContent tmp5 = this->_content;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		tmp5->set_percentWidth((int)100);
		HX_STACK_LINE(113)
		::haxe::ui::toolkit::controls::popups::PopupContent tmp6 = this->_content;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		this->addChild(tmp6);
		HX_STACK_LINE(115)
		Dynamic tmp7 = this->_config;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		bool tmp8 = (tmp7->__Field(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		if ((tmp8)){
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::containers::HBox tmp9 = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::containers::HBox box = tmp9;		HX_STACK_VAR(box,"box");
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::containers::Box tmp10 = this->_buttonBar;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(117)
			::String tmp11 = tmp10->get_horizontalAlign();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			box->set_horizontalAlign(tmp11);
			HX_STACK_LINE(118)
			Dynamic tmp12 = this->_config;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			Array< ::Dynamic > buttons = ((Array< ::Dynamic >)(tmp12->__Field(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"), hx::paccDynamic )));		HX_STACK_VAR(buttons,"buttons");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::containers::Box tmp13 = this->_buttonBar;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::containers::HBox tmp14 = box;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			tmp13->addChild(tmp14);
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(120)
				while((true)){
					HX_STACK_LINE(120)
					bool tmp15 = (_g1 < buttons->length);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(120)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(120)
					if ((tmp16)){
						HX_STACK_LINE(120)
						break;
					}
					HX_STACK_LINE(120)
					::haxe::ui::toolkit::core::PopupButtonInfo tmp17 = buttons->__get(_g1).StaticCast< ::haxe::ui::toolkit::core::PopupButtonInfo >();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(120)
					::haxe::ui::toolkit::core::PopupButtonInfo info = tmp17;		HX_STACK_VAR(info,"info");
					HX_STACK_LINE(120)
					++(_g1);
					HX_STACK_LINE(121)
					int tmp18 = (int(info->type) & int((int)16777216));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(121)
					bool tmp19 = (tmp18 != (int)16777216);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(121)
					if ((tmp19)){
						HX_STACK_LINE(122)
						int tmp20 = info->type;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(122)
						::haxe::ui::toolkit::controls::Button tmp21 = this->createStandardButton(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(122)
						::haxe::ui::toolkit::controls::Button button = tmp21;		HX_STACK_VAR(button,"button");
						HX_STACK_LINE(123)
						bool tmp22 = (button != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(123)
						if ((tmp22)){
							HX_STACK_LINE(124)
							::haxe::ui::toolkit::controls::Button tmp23 = button;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(124)
							box->addChild(tmp23);
						}
					}
					else{
						HX_STACK_LINE(127)
						::haxe::ui::toolkit::controls::Button tmp20 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(127)
						::haxe::ui::toolkit::controls::Button button = tmp20;		HX_STACK_VAR(button,"button");
						HX_STACK_LINE(128)
						::String tmp21 = info->text;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(128)
						button->set_text(tmp21);
						HX_STACK_LINE(129)
						::String tmp22 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp22,"tmp22");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,::haxe::ui::toolkit::controls::popups::Popup,_g,::haxe::ui::toolkit::core::PopupButtonInfo,info)
						int __ArgCount() const { return 1; }
						Void run(Dynamic e){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","haxe/ui/toolkit/controls/popups/Popup.hx",129,0x52c99b44)
							HX_STACK_ARG(e,"e")
							{
								HX_STACK_LINE(130)
								int tmp23 = info->type;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(130)
								_g->clickButton(tmp23);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(129)
						button->addEventListener(tmp22, Dynamic(new _Function_5_1(_g,info)),null(),null(),null());
						HX_STACK_LINE(132)
						::haxe::ui::toolkit::controls::Button tmp23 = button;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(132)
						box->addChild(tmp23);
					}
				}
			}
			HX_STACK_LINE(135)
			::haxe::ui::toolkit::containers::Box tmp15 = this->_buttonBar;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			this->addChild(tmp15);
		}
		HX_STACK_LINE(138)
		Dynamic tmp9 = this->_config;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		bool tmp10 = (tmp9->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(138)
		if ((tmp10)){
			HX_STACK_LINE(139)
			Dynamic tmp11 = this->_config;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(139)
			this->set_width(tmp11->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));
		}
		HX_STACK_LINE(142)
		::haxe::ui::toolkit::core::PopupManager tmp11 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(142)
		tmp11->centerPopup(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


bool Popup_obj::allowDrag( ::openfl::_legacy::events::MouseEvent event){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","allowDrag",0x22c47d0a,"haxe.ui.toolkit.controls.popups.Popup.allowDrag","haxe/ui/toolkit/controls/popups/Popup.hx",152,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(153)
	Dynamic tmp = this->_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	bool tmp1 = (tmp->__Field(HX_HCSTRING("disableDrag","\xfc","\xd5","\x80","\x12"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	if ((tmp1)){
		HX_STACK_LINE(154)
		return false;
	}
	HX_STACK_LINE(156)
	Dynamic tmp2 = this->_config;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	bool tmp3 = !(tmp2->__Field(HX_HCSTRING("dragAnywhere","\x8f","\x29","\x1c","\x5c"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	if ((tmp3)){
		HX_STACK_LINE(156)
		::haxe::ui::toolkit::containers::Box tmp5 = this->_titleBar;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		::haxe::ui::toolkit::containers::Box tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		if ((tmp9)){
			HX_STACK_LINE(156)
			tmp4 = false;
		}
		else{
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::containers::Box tmp10 = this->_titleBar;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::containers::Box tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(156)
			Float tmp12 = event->stageX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			Float tmp13 = event->stageY;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			Float tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(156)
			Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(156)
			tmp4 = tmp11->hitTest(tmp14,tmp15);
		}
	}
	else{
		HX_STACK_LINE(156)
		tmp4 = true;
	}
	HX_STACK_LINE(156)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Popup_obj,allowDrag,return )

::haxe::ui::toolkit::controls::popups::PopupContent Popup_obj::get_content( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","get_content",0x32d58a7d,"haxe.ui.toolkit.controls.popups.Popup.get_content","haxe/ui/toolkit/controls/popups/Popup.hx",163,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Popup_obj,get_content,return )

Dynamic Popup_obj::get_config( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","get_config",0xf700adfe,"haxe.ui.toolkit.controls.popups.Popup.get_config","haxe/ui/toolkit/controls/popups/Popup.hx",168,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	Dynamic tmp = this->_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Popup_obj,get_config,return )

::haxe::ui::toolkit::controls::Button Popup_obj::createStandardButton( int v){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","createStandardButton",0x74e22a5e,"haxe.ui.toolkit.controls.popups.Popup.createStandardButton","haxe/ui/toolkit/controls/popups/Popup.hx",175,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(175)
	::haxe::ui::toolkit::controls::popups::Popup _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(176)
	::haxe::ui::toolkit::controls::Button button = null();		HX_STACK_VAR(button,"button");
	HX_STACK_LINE(177)
	bool tmp = (v == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	if ((tmp)){
		HX_STACK_LINE(178)
		::haxe::ui::toolkit::controls::Button tmp1 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		button = tmp1;
		HX_STACK_LINE(179)
		button->set_text(HX_HCSTRING("OK","\x1c","\x45","\x00","\x00"));
		HX_STACK_LINE(180)
		::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",181,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(181)
				_g->clickButton((int)1);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(180)
		button->addEventListener(tmp2, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(184)
	bool tmp1 = (v == (int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	if ((tmp1)){
		HX_STACK_LINE(185)
		::haxe::ui::toolkit::controls::Button tmp2 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		button = tmp2;
		HX_STACK_LINE(186)
		button->set_text(HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"));
		HX_STACK_LINE(187)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",188,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(188)
				_g->clickButton((int)16);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(187)
		button->addEventListener(tmp3, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(191)
	bool tmp2 = (v == (int)256);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	if ((tmp2)){
		HX_STACK_LINE(192)
		::haxe::ui::toolkit::controls::Button tmp3 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		button = tmp3;
		HX_STACK_LINE(193)
		button->set_text(HX_HCSTRING("No","\x61","\x44","\x00","\x00"));
		HX_STACK_LINE(194)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",195,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(195)
				_g->clickButton((int)256);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(194)
		button->addEventListener(tmp4, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(198)
	bool tmp3 = (v == (int)4096);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	if ((tmp3)){
		HX_STACK_LINE(199)
		::haxe::ui::toolkit::controls::Button tmp4 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		button = tmp4;
		HX_STACK_LINE(200)
		button->set_text(HX_HCSTRING("Cancel","\x9a","\x61","\xc8","\xec"));
		HX_STACK_LINE(201)
		::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp5,"tmp5");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",202,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(202)
				_g->clickButton((int)4096);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(201)
		button->addEventListener(tmp5, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(205)
	bool tmp4 = (v == (int)65536);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	if ((tmp4)){
		HX_STACK_LINE(206)
		::haxe::ui::toolkit::controls::Button tmp5 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		button = tmp5;
		HX_STACK_LINE(207)
		button->set_text(HX_HCSTRING("Confirm","\xe0","\xc4","\x8a","\xdd"));
		HX_STACK_LINE(208)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp6,"tmp6");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",209,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(209)
				_g->clickButton((int)65536);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(208)
		button->addEventListener(tmp6, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(212)
	bool tmp5 = (v == (int)1048576);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(212)
	if ((tmp5)){
		HX_STACK_LINE(213)
		::haxe::ui::toolkit::controls::Button tmp6 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		button = tmp6;
		HX_STACK_LINE(214)
		button->set_text(HX_HCSTRING("Close","\x98","\x87","\x90","\xdb"));
		HX_STACK_LINE(215)
		::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp7,"tmp7");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::popups::Popup,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",216,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(216)
				_g->clickButton((int)1048576);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(215)
		button->addEventListener(tmp7, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(220)
	::haxe::ui::toolkit::controls::Button tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Popup_obj,createStandardButton,return )

Void Popup_obj::clickButton( int button){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","clickButton",0x9c455587,"haxe.ui.toolkit.controls.popups.Popup.clickButton","haxe/ui/toolkit/controls/popups/Popup.hx",224,0x52c99b44)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(225)
		::haxe::ui::toolkit::controls::popups::PopupContent tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		bool tmp2 = tmp->onButtonClicked(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		if ((tmp3)){
			HX_STACK_LINE(226)
			::haxe::ui::toolkit::core::PopupManager tmp4 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			tmp4->hidePopup(hx::ObjectPtr<OBJ_>(this),null());
		}
		HX_STACK_LINE(228)
		Dynamic tmp4 = this->_fn_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		if ((tmp5)){
			HX_STACK_LINE(229)
			int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			this->_fn(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Popup_obj,clickButton,(void))

Void Popup_obj::callClosingCallback( Dynamic button){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","callClosingCallback",0x1cd41509,"haxe.ui.toolkit.controls.popups.Popup.callClosingCallback","haxe/ui/toolkit/controls/popups/Popup.hx",233,0x52c99b44)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(234)
		Dynamic tmp = this->_fn_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		if ((tmp1)){
			HX_STACK_LINE(235)
			Dynamic tmp2 = button;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			this->_fn(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Popup_obj,callClosingCallback,(void))

::haxe::ui::toolkit::core::DisplayObject Popup_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","clone",0x7c6b60ca,"haxe.ui.toolkit.controls.popups.Popup.clone","src/haxe/ui/toolkit/controls/popups/Popup.hx",1,0x6bf94b0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::Popup c = ((::haxe::ui::toolkit::controls::popups::Popup)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::popups::Popup tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Popup_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","self",0x2c678abf,"haxe.ui.toolkit.controls.popups.Popup.self","src/haxe/ui/toolkit/controls/popups/Popup.hx",1,0x6bf94b0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::Popup tmp = ::haxe::ui::toolkit::controls::popups::Popup_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Popup_obj::Popup_obj()
{
}

void Popup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Popup);
	HX_MARK_MEMBER_NAME(_titleBar,"_titleBar");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_exitButton,"_exitButton");
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_buttonBar,"_buttonBar");
	HX_MARK_MEMBER_NAME(_config,"_config");
	HX_MARK_MEMBER_NAME(_fn,"_fn");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(config,"config");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Popup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_titleBar,"_titleBar");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_exitButton,"_exitButton");
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_buttonBar,"_buttonBar");
	HX_VISIT_MEMBER_NAME(_config,"_config");
	HX_VISIT_MEMBER_NAME(_fn,"_fn");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(config,"config");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Popup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { return _fn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"config") ) { return inCallProp == hx::paccAlways ? get_config() : config; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { return _config; }
		if (HX_FIELD_EQ(inName,"content") ) { return inCallProp == hx::paccAlways ? get_content() : content; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return _content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_titleBar") ) { return _titleBar; }
		if (HX_FIELD_EQ(inName,"allowDrag") ) { return allowDrag_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_buttonBar") ) { return _buttonBar; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_config") ) { return get_config_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_exitButton") ) { return _exitButton; }
		if (HX_FIELD_EQ(inName,"get_content") ) { return get_content_dyn(); }
		if (HX_FIELD_EQ(inName,"clickButton") ) { return clickButton_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"callClosingCallback") ) { return callClosingCallback_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createStandardButton") ) { return createStandardButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Popup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { _fn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { _config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::haxe::ui::toolkit::controls::popups::PopupContent >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast< ::haxe::ui::toolkit::controls::popups::PopupContent >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_titleBar") ) { _titleBar=inValue.Cast< ::haxe::ui::toolkit::containers::Box >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_buttonBar") ) { _buttonBar=inValue.Cast< ::haxe::ui::toolkit::containers::Box >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_exitButton") ) { _exitButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Popup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Popup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_titleBar","\x7a","\xda","\x60","\x14"));
	outFields->push(HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"));
	outFields->push(HX_HCSTRING("_exitButton","\xcf","\xc4","\xf3","\xec"));
	outFields->push(HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"));
	outFields->push(HX_HCSTRING("_buttonBar","\xc2","\xc6","\x9c","\xab"));
	outFields->push(HX_HCSTRING("_config","\x61","\x68","\x49","\x36"));
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::Box*/ ,(int)offsetof(Popup_obj,_titleBar),HX_HCSTRING("_titleBar","\x7a","\xda","\x60","\x14")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(Popup_obj,_title),HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(Popup_obj,_exitButton),HX_HCSTRING("_exitButton","\xcf","\xc4","\xf3","\xec")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::PopupContent*/ ,(int)offsetof(Popup_obj,_content),HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Box*/ ,(int)offsetof(Popup_obj,_buttonBar),HX_HCSTRING("_buttonBar","\xc2","\xc6","\x9c","\xab")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Popup_obj,_config),HX_HCSTRING("_config","\x61","\x68","\x49","\x36")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Popup_obj,_fn),HX_HCSTRING("_fn","\x67","\x6f","\x48","\x00")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::PopupContent*/ ,(int)offsetof(Popup_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Popup_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_titleBar","\x7a","\xda","\x60","\x14"),
	HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"),
	HX_HCSTRING("_exitButton","\xcf","\xc4","\xf3","\xec"),
	HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"),
	HX_HCSTRING("_buttonBar","\xc2","\xc6","\x9c","\xab"),
	HX_HCSTRING("_config","\x61","\x68","\x49","\x36"),
	HX_HCSTRING("_fn","\x67","\x6f","\x48","\x00"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("allowDrag","\x1d","\x75","\x64","\xad"),
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("get_content","\x50","\xed","\x71","\x9f"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("get_config","\x8b","\xc6","\x59","\xb8"),
	HX_HCSTRING("createStandardButton","\x2b","\x55","\x0a","\x94"),
	HX_HCSTRING("clickButton","\x5a","\xb8","\xe1","\x08"),
	HX_HCSTRING("callClosingCallback","\xdc","\x02","\x9c","\xcc"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Popup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Popup_obj::__mClass,"__mClass");
};

#endif

hx::Class Popup_obj::__mClass;

void Popup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.popups.Popup","\x1b","\xae","\xe3","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Popup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Popup_obj >;
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
} // end namespace controls
} // end namespace popups
