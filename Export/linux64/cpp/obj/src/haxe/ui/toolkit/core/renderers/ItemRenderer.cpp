#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBox
#include <haxe/ui/toolkit/controls/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{

Void ItemRenderer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","new",0xd0092613,"haxe.ui.toolkit.core.renderers.ItemRenderer.new","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",24,0xa7be6c1c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	tmp->buttonMode = true;
	HX_STACK_LINE(27)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	tmp1->useHandCursor = true;
	HX_STACK_LINE(28)
	this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
}
;
	return null();
}

//ItemRenderer_obj::~ItemRenderer_obj() { }

Dynamic ItemRenderer_obj::__CreateEmpty() { return  new ItemRenderer_obj; }
hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__new()
{  hx::ObjectPtr< ItemRenderer_obj > _result_ = new ItemRenderer_obj();
	_result_->__construct();
	return _result_;}

Dynamic ItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ItemRenderer_obj > _result_ = new ItemRenderer_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ItemRenderer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< ItemRenderer_obj >(this); }
ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< ItemRenderer_obj >(this); }
ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IItemRenderer_delegate_< ItemRenderer_obj >(this); }
ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< ItemRenderer_obj >(this); }
ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< ItemRenderer_obj >(this); }
ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< ItemRenderer_obj >(this); }
ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStateComponent_delegate_< ItemRenderer_obj >(this); }
ItemRenderer_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< ItemRenderer_obj >(this); }
Void ItemRenderer_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","initialize",0x6bd047fd,"haxe.ui.toolkit.core.renderers.ItemRenderer.initialize","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",31,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->super::initialize();
		HX_STACK_LINE(34)
		this->addStatesRecursively(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void ItemRenderer_obj::addStatesRecursively( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","addStatesRecursively",0xc0d555e9,"haxe.ui.toolkit.core.renderers.ItemRenderer.addStatesRecursively","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",37,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		if ((tmp2)){
			HX_STACK_LINE(38)
			tmp3 = (c != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(38)
			tmp3 = false;
		}
		HX_STACK_LINE(38)
		if ((tmp3)){
			HX_STACK_LINE(39)
			::haxe::ui::toolkit::core::StateComponent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			tmp4 = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(c);
			HX_STACK_LINE(39)
			tmp4->addStates(this->get_states(),null());
		}
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = c->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			while((true)){
				HX_STACK_LINE(42)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				if ((tmp5)){
					HX_STACK_LINE(42)
					break;
				}
				HX_STACK_LINE(42)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp6;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(42)
				++(_g);
				HX_STACK_LINE(43)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				bool tmp8 = this->isInteractive(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(43)
				if ((tmp8)){
					HX_STACK_LINE(44)
					continue;
				}
				HX_STACK_LINE(47)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				if ((tmp10)){
					HX_STACK_LINE(48)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(48)
					tmp11 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(48)
					this->addStatesRecursively(tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,addStatesRecursively,(void))

Dynamic ItemRenderer_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","get_data",0xc9d63320,"haxe.ui.toolkit.core.renderers.ItemRenderer.get_data","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",55,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Dynamic tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_data,return )

Dynamic ItemRenderer_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","set_data",0x78338c94,"haxe.ui.toolkit.core.renderers.ItemRenderer.set_data","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",58,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(59)
	this->_data = value;
	HX_STACK_LINE(60)
	this->updateComponents();
	HX_STACK_LINE(61)
	this->attachEvents(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(62)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_data,return )

Void ItemRenderer_obj::update( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","update",0x5be48236,"haxe.ui.toolkit.core.renderers.ItemRenderer.update","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",66,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->updateComponents();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,update,(void))

bool ItemRenderer_obj::allowSelection( Float stageX,Float stageY){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","allowSelection",0xfb4a4bb0,"haxe.ui.toolkit.core.renderers.ItemRenderer.allowSelection","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",69,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_LINE(70)
	bool allow = true;		HX_STACK_VAR(allow,"allow");
	HX_STACK_LINE(71)
	Float tmp = stageX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = stageY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = this->findComponentUnderPoint(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(72)
	while((true)){
		HX_STACK_LINE(72)
		bool tmp3 = (c != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		if ((tmp4)){
			HX_STACK_LINE(72)
			break;
		}
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		bool tmp6 = this->isInteractive(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		if ((tmp6)){
			HX_STACK_LINE(74)
			allow = false;
			HX_STACK_LINE(75)
			break;
		}
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObjectContainer >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		bool tmp9 = (tmp8 == false);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		if ((tmp9)){
			HX_STACK_LINE(79)
			break;
		}
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::core::DisplayObjectContainer tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(81)
		tmp10 = hx::TCast< ::haxe::ui::toolkit::core::DisplayObjectContainer >::cast(c);
		HX_STACK_LINE(81)
		Float tmp11 = stageX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		Float tmp12 = stageY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp13 = tmp10->findComponentUnderPoint(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		c = tmp13;
	}
	HX_STACK_LINE(83)
	bool tmp3 = allow;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,allowSelection,return )

Void ItemRenderer_obj::attachEvents( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","attachEvents",0x6b4b3cab,"haxe.ui.toolkit.core.renderers.ItemRenderer.attachEvents","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",87,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(87)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = c->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(87)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			if ((tmp1)){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(87)
			++(_g);
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			bool tmp4 = this->isInteractive(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			if ((tmp4)){
				HX_STACK_LINE(89)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				this->attachEvent(tmp5);
			}
			else{
				HX_STACK_LINE(91)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				if ((tmp6)){
					HX_STACK_LINE(92)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					tmp7 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(92)
					this->attachEvents(tmp7);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,attachEvents,(void))

Void ItemRenderer_obj::attachEvent( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","attachEvent",0x9dc132c8,"haxe.ui.toolkit.core.renderers.ItemRenderer.attachEvent","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",98,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::controls::Slider >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(100)
			::String tmp2 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			Dynamic tmp3 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			c->removeEventListener(tmp2,tmp3,null());
			HX_STACK_LINE(101)
			::String tmp4 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			Dynamic tmp5 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			c->addEventListener(tmp4,tmp5,null(),null(),null());
		}
		else{
			HX_STACK_LINE(102)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			if ((tmp3)){
				HX_STACK_LINE(103)
				::String tmp4 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				Dynamic tmp5 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				c->removeEventListener(tmp4,tmp5,null());
				HX_STACK_LINE(104)
				::String tmp6 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				Dynamic tmp7 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				c->addEventListener(tmp6,tmp7,null(),null(),null());
			}
			else{
				HX_STACK_LINE(105)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				if ((tmp5)){
					HX_STACK_LINE(106)
					::String tmp6 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(106)
					Dynamic tmp7 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(106)
					c->removeEventListener(tmp6,tmp7,null());
					HX_STACK_LINE(107)
					::String tmp8 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(107)
					Dynamic tmp9 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(107)
					c->addEventListener(tmp8,tmp9,null(),null(),null());
				}
				else{
					HX_STACK_LINE(108)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(108)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::haxe::ui::toolkit::controls::CheckBox >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(108)
					if ((tmp7)){
						HX_STACK_LINE(109)
						::String tmp8 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(109)
						Dynamic tmp9 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(109)
						c->removeEventListener(tmp8,tmp9,null());
						HX_STACK_LINE(110)
						::String tmp10 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(110)
						Dynamic tmp11 = this->_onComponentEvent_dyn();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(110)
						c->addEventListener(tmp10,tmp11,null(),null(),null());
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,attachEvent,(void))

Void ItemRenderer_obj::_onComponentEvent( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","_onComponentEvent",0x240d3eee,"haxe.ui.toolkit.core.renderers.ItemRenderer._onComponentEvent","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",114,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(115)
		::haxe::ui::toolkit::core::Component tmp = event->get_component();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		if ((tmp2)){
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::core::Component tmp4 = event->get_component();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::core::Component tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::core::Component tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			::String tmp7 = tmp6->get_id();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			tmp3 = (tmp9 != null());
		}
		else{
			HX_STACK_LINE(115)
			tmp3 = false;
		}
		HX_STACK_LINE(115)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		if ((tmp3)){
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::core::Component tmp5 = event->get_component();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::core::Component tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			::String tmp7 = tmp6->get_id();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			tmp4 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(115)
			tmp4 = false;
		}
		HX_STACK_LINE(115)
		if ((tmp4)){
			HX_STACK_LINE(116)
			Dynamic tmp5 = this->_data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::core::Component tmp6 = event->get_component();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			::String tmp7 = tmp6->get_id();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::core::Component tmp8 = event->get_component();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			Dynamic tmp9 = tmp8->get_value();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			::Reflect_obj::setField(tmp5,tmp7,tmp9);
		}
		HX_STACK_LINE(119)
		::String tmp5 = HX_HCSTRING("haxeui_componentEvent","\x02","\x5c","\xae","\x33");		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		::haxe::ui::toolkit::events::UIEvent tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		this->dispatchProxyEvent(tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onComponentEvent,(void))

Void ItemRenderer_obj::dispatchProxyEvent( ::String type,::haxe::ui::toolkit::events::UIEvent refEvent){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","dispatchProxyEvent",0xd82085d3,"haxe.ui.toolkit.core.renderers.ItemRenderer.dispatchProxyEvent","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",122,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(refEvent,"refEvent")
		HX_STACK_LINE(123)
		::haxe::ui::toolkit::core::interfaces::IEventDispatcher tmp = this->eventDispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(124)
			::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(125)
			bool tmp2 = (refEvent != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			if ((tmp2)){
				HX_STACK_LINE(125)
				::haxe::ui::toolkit::core::Component tmp4 = refEvent->get_component();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(125)
				::haxe::ui::toolkit::core::Component tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(125)
				tmp3 = (tmp5 != null());
			}
			else{
				HX_STACK_LINE(125)
				tmp3 = false;
			}
			HX_STACK_LINE(125)
			if ((tmp3)){
				HX_STACK_LINE(126)
				::haxe::ui::toolkit::core::Component tmp4 = refEvent->get_component();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				c = tmp4;
			}
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::events::UIEvent tmp4 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(type,c,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::events::UIEvent uiEvent = tmp4;		HX_STACK_VAR(uiEvent,"uiEvent");
			HX_STACK_LINE(129)
			Dynamic tmp5 = this->_data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			uiEvent->data = tmp5;
			HX_STACK_LINE(130)
			Dynamic tmp6 = this->update_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			uiEvent->data->__FieldRef(HX_HCSTRING("update","\x09","\x86","\x05","\x87")) = tmp6;
			HX_STACK_LINE(131)
			uiEvent->data->__FieldRef(HX_HCSTRING("itemRenderer","\x76","\x11","\x05","\x97")) = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(132)
			::haxe::ui::toolkit::core::interfaces::IEventDispatcher tmp7 = this->eventDispatcher;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			::haxe::ui::toolkit::events::UIEvent tmp8 = uiEvent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			tmp7->dispatchEvent(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,dispatchProxyEvent,(void))

Void ItemRenderer_obj::updateComponents( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","updateComponents",0x13155aec,"haxe.ui.toolkit.core.renderers.ItemRenderer.updateComponents","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",136,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		Dynamic tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		Array< ::String > fields = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			while((true)){
				HX_STACK_LINE(138)
				bool tmp1 = (_g < fields->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(138)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(138)
				if ((tmp2)){
					HX_STACK_LINE(138)
					break;
				}
				HX_STACK_LINE(138)
				::String tmp3 = fields->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(138)
				::String f = tmp3;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(138)
				++(_g);
				HX_STACK_LINE(139)
				::String componentId = f;		HX_STACK_VAR(componentId,"componentId");
				HX_STACK_LINE(140)
				Dynamic tmp4 = this->_data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				::String tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				Dynamic value = tmp6;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(141)
				::String tmp7 = componentId;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = this->findChild(tmp7,null(),true);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(141)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp8;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(142)
				bool tmp9 = (c != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				if ((tmp9)){
					HX_STACK_LINE(143)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					Dynamic tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					this->updateComponentValue(tmp10,tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,updateComponents,(void))

Void ItemRenderer_obj::updateComponentValue( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c,Dynamic value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","updateComponentValue",0x422c7a4a,"haxe.ui.toolkit.core.renderers.ItemRenderer.updateComponentValue","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",148,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp2)){
			HX_STACK_LINE(149)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			::haxe::ui::toolkit::core::Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			tmp5 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(c);
			HX_STACK_LINE(149)
			::haxe::ui::toolkit::core::Component tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			Dynamic tmp7 = tmp6->get_value();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			tmp3 = (tmp4 != tmp8);
		}
		else{
			HX_STACK_LINE(149)
			tmp3 = false;
		}
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(150)
			::haxe::ui::toolkit::core::Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			tmp4 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(c);
			HX_STACK_LINE(150)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			tmp4->set_value(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,updateComponentValue,(void))

Array< ::String > ItemRenderer_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","get_states",0x75985fb8,"haxe.ui.toolkit.core.renderers.ItemRenderer.get_states","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",159,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(159)
	return Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("over","\x54","\x91","\xb8","\x49")).Add(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"));
}


::String ItemRenderer_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","set_state",0x646adc67,"haxe.ui.toolkit.core.renderers.ItemRenderer.set_state","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",162,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(163)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	this->setStateRecursively(tmp,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(164)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	::String tmp2 = this->super::set_state(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	return tmp2;
}


Void ItemRenderer_obj::setStateRecursively( ::String value,::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","setStateRecursively",0x30c2fb63,"haxe.ui.toolkit.core.renderers.ItemRenderer.setStateRecursively","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",167,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(168)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		if ((tmp2)){
			HX_STACK_LINE(168)
			tmp3 = (c != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(168)
			tmp3 = false;
		}
		HX_STACK_LINE(168)
		if ((tmp3)){
			HX_STACK_LINE(169)
			::haxe::ui::toolkit::core::StateComponent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			tmp4 = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(c);
			HX_STACK_LINE(169)
			::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			tmp4->set_state(tmp5);
		}
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = c->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(172)
				if ((tmp5)){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(172)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(172)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp6;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(172)
				++(_g);
				HX_STACK_LINE(173)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(173)
				bool tmp8 = this->isInteractive(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				if ((tmp8)){
					HX_STACK_LINE(174)
					continue;
				}
				HX_STACK_LINE(177)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(177)
				if ((tmp10)){
					HX_STACK_LINE(178)
					::String tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(178)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					tmp12 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(178)
					this->setStateRecursively(tmp11,tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,setStateRecursively,(void))

bool ItemRenderer_obj::isInteractive( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","isInteractive",0x9e94218b,"haxe.ui.toolkit.core.renderers.ItemRenderer.isInteractive","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",183,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(184)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	if ((tmp4)){
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		tmp5 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxe::ui::toolkit::controls::Slider >());
	}
	else{
		HX_STACK_LINE(184)
		tmp5 = true;
	}
	HX_STACK_LINE(184)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(184)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(184)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(184)
	if ((tmp7)){
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(184)
		tmp8 = ::Std_obj::is(tmp11,hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >());
	}
	else{
		HX_STACK_LINE(184)
		tmp8 = true;
	}
	HX_STACK_LINE(184)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(184)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(184)
	if ((tmp9)){
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(184)
		tmp10 = ::Std_obj::is(tmp12,hx::ClassOf< ::haxe::ui::toolkit::controls::CheckBox >());
	}
	else{
		HX_STACK_LINE(184)
		tmp10 = true;
	}
	HX_STACK_LINE(184)
	if ((tmp10)){
		HX_STACK_LINE(185)
		return true;
	}
	HX_STACK_LINE(187)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,isInteractive,return )

::haxe::ui::toolkit::core::DisplayObject ItemRenderer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","clone",0x705f7bd0,"haxe.ui.toolkit.core.renderers.ItemRenderer.clone","haxe/ui/toolkit/core/Macros.hx",543,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::core::renderers::ItemRenderer c = ((::haxe::ui::toolkit::core::renderers::ItemRenderer)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(194)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			if ((tmp2)){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(194)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(194)
			++(_g);
			HX_STACK_LINE(195)
			::haxe::ui::toolkit::core::DisplayObject tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(195)
			tmp4 = hx::TCast< ::haxe::ui::toolkit::core::DisplayObject >::cast(child);
			HX_STACK_LINE(195)
			::haxe::ui::toolkit::core::DisplayObject tmp5 = tmp4->clone();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(195)
			c->addChild(tmp5);
		}
	}
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::core::renderers::ItemRenderer tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ItemRenderer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","self",0x3b463279,"haxe.ui.toolkit.core.renderers.ItemRenderer.self","src/haxe/ui/toolkit/core/renderers/ItemRenderer.hx",1,0x73e08627)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::core::renderers::ItemRenderer tmp = ::haxe::ui::toolkit::core::renderers::ItemRenderer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	return tmp;
}


::String ItemRenderer_obj::STATE_NORMAL;

::String ItemRenderer_obj::STATE_OVER;

::String ItemRenderer_obj::STATE_SELECTED;

::String ItemRenderer_obj::STATE_DISABLED;


ItemRenderer_obj::ItemRenderer_obj()
{
}

void ItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemRenderer);
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(eventDispatcher,"eventDispatcher");
	HX_MARK_MEMBER_NAME(_data,"_data");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(eventDispatcher,"eventDispatcher");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ItemRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attachEvent") ) { return attachEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachEvents") ) { return attachEvents_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInteractive") ) { return isInteractive_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSelection") ) { return allowSelection_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eventDispatcher") ) { return eventDispatcher; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateComponents") ) { return updateComponents_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onComponentEvent") ) { return _onComponentEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchProxyEvent") ) { return dispatchProxyEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setStateRecursively") ) { return setStateRecursively_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addStatesRecursively") ) { return addStatesRecursively_dyn(); }
		if (HX_FIELD_EQ(inName,"updateComponentValue") ) { return updateComponentValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ItemRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eventDispatcher") ) { eventDispatcher=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ItemRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"));
	outFields->push(HX_HCSTRING("eventDispatcher","\x61","\x7a","\xd7","\xfd"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ItemRenderer_obj,hash),HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IEventDispatcher*/ ,(int)offsetof(ItemRenderer_obj,eventDispatcher),HX_HCSTRING("eventDispatcher","\x61","\x7a","\xd7","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ItemRenderer_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ItemRenderer_obj::STATE_NORMAL,HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60")},
	{hx::fsString,(void *) &ItemRenderer_obj::STATE_OVER,HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38")},
	{hx::fsString,(void *) &ItemRenderer_obj::STATE_SELECTED,HX_HCSTRING("STATE_SELECTED","\xa9","\x3d","\x8c","\x22")},
	{hx::fsString,(void *) &ItemRenderer_obj::STATE_DISABLED,HX_HCSTRING("STATE_DISABLED","\xca","\x54","\x23","\xed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("eventDispatcher","\x61","\x7a","\xd7","\xfd"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("addStatesRecursively","\xfc","\x44","\xfa","\x81"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("allowSelection","\x83","\xda","\x9f","\x60"),
	HX_HCSTRING("attachEvents","\xbe","\x60","\xc1","\x2b"),
	HX_HCSTRING("attachEvent","\x15","\x72","\x62","\xea"),
	HX_HCSTRING("_onComponentEvent","\xfb","\x75","\x9c","\x69"),
	HX_HCSTRING("dispatchProxyEvent","\x26","\x7a","\xe1","\x6f"),
	HX_HCSTRING("updateComponents","\x7f","\x84","\x0a","\xa4"),
	HX_HCSTRING("updateComponentValue","\x5d","\x69","\x51","\x03"),
	HX_HCSTRING("get_states","\x0b","\x49","\x83","\xf6"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	HX_HCSTRING("setStateRecursively","\xb0","\xcf","\xd7","\x61"),
	HX_HCSTRING("isInteractive","\x18","\x8e","\x7d","\x45"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_SELECTED,"STATE_SELECTED");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_DISABLED,"STATE_DISABLED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_SELECTED,"STATE_SELECTED");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_DISABLED,"STATE_DISABLED");
};

#endif

hx::Class ItemRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60"),
	HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38"),
	HX_HCSTRING("STATE_SELECTED","\xa9","\x3d","\x8c","\x22"),
	HX_HCSTRING("STATE_DISABLED","\xca","\x54","\x23","\xed"),
	::String(null()) };

void ItemRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.renderers.ItemRenderer","\xa1","\x20","\x3a","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ItemRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ItemRenderer_obj >;
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

void ItemRenderer_obj::__boot()
{
	STATE_NORMAL= HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
	STATE_OVER= HX_HCSTRING("over","\x54","\x91","\xb8","\x49");
	STATE_SELECTED= HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1");
	STATE_DISABLED= HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers
