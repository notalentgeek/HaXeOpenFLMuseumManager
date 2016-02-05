#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_SpriteContainer
#include <haxe/ui/toolkit/containers/SpriteContainer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Types
#include <haxe/ui/toolkit/util/Types.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void SpriteContainer_obj::__construct(::openfl::_legacy::display::Sprite childSprite)
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","new",0x157a5b34,"haxe.ui.toolkit.containers.SpriteContainer.new","haxe/ui/toolkit/containers/SpriteContainer.hx",14,0x8eb9a1bc)
HX_STACK_THIS(this)
HX_STACK_ARG(childSprite,"childSprite")
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	::openfl::_legacy::display::Sprite tmp = childSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	this->set_childSprite(tmp);
	HX_STACK_LINE(17)
	this->set_autoSize(true);
}
;
	return null();
}

//SpriteContainer_obj::~SpriteContainer_obj() { }

Dynamic SpriteContainer_obj::__CreateEmpty() { return  new SpriteContainer_obj; }
hx::ObjectPtr< SpriteContainer_obj > SpriteContainer_obj::__new(::openfl::_legacy::display::Sprite childSprite)
{  hx::ObjectPtr< SpriteContainer_obj > _result_ = new SpriteContainer_obj();
	_result_->__construct(childSprite);
	return _result_;}

Dynamic SpriteContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteContainer_obj > _result_ = new SpriteContainer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *SpriteContainer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

SpriteContainer_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< SpriteContainer_obj >(this); }
Void SpriteContainer_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","initialize",0xf7a068fc,"haxe.ui.toolkit.containers.SpriteContainer.initialize","haxe/ui/toolkit/containers/SpriteContainer.hx",20,0x8eb9a1bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->super::initialize();
		HX_STACK_LINE(22)
		::openfl::_legacy::display::Sprite tmp = this->_childSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		if ((tmp1)){
			HX_STACK_LINE(23)
			bool tmp2 = this->get_autoSize();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			if ((tmp3)){
				HX_STACK_LINE(24)
				::openfl::_legacy::display::Sprite tmp4 = this->_childSprite;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(24)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp5 = this->get_layout();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(24)
				::openfl::_legacy::geom::Rectangle tmp6 = tmp5->get_padding();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(24)
				Float tmp7 = tmp6->get_left();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(24)
				tmp4->set_x(tmp7);
				HX_STACK_LINE(25)
				::openfl::_legacy::display::Sprite tmp8 = this->_childSprite;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(25)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp9 = this->get_layout();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(25)
				::openfl::_legacy::geom::Rectangle tmp10 = tmp9->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(25)
				Float tmp11 = tmp10->get_top();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(25)
				tmp8->set_y(tmp11);
				HX_STACK_LINE(26)
				::openfl::_legacy::display::Sprite tmp12 = this->_childSprite;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(26)
				Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(26)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp14 = this->get_layout();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(26)
				::openfl::_legacy::geom::Rectangle tmp15 = tmp14->get_padding();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(26)
				Float tmp16 = tmp15->get_left();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(26)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp17 = this->get_layout();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(26)
				::openfl::_legacy::geom::Rectangle tmp18 = tmp17->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(26)
				Float tmp19 = tmp18->get_right();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(26)
				Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(26)
				Float tmp21 = (tmp13 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(26)
				this->set_width(tmp21);
				HX_STACK_LINE(27)
				::openfl::_legacy::display::Sprite tmp22 = this->_childSprite;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(27)
				Float tmp23 = tmp22->get_height();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(27)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp24 = this->get_layout();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(27)
				::openfl::_legacy::geom::Rectangle tmp25 = tmp24->get_padding();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(27)
				Float tmp26 = tmp25->get_top();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(27)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp27 = this->get_layout();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(27)
				::openfl::_legacy::geom::Rectangle tmp28 = tmp27->get_padding();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(27)
				Float tmp29 = tmp28->get_bottom();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(27)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(27)
				Float tmp31 = (tmp23 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(27)
				this->set_height(tmp31);
			}
		}
	}
return null();
}


Void SpriteContainer_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","dispose",0xb8730573,"haxe.ui.toolkit.containers.SpriteContainer.dispose","haxe/ui/toolkit/containers/SpriteContainer.hx",32,0x8eb9a1bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::openfl::_legacy::display::Sprite tmp = this->_childSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(34)
			::openfl::_legacy::display::Sprite tmp2 = this->get_sprite();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			::openfl::_legacy::display::Sprite tmp3 = this->_childSprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			tmp2->removeChild(tmp3);
		}
		HX_STACK_LINE(36)
		this->super::dispose();
	}
return null();
}


Void SpriteContainer_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","invalidate",0x920f5127,"haxe.ui.toolkit.containers.SpriteContainer.invalidate","haxe/ui/toolkit/containers/SpriteContainer.hx",39,0x8eb9a1bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(40)
		int tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		this->super::invalidate(tmp,tmp1);
		HX_STACK_LINE(42)
		int tmp2 = (int(type) & int((int)256));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3 = (tmp2 == (int)256);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(43)
			bool tmp4 = this->_stretch;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			if ((tmp5)){
				HX_STACK_LINE(43)
				::openfl::_legacy::display::Sprite tmp7 = this->_childSprite;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				::openfl::_legacy::display::Sprite tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(43)
				tmp6 = (tmp8 != null());
			}
			else{
				HX_STACK_LINE(43)
				tmp6 = false;
			}
			HX_STACK_LINE(43)
			if ((tmp6)){
				HX_STACK_LINE(44)
				::openfl::_legacy::display::Sprite tmp7 = this->_childSprite;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(44)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp8 = this->get_layout();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(44)
				::openfl::_legacy::geom::Rectangle tmp9 = tmp8->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(44)
				Float tmp10 = tmp9->get_left();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(44)
				tmp7->set_x(tmp10);
				HX_STACK_LINE(45)
				::openfl::_legacy::display::Sprite tmp11 = this->_childSprite;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp12 = this->get_layout();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				::openfl::_legacy::geom::Rectangle tmp13 = tmp12->get_padding();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				Float tmp14 = tmp13->get_top();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				tmp11->set_y(tmp14);
				HX_STACK_LINE(46)
				::openfl::_legacy::display::Sprite tmp15 = this->_childSprite;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(46)
				Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(46)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp17 = this->get_layout();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(46)
				::openfl::_legacy::geom::Rectangle tmp18 = tmp17->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(46)
				Float tmp19 = tmp18->get_left();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(46)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp20 = this->get_layout();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				::openfl::_legacy::geom::Rectangle tmp21 = tmp20->get_padding();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(46)
				Float tmp22 = tmp21->get_right();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(46)
				Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(46)
				Float tmp24 = (tmp16 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(46)
				tmp15->set_width(tmp24);
				HX_STACK_LINE(47)
				::openfl::_legacy::display::Sprite tmp25 = this->_childSprite;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(47)
				Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(47)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp27 = this->get_layout();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(47)
				::openfl::_legacy::geom::Rectangle tmp28 = tmp27->get_padding();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(47)
				Float tmp29 = tmp28->get_top();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(47)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp30 = this->get_layout();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(47)
				::openfl::_legacy::geom::Rectangle tmp31 = tmp30->get_padding();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(47)
				Float tmp32 = tmp31->get_bottom();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(47)
				Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(47)
				Float tmp34 = (tmp26 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(47)
				tmp25->set_height(tmp34);
			}
		}
	}
return null();
}


::openfl::_legacy::display::Sprite SpriteContainer_obj::get_childSprite( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","get_childSprite",0x4f34472c,"haxe.ui.toolkit.containers.SpriteContainer.get_childSprite","haxe/ui/toolkit/containers/SpriteContainer.hx",54,0x8eb9a1bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::openfl::_legacy::display::Sprite tmp = this->_childSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteContainer_obj,get_childSprite,return )

::openfl::_legacy::display::Sprite SpriteContainer_obj::set_childSprite( ::openfl::_legacy::display::Sprite value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","set_childSprite",0x4affc438,"haxe.ui.toolkit.containers.SpriteContainer.set_childSprite","haxe/ui/toolkit/containers/SpriteContainer.hx",58,0x8eb9a1bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(59)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp)){
		HX_STACK_LINE(59)
		::openfl::_legacy::display::Sprite tmp2 = this->_childSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		::openfl::_legacy::display::Sprite tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(59)
		tmp1 = false;
	}
	HX_STACK_LINE(59)
	if ((tmp1)){
		HX_STACK_LINE(60)
		::openfl::_legacy::display::Sprite tmp2 = this->get_sprite();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::openfl::_legacy::display::Sprite tmp3 = this->_childSprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		tmp2->removeChild(tmp3);
		HX_STACK_LINE(61)
		this->_childSprite = null();
	}
	HX_STACK_LINE(63)
	::openfl::_legacy::display::Sprite tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	::openfl::_legacy::display::Sprite tmp3 = this->_childSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	if ((tmp4)){
		HX_STACK_LINE(64)
		::openfl::_legacy::display::Sprite tmp5 = this->_childSprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		if ((tmp6)){
			HX_STACK_LINE(65)
			::openfl::_legacy::display::Sprite tmp7 = this->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			::openfl::_legacy::display::Sprite tmp8 = this->_childSprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			tmp7->removeChild(tmp8);
		}
		HX_STACK_LINE(67)
		this->_childSprite = value;
		HX_STACK_LINE(68)
		::openfl::_legacy::display::Sprite tmp7 = this->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		::openfl::_legacy::display::Sprite tmp8 = this->_childSprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		tmp7->addChild(tmp8);
		HX_STACK_LINE(69)
		bool tmp9 = this->get_autoSize();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		bool tmp10 = (tmp9 == true);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		if ((tmp10)){
			HX_STACK_LINE(69)
			tmp11 = this->get_ready();
		}
		else{
			HX_STACK_LINE(69)
			tmp11 = false;
		}
		HX_STACK_LINE(69)
		if ((tmp11)){
			HX_STACK_LINE(70)
			::openfl::_legacy::display::Sprite tmp12 = this->_childSprite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp13 = this->get_layout();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Rectangle tmp14 = tmp13->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			Float tmp15 = tmp14->get_left();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(70)
			tmp12->set_x(tmp15);
			HX_STACK_LINE(71)
			::openfl::_legacy::display::Sprite tmp16 = this->_childSprite;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp17 = this->get_layout();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(71)
			::openfl::_legacy::geom::Rectangle tmp18 = tmp17->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(71)
			Float tmp19 = tmp18->get_top();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(71)
			tmp16->set_y(tmp19);
			HX_STACK_LINE(72)
			::openfl::_legacy::display::Sprite tmp20 = this->_childSprite;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(72)
			Float tmp21 = tmp20->get_width();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp22 = this->get_layout();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(72)
			::openfl::_legacy::geom::Rectangle tmp23 = tmp22->get_padding();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(72)
			Float tmp24 = tmp23->get_left();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp25 = this->get_layout();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(72)
			::openfl::_legacy::geom::Rectangle tmp26 = tmp25->get_padding();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(72)
			Float tmp27 = tmp26->get_right();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(72)
			Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(72)
			Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(72)
			this->set_width(tmp29);
			HX_STACK_LINE(73)
			::openfl::_legacy::display::Sprite tmp30 = this->_childSprite;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(73)
			Float tmp31 = tmp30->get_height();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp32 = this->get_layout();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(73)
			::openfl::_legacy::geom::Rectangle tmp33 = tmp32->get_padding();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(73)
			Float tmp34 = tmp33->get_top();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp35 = this->get_layout();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(73)
			::openfl::_legacy::geom::Rectangle tmp36 = tmp35->get_padding();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(73)
			Float tmp37 = tmp36->get_bottom();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(73)
			Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(73)
			Float tmp39 = (tmp31 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(73)
			this->set_height(tmp39);
		}
	}
	HX_STACK_LINE(76)
	::openfl::_legacy::display::Sprite tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteContainer_obj,set_childSprite,return )

::String SpriteContainer_obj::get_spriteClass( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","get_spriteClass",0xfd128a5e,"haxe.ui.toolkit.containers.SpriteContainer.get_spriteClass","haxe/ui/toolkit/containers/SpriteContainer.hx",81,0x8eb9a1bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	::String tmp = this->_spriteClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteContainer_obj,get_spriteClass,return )

::String SpriteContainer_obj::set_spriteClass( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","set_spriteClass",0xf8de076a,"haxe.ui.toolkit.containers.SpriteContainer.set_spriteClass","haxe/ui/toolkit/containers/SpriteContainer.hx",85,0x8eb9a1bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(86)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	if ((tmp)){
		HX_STACK_LINE(87)
		this->set_childSprite(null());
		HX_STACK_LINE(88)
		this->_spriteClass = null();
		HX_STACK_LINE(89)
		::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		return tmp1;
	}
	HX_STACK_LINE(92)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	::String tmp2 = this->_spriteClass;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	if ((tmp3)){
		HX_STACK_LINE(93)
		::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		::hx::Class tmp5 = ::haxe::ui::toolkit::util::Types_obj::resolveClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		::hx::Class cls = tmp5;		HX_STACK_VAR(cls,"cls");
		HX_STACK_LINE(94)
		bool tmp6 = (cls != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		if ((tmp6)){
			HX_STACK_LINE(95)
			::hx::Class tmp7 = cls;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			::openfl::_legacy::display::Sprite tmp8 = ::Type_obj::createInstance(tmp7,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			::openfl::_legacy::display::Sprite inst = tmp8;		HX_STACK_VAR(inst,"inst");
			HX_STACK_LINE(96)
			bool tmp9 = (inst != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			if ((tmp9)){
				HX_STACK_LINE(96)
				::openfl::_legacy::display::Sprite tmp11 = inst;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				::openfl::_legacy::display::Sprite tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				tmp10 = ::Std_obj::is(tmp12,hx::ClassOf< ::openfl::_legacy::display::Sprite >());
			}
			else{
				HX_STACK_LINE(96)
				tmp10 = false;
			}
			HX_STACK_LINE(96)
			if ((tmp10)){
				HX_STACK_LINE(97)
				::openfl::_legacy::display::Sprite tmp11 = inst;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				this->set_childSprite(tmp11);
				HX_STACK_LINE(98)
				this->_spriteClass = value;
			}
		}
	}
	HX_STACK_LINE(103)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteContainer_obj,set_spriteClass,return )

bool SpriteContainer_obj::get_stretch( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","get_stretch",0xf9f91cf0,"haxe.ui.toolkit.containers.SpriteContainer.get_stretch","haxe/ui/toolkit/containers/SpriteContainer.hx",108,0x8eb9a1bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	bool tmp = this->_stretch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteContainer_obj,get_stretch,return )

bool SpriteContainer_obj::set_stretch( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","set_stretch",0x046623fc,"haxe.ui.toolkit.containers.SpriteContainer.set_stretch","haxe/ui/toolkit/containers/SpriteContainer.hx",112,0x8eb9a1bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(113)
	bool tmp = this->_stretch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	if ((tmp2)){
		HX_STACK_LINE(114)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		return tmp3;
	}
	HX_STACK_LINE(116)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	this->_autoSize = tmp4;
	HX_STACK_LINE(117)
	this->_stretch = value;
	HX_STACK_LINE(118)
	this->invalidate((int)256,null());
	HX_STACK_LINE(119)
	bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteContainer_obj,set_stretch,return )

::haxe::ui::toolkit::core::DisplayObject SpriteContainer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","clone",0xdc60fb31,"haxe.ui.toolkit.containers.SpriteContainer.clone","src/haxe/ui/toolkit/containers/SpriteContainer.hx",1,0x69c1d211)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::SpriteContainer c = ((::haxe::ui::toolkit::containers::SpriteContainer)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::openfl::_legacy::display::Sprite tmp1 = this->get_childSprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_childSprite(tmp1);
	HX_STACK_LINE(4)
	::String tmp2 = this->get_spriteClass();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_spriteClass(tmp2);
	HX_STACK_LINE(5)
	bool tmp3 = this->get_stretch();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_stretch(tmp3);
	HX_STACK_LINE(6)
	::haxe::ui::toolkit::containers::SpriteContainer tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	return tmp4;
}


::haxe::ui::toolkit::core::DisplayObject SpriteContainer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.SpriteContainer","self",0xb8e37a38,"haxe.ui.toolkit.containers.SpriteContainer.self","src/haxe/ui/toolkit/containers/SpriteContainer.hx",1,0x69c1d211)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::SpriteContainer tmp = ::haxe::ui::toolkit::containers::SpriteContainer_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



SpriteContainer_obj::SpriteContainer_obj()
{
}

void SpriteContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteContainer);
	HX_MARK_MEMBER_NAME(_childSprite,"_childSprite");
	HX_MARK_MEMBER_NAME(_spriteClass,"_spriteClass");
	HX_MARK_MEMBER_NAME(_stretch,"_stretch");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_childSprite,"_childSprite");
	HX_VISIT_MEMBER_NAME(_spriteClass,"_spriteClass");
	HX_VISIT_MEMBER_NAME(_stretch,"_stretch");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpriteContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"stretch") ) { if (inCallProp == hx::paccAlways) return get_stretch(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stretch") ) { return _stretch; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"childSprite") ) { if (inCallProp == hx::paccAlways) return get_childSprite(); }
		if (HX_FIELD_EQ(inName,"spriteClass") ) { if (inCallProp == hx::paccAlways) return get_spriteClass(); }
		if (HX_FIELD_EQ(inName,"get_stretch") ) { return get_stretch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stretch") ) { return set_stretch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_childSprite") ) { return _childSprite; }
		if (HX_FIELD_EQ(inName,"_spriteClass") ) { return _spriteClass; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_childSprite") ) { return get_childSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"set_childSprite") ) { return set_childSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spriteClass") ) { return get_spriteClass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spriteClass") ) { return set_spriteClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"stretch") ) { if (inCallProp == hx::paccAlways) return set_stretch(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stretch") ) { _stretch=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"childSprite") ) { if (inCallProp == hx::paccAlways) return set_childSprite(inValue); }
		if (HX_FIELD_EQ(inName,"spriteClass") ) { if (inCallProp == hx::paccAlways) return set_spriteClass(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_childSprite") ) { _childSprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spriteClass") ) { _spriteClass=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_childSprite","\xc2","\xc4","\x26","\x37"));
	outFields->push(HX_HCSTRING("_spriteClass","\xf4","\x07","\x05","\xe5"));
	outFields->push(HX_HCSTRING("_stretch","\x86","\x97","\x0b","\x30"));
	outFields->push(HX_HCSTRING("childSprite","\xc1","\x16","\x1d","\xd1"));
	outFields->push(HX_HCSTRING("spriteClass","\xf3","\x59","\xfb","\x7e"));
	outFields->push(HX_HCSTRING("stretch","\x05","\x3e","\x53","\xf6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(SpriteContainer_obj,_childSprite),HX_HCSTRING("_childSprite","\xc2","\xc4","\x26","\x37")},
	{hx::fsString,(int)offsetof(SpriteContainer_obj,_spriteClass),HX_HCSTRING("_spriteClass","\xf4","\x07","\x05","\xe5")},
	{hx::fsBool,(int)offsetof(SpriteContainer_obj,_stretch),HX_HCSTRING("_stretch","\x86","\x97","\x0b","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_childSprite","\xc2","\xc4","\x26","\x37"),
	HX_HCSTRING("_spriteClass","\xf4","\x07","\x05","\xe5"),
	HX_HCSTRING("_stretch","\x86","\x97","\x0b","\x30"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("get_childSprite","\x58","\xce","\xfe","\x91"),
	HX_HCSTRING("set_childSprite","\x64","\x4b","\xca","\x8d"),
	HX_HCSTRING("get_spriteClass","\x8a","\x11","\xdd","\x3f"),
	HX_HCSTRING("set_spriteClass","\x96","\x8e","\xa8","\x3b"),
	HX_HCSTRING("get_stretch","\x1c","\x9e","\x4d","\x7c"),
	HX_HCSTRING("set_stretch","\x28","\xa5","\xba","\x86"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class SpriteContainer_obj::__mClass;

void SpriteContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.SpriteContainer","\x42","\xf1","\xff","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteContainer_obj >;
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
} // end namespace containers
