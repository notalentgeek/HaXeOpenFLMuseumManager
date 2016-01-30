#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipManager
#include <haxe/ui/toolkit/core/ToolTipManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptInterp
#include <haxe/ui/toolkit/hscript/ScriptInterp.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Component_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Component","new",0xd3418002,"haxe.ui.toolkit.core.Component.new","haxe/ui/toolkit/core/Component.hx",20,0xbd12176e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(245)
	this->_toolTipTimer = null();
	HX_STACK_LINE(23)
	this->_disabled = false;
	HX_STACK_LINE(22)
	this->_clipContent = false;
	HX_STACK_LINE(26)
	super::__construct();
}
;
	return null();
}

//Component_obj::~Component_obj() { }

Dynamic Component_obj::__CreateEmpty() { return  new Component_obj; }
hx::ObjectPtr< Component_obj > Component_obj::__new()
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct();
	return _result_;}

Dynamic Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Component_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Component_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< Component_obj >(this); }
Component_obj::operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< Component_obj >(this); }
Component_obj::operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< Component_obj >(this); }
Component_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< Component_obj >(this); }
Component_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Component_obj >(this); }
Component_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< Component_obj >(this); }
Void Component_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","initialize",0xaf5d99ee,"haxe.ui.toolkit.core.Component.initialize","haxe/ui/toolkit/core/Component.hx",32,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::initialize();
		HX_STACK_LINE(34)
		bool tmp = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDraggable >());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		if ((tmp)){
			HX_STACK_LINE(35)
			::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			Dynamic tmp2 = this->_onComponentMouseDown_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			this->addEventListener(tmp1,tmp2,null(),null(),null());
		}
		HX_STACK_LINE(37)
		this->initScriplet();
	}
return null();
}


Void Component_obj::postInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","postInitialize",0x9cc4016e,"haxe.ui.toolkit.core.Component.postInitialize","haxe/ui/toolkit/core/Component.hx",40,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		bool tmp = this->_disabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(42)
			this->set_disabled(true);
		}
	}
return null();
}


Void Component_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","invalidate",0x49cc8219,"haxe.ui.toolkit.core.Component.invalidate","haxe/ui/toolkit/core/Component.hx",46,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(47)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		if ((tmp3)){
			HX_STACK_LINE(47)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(47)
			tmp4 = true;
		}
		HX_STACK_LINE(47)
		if ((tmp4)){
			HX_STACK_LINE(48)
			return null();
		}
		HX_STACK_LINE(51)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(52)
		this->_invalidating = true;
		HX_STACK_LINE(53)
		int tmp7 = (int(type) & int((int)256));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		bool tmp8 = (tmp7 == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		if ((tmp8)){
			HX_STACK_LINE(53)
			bool tmp10 = this->_clipContent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			tmp9 = (tmp11 == true);
		}
		else{
			HX_STACK_LINE(53)
			tmp9 = false;
		}
		HX_STACK_LINE(53)
		if ((tmp9)){
			HX_STACK_LINE(54)
			::openfl::_legacy::display::Sprite tmp10 = this->get_sprite();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			Float tmp12 = this->get_height();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			::openfl::_legacy::geom::Rectangle tmp13 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(54)
			tmp10->set_scrollRect(tmp13);
		}
		HX_STACK_LINE(56)
		this->_invalidating = false;
	}
return null();
}


::String Component_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_text",0x789ced54,"haxe.ui.toolkit.core.Component.get_text","haxe/ui/toolkit/core/Component.hx",74,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::String tmp = this->_text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_text,return )

::String Component_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_text",0x26fa46c8,"haxe.ui.toolkit.core.Component.set_text","haxe/ui/toolkit/core/Component.hx",78,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(79)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	if ((tmp)){
		HX_STACK_LINE(80)
		::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		bool tmp2 = ::StringTools_obj::startsWith(tmp1,HX_HCSTRING("@#","\xe3","\x37","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		if ((tmp2)){
			HX_STACK_LINE(81)
			int tmp3 = value.length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			::String tmp4 = value.substr((int)2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			::String tmp5 = (tmp4 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::core::Client tmp6 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			::String tmp7 = tmp6->get_language();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			value = tmp8;
		}
		else{
			HX_STACK_LINE(82)
			::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			bool tmp4 = ::StringTools_obj::startsWith(tmp3,HX_HCSTRING("asset://","\xea","\x97","\x9d","\xc9"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			if ((tmp4)){
				HX_STACK_LINE(83)
				int tmp5 = value.length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(83)
				::String tmp6 = value.substr((int)8,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(83)
				::String assetId = tmp6;		HX_STACK_VAR(assetId,"assetId");
				HX_STACK_LINE(84)
				::haxe::ui::toolkit::resources::ResourceManager tmp7 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				::String tmp8 = assetId;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				::String tmp9 = tmp7->getText(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				value = tmp9;
				HX_STACK_LINE(85)
				::String tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				value = tmp11;
			}
		}
		HX_STACK_LINE(87)
		this->_text = value;
	}
	HX_STACK_LINE(89)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_text,return )

Float Component_obj::get_clipWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_clipWidth",0xdf1c270f,"haxe.ui.toolkit.core.Component.get_clipWidth","haxe/ui/toolkit/core/Component.hx",93,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	::openfl::_legacy::geom::Rectangle tmp1 = tmp->get_scrollRect();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	if ((tmp2)){
		HX_STACK_LINE(95)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		return tmp3;
	}
	HX_STACK_LINE(97)
	::openfl::_legacy::display::Sprite tmp3 = this->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_scrollRect();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	Float tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clipWidth,return )

Float Component_obj::set_clipWidth( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_clipWidth",0x2422091b,"haxe.ui.toolkit.core.Component.set_clipWidth","haxe/ui/toolkit/core/Component.hx",100,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	Float tmp2 = this->get_clipHeight();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	::openfl::_legacy::geom::Rectangle tmp3 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	tmp->set_scrollRect(tmp3);
	HX_STACK_LINE(102)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clipWidth,return )

Float Component_obj::get_clipHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_clipHeight",0x0fd57ebe,"haxe.ui.toolkit.core.Component.get_clipHeight","haxe/ui/toolkit/core/Component.hx",105,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	::openfl::_legacy::geom::Rectangle tmp1 = tmp->get_scrollRect();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	if ((tmp2)){
		HX_STACK_LINE(107)
		Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		return tmp3;
	}
	HX_STACK_LINE(109)
	::openfl::_legacy::display::Sprite tmp3 = this->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_scrollRect();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	Float tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clipHeight,return )

Float Component_obj::set_clipHeight( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_clipHeight",0x2ff56732,"haxe.ui.toolkit.core.Component.set_clipHeight","haxe/ui/toolkit/core/Component.hx",112,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(113)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	Float tmp1 = this->get_clipWidth();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	::openfl::_legacy::geom::Rectangle tmp3 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	tmp->set_scrollRect(tmp3);
	HX_STACK_LINE(114)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clipHeight,return )

bool Component_obj::get_clipContent( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_clipContent",0xe4361282,"haxe.ui.toolkit.core.Component.get_clipContent","haxe/ui/toolkit/core/Component.hx",117,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	bool tmp = this->_clipContent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clipContent,return )

bool Component_obj::set_clipContent( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_clipContent",0xe0018f8e,"haxe.ui.toolkit.core.Component.set_clipContent","haxe/ui/toolkit/core/Component.hx",121,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(122)
	this->_clipContent = value;
	HX_STACK_LINE(123)
	bool tmp = this->_clipContent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	if ((tmp1)){
		HX_STACK_LINE(124)
		this->clearClip();
	}
	HX_STACK_LINE(126)
	this->invalidate((int)256,null());
	HX_STACK_LINE(127)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clipContent,return )

Void Component_obj::clearClip( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","clearClip",0x74f36c1f,"haxe.ui.toolkit.core.Component.clearClip","haxe/ui/toolkit/core/Component.hx",130,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		tmp->set_scrollRect(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,clearClip,(void))

bool Component_obj::get_disabled( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_disabled",0xafa241a3,"haxe.ui.toolkit.core.Component.get_disabled","haxe/ui/toolkit/core/Component.hx",134,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	bool tmp = this->_disabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_disabled,return )

bool Component_obj::set_disabled( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_disabled",0xc49b6517,"haxe.ui.toolkit.core.Component.set_disabled","haxe/ui/toolkit/core/Component.hx",138,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(139)
	bool tmp = this->_disabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	if ((tmp2)){
		HX_STACK_LINE(140)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		return tmp3;
	}
	HX_STACK_LINE(142)
	bool tmp3 = (value == true);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	if ((tmp3)){
		HX_STACK_LINE(143)
		::haxe::ds::StringMap tmp4 = this->_cachedListeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		if ((tmp5)){
			HX_STACK_LINE(144)
			::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			this->_cachedListeners = tmp6;
		}
		HX_STACK_LINE(147)
		::haxe::ds::StringMap tmp6 = this->_eventListeners;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
			::String type = __it->next();
			{
				HX_STACK_LINE(148)
				::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				bool tmp9 = this->disablableEventType(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				bool tmp10 = (tmp9 == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				if ((tmp10)){
					HX_STACK_LINE(149)
					::haxe::ds::StringMap tmp11 = this->_eventListeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(149)
					::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(149)
					cpp::ArrayBase list = tmp11->get(tmp12);		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(150)
					::haxe::ds::StringMap tmp13 = this->_cachedListeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(150)
					::String tmp14 = type;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(150)
					cpp::ArrayBase cachedList = tmp13->get(tmp14);		HX_STACK_VAR(cachedList,"cachedList");
					HX_STACK_LINE(151)
					bool tmp15 = (cachedList == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(151)
					if ((tmp15)){
						HX_STACK_LINE(152)
						cachedList = Dynamic( Array_obj<Dynamic>::__new() );
						HX_STACK_LINE(153)
						::haxe::ds::StringMap tmp16 = this->_cachedListeners;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(153)
						::String tmp17 = type;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(153)
						tmp16->set(tmp17,cachedList);
					}
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(155)
						while((true)){
							HX_STACK_LINE(155)
							bool tmp16 = (_g < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(155)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(155)
							if ((tmp17)){
								HX_STACK_LINE(155)
								break;
							}
							HX_STACK_LINE(155)
							Dynamic tmp18 = list->__GetItem(_g);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(155)
							Dynamic listener = tmp18;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(155)
							++(_g);
							HX_STACK_LINE(156)
							Dynamic tmp19 = listener;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(156)
							cachedList->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
							HX_STACK_LINE(157)
							::String tmp20 = type;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(157)
							Dynamic tmp21 = listener;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(157)
							this->removeEventListener(tmp20,tmp21,null());
						}
					}
				}
			}
;
		}
	}
	HX_STACK_LINE(163)
	this->_disabled = value;
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(164)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(164)
		while((true)){
			HX_STACK_LINE(164)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			if ((tmp5)){
				HX_STACK_LINE(164)
				break;
			}
			HX_STACK_LINE(164)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp6;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(164)
			++(_g);
			HX_STACK_LINE(165)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			if ((tmp8)){
				HX_STACK_LINE(166)
				::haxe::ui::toolkit::core::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				tmp9 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(child);
				HX_STACK_LINE(166)
				bool tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				tmp9->set_disabled(tmp10);
			}
		}
	}
	HX_STACK_LINE(170)
	bool tmp4 = (value == false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(170)
	if ((tmp4)){
		HX_STACK_LINE(171)
		::haxe::ds::StringMap tmp5 = this->_cachedListeners;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		if ((tmp6)){
			HX_STACK_LINE(172)
			::haxe::ds::StringMap tmp7 = this->_cachedListeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			Dynamic tmp8 = tmp7->keys();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp8);  __it->hasNext(); ){
				::String type = __it->next();
				{
					HX_STACK_LINE(173)
					::haxe::ds::StringMap tmp9 = this->_cachedListeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(173)
					::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					cpp::ArrayBase list = tmp9->get(tmp10);		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(174)
					{
						HX_STACK_LINE(174)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(174)
						while((true)){
							HX_STACK_LINE(174)
							bool tmp11 = (_g < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(174)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(174)
							if ((tmp12)){
								HX_STACK_LINE(174)
								break;
							}
							HX_STACK_LINE(174)
							Dynamic tmp13 = list->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(174)
							Dynamic listener = tmp13;		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(174)
							++(_g);
							HX_STACK_LINE(175)
							::String tmp14 = type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							Dynamic tmp15 = listener;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							this->addEventListener(tmp14,tmp15,null(),null(),null());
						}
					}
					HX_STACK_LINE(177)
					list = Dynamic( Array_obj<Dynamic>::__new() );
				}
;
			}
			HX_STACK_LINE(179)
			this->_cachedListeners = null();
		}
	}
	HX_STACK_LINE(183)
	bool tmp5 = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(183)
	if ((tmp5)){
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::StateComponent tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		tmp6 = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::core::StateComponent stateComponent = tmp6;		HX_STACK_VAR(stateComponent,"stateComponent");
		HX_STACK_LINE(185)
		bool tmp7 = (value == true);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		if ((tmp7)){
			HX_STACK_LINE(186)
			bool tmp8 = stateComponent->hasState(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(186)
			if ((tmp8)){
				HX_STACK_LINE(187)
				stateComponent->set_state(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"));
			}
		}
		else{
			HX_STACK_LINE(190)
			bool tmp8 = stateComponent->hasState(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(190)
			if ((tmp8)){
				HX_STACK_LINE(191)
				stateComponent->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
			}
		}
	}
	HX_STACK_LINE(196)
	bool tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(196)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_disabled,return )

Dynamic Component_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_value",0x34d1f0ea,"haxe.ui.toolkit.core.Component.get_value","haxe/ui/toolkit/core/Component.hx",199,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_value,return )

Dynamic Component_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_value",0x1822dcf6,"haxe.ui.toolkit.core.Component.set_value","haxe/ui/toolkit/core/Component.hx",203,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(204)
	Dynamic tmp = this->get_value();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(205)
		Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		this->set_text(tmp4);
	}
	else{
		HX_STACK_LINE(207)
		Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		this->set_text(tmp2);
	}
	HX_STACK_LINE(209)
	Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_value,return )

Dynamic Component_obj::get_toolTip( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_toolTip",0x7be7e69c,"haxe.ui.toolkit.core.Component.get_toolTip","haxe/ui/toolkit/core/Component.hx",226,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	Dynamic tmp = this->_toolTip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_toolTip,return )

Dynamic Component_obj::set_toolTip( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_toolTip",0x8654eda8,"haxe.ui.toolkit.core.Component.set_toolTip","haxe/ui/toolkit/core/Component.hx",230,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(231)
	this->_toolTip = value;
	HX_STACK_LINE(232)
	::String tmp = HX_HCSTRING("haxeui_mouseOver","\x54","\xb2","\x7f","\x5e");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	Dynamic tmp1 = this->_onComponentMouseOver_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	this->removeEventListener(tmp,tmp1,null());
	HX_STACK_LINE(233)
	::String tmp2 = HX_HCSTRING("haxeui_mouseOut","\x8e","\x9f","\x8c","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	Dynamic tmp3 = this->_onComponentMouseOut_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	this->removeEventListener(tmp2,tmp3,null());
	HX_STACK_LINE(234)
	::String tmp4 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	Dynamic tmp5 = this->_onComponentClick_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(234)
	this->removeEventListener(tmp4,tmp5,null());
	HX_STACK_LINE(235)
	::String tmp6 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(235)
	Dynamic tmp7 = this->_onComponentClick_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(235)
	this->removeEventListener(tmp6,tmp7,null());
	HX_STACK_LINE(236)
	Dynamic tmp8 = this->_toolTip;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(236)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(236)
	if ((tmp9)){
		HX_STACK_LINE(237)
		::String tmp10 = HX_HCSTRING("haxeui_mouseOver","\x54","\xb2","\x7f","\x5e");		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(237)
		Dynamic tmp11 = this->_onComponentMouseOver_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(237)
		this->addEventListener(tmp10,tmp11,null(),null(),null());
		HX_STACK_LINE(238)
		::String tmp12 = HX_HCSTRING("haxeui_mouseOut","\x8e","\x9f","\x8c","\x9c");		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(238)
		Dynamic tmp13 = this->_onComponentMouseOut_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(238)
		this->addEventListener(tmp12,tmp13,null(),null(),null());
		HX_STACK_LINE(239)
		::String tmp14 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(239)
		Dynamic tmp15 = this->_onComponentClick_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(239)
		this->addEventListener(tmp14,tmp15,null(),null(),null());
		HX_STACK_LINE(240)
		::String tmp16 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(240)
		Dynamic tmp17 = this->_onComponentClick_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(240)
		this->addEventListener(tmp16,tmp17,null(),null(),null());
	}
	HX_STACK_LINE(242)
	Dynamic tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(242)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_toolTip,return )

Void Component_obj::_onComponentMouseOver( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseOver",0x36343c9c,"haxe.ui.toolkit.core.Component._onComponentMouseOver","haxe/ui/toolkit/core/Component.hx",246,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(246)
		::haxe::ui::toolkit::core::Component _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		::haxe::Timer tmp = this->_toolTipTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		if ((tmp1)){
			HX_STACK_LINE(248)
			::haxe::Timer tmp2 = this->_toolTipTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			tmp2->stop();
			HX_STACK_LINE(249)
			this->_toolTipTimer = null();
		}
		HX_STACK_LINE(251)
		::haxe::Timer tmp2 = this->_toolTipTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		if ((tmp3)){
			HX_STACK_LINE(254)
			::haxe::ui::toolkit::core::ToolTipManager tmp4 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(254)
			Dynamic tmp5 = tmp4->defaults->__Field(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::core::Component,_g,::haxe::ui::toolkit::events::UIEvent,event)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/core/Component.hx",252,0xbd12176e)
				{
					HX_STACK_LINE(253)
					::haxe::ui::toolkit::core::ToolTipManager tmp6 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(253)
					::haxe::ui::toolkit::core::Component tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(253)
					::haxe::ui::toolkit::events::UIEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(253)
					tmp6->showToolTip(tmp7,null(),tmp8);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(252)
			::haxe::Timer tmp6 = ::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g,event)),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			this->_toolTipTimer = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseOver,(void))

Void Component_obj::_onComponentMouseOut( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseOut",0x6543f646,"haxe.ui.toolkit.core.Component._onComponentMouseOut","haxe/ui/toolkit/core/Component.hx",258,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(259)
		::haxe::Timer tmp = this->_toolTipTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		if ((tmp1)){
			HX_STACK_LINE(260)
			::haxe::Timer tmp2 = this->_toolTipTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			tmp2->stop();
			HX_STACK_LINE(261)
			this->_toolTipTimer = null();
		}
		HX_STACK_LINE(263)
		::haxe::ui::toolkit::core::ToolTipManager tmp2 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		bool tmp3 = tmp2->toolTipVisible(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		bool tmp4 = (tmp3 == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		if ((tmp4)){
			HX_STACK_LINE(263)
			Float tmp6 = event->stageX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			Float tmp7 = event->stageY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			Float tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(263)
			Float tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(263)
			bool tmp10 = this->hitTest(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(263)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(263)
			tmp5 = (tmp11 == false);
		}
		else{
			HX_STACK_LINE(263)
			tmp5 = false;
		}
		HX_STACK_LINE(263)
		if ((tmp5)){
			HX_STACK_LINE(264)
			::haxe::ui::toolkit::core::ToolTipManager tmp6 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(264)
			tmp6->hideCurrentToolTip();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseOut,(void))

Void Component_obj::_onComponentClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentClick",0xbd53314b,"haxe.ui.toolkit.core.Component._onComponentClick","haxe/ui/toolkit/core/Component.hx",268,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(269)
		::haxe::Timer tmp = this->_toolTipTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		if ((tmp1)){
			HX_STACK_LINE(270)
			::haxe::Timer tmp2 = this->_toolTipTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			tmp2->stop();
			HX_STACK_LINE(271)
			this->_toolTipTimer = null();
		}
		HX_STACK_LINE(273)
		::haxe::ui::toolkit::core::ToolTipManager tmp2 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		bool tmp3 = tmp2->toolTipVisible(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		bool tmp4 = (tmp3 == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		if ((tmp4)){
			HX_STACK_LINE(274)
			::haxe::ui::toolkit::core::ToolTipManager tmp5 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			tmp5->hideCurrentToolTip();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentClick,(void))

Void Component_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","addEventListener",0xbc03beeb,"haxe.ui.toolkit.core.Component.addEventListener","haxe/ui/toolkit/core/Component.hx",282,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(283)
		bool tmp = this->_disabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		if ((tmp1)){
			HX_STACK_LINE(283)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(283)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(283)
			bool tmp5 = this->disablableEventType(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(283)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(283)
			tmp2 = (tmp6 == true);
		}
		else{
			HX_STACK_LINE(283)
			tmp2 = false;
		}
		HX_STACK_LINE(283)
		if ((tmp2)){
			HX_STACK_LINE(284)
			::haxe::ds::StringMap tmp3 = this->_cachedListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			if ((tmp4)){
				HX_STACK_LINE(285)
				::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				this->_cachedListeners = tmp5;
			}
			HX_STACK_LINE(287)
			::haxe::ds::StringMap tmp5 = this->_cachedListeners;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			cpp::ArrayBase list = tmp5->get(tmp6);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(288)
			bool tmp7 = (list == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(288)
			if ((tmp7)){
				HX_STACK_LINE(289)
				list = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(290)
				::haxe::ds::StringMap tmp8 = this->_cachedListeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(290)
				tmp8->set(tmp9,list);
			}
			HX_STACK_LINE(292)
			Dynamic tmp8 = listener;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(292)
			list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
			HX_STACK_LINE(293)
			return null();
		}
		HX_STACK_LINE(295)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(295)
		bool tmp5 = useCapture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		int tmp6 = priority;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(295)
		bool tmp7 = useWeakReference;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		this->super::addEventListener(tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


Void Component_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","removeEventListener",0x1d3c1b6c,"haxe.ui.toolkit.core.Component.removeEventListener","haxe/ui/toolkit/core/Component.hx",298,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(299)
		bool tmp = this->_disabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		if ((tmp1)){
			HX_STACK_LINE(299)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			bool tmp5 = this->disablableEventType(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(299)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(299)
			tmp2 = (tmp6 == true);
		}
		else{
			HX_STACK_LINE(299)
			tmp2 = false;
		}
		HX_STACK_LINE(299)
		if ((tmp2)){
			HX_STACK_LINE(300)
			::haxe::ds::StringMap tmp3 = this->_cachedListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(300)
			if ((tmp4)){
				HX_STACK_LINE(300)
				::haxe::ds::StringMap tmp6 = this->_cachedListeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(300)
				::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(300)
				::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(300)
				::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				tmp5 = tmp7->exists(tmp9);
			}
			else{
				HX_STACK_LINE(300)
				tmp5 = false;
			}
			HX_STACK_LINE(300)
			if ((tmp5)){
				HX_STACK_LINE(301)
				::haxe::ds::StringMap tmp6 = this->_cachedListeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(301)
				::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(301)
				cpp::ArrayBase list = tmp6->get(tmp7);		HX_STACK_VAR(list,"list");
				HX_STACK_LINE(302)
				bool tmp8 = (list != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(302)
				if ((tmp8)){
					HX_STACK_LINE(304)
					Dynamic tmp9 = listener;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(304)
					list->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp9);
					HX_STACK_LINE(305)
					bool tmp10 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(305)
					if ((tmp10)){
						HX_STACK_LINE(306)
						::haxe::ds::StringMap tmp11 = this->_cachedListeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(306)
						::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(306)
						tmp11->remove(tmp12);
					}
				}
			}
		}
		HX_STACK_LINE(312)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(312)
		bool tmp5 = useCapture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(312)
		this->super::removeEventListener(tmp3,tmp4,tmp5);
	}
return null();
}


bool Component_obj::disablableEventType( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","disablableEventType",0x346fa09f,"haxe.ui.toolkit.core.Component.disablableEventType","haxe/ui/toolkit/core/Component.hx",315,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(316)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(316)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(316)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(316)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(316)
	if ((tmp4)){
		HX_STACK_LINE(317)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(317)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(317)
		tmp5 = (tmp6 == tmp9);
	}
	else{
		HX_STACK_LINE(316)
		tmp5 = true;
	}
	HX_STACK_LINE(316)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(316)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(316)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(316)
	if ((tmp7)){
		HX_STACK_LINE(318)
		::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(318)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(318)
		::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(318)
		::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(318)
		tmp8 = (tmp9 == tmp12);
	}
	else{
		HX_STACK_LINE(316)
		tmp8 = true;
	}
	HX_STACK_LINE(316)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(316)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(316)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(316)
	if ((tmp10)){
		HX_STACK_LINE(319)
		::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(319)
		::String tmp13 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(319)
		::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(319)
		::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(319)
		tmp11 = (tmp12 == tmp15);
	}
	else{
		HX_STACK_LINE(316)
		tmp11 = true;
	}
	HX_STACK_LINE(316)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(316)
	bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(316)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(316)
	if ((tmp13)){
		HX_STACK_LINE(320)
		::String tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(320)
		::String tmp16 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(320)
		::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(320)
		::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(320)
		tmp14 = (tmp15 == tmp18);
	}
	else{
		HX_STACK_LINE(316)
		tmp14 = true;
	}
	HX_STACK_LINE(316)
	bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(316)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(316)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(316)
	if ((tmp16)){
		HX_STACK_LINE(321)
		::String tmp18 = type;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(321)
		::String tmp19 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(321)
		::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(321)
		::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(321)
		tmp17 = (tmp18 == tmp21);
	}
	else{
		HX_STACK_LINE(316)
		tmp17 = true;
	}
	HX_STACK_LINE(316)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(316)
	bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(316)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(316)
	if ((tmp19)){
		HX_STACK_LINE(322)
		::String tmp21 = type;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(322)
		::String tmp22 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(322)
		::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(322)
		::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(322)
		tmp20 = (tmp21 == tmp24);
	}
	else{
		HX_STACK_LINE(316)
		tmp20 = true;
	}
	HX_STACK_LINE(316)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(316)
	bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(316)
	bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(316)
	if ((tmp22)){
		HX_STACK_LINE(324)
		::String tmp24 = type;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(324)
		::String tmp25 = HX_HCSTRING("haxeui_mouseDown","\x62","\x19","\x35","\x57");		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(324)
		::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(324)
		::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(324)
		tmp23 = (tmp24 == tmp27);
	}
	else{
		HX_STACK_LINE(316)
		tmp23 = true;
	}
	HX_STACK_LINE(316)
	bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(316)
	bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(316)
	bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(316)
	if ((tmp25)){
		HX_STACK_LINE(325)
		::String tmp27 = type;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(325)
		::String tmp28 = HX_HCSTRING("haxeui_mouseMove","\x11","\x04","\x28","\x5d");		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(325)
		::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(325)
		::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(325)
		tmp26 = (tmp27 == tmp30);
	}
	else{
		HX_STACK_LINE(316)
		tmp26 = true;
	}
	HX_STACK_LINE(316)
	bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(316)
	bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(316)
	bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(316)
	if ((tmp28)){
		HX_STACK_LINE(326)
		::String tmp30 = type;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(326)
		::String tmp31 = HX_HCSTRING("haxeui_mouseOver","\x54","\xb2","\x7f","\x5e");		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(326)
		::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(326)
		::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(326)
		tmp29 = (tmp30 == tmp33);
	}
	else{
		HX_STACK_LINE(316)
		tmp29 = true;
	}
	HX_STACK_LINE(316)
	bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(316)
	bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(316)
	bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(316)
	if ((tmp31)){
		HX_STACK_LINE(327)
		::String tmp33 = type;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(327)
		::String tmp34 = HX_HCSTRING("haxeui_mouseOut","\x8e","\x9f","\x8c","\x9c");		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(327)
		::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(327)
		::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(327)
		tmp32 = (tmp33 == tmp36);
	}
	else{
		HX_STACK_LINE(316)
		tmp32 = true;
	}
	HX_STACK_LINE(316)
	bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(316)
	bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(316)
	bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(316)
	if ((tmp34)){
		HX_STACK_LINE(328)
		::String tmp36 = type;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(328)
		::String tmp37 = HX_HCSTRING("haxeui_mouseUp","\x5b","\x47","\x0d","\x8f");		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(328)
		::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(328)
		::String tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(328)
		tmp35 = (tmp36 == tmp39);
	}
	else{
		HX_STACK_LINE(316)
		tmp35 = true;
	}
	HX_STACK_LINE(316)
	bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(316)
	bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(316)
	if ((tmp36)){
		HX_STACK_LINE(329)
		::String tmp38 = type;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(329)
		::String tmp39 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(329)
		::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(329)
		tmp37 = (tmp38 == tmp40);
	}
	else{
		HX_STACK_LINE(316)
		tmp37 = true;
	}
	HX_STACK_LINE(316)
	return tmp37;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,disablableEventType,return )

Void Component_obj::_onComponentMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseDown",0x2ee9a3aa,"haxe.ui.toolkit.core.Component._onComponentMouseDown","haxe/ui/toolkit/core/Component.hx",337,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(338)
		bool tmp = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDraggable >());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		if ((tmp)){
			HX_STACK_LINE(339)
			::haxe::ui::toolkit::core::interfaces::IDraggable tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(339)
			tmp1 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDraggable >::cast(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(339)
			::openfl::_legacy::events::MouseEvent tmp2 = event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			bool tmp3 = tmp1->allowDrag(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			if ((tmp4)){
				HX_STACK_LINE(340)
				return null();
			}
		}
		HX_STACK_LINE(344)
		Float tmp1 = event->stageX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		Float tmp2 = this->get_stageX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		Float tmp4 = event->stageY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		Float tmp5 = this->get_stageY();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(344)
		::openfl::_legacy::geom::Point tmp7 = ::openfl::_legacy::geom::Point_obj::__new(tmp3,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(344)
		this->mouseDownPos = tmp7;
		HX_STACK_LINE(345)
		::haxe::ui::toolkit::core::Root tmp8 = this->get_root();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(345)
		::String tmp9 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		Dynamic tmp10 = this->_onComponentMouseMove_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
		HX_STACK_LINE(346)
		::haxe::ui::toolkit::core::Root tmp11 = this->get_root();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(346)
		::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(346)
		Dynamic tmp13 = this->_onComponentMouseUp_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(346)
		tmp11->addEventListener(tmp12,tmp13,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseDown,(void))

Void Component_obj::_onComponentMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseUp",0xe3c12fa3,"haxe.ui.toolkit.core.Component._onComponentMouseUp","haxe/ui/toolkit/core/Component.hx",349,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(350)
		::haxe::ui::toolkit::core::Root tmp = this->get_root();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		Dynamic tmp2 = this->_onComponentMouseMove_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(351)
		::haxe::ui::toolkit::core::Root tmp3 = this->get_root();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		Dynamic tmp5 = this->_onComponentMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		tmp3->removeEventListener(tmp4,tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseUp,(void))

Void Component_obj::_onComponentMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseMove",0x34dc8e59,"haxe.ui.toolkit.core.Component._onComponentMouseMove","haxe/ui/toolkit/core/Component.hx",354,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(355)
		Float tmp = event->stageX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		::openfl::_legacy::geom::Point tmp1 = this->mouseDownPos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		this->set_x(tmp3);
		HX_STACK_LINE(356)
		Float tmp4 = event->stageY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		::openfl::_legacy::geom::Point tmp5 = this->mouseDownPos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(356)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(356)
		this->set_y(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseMove,(void))

Void Component_obj::addScriptlet( ::String scriptlet){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","addScriptlet",0xa8b4846d,"haxe.ui.toolkit.core.Component.addScriptlet","haxe/ui/toolkit/core/Component.hx",362,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scriptlet,"scriptlet")
		HX_STACK_LINE(363)
		bool found = false;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(364)
		::haxe::ui::toolkit::core::Component item = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(365)
		while((true)){
			HX_STACK_LINE(365)
			bool tmp = (item != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(365)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(365)
			if ((tmp1)){
				HX_STACK_LINE(365)
				break;
			}
			HX_STACK_LINE(366)
			::String tmp2 = item->get_scriptletSource();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			if ((tmp3)){
				HX_STACK_LINE(367)
				found = true;
				HX_STACK_LINE(368)
				break;
			}
			HX_STACK_LINE(370)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = item->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(370)
			item = ((::haxe::ui::toolkit::core::Component)(tmp4));
		}
		HX_STACK_LINE(372)
		bool tmp = (found == false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		if ((tmp)){
			HX_STACK_LINE(373)
			item = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(375)
		bool tmp1 = (item != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		if ((tmp1)){
			HX_STACK_LINE(376)
			::String tmp2 = item->get_scriptletSource();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			if ((tmp3)){
				HX_STACK_LINE(377)
				item->set_scriptletSource(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::haxe::ui::toolkit::core::Component _g = item;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(379)
				::String tmp4 = _g->get_scriptletSource();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(379)
				::String tmp5 = scriptlet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(379)
				::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(379)
				_g->set_scriptletSource(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,addScriptlet,(void))

::haxe::ui::toolkit::hscript::ScriptInterp Component_obj::findInterp( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","findInterp",0x8a7c978b,"haxe.ui.toolkit.core.Component.findInterp","haxe/ui/toolkit/core/Component.hx",383,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(384)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(385)
	::haxe::ui::toolkit::core::Component item = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(item,"item");
	HX_STACK_LINE(386)
	while((true)){
		HX_STACK_LINE(386)
		bool tmp = (item != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		if ((tmp1)){
			HX_STACK_LINE(386)
			break;
		}
		HX_STACK_LINE(387)
		bool tmp2 = (item->_interp != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		if ((tmp2)){
			HX_STACK_LINE(388)
			found = true;
			HX_STACK_LINE(389)
			break;
		}
		HX_STACK_LINE(391)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = item->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		item = ((::haxe::ui::toolkit::core::Component)(tmp3));
	}
	HX_STACK_LINE(393)
	bool tmp = (found == false);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	if ((tmp)){
		HX_STACK_LINE(394)
		return null();
	}
	HX_STACK_LINE(396)
	::haxe::ui::toolkit::hscript::ScriptInterp tmp1 = item->_interp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(396)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,findInterp,return )

Void Component_obj::executeScriptletExpr( ::String expr){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","executeScriptletExpr",0x6efe3aae,"haxe.ui.toolkit.core.Component.executeScriptletExpr","haxe/ui/toolkit/core/Component.hx",400,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expr,"expr")
		HX_STACK_LINE(400)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(401)
			::hscript::Parser tmp = ::hscript::Parser_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(401)
			::hscript::Parser parser = tmp;		HX_STACK_VAR(parser,"parser");
			HX_STACK_LINE(402)
			::String tmp1 = expr;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(402)
			::hscript::Expr tmp2 = parser->parseString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(402)
			::hscript::Expr line = tmp2;		HX_STACK_VAR(line,"line");
			HX_STACK_LINE(403)
			::haxe::ui::toolkit::hscript::ScriptInterp tmp3 = this->findInterp();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(403)
			::haxe::ui::toolkit::hscript::ScriptInterp interp = tmp3;		HX_STACK_VAR(interp,"interp");
			HX_STACK_LINE(404)
			interp->variables->set(HX_HCSTRING("this","\x5e","\x06","\xfc","\x4c"),hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(405)
			::hscript::Expr tmp4 = line;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(405)
			interp->expr(tmp4);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(407)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(407)
					::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(407)
					::String tmp2 = (HX_HCSTRING("Problem executing scriptlet: ","\x47","\x41","\x18","\x6f") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(407)
					Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Component.hx","\x41","\xf2","\xe4","\xee"),407,HX_HCSTRING("haxe.ui.toolkit.core.Component","\x10","\x17","\x45","\x40"),HX_HCSTRING("executeScriptletExpr","\x90","\xa0","\x03","\x69"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(407)
					::haxe::Log_obj::trace(tmp2,tmp3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,executeScriptletExpr,(void))

Void Component_obj::addScriptletEventHandler( ::String event,::String scriptlet){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","addScriptletEventHandler",0x789ce6dd,"haxe.ui.toolkit.core.Component.addScriptletEventHandler","haxe/ui/toolkit/core/Component.hx",411,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(scriptlet,"scriptlet")
		HX_STACK_LINE(411)
		::haxe::ui::toolkit::core::Component _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		::String tmp = (HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08") + event);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(412)
		event = tmp;
		HX_STACK_LINE(413)
		::String tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::core::Component,_g,::String,scriptlet)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/core/Component.hx",413,0xbd12176e)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(414)
				::String tmp2 = scriptlet;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(414)
				_g->executeScriptletExpr(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(413)
		this->addEventListener(tmp1, Dynamic(new _Function_1_1(_g,scriptlet)),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,addScriptletEventHandler,(void))

::String Component_obj::get_scriptletSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_scriptletSource",0xe069c264,"haxe.ui.toolkit.core.Component.get_scriptletSource","haxe/ui/toolkit/core/Component.hx",420,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(421)
	::String tmp = this->_scriptletSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_scriptletSource,return )

::String Component_obj::set_scriptletSource( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_scriptletSource",0x1d06b570,"haxe.ui.toolkit.core.Component.set_scriptletSource","haxe/ui/toolkit/core/Component.hx",423,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(424)
	this->_scriptletSource = value;
	HX_STACK_LINE(425)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(425)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_scriptletSource,return )

Void Component_obj::initScriplet( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","initScriplet",0x3dcd4080,"haxe.ui.toolkit.core.Component.initScriplet","haxe/ui/toolkit/core/Component.hx",429,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(430)
		::String tmp = this->_scriptletSource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		if ((tmp1)){
			HX_STACK_LINE(431)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(432)
				::hscript::Parser tmp2 = ::hscript::Parser_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(432)
				::hscript::Parser parser = tmp2;		HX_STACK_VAR(parser,"parser");
				HX_STACK_LINE(433)
				::String tmp3 = this->_scriptletSource;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(433)
				::hscript::Expr tmp4 = parser->parseString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(433)
				::hscript::Expr program = tmp4;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(434)
				::haxe::ui::toolkit::hscript::ScriptInterp tmp5 = ::haxe::ui::toolkit::hscript::ScriptInterp_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(434)
				this->_interp = tmp5;
				HX_STACK_LINE(436)
				Array< ::haxe::ui::toolkit::core::interfaces::IComponent > comps = this->get_namedComponents();		HX_STACK_VAR(comps,"comps");
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(437)
					while((true)){
						HX_STACK_LINE(437)
						bool tmp6 = (_g < comps->length);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(437)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(437)
						if ((tmp7)){
							HX_STACK_LINE(437)
							break;
						}
						HX_STACK_LINE(437)
						::haxe::ui::toolkit::core::interfaces::IComponent tmp8 = comps->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(437)
						::haxe::ui::toolkit::core::interfaces::IComponent comp = tmp8;		HX_STACK_VAR(comp,"comp");
						HX_STACK_LINE(437)
						++(_g);
						HX_STACK_LINE(438)
						::String tmp9 = comp->get_id();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(438)
						::String tmp10 = ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeHyphens(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(438)
						::String safeId = tmp10;		HX_STACK_VAR(safeId,"safeId");
						HX_STACK_LINE(439)
						::haxe::ui::toolkit::hscript::ScriptInterp tmp11 = this->_interp;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(439)
						::String tmp12 = safeId;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(439)
						::haxe::ui::toolkit::core::interfaces::IComponent tmp13 = comp;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(439)
						tmp11->variables->set(tmp12,tmp13);
					}
				}
				HX_STACK_LINE(441)
				::haxe::ui::toolkit::hscript::ScriptInterp tmp6 = this->_interp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				tmp6->variables->set(HX_HCSTRING("this","\x5e","\x06","\xfc","\x4c"),hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(443)
				::haxe::ui::toolkit::hscript::ScriptInterp tmp7 = this->_interp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(443)
				::hscript::Expr tmp8 = program;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(443)
				tmp7->execute(tmp8);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(445)
						Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(445)
						::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(445)
						::String tmp4 = (HX_HCSTRING("Problem running script: ","\xb3","\x25","\x4c","\x86") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(445)
						Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Component.hx","\x41","\xf2","\xe4","\xee"),445,HX_HCSTRING("haxe.ui.toolkit.core.Component","\x10","\x17","\x45","\x40"),HX_HCSTRING("initScriplet","\x62","\xf4","\x48","\xbf"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(445)
						::haxe::Log_obj::trace(tmp4,tmp5);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,initScriplet,(void))

Array< ::haxe::ui::toolkit::core::interfaces::IComponent > Component_obj::get_namedComponents( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_namedComponents",0x65c9ece8,"haxe.ui.toolkit.core.Component.get_namedComponents","haxe/ui/toolkit/core/Component.hx",451,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	Array< ::haxe::ui::toolkit::core::interfaces::IComponent > list = Array_obj< ::haxe::ui::toolkit::core::interfaces::IComponent >::__new();		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(453)
	::haxe::ui::toolkit::core::Component_obj::addNamedComponentsFrom(hx::ObjectPtr<OBJ_>(this),list);
	HX_STACK_LINE(454)
	return list;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_namedComponents,return )

::haxe::ui::toolkit::core::DisplayObject Component_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","clone",0xf5d56f7f,"haxe.ui.toolkit.core.Component.clone","src/haxe/ui/toolkit/core/Component.hx",1,0x655bdc43)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StyleableDisplayObject tmp = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component c = ((::haxe::ui::toolkit::core::Component)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::String tmp1 = this->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_text(tmp1);
	HX_STACK_LINE(4)
	bool tmp2 = this->get_disabled();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_disabled(tmp2);
	HX_STACK_LINE(5)
	Dynamic tmp3 = this->userData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->userData = tmp3;
	HX_STACK_LINE(6)
	Dynamic tmp4 = this->get_value();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_value(tmp4);
	HX_STACK_LINE(7)
	Dynamic tmp5 = this->get_toolTip();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	c->set_toolTip(tmp5);
	HX_STACK_LINE(8)
	::haxe::ui::toolkit::core::Component tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(8)
	return tmp6;
}


::haxe::ui::toolkit::core::DisplayObject Component_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","self",0x095c89aa,"haxe.ui.toolkit.core.Component.self","src/haxe/ui/toolkit/core/Component.hx",1,0x655bdc43)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


Void Component_obj::addNamedComponentsFrom( ::haxe::ui::toolkit::core::interfaces::IComponent parent,Array< ::haxe::ui::toolkit::core::interfaces::IComponent > list){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","addNamedComponentsFrom",0x8d2e7b36,"haxe.ui.toolkit.core.Component.addNamedComponentsFrom","haxe/ui/toolkit/core/Component.hx",457,0xbd12176e)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(458)
		bool tmp = (parent == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		if ((tmp)){
			HX_STACK_LINE(459)
			return null();
		}
		HX_STACK_LINE(462)
		::String tmp1 = parent->get_id();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		if ((tmp2)){
			HX_STACK_LINE(463)
			::haxe::ui::toolkit::core::interfaces::IComponent tmp3 = parent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(463)
			list->push(tmp3);
		}
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(466)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = parent->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(466)
			while((true)){
				HX_STACK_LINE(466)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(466)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(466)
				if ((tmp4)){
					HX_STACK_LINE(466)
					break;
				}
				HX_STACK_LINE(466)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(466)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(466)
				++(_g);
				HX_STACK_LINE(467)
				::haxe::ui::toolkit::core::interfaces::IComponent tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(467)
				tmp6 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IComponent >::cast(child);
				HX_STACK_LINE(467)
				::haxe::ui::toolkit::core::Component_obj::addNamedComponentsFrom(tmp6,list);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Component_obj,addNamedComponentsFrom,(void))


Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_clipContent,"_clipContent");
	HX_MARK_MEMBER_NAME(_disabled,"_disabled");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(_toolTip,"_toolTip");
	HX_MARK_MEMBER_NAME(toolTipPosition,"toolTipPosition");
	HX_MARK_MEMBER_NAME(toolTipRelativeTo,"toolTipRelativeTo");
	HX_MARK_MEMBER_NAME(toolTipOffsetX,"toolTipOffsetX");
	HX_MARK_MEMBER_NAME(toolTipOffsetY,"toolTipOffsetY");
	HX_MARK_MEMBER_NAME(toolTipCenter,"toolTipCenter");
	HX_MARK_MEMBER_NAME(toolTipFollow,"toolTipFollow");
	HX_MARK_MEMBER_NAME(_toolTipTimer,"_toolTipTimer");
	HX_MARK_MEMBER_NAME(_cachedListeners,"_cachedListeners");
	HX_MARK_MEMBER_NAME(mouseDownPos,"mouseDownPos");
	HX_MARK_MEMBER_NAME(_scriptletSource,"_scriptletSource");
	HX_MARK_MEMBER_NAME(_interp,"_interp");
	HX_MARK_MEMBER_NAME(namedComponents,"namedComponents");
	::haxe::ui::toolkit::core::StyleableDisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_clipContent,"_clipContent");
	HX_VISIT_MEMBER_NAME(_disabled,"_disabled");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(_toolTip,"_toolTip");
	HX_VISIT_MEMBER_NAME(toolTipPosition,"toolTipPosition");
	HX_VISIT_MEMBER_NAME(toolTipRelativeTo,"toolTipRelativeTo");
	HX_VISIT_MEMBER_NAME(toolTipOffsetX,"toolTipOffsetX");
	HX_VISIT_MEMBER_NAME(toolTipOffsetY,"toolTipOffsetY");
	HX_VISIT_MEMBER_NAME(toolTipCenter,"toolTipCenter");
	HX_VISIT_MEMBER_NAME(toolTipFollow,"toolTipFollow");
	HX_VISIT_MEMBER_NAME(_toolTipTimer,"_toolTipTimer");
	HX_VISIT_MEMBER_NAME(_cachedListeners,"_cachedListeners");
	HX_VISIT_MEMBER_NAME(mouseDownPos,"mouseDownPos");
	HX_VISIT_MEMBER_NAME(_scriptletSource,"_scriptletSource");
	HX_VISIT_MEMBER_NAME(_interp,"_interp");
	HX_VISIT_MEMBER_NAME(namedComponents,"namedComponents");
	::haxe::ui::toolkit::core::StyleableDisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Component_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return get_value(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toolTip") ) { if (inCallProp == hx::paccAlways) return get_toolTip(); }
		if (HX_FIELD_EQ(inName,"_interp") ) { return _interp; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { if (inCallProp == hx::paccAlways) return get_disabled(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"_toolTip") ) { return _toolTip; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disabled") ) { return _disabled; }
		if (HX_FIELD_EQ(inName,"clipWidth") ) { if (inCallProp == hx::paccAlways) return get_clipWidth(); }
		if (HX_FIELD_EQ(inName,"clearClip") ) { return clearClip_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"clipHeight") ) { if (inCallProp == hx::paccAlways) return get_clipHeight(); }
		if (HX_FIELD_EQ(inName,"findInterp") ) { return findInterp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clipContent") ) { if (inCallProp == hx::paccAlways) return get_clipContent(); }
		if (HX_FIELD_EQ(inName,"get_toolTip") ) { return get_toolTip_dyn(); }
		if (HX_FIELD_EQ(inName,"set_toolTip") ) { return set_toolTip_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clipContent") ) { return _clipContent; }
		if (HX_FIELD_EQ(inName,"get_disabled") ) { return get_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDownPos") ) { return mouseDownPos; }
		if (HX_FIELD_EQ(inName,"addScriptlet") ) { return addScriptlet_dyn(); }
		if (HX_FIELD_EQ(inName,"initScriplet") ) { return initScriplet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_clipWidth") ) { return get_clipWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipWidth") ) { return set_clipWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"toolTipCenter") ) { return toolTipCenter; }
		if (HX_FIELD_EQ(inName,"toolTipFollow") ) { return toolTipFollow; }
		if (HX_FIELD_EQ(inName,"_toolTipTimer") ) { return _toolTipTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postInitialize") ) { return postInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clipHeight") ) { return get_clipHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipHeight") ) { return set_clipHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"toolTipOffsetX") ) { return toolTipOffsetX; }
		if (HX_FIELD_EQ(inName,"toolTipOffsetY") ) { return toolTipOffsetY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_clipContent") ) { return get_clipContent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipContent") ) { return set_clipContent_dyn(); }
		if (HX_FIELD_EQ(inName,"toolTipPosition") ) { return toolTipPosition; }
		if (HX_FIELD_EQ(inName,"scriptletSource") ) { if (inCallProp == hx::paccAlways) return get_scriptletSource(); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { return inCallProp == hx::paccAlways ? get_namedComponents() : namedComponents; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListeners") ) { return _cachedListeners; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"_scriptletSource") ) { return _scriptletSource; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"toolTipRelativeTo") ) { return toolTipRelativeTo; }
		if (HX_FIELD_EQ(inName,"_onComponentClick") ) { return _onComponentClick_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"disablableEventType") ) { return disablableEventType_dyn(); }
		if (HX_FIELD_EQ(inName,"_onComponentMouseUp") ) { return _onComponentMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scriptletSource") ) { return get_scriptletSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scriptletSource") ) { return set_scriptletSource_dyn(); }
		if (HX_FIELD_EQ(inName,"get_namedComponents") ) { return get_namedComponents_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onComponentMouseOut") ) { return _onComponentMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"executeScriptletExpr") ) { return executeScriptletExpr_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_onComponentMouseOver") ) { return _onComponentMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"_onComponentMouseDown") ) { return _onComponentMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_onComponentMouseMove") ) { return _onComponentMouseMove_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"addScriptletEventHandler") ) { return addScriptletEventHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Component_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"addNamedComponentsFrom") ) { outValue = addNamedComponentsFrom_dyn(); return true;  }
	}
	return false;
}

Dynamic Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toolTip") ) { if (inCallProp == hx::paccAlways) return set_toolTip(inValue); }
		if (HX_FIELD_EQ(inName,"_interp") ) { _interp=inValue.Cast< ::haxe::ui::toolkit::hscript::ScriptInterp >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { if (inCallProp == hx::paccAlways) return set_disabled(inValue); }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toolTip") ) { _toolTip=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disabled") ) { _disabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clipWidth") ) { if (inCallProp == hx::paccAlways) return set_clipWidth(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clipHeight") ) { if (inCallProp == hx::paccAlways) return set_clipHeight(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clipContent") ) { if (inCallProp == hx::paccAlways) return set_clipContent(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clipContent") ) { _clipContent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDownPos") ) { mouseDownPos=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toolTipCenter") ) { toolTipCenter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toolTipFollow") ) { toolTipFollow=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toolTipTimer") ) { _toolTipTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toolTipOffsetX") ) { toolTipOffsetX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toolTipOffsetY") ) { toolTipOffsetY=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toolTipPosition") ) { toolTipPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptletSource") ) { if (inCallProp == hx::paccAlways) return set_scriptletSource(inValue); }
		if (HX_FIELD_EQ(inName,"namedComponents") ) { namedComponents=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IComponent > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListeners") ) { _cachedListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scriptletSource") ) { _scriptletSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"toolTipRelativeTo") ) { toolTipRelativeTo=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Component_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_clipContent","\x4a","\x6e","\x56","\xcd"));
	outFields->push(HX_HCSTRING("_disabled","\xdb","\x38","\x9a","\xc3"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("clipWidth","\x16","\x05","\x7a","\xe8"));
	outFields->push(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38"));
	outFields->push(HX_HCSTRING("clipContent","\x49","\xc0","\x4c","\x67"));
	outFields->push(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("_toolTip","\x64","\xbe","\x2c","\xa4"));
	outFields->push(HX_HCSTRING("toolTip","\xe3","\x64","\x74","\x6a"));
	outFields->push(HX_HCSTRING("toolTipPosition","\xac","\xdc","\x34","\xfc"));
	outFields->push(HX_HCSTRING("toolTipRelativeTo","\x2a","\x54","\x5a","\x83"));
	outFields->push(HX_HCSTRING("toolTipOffsetX","\xc2","\x7e","\x11","\x9d"));
	outFields->push(HX_HCSTRING("toolTipOffsetY","\xc3","\x7e","\x11","\x9d"));
	outFields->push(HX_HCSTRING("toolTipCenter","\x18","\x4b","\xcf","\x35"));
	outFields->push(HX_HCSTRING("toolTipFollow","\xb4","\xb6","\x8a","\x29"));
	outFields->push(HX_HCSTRING("_toolTipTimer","\xc1","\xc6","\xf5","\x29"));
	outFields->push(HX_HCSTRING("_cachedListeners","\xbe","\x1b","\x48","\x85"));
	outFields->push(HX_HCSTRING("mouseDownPos","\xad","\x56","\x46","\x4f"));
	outFields->push(HX_HCSTRING("_scriptletSource","\x2c","\xa2","\x77","\x78"));
	outFields->push(HX_HCSTRING("scriptletSource","\xab","\x5f","\x98","\x8d"));
	outFields->push(HX_HCSTRING("_interp","\x73","\x8b","\xfd","\x0c"));
	outFields->push(HX_HCSTRING("namedComponents","\x2f","\x8a","\xf8","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Component_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsBool,(int)offsetof(Component_obj,_clipContent),HX_HCSTRING("_clipContent","\x4a","\x6e","\x56","\xcd")},
	{hx::fsBool,(int)offsetof(Component_obj,_disabled),HX_HCSTRING("_disabled","\xdb","\x38","\x9a","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Component_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Component_obj,_toolTip),HX_HCSTRING("_toolTip","\x64","\xbe","\x2c","\xa4")},
	{hx::fsString,(int)offsetof(Component_obj,toolTipPosition),HX_HCSTRING("toolTipPosition","\xac","\xdc","\x34","\xfc")},
	{hx::fsString,(int)offsetof(Component_obj,toolTipRelativeTo),HX_HCSTRING("toolTipRelativeTo","\x2a","\x54","\x5a","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Component_obj,toolTipOffsetX),HX_HCSTRING("toolTipOffsetX","\xc2","\x7e","\x11","\x9d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Component_obj,toolTipOffsetY),HX_HCSTRING("toolTipOffsetY","\xc3","\x7e","\x11","\x9d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Component_obj,toolTipCenter),HX_HCSTRING("toolTipCenter","\x18","\x4b","\xcf","\x35")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Component_obj,toolTipFollow),HX_HCSTRING("toolTipFollow","\xb4","\xb6","\x8a","\x29")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Component_obj,_toolTipTimer),HX_HCSTRING("_toolTipTimer","\xc1","\xc6","\xf5","\x29")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Component_obj,_cachedListeners),HX_HCSTRING("_cachedListeners","\xbe","\x1b","\x48","\x85")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Component_obj,mouseDownPos),HX_HCSTRING("mouseDownPos","\xad","\x56","\x46","\x4f")},
	{hx::fsString,(int)offsetof(Component_obj,_scriptletSource),HX_HCSTRING("_scriptletSource","\x2c","\xa2","\x77","\x78")},
	{hx::fsObject /*::haxe::ui::toolkit::hscript::ScriptInterp*/ ,(int)offsetof(Component_obj,_interp),HX_HCSTRING("_interp","\x73","\x8b","\xfd","\x0c")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IComponent >*/ ,(int)offsetof(Component_obj,namedComponents),HX_HCSTRING("namedComponents","\x2f","\x8a","\xf8","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_clipContent","\x4a","\x6e","\x56","\xcd"),
	HX_HCSTRING("_disabled","\xdb","\x38","\x9a","\xc3"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("postInitialize","\xd0","\xf1","\x7d","\x3b"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_clipWidth","\xed","\xd8","\xdd","\xa9"),
	HX_HCSTRING("set_clipWidth","\xf9","\xba","\xe3","\xee"),
	HX_HCSTRING("get_clipHeight","\x20","\x6f","\x8f","\xae"),
	HX_HCSTRING("set_clipHeight","\x94","\x57","\xaf","\xce"),
	HX_HCSTRING("get_clipContent","\xe0","\x77","\x2e","\x28"),
	HX_HCSTRING("set_clipContent","\xec","\xf4","\xf9","\x23"),
	HX_HCSTRING("clearClip","\xfd","\x56","\x83","\xb5"),
	HX_HCSTRING("get_disabled","\x85","\xf5","\x1d","\x31"),
	HX_HCSTRING("set_disabled","\xf9","\x18","\x17","\x46"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("_toolTip","\x64","\xbe","\x2c","\xa4"),
	HX_HCSTRING("toolTipPosition","\xac","\xdc","\x34","\xfc"),
	HX_HCSTRING("toolTipRelativeTo","\x2a","\x54","\x5a","\x83"),
	HX_HCSTRING("toolTipOffsetX","\xc2","\x7e","\x11","\x9d"),
	HX_HCSTRING("toolTipOffsetY","\xc3","\x7e","\x11","\x9d"),
	HX_HCSTRING("toolTipCenter","\x18","\x4b","\xcf","\x35"),
	HX_HCSTRING("toolTipFollow","\xb4","\xb6","\x8a","\x29"),
	HX_HCSTRING("get_toolTip","\xfa","\xc4","\x6e","\xf0"),
	HX_HCSTRING("set_toolTip","\x06","\xcc","\xdb","\xfa"),
	HX_HCSTRING("_toolTipTimer","\xc1","\xc6","\xf5","\x29"),
	HX_HCSTRING("_onComponentMouseOver","\x7a","\xfc","\xe7","\x00"),
	HX_HCSTRING("_onComponentMouseOut","\x28","\x5c","\x49","\x5f"),
	HX_HCSTRING("_onComponentClick","\x29","\x2a","\x36","\x3c"),
	HX_HCSTRING("_cachedListeners","\xbe","\x1b","\x48","\x85"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("disablableEventType","\xfd","\x0c","\xa9","\x6c"),
	HX_HCSTRING("mouseDownPos","\xad","\x56","\x46","\x4f"),
	HX_HCSTRING("_onComponentMouseDown","\x88","\x63","\x9d","\xf9"),
	HX_HCSTRING("_onComponentMouseUp","\x01","\x9c","\xfa","\x1b"),
	HX_HCSTRING("_onComponentMouseMove","\x37","\x4e","\x90","\xff"),
	HX_HCSTRING("addScriptlet","\x4f","\x38","\x30","\x2a"),
	HX_HCSTRING("findInterp","\xed","\x2e","\xda","\xc7"),
	HX_HCSTRING("executeScriptletExpr","\x90","\xa0","\x03","\x69"),
	HX_HCSTRING("addScriptletEventHandler","\xbf","\xe5","\x47","\xf2"),
	HX_HCSTRING("_scriptletSource","\x2c","\xa2","\x77","\x78"),
	HX_HCSTRING("get_scriptletSource","\xc2","\x2e","\xa3","\x18"),
	HX_HCSTRING("set_scriptletSource","\xce","\x21","\x40","\x55"),
	HX_HCSTRING("_interp","\x73","\x8b","\xfd","\x0c"),
	HX_HCSTRING("initScriplet","\x62","\xf4","\x48","\xbf"),
	HX_HCSTRING("namedComponents","\x2f","\x8a","\xf8","\x12"),
	HX_HCSTRING("get_namedComponents","\x46","\x59","\x03","\x9e"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#endif

hx::Class Component_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("addNamedComponentsFrom","\x98","\x9d","\xc2","\x1f"),
	::String(null()) };

void Component_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Component","\x10","\x17","\x45","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Component_obj::__GetStatic;
	__mClass->mSetStaticField = &Component_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Component_obj >;
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
