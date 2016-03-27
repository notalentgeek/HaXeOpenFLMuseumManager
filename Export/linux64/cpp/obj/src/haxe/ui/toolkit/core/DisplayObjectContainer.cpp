#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","new",0x06571b9f,"haxe.ui.toolkit.core.DisplayObjectContainer.new","haxe/ui/toolkit/core/DisplayObjectContainer.hx",13,0x6e0042f1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->_autoSize = false;
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::layout::DefaultLayout tmp = ::haxe::ui::toolkit::layout::DefaultLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->_layout = tmp;
	HX_STACK_LINE(23)
	this->_children = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObjectContainer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

DisplayObjectContainer_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< DisplayObjectContainer_obj >(this); }
DisplayObjectContainer_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< DisplayObjectContainer_obj >(this); }
DisplayObjectContainer_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< DisplayObjectContainer_obj >(this); }
DisplayObjectContainer_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< DisplayObjectContainer_obj >(this); }
Void DisplayObjectContainer_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","initialize",0xd7f15bf1,"haxe.ui.toolkit.core.DisplayObjectContainer.initialize","haxe/ui/toolkit/core/DisplayObjectContainer.hx",29,0x6e0042f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::initialize();
		HX_STACK_LINE(32)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp = this->_layout;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		tmp->set_container(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void DisplayObjectContainer_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","invalidate",0x7260441c,"haxe.ui.toolkit.core.DisplayObjectContainer.invalidate","haxe/ui/toolkit/core/DisplayObjectContainer.hx",35,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(36)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(36)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(36)
			tmp4 = true;
		}
		HX_STACK_LINE(36)
		if ((tmp4)){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(40)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(41)
		this->_invalidating = true;
		HX_STACK_LINE(42)
		int tmp7 = (int(type) & int((int)256));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		bool tmp8 = (tmp7 == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		if ((tmp9)){
			HX_STACK_LINE(43)
			int tmp11 = (int(type) & int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			tmp10 = (tmp12 == (int)1);
		}
		else{
			HX_STACK_LINE(42)
			tmp10 = true;
		}
		HX_STACK_LINE(42)
		if ((tmp10)){
			HX_STACK_LINE(44)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp11 = this->_layout;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(44)
			tmp11->refresh();
		}
		HX_STACK_LINE(46)
		this->_invalidating = false;
		HX_STACK_LINE(48)
		bool tmp11 = (recursive == true);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		if ((tmp11)){
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->_children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				if ((tmp13)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = _g1->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp14;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(50)
				int tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(50)
				bool tmp16 = recursive;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(50)
				child->invalidate(tmp15,tmp16);
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_numChildren",0x2b08cefb,"haxe.ui.toolkit.core.DisplayObjectContainer.get_numChildren","haxe/ui/toolkit/core/DisplayObjectContainer.hx",64,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > arr = this->_children;		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(66)
	int tmp = arr->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > DisplayObjectContainer_obj::get_children( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_children",0xea92a229,"haxe.ui.toolkit.core.DisplayObjectContainer.get_children","haxe/ui/toolkit/core/DisplayObjectContainer.hx",69,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > arr = this->_children;		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(71)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_children,return )

int DisplayObjectContainer_obj::indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","indexOfChild",0xb88d2cf4,"haxe.ui.toolkit.core.DisplayObjectContainer.indexOfChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",74,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(75)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	int tmp1 = ::Lambda_obj::indexOf(this->get_children(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(76)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,indexOfChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","getChildAt",0xa144325a,"haxe.ui.toolkit.core.DisplayObjectContainer.getChildAt","haxe/ui/toolkit/core/DisplayObjectContainer.hx",79,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(80)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = this->get_children()->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","addChildAt",0xb96cd82f,"haxe.ui.toolkit.core.DisplayObjectContainer.addChildAt","haxe/ui/toolkit/core/DisplayObjectContainer.hx",83,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(84)
	bool tmp = (child == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(85)
		return null();
	}
	HX_STACK_LINE(88)
	::openfl::_legacy::display::Sprite tmp1 = child->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	::openfl::_legacy::display::Sprite childSprite = tmp1;		HX_STACK_VAR(childSprite,"childSprite");
	HX_STACK_LINE(90)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	if ((tmp3)){
		HX_STACK_LINE(91)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		tmp4 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
		HX_STACK_LINE(91)
		tmp4->set_parent(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(94)
	::haxe::ui::toolkit::core::Root tmp4 = this->get_root();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	child->set_root(tmp4);
	HX_STACK_LINE(95)
	int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	this->_children->insert(tmp5,tmp6);
	HX_STACK_LINE(96)
	::openfl::_legacy::display::Sprite tmp7 = this->_sprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	::openfl::_legacy::display::Sprite tmp8 = childSprite;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	tmp7->addChildAt(tmp8,tmp9);
	HX_STACK_LINE(97)
	this->invalidate((int)1,null());
	HX_STACK_LINE(98)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(98)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","addChild",0x02bf601c,"haxe.ui.toolkit.core.DisplayObjectContainer.addChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",101,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(102)
	bool tmp = (child == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	if ((tmp)){
		HX_STACK_LINE(103)
		return null();
	}
	HX_STACK_LINE(106)
	::openfl::_legacy::display::Sprite tmp1 = child->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	::openfl::_legacy::display::Sprite childSprite = tmp1;		HX_STACK_VAR(childSprite,"childSprite");
	HX_STACK_LINE(108)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	if ((tmp3)){
		HX_STACK_LINE(109)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		tmp4 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
		HX_STACK_LINE(109)
		tmp4->set_parent(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(112)
	::haxe::ui::toolkit::core::Root tmp4 = this->get_root();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	child->set_root(tmp4);
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	this->_children->push(tmp5);
	HX_STACK_LINE(114)
	::openfl::_legacy::display::Sprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(114)
	::openfl::_legacy::display::Sprite tmp7 = childSprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(114)
	tmp6->addChild(tmp7);
	HX_STACK_LINE(115)
	this->invalidate((int)1,null());
	HX_STACK_LINE(116)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(116)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","removeChild",0x281ca8f7,"haxe.ui.toolkit.core.DisplayObjectContainer.removeChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",119,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(120)
		bool tmp = (child == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			bool tmp5 = this->contains(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			tmp2 = (tmp6 == false);
		}
		else{
			HX_STACK_LINE(120)
			tmp2 = true;
		}
		HX_STACK_LINE(120)
		if ((tmp2)){
			HX_STACK_LINE(121)
			return null();
		}
		HX_STACK_LINE(124)
		::openfl::_legacy::display::Sprite tmp3 = child->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		::openfl::_legacy::display::Sprite childSprite = tmp3;		HX_STACK_VAR(childSprite,"childSprite");
		HX_STACK_LINE(126)
		::openfl::_legacy::display::Sprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		::openfl::_legacy::display::Sprite tmp5 = childSprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		tmp4->removeChild(tmp5);
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		this->_children->remove(tmp6);
		HX_STACK_LINE(128)
		bool tmp7 = (dispose == true);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		if ((tmp7)){
			HX_STACK_LINE(129)
			child->dispose();
		}
		HX_STACK_LINE(131)
		this->invalidate((int)1,null());
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::removeChildAt( int index,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","removeChildAt",0xe7524dca,"haxe.ui.toolkit.core.DisplayObjectContainer.removeChildAt","haxe/ui/toolkit/core/DisplayObjectContainer.hx",136,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(137)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = this->getChildAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		bool tmp2 = dispose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = this->removeChild(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeAllChildren( hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","removeAllChildren",0xbcf2cd1b,"haxe.ui.toolkit.core.DisplayObjectContainer.removeAllChildren","haxe/ui/toolkit/core/DisplayObjectContainer.hx",140,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(141)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > arr = this->get_children();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(142)
		while((true)){
			HX_STACK_LINE(142)
			bool tmp = (arr->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(142)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			if ((tmp1)){
				HX_STACK_LINE(142)
				break;
			}
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = arr->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			bool tmp4 = dispose;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			this->removeChild(tmp3,tmp4);
		}
		HX_STACK_LINE(146)
		while((true)){
			HX_STACK_LINE(146)
			::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(146)
			int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			if ((tmp3)){
				HX_STACK_LINE(146)
				break;
			}
			HX_STACK_LINE(147)
			::openfl::_legacy::display::Sprite tmp4 = this->get_sprite();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			tmp4->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeAllChildren,(void))

bool DisplayObjectContainer_obj::contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","contains",0x7023ea80,"haxe.ui.toolkit.core.DisplayObjectContainer.contains","haxe/ui/toolkit/core/DisplayObjectContainer.hx",151,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(152)
	bool tmp = (child == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	if ((tmp)){
		HX_STACK_LINE(153)
		return false;
	}
	HX_STACK_LINE(156)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::openfl::_legacy::display::Sprite tmp2 = child->get_sprite();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	bool tmp3 = tmp1->contains(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

Void DisplayObjectContainer_obj::setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","setChildIndex",0xa5f3ba17,"haxe.ui.toolkit.core.DisplayObjectContainer.setChildIndex","haxe/ui/toolkit/core/DisplayObjectContainer.hx",159,0x6e0042f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(160)
		bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		if ((tmp)){
			HX_STACK_LINE(161)
			::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(161)
			::openfl::_legacy::display::Sprite tmp2 = child->get_sprite();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			tmp1->setChildIndex(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Dynamic DisplayObjectContainer_obj::findChildAs( ::hx::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","findChildAs",0x4ac664b4,"haxe.ui.toolkit.core.DisplayObjectContainer.findChildAs","haxe/ui/toolkit/core/DisplayObjectContainer.hx",165,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(166)
	::haxe::ui::toolkit::core::Component match = null();		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(167)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(167)
			if ((tmp1)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(167)
			++(_g);
			HX_STACK_LINE(168)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			::hx::Class tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			bool tmp5 = ::Std_obj::is(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			if ((tmp5)){
				HX_STACK_LINE(169)
				match = ((::haxe::ui::toolkit::core::Component)(child));
				HX_STACK_LINE(170)
				break;
			}
		}
	}
	HX_STACK_LINE(173)
	Dynamic tmp = ((Dynamic)(match));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,findChildAs,return )

Dynamic DisplayObjectContainer_obj::findChild( ::String id,::hx::Class type,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","findChild",0x24869f22,"haxe.ui.toolkit.core.DisplayObjectContainer.findChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",176,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(177)
		::haxe::ui::toolkit::core::Component match = null();		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(178)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			while((true)){
				HX_STACK_LINE(178)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(178)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(178)
				if ((tmp1)){
					HX_STACK_LINE(178)
					break;
				}
				HX_STACK_LINE(178)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(178)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(178)
				++(_g);
				HX_STACK_LINE(179)
				::String tmp3 = child->get_id();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(179)
				::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(179)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(179)
				if ((tmp5)){
					HX_STACK_LINE(180)
					match = ((::haxe::ui::toolkit::core::Component)(child));
					HX_STACK_LINE(181)
					break;
				}
			}
		}
		HX_STACK_LINE(184)
		bool tmp = (match == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		if ((tmp)){
			HX_STACK_LINE(184)
			tmp1 = (recursive == true);
		}
		else{
			HX_STACK_LINE(184)
			tmp1 = false;
		}
		HX_STACK_LINE(184)
		if ((tmp1)){
			HX_STACK_LINE(185)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(185)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(185)
			while((true)){
				HX_STACK_LINE(185)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(185)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(185)
				if ((tmp3)){
					HX_STACK_LINE(185)
					break;
				}
				HX_STACK_LINE(185)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(185)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(185)
				++(_g);
				HX_STACK_LINE(186)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(186)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				if ((tmp6)){
					HX_STACK_LINE(187)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(187)
					tmp7 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(187)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c = tmp7;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(188)
					::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(188)
					::hx::Class tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(188)
					bool tmp10 = recursive;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					Dynamic tmp11 = c->findChild(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(188)
					::haxe::ui::toolkit::core::Component temp = ((::haxe::ui::toolkit::core::Component)(tmp11));		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(189)
					bool tmp12 = (temp != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(189)
					if ((tmp12)){
						HX_STACK_LINE(190)
						match = temp;
						HX_STACK_LINE(191)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(196)
		Dynamic tmp2 = ((Dynamic)(match));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObjectContainer_obj,findChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::findComponentUnderPoint( Float stageX,Float stageY){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","findComponentUnderPoint",0xdfc8133b,"haxe.ui.toolkit.core.DisplayObjectContainer.findComponentUnderPoint","haxe/ui/toolkit/core/DisplayObjectContainer.hx",199,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_LINE(200)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(201)
		while((true)){
			HX_STACK_LINE(201)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(201)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(201)
			if ((tmp1)){
				HX_STACK_LINE(201)
				break;
			}
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(201)
			++(_g);
			HX_STACK_LINE(202)
			Float tmp3 = stageX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			Float tmp4 = stageY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			bool tmp5 = child->hitTest(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			if ((tmp6)){
				HX_STACK_LINE(203)
				c = child;
				HX_STACK_LINE(204)
				break;
			}
		}
	}
	HX_STACK_LINE(207)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,findComponentUnderPoint,return )

::haxe::ui::toolkit::core::interfaces::ILayout DisplayObjectContainer_obj::get_layout( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_layout",0x34764914,"haxe.ui.toolkit.core.DisplayObjectContainer.get_layout","haxe/ui/toolkit/core/DisplayObjectContainer.hx",210,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp = this->_layout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_layout,return )

::haxe::ui::toolkit::core::interfaces::ILayout DisplayObjectContainer_obj::set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","set_layout",0x37f3e788,"haxe.ui.toolkit.core.DisplayObjectContainer.set_layout","haxe/ui/toolkit/core/DisplayObjectContainer.hx",214,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(215)
	this->_layout = value;
	HX_STACK_LINE(216)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp = this->_layout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	tmp->set_container(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(217)
	bool tmp1 = this->_ready;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	if ((tmp1)){
		HX_STACK_LINE(218)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(220)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_layout,return )

bool DisplayObjectContainer_obj::get_autoSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_autoSize",0xa9a218ba,"haxe.ui.toolkit.core.DisplayObjectContainer.get_autoSize","haxe/ui/toolkit/core/DisplayObjectContainer.hx",224,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	bool tmp = this->_autoSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_autoSize,return )

bool DisplayObjectContainer_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","set_autoSize",0xbe9b3c2e,"haxe.ui.toolkit.core.DisplayObjectContainer.set_autoSize","haxe/ui/toolkit/core/DisplayObjectContainer.hx",228,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(229)
	this->_autoSize = value;
	HX_STACK_LINE(230)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	if ((tmp)){
		HX_STACK_LINE(231)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(233)
	bool tmp1 = this->_autoSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_autoSize,return )

Void DisplayObjectContainer_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","dispose",0xd28fd75e,"haxe.ui.toolkit.core.DisplayObjectContainer.dispose","haxe/ui/toolkit/core/DisplayObjectContainer.hx",239,0x6e0042f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			int tmp = this->get_children()->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(240)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(240)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(240)
			if ((tmp2)){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(241)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(241)
				while((true)){
					HX_STACK_LINE(241)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(241)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(241)
					if ((tmp4)){
						HX_STACK_LINE(241)
						break;
					}
					HX_STACK_LINE(241)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(241)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(241)
					++(_g);
					HX_STACK_LINE(242)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(243)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(243)
						this->removeChild(tmp6,null());
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(245)
								Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(246)
								::String tmp6 = ::Std_obj::string(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(246)
								::String tmp7 = (HX_HCSTRING("Problem removing component: ","\x05","\x03","\x10","\x38") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(246)
								::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(246)
								::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(246)
								::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(246)
								::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(246)
								::String tmp12 = (tmp11 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(246)
								Dynamic tmp13 = e;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(246)
								::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(246)
								::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(246)
								::String tmp16 = (tmp15 + HX_HCSTRING("), callstack:","\x2d","\xb4","\x12","\x91"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(246)
								Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("DisplayObjectContainer.hx","\x3e","\xe0","\xc8","\x0e"),246,HX_HCSTRING("haxe.ui.toolkit.core.DisplayObjectContainer","\x2d","\x60","\x63","\x99"),HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(246)
								::haxe::Log_obj::trace(tmp16,tmp17);
								HX_STACK_LINE(247)
								::String tmp18 = ::haxe::CallStack_obj::toString(stack);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(247)
								Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("DisplayObjectContainer.hx","\x3e","\xe0","\xc8","\x0e"),247,HX_HCSTRING("haxe.ui.toolkit.core.DisplayObjectContainer","\x2d","\x60","\x63","\x99"),HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(247)
								::haxe::Log_obj::trace(tmp18,tmp19);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(252)
		this->super::dispose();
	}
return null();
}


::haxe::ui::toolkit::core::Root DisplayObjectContainer_obj::set_root( ::haxe::ui::toolkit::core::Root value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","set_root",0xbd6f9380,"haxe.ui.toolkit.core.DisplayObjectContainer.set_root","haxe/ui/toolkit/core/DisplayObjectContainer.hx",255,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(256)
	::haxe::ui::toolkit::core::Root tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	this->super::set_root(tmp);
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(257)
		while((true)){
			HX_STACK_LINE(257)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			if ((tmp2)){
				HX_STACK_LINE(257)
				break;
			}
			HX_STACK_LINE(257)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(257)
			++(_g);
			HX_STACK_LINE(258)
			::haxe::ui::toolkit::core::Root tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			child->set_root(tmp4);
		}
	}
	HX_STACK_LINE(260)
	::haxe::ui::toolkit::core::Root tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject DisplayObjectContainer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","clone",0x4e3eec5c,"haxe.ui.toolkit.core.DisplayObjectContainer.clone","src/haxe/ui/toolkit/core/DisplayObjectContainer.hx",1,0x3a225cfc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObject tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObjectContainer c = ((::haxe::ui::toolkit::core::DisplayObjectContainer)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool tmp1 = this->get_autoSize();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_autoSize(tmp1);
	HX_STACK_LINE(4)
	::haxe::ui::toolkit::core::DisplayObjectContainer tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	return tmp2;
}


::haxe::ui::toolkit::core::DisplayObject DisplayObjectContainer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","self",0x892f176d,"haxe.ui.toolkit.core.DisplayObjectContainer.self","src/haxe/ui/toolkit/core/DisplayObjectContainer.hx",1,0x3a225cfc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObjectContainer tmp = ::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_autoSize,"_autoSize");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(children,"children");
	::haxe::ui::toolkit::core::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_autoSize,"_autoSize");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(children,"children");
	::haxe::ui::toolkit::core::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == hx::paccAlways) return get_layout(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp == hx::paccAlways ? get_children() : children; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"set_root") ) { return set_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { return _children; }
		if (HX_FIELD_EQ(inName,"_autoSize") ) { return _autoSize; }
		if (HX_FIELD_EQ(inName,"findChild") ) { return findChild_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return get_layout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return set_layout_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp == hx::paccAlways ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"findChildAs") ) { return findChildAs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOfChild") ) { return indexOfChild_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAllChildren") ) { return removeAllChildren_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"findComponentUnderPoint") ) { return findComponentUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == hx::paccAlways) return set_layout(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::ILayout >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoSize") ) { _autoSize=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_children","\x9e","\x10","\x00","\xb8"));
	outFields->push(HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7"));
	outFields->push(HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >*/ ,(int)offsetof(DisplayObjectContainer_obj,_children),HX_HCSTRING("_children","\x9e","\x10","\x00","\xb8")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::ILayout*/ ,(int)offsetof(DisplayObjectContainer_obj,_layout),HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,_autoSize),HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >*/ ,(int)offsetof(DisplayObjectContainer_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_children","\x9e","\x10","\x00","\xb8"),
	HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7"),
	HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	HX_HCSTRING("get_children","\x48","\xcd","\x83","\x25"),
	HX_HCSTRING("indexOfChild","\x13","\x58","\x7e","\xf3"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeAllChildren","\x9c","\xf1","\xf5","\xf5"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("findChildAs","\x75","\x42","\x97","\x66"),
	HX_HCSTRING("findChild","\xa3","\xda","\xb0","\x34"),
	HX_HCSTRING("findComponentUnderPoint","\x7c","\x0e","\x0f","\x36"),
	HX_HCSTRING("get_layout","\x73","\x1e","\x40","\x49"),
	HX_HCSTRING("set_layout","\xe7","\xbc","\xbd","\x4c"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("set_root","\x1f","\x03","\xc7","\x79"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.DisplayObjectContainer","\x2d","\x60","\x63","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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
