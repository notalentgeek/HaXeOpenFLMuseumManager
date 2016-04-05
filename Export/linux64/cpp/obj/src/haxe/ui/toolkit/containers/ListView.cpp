#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Divider
#include <haxe/ui/toolkit/controls/Divider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Types
#include <haxe/ui/toolkit/util/Types.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ListView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","new",0xf20d97cf,"haxe.ui.toolkit.containers.ListView.new","haxe/ui/toolkit/containers/ListView.hx",24,0x8f6b9b81)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	this->_allowSelection = true;
	HX_STACK_LINE(30)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(37)
	this->set_autoSize(false);
	HX_STACK_LINE(38)
	::haxe::ui::toolkit::data::ArrayDataSource tmp = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->set_dataSource(tmp);
	HX_STACK_LINE(39)
	this->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::containers::VBox tmp1 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	this->_content = tmp1;
	HX_STACK_LINE(41)
	::haxe::ui::toolkit::containers::VBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	tmp2->set_id(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	HX_STACK_LINE(42)
	::haxe::ui::toolkit::containers::VBox tmp3 = this->_content;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	tmp3->set_percentWidth((int)100);
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::containers::VBox tmp4 = this->_content;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	this->addChild(tmp4);
	HX_STACK_LINE(45)
	this->_itemRenderer = hx::ClassOf< ::haxe::ui::toolkit::core::renderers::BasicItemRenderer >();
}
;
	return null();
}

//ListView_obj::~ListView_obj() { }

Dynamic ListView_obj::__CreateEmpty() { return  new ListView_obj; }
hx::ObjectPtr< ListView_obj > ListView_obj::__new()
{  hx::ObjectPtr< ListView_obj > _result_ = new ListView_obj();
	_result_->__construct();
	return _result_;}

Dynamic ListView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListView_obj > _result_ = new ListView_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ListView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
	return super::__ToInterface(inType);
}

ListView_obj::operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDataComponent_delegate_< ListView_obj >(this); }
Void ListView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","initialize",0x97b7c5c1,"haxe.ui.toolkit.containers.ListView.initialize","haxe/ui/toolkit/containers/ListView.hx",51,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->super::initialize();
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::data::ArrayDataSource tmp2 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			this->set_dataSource(tmp2);
		}
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::data::IDataSource tmp2 = this->_dataSource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		tmp2->open();
		HX_STACK_LINE(60)
		this->syncUI();
		HX_STACK_LINE(61)
		this->checkScrolls();
	}
return null();
}


Void ListView_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","invalidate",0x3226adec,"haxe.ui.toolkit.containers.ListView.invalidate","haxe/ui/toolkit/containers/ListView.hx",64,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(65)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(65)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(65)
			tmp4 = true;
		}
		HX_STACK_LINE(65)
		if ((tmp4)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(70)
		int tmp7 = (int(type) & int((int)65536));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		bool tmp8 = (tmp7 == (int)65536);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		if ((tmp8)){
			HX_STACK_LINE(71)
			this->syncUI();
		}
	}
return null();
}


Void ListView_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","dispose",0x24702b8e,"haxe.ui.toolkit.containers.ListView.dispose","haxe/ui/toolkit/containers/ListView.hx",75,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::data::IDataSource tmp2 = this->_dataSource;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			tmp2->close();
		}
		HX_STACK_LINE(79)
		this->super::dispose();
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ListView_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addChild",0x5528b5ec,"haxe.ui.toolkit.containers.ListView.addChild","haxe/ui/toolkit/containers/ListView.hx",82,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(83)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	if ((tmp1)){
		HX_STACK_LINE(84)
		this->_itemRenderer = child;
		HX_STACK_LINE(85)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		return tmp2;
	}
	HX_STACK_LINE(87)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = this->super::addChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	return tmp3;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ListView_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addChildAt",0x793341ff,"haxe.ui.toolkit.containers.ListView.addChildAt","haxe/ui/toolkit/containers/ListView.hx",90,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(91)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = this->super::addChildAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


int ListView_obj::get_listSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_listSize",0xb40176f9,"haxe.ui.toolkit.containers.ListView.get_listSize","haxe/ui/toolkit/containers/ListView.hx",105,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::haxe::ui::toolkit::containers::VBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = tmp->get_children()->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_listSize,return )

Float ListView_obj::get_itemHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_itemHeight",0x9d6d7a94,"haxe.ui.toolkit.containers.ListView.get_itemHeight","haxe/ui/toolkit/containers/ListView.hx",109,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	::haxe::ui::toolkit::containers::VBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	int tmp1 = tmp->get_children()->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	if ((tmp2)){
		HX_STACK_LINE(111)
		return (int)0;
	}
	HX_STACK_LINE(113)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(114)
	::haxe::ui::toolkit::containers::VBox tmp3 = this->_content;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp4 = tmp3->get_layout();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	::openfl::_legacy::geom::Rectangle tmp5 = tmp4->get_padding();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	Float tmp6 = tmp5->get_top();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(114)
	::haxe::ui::toolkit::containers::VBox tmp7 = this->_content;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(114)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp8 = tmp7->get_layout();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(114)
	::openfl::_legacy::geom::Rectangle tmp9 = tmp8->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(114)
	Float tmp10 = tmp9->get_bottom();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(114)
	Float tmp11 = (tmp6 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(114)
	Float cy = tmp11;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(115)
	::haxe::ui::toolkit::containers::VBox tmp12 = this->_content;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(115)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp13 = tmp12->get_layout();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(115)
	int tmp14 = tmp13->get_spacingY();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(115)
	int scy = tmp14;		HX_STACK_VAR(scy,"scy");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		::haxe::ui::toolkit::containers::VBox tmp15 = this->_content;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(116)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp15->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		while((true)){
			HX_STACK_LINE(116)
			bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			if ((tmp17)){
				HX_STACK_LINE(116)
				break;
			}
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp18 = _g1->__get(_g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp18;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(116)
			++(_g);
			HX_STACK_LINE(117)
			Float tmp19 = child->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(117)
			int tmp20 = scy;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(117)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(117)
			hx::AddEq(cy,tmp21);
			HX_STACK_LINE(118)
			(n)++;
			HX_STACK_LINE(119)
			bool tmp22 = (n > (int)100);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(119)
			if ((tmp22)){
				HX_STACK_LINE(120)
				break;
			}
		}
	}
	HX_STACK_LINE(123)
	bool tmp15 = (n > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(123)
	if ((tmp15)){
		HX_STACK_LINE(124)
		hx::SubEq(cy,scy);
	}
	HX_STACK_LINE(126)
	Float tmp16 = (Float(cy) / Float(n));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(126)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemHeight,return )

::haxe::ui::toolkit::core::interfaces::IItemRenderer ListView_obj::getItem( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","getItem",0x81661fb8,"haxe.ui.toolkit.containers.ListView.getItem","haxe/ui/toolkit/containers/ListView.hx",129,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(130)
	::haxe::ui::toolkit::containers::VBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = tmp->get_children()->__get(index);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	tmp2 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(tmp1);
	HX_STACK_LINE(130)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,getItem,return )

Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > ListView_obj::get_selectedItems( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_selectedItems",0x1480deab,"haxe.ui.toolkit.containers.ListView.get_selectedItems","haxe/ui/toolkit/containers/ListView.hx",134,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return this->_selectedItems;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedItems,return )

int ListView_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_selectedIndex",0x1088cdbd,"haxe.ui.toolkit.containers.ListView.get_selectedIndex","haxe/ui/toolkit/containers/ListView.hx",137,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(139)
	bool tmp = (this->_selectedItems != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	if ((tmp)){
		HX_STACK_LINE(139)
		int tmp2 = this->_selectedItems->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(139)
		tmp1 = false;
	}
	HX_STACK_LINE(139)
	if ((tmp1)){
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::containers::VBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp3 = this->_selectedItems->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		int tmp4 = ::Lambda_obj::indexOf(tmp2->get_children(),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		index = tmp4;
	}
	HX_STACK_LINE(142)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedIndex,return )

int ListView_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_selectedIndex",0x33f6a5c9,"haxe.ui.toolkit.containers.ListView.set_selectedIndex","haxe/ui/toolkit/containers/ListView.hx",145,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(146)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	if ((tmp1)){
		HX_STACK_LINE(147)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		return tmp2;
	}
	HX_STACK_LINE(150)
	bool tmp2 = (value < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	if ((tmp2)){
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(151)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(151)
				if ((tmp4)){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer selectedItem = tmp5;		HX_STACK_VAR(selectedItem,"selectedItem");
				HX_STACK_LINE(151)
				++(_g);
				HX_STACK_LINE(152)
				selectedItem->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
			}
		}
		HX_STACK_LINE(154)
		this->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
	}
	else{
		HX_STACK_LINE(156)
		::haxe::ui::toolkit::containers::VBox tmp3 = this->_content;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = tmp3->getChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		if ((tmp6)){
			HX_STACK_LINE(157)
			::haxe::ui::toolkit::containers::VBox tmp7 = this->_content;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(157)
			int tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(157)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = tmp7->getChildAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(157)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(157)
			tmp10 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(tmp9);
			HX_STACK_LINE(157)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = tmp10;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(158)
			bool tmp11 = (item != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			if ((tmp11)){
				HX_STACK_LINE(159)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp12 = item;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(159)
				this->handleListSelection(tmp12,null(),null());
			}
		}
	}
	HX_STACK_LINE(164)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedIndex,return )

::haxe::ui::toolkit::core::Component ListView_obj::get_content( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_content",0x91773bbf,"haxe.ui.toolkit.containers.ListView.get_content","haxe/ui/toolkit/containers/ListView.hx",167,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(169)
	int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	if ((tmp1)){
		HX_STACK_LINE(170)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = this->getChildAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		::haxe::ui::toolkit::core::Component tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(tmp2);
		HX_STACK_LINE(170)
		c = tmp3;
	}
	HX_STACK_LINE(172)
	::haxe::ui::toolkit::core::Component tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_content,return )

Dynamic ListView_obj::get_itemRenderer( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_itemRenderer",0x6f40fd30,"haxe.ui.toolkit.containers.ListView.get_itemRenderer","haxe/ui/toolkit/containers/ListView.hx",175,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	Dynamic tmp = this->_itemRenderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemRenderer,return )

Dynamic ListView_obj::set_itemRenderer( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_itemRenderer",0xc582eaa4,"haxe.ui.toolkit.containers.ListView.set_itemRenderer","haxe/ui/toolkit/containers/ListView.hx",179,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(180)
	this->_itemRenderer = value;
	HX_STACK_LINE(181)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemRenderer,return )

bool ListView_obj::get_allowSelection( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_allowSelection",0xb079a8bd,"haxe.ui.toolkit.containers.ListView.get_allowSelection","haxe/ui/toolkit/containers/ListView.hx",184,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	bool tmp = this->_allowSelection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_allowSelection,return )

bool ListView_obj::set_allowSelection( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_allowSelection",0x8d28db31,"haxe.ui.toolkit.containers.ListView.set_allowSelection","haxe/ui/toolkit/containers/ListView.hx",188,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(189)
	this->_allowSelection = value;
	HX_STACK_LINE(190)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_allowSelection,return )

::haxe::ui::toolkit::data::IDataSource ListView_obj::get_dataSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_dataSource",0xcae71fdf,"haxe.ui.toolkit.containers.ListView.get_dataSource","haxe/ui/toolkit/containers/ListView.hx",198,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_dataSource,return )

::haxe::ui::toolkit::data::IDataSource ListView_obj::set_dataSource( ::haxe::ui::toolkit::data::IDataSource value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_dataSource",0xeb070853,"haxe.ui.toolkit.containers.ListView.set_dataSource","haxe/ui/toolkit/containers/ListView.hx",202,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(203)
	::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::haxe::ui::toolkit::data::IDataSource tmp2 = this->_dataSource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		if ((tmp3)){
			HX_STACK_LINE(205)
			::haxe::ui::toolkit::data::IDataSource tmp4 = this->_dataSource;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(205)
			::haxe::ui::toolkit::core::interfaces::IEventDispatcher tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(205)
			tmp5 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(tmp4);
			HX_STACK_LINE(205)
			::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			Dynamic tmp7 = this->_onDataSourceChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(205)
			tmp5->removeEventListener(tmp6,tmp7,null());
		}
	}
	HX_STACK_LINE(209)
	this->_dataSource = value;
	HX_STACK_LINE(211)
	::haxe::ui::toolkit::data::IDataSource tmp2 = this->_dataSource;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	if ((tmp3)){
		HX_STACK_LINE(212)
		::haxe::ui::toolkit::data::IDataSource tmp4 = this->_dataSource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		::haxe::ui::toolkit::core::interfaces::IEventDispatcher tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		tmp5 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(tmp4);
		HX_STACK_LINE(212)
		::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		Dynamic tmp7 = this->_onDataSourceChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
	}
	HX_STACK_LINE(215)
	bool tmp4 = this->_ready;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	if ((tmp5)){
		HX_STACK_LINE(216)
		::haxe::ui::toolkit::containers::VBox tmp6 = this->_content;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		tmp6->removeAllChildren(null());
		HX_STACK_LINE(217)
		this->syncUI();
	}
	HX_STACK_LINE(219)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(220)
	::haxe::ui::toolkit::data::IDataSource tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_dataSource,return )

Void ListView_obj::_onDataSourceChanged( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onDataSourceChanged",0x396edf62,"haxe.ui.toolkit.containers.ListView._onDataSourceChanged","haxe/ui/toolkit/containers/ListView.hx",224,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(224)
		this->syncUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onDataSourceChanged,(void))

Void ListView_obj::syncUI( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","syncUI",0xea42d960,"haxe.ui.toolkit.containers.ListView.syncUI","haxe/ui/toolkit/containers/ListView.hx",230,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		int pos = (int)0;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(232)
		::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		if ((tmp1)){
			HX_STACK_LINE(233)
			::haxe::ui::toolkit::data::IDataSource tmp2 = this->get_dataSource();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			bool tmp3 = tmp2->moveFirst();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			if ((tmp3)){
				HX_STACK_LINE(234)
				while((true)){
					HX_STACK_LINE(235)
					::haxe::ui::toolkit::data::IDataSource tmp4 = this->get_dataSource();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(235)
					::String tmp5 = tmp4->hash();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(235)
					::String dataHash = tmp5;		HX_STACK_VAR(dataHash,"dataHash");
					HX_STACK_LINE(236)
					::haxe::ui::toolkit::data::IDataSource tmp6 = this->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(236)
					Dynamic tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(236)
					Dynamic data = tmp7;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(237)
					::haxe::ui::toolkit::core::interfaces::IItemRenderer item = null();		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(238)
					::haxe::ui::toolkit::containers::VBox tmp8 = this->_content;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(238)
					int tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(238)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = tmp8->getChildAt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(238)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(238)
					if ((tmp11)){
						HX_STACK_LINE(239)
						::haxe::ui::toolkit::containers::VBox tmp12 = this->_content;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(239)
						int tmp13 = pos;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(239)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = tmp12->getChildAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(239)
						::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(239)
						tmp15 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(tmp14);
						HX_STACK_LINE(239)
						item = tmp15;
					}
					HX_STACK_LINE(242)
					bool tmp12 = (item == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(242)
					if ((tmp12)){
						HX_STACK_LINE(243)
						::String tmp13 = dataHash;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(243)
						Dynamic tmp14 = data;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(243)
						int tmp15 = pos;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(243)
						this->addListViewItem(tmp13,tmp14,tmp15);
						HX_STACK_LINE(244)
						(pos)++;
					}
					else{
						HX_STACK_LINE(246)
						bool tmp13 = (item->__Field(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"), hx::paccDynamic ) == dataHash);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(246)
						if ((tmp13)){
							HX_STACK_LINE(247)
							Dynamic tmp14 = data;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(247)
							item->set_data(tmp14);
							HX_STACK_LINE(248)
							(pos)++;
						}
						else{
							HX_STACK_LINE(250)
							while((true)){
								HX_STACK_LINE(250)
								bool tmp14 = (item != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(250)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(250)
								if ((tmp14)){
									HX_STACK_LINE(250)
									tmp15 = (item->__Field(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"), hx::paccDynamic ) != dataHash);
								}
								else{
									HX_STACK_LINE(250)
									tmp15 = false;
								}
								HX_STACK_LINE(250)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(250)
								if ((tmp16)){
									HX_STACK_LINE(250)
									break;
								}
								HX_STACK_LINE(251)
								int tmp17 = pos;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(251)
								this->removeListViewItem(tmp17);
								HX_STACK_LINE(252)
								::haxe::ui::toolkit::containers::VBox tmp18 = this->_content;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(252)
								int tmp19 = pos;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(252)
								::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp20 = tmp18->getChildAt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(252)
								::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(252)
								tmp21 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(tmp20);
								HX_STACK_LINE(252)
								item = tmp21;
							}
							HX_STACK_LINE(254)
							(pos)++;
						}
					}
					HX_STACK_LINE(257)
					::haxe::ui::toolkit::data::IDataSource tmp13 = this->get_dataSource();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(257)
					bool tmp14 = tmp13->moveNext();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(257)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(234)
					if ((tmp15)){
						HX_STACK_LINE(234)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(261)
			::haxe::ui::toolkit::containers::VBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			int tmp3 = tmp2->get_children()->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(261)
			while((true)){
				HX_STACK_LINE(261)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(261)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(261)
				if ((tmp5)){
					HX_STACK_LINE(261)
					break;
				}
				HX_STACK_LINE(261)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(261)
				int n = tmp6;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(262)
				int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(262)
				this->removeListViewItem(tmp7);
			}
		}
		HX_STACK_LINE(265)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			::haxe::ui::toolkit::containers::VBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp2->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				if ((tmp4)){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(266)
				++(_g);
				HX_STACK_LINE(267)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(267)
				tmp6 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(child);
				HX_STACK_LINE(267)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer item = tmp6;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(268)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(268)
				bool tmp9 = (tmp8 == true);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(268)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(268)
				if ((tmp9)){
					HX_STACK_LINE(268)
					::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp11 = item;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(268)
					::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(268)
					bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::haxe::ui::toolkit::controls::Divider >());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(268)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(268)
					tmp10 = (tmp14 == false);
				}
				else{
					HX_STACK_LINE(268)
					tmp10 = false;
				}
				HX_STACK_LINE(268)
				if ((tmp10)){
					HX_STACK_LINE(269)
					int tmp11 = hx::Mod(n,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(269)
					bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(269)
					::String tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(269)
					if ((tmp12)){
						HX_STACK_LINE(269)
						tmp13 = HX_HCSTRING("even","\x1a","\x6f","\x1c","\x43");
					}
					else{
						HX_STACK_LINE(269)
						tmp13 = HX_HCSTRING("odd","\xaf","\x91","\x54","\x00");
					}
					HX_STACK_LINE(269)
					::String styleName = tmp13;		HX_STACK_VAR(styleName,"styleName");
					HX_STACK_LINE(270)
					::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp14 = item;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(270)
					bool tmp15 = this->isSelected(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(270)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(270)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(270)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(270)
					if ((tmp17)){
						HX_STACK_LINE(270)
						::haxe::ui::toolkit::core::StyleableDisplayObject tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(270)
						tmp19 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(item);
						HX_STACK_LINE(270)
						::haxe::ui::toolkit::core::StyleableDisplayObject tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(270)
						::String tmp21 = tmp20->get_styleName();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(270)
						::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(270)
						::String tmp23 = styleName;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(270)
						tmp18 = (tmp22 != tmp23);
					}
					else{
						HX_STACK_LINE(270)
						tmp18 = false;
					}
					HX_STACK_LINE(270)
					if ((tmp18)){
						HX_STACK_LINE(271)
						::haxe::ui::toolkit::core::StyleableDisplayObject tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(271)
						tmp19 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(item);
						HX_STACK_LINE(271)
						::String tmp20 = styleName;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(271)
						tmp19->set_styleName(tmp20);
					}
				}
				HX_STACK_LINE(274)
				(n)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,syncUI,(void))

Void ListView_obj::addListViewItem( ::String dataHash,Dynamic data,hx::Null< int >  __o_index){
int index = __o_index.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addListViewItem",0x74f53e46,"haxe.ui.toolkit.containers.ListView.addListViewItem","haxe/ui/toolkit/containers/ListView.hx",278,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dataHash,"dataHash")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(279)
		bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		if ((tmp)){
			HX_STACK_LINE(280)
			return null();
		}
		HX_STACK_LINE(283)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item = null();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(284)
		bool tmp1 = (data->__Field(HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		if ((tmp1)){
			HX_STACK_LINE(285)
			::haxe::ui::toolkit::controls::Divider tmp2 = ::haxe::ui::toolkit::controls::Divider_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(285)
			item = tmp2;
			HX_STACK_LINE(286)
			item->__FieldRef(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")) = dataHash;
			HX_STACK_LINE(287)
			Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			item->set_data(tmp3);
		}
		else{
			HX_STACK_LINE(289)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp2 = this->createRendererInstance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			item = tmp2;
			HX_STACK_LINE(290)
			item->set_autoSize(true);
			HX_STACK_LINE(291)
			item->__FieldRef(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")) = dataHash;
			HX_STACK_LINE(292)
			item->set_percentWidth((int)100);
			HX_STACK_LINE(294)
			Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			item->set_data(tmp3);
			HX_STACK_LINE(295)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp4 = item;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(295)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(295)
			if ((tmp5)){
				HX_STACK_LINE(296)
				::haxe::ui::toolkit::containers::VBox tmp6 = this->_content;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				int tmp7 = tmp6->get_numChildren();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(296)
				int tmp8 = hx::Mod(tmp7,(int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(296)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(296)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(296)
				if ((tmp9)){
					HX_STACK_LINE(296)
					tmp10 = HX_HCSTRING("even","\x1a","\x6f","\x1c","\x43");
				}
				else{
					HX_STACK_LINE(296)
					tmp10 = HX_HCSTRING("odd","\xaf","\x91","\x54","\x00");
				}
				HX_STACK_LINE(296)
				::String styleName = tmp10;		HX_STACK_VAR(styleName,"styleName");
				HX_STACK_LINE(297)
				::haxe::ui::toolkit::core::StyleableDisplayObject tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(297)
				tmp11 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(item);
				HX_STACK_LINE(297)
				::String tmp12 = styleName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(297)
				tmp11->set_styleName(tmp12);
			}
		}
		HX_STACK_LINE(301)
		bool tmp2 = (item != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		if ((tmp2)){
			HX_STACK_LINE(302)
			bool tmp3 = (index == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			if ((tmp3)){
				HX_STACK_LINE(303)
				::haxe::ui::toolkit::containers::VBox tmp4 = this->_content;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(303)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(303)
				tmp4->addChild(tmp5);
			}
			else{
				HX_STACK_LINE(305)
				::haxe::ui::toolkit::containers::VBox tmp4 = this->_content;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				tmp4->addChildAt(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(309)
		this->invalidate((int)256,null());
		HX_STACK_LINE(311)
		bool tmp3 = (data->__Field(HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		if ((tmp4)){
			HX_STACK_LINE(311)
			tmp5 = (data->__Field(HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"), hx::paccDynamic ) == false);
		}
		else{
			HX_STACK_LINE(311)
			tmp5 = true;
		}
		HX_STACK_LINE(311)
		if ((tmp5)){
			HX_STACK_LINE(312)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(312)
			tmp6 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item);
			HX_STACK_LINE(312)
			::String tmp7 = HX_HCSTRING("haxeui_mouseOver","\x54","\xb2","\x7f","\x5e");		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(312)
			Dynamic tmp8 = this->_onListItemMouseOver_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(312)
			tmp6->addEventListener(tmp7,tmp8,null(),null(),null());
			HX_STACK_LINE(313)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(313)
			tmp9 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item);
			HX_STACK_LINE(313)
			::String tmp10 = HX_HCSTRING("haxeui_mouseOut","\x8e","\x9f","\x8c","\x9c");		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(313)
			Dynamic tmp11 = this->_onListItemMouseOut_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(313)
			tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
			HX_STACK_LINE(314)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(314)
			tmp12 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item);
			HX_STACK_LINE(314)
			::String tmp13 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(314)
			Dynamic tmp14 = this->_onListItemClick_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(314)
			tmp12->addEventListener(tmp13,tmp14,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ListView_obj,addListViewItem,(void))

Void ListView_obj::removeListViewItem( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","removeListViewItem",0xebdd4c6b,"haxe.ui.toolkit.containers.ListView.removeListViewItem","haxe/ui/toolkit/containers/ListView.hx",318,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(319)
		::haxe::ui::toolkit::containers::VBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = tmp->getChildAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(tmp2);
		HX_STACK_LINE(319)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item = tmp3;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(320)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp4 = item;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		int tmp5 = ::Lambda_obj::indexOf(this->_selectedItems,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		int sIndex = tmp5;		HX_STACK_VAR(sIndex,"sIndex");
		HX_STACK_LINE(321)
		bool tmp6 = (sIndex != (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		if ((tmp6)){
			HX_STACK_LINE(322)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(322)
			this->_selectedItems->remove(tmp7);
		}
		HX_STACK_LINE(324)
		bool tmp7 = (item != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		if ((tmp7)){
			HX_STACK_LINE(325)
			::haxe::ui::toolkit::containers::VBox tmp8 = this->_content;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(325)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp9 = item;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(325)
			tmp8->removeChild(tmp9,null());
			HX_STACK_LINE(326)
			this->invalidate((int)256,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,removeListViewItem,(void))

Void ListView_obj::_onListItemMouseOver( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemMouseOver",0x01cd29db,"haxe.ui.toolkit.containers.ListView._onListItemMouseOver","haxe/ui/toolkit/containers/ListView.hx",330,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(331)
		bool tmp = this->_allowSelection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		if ((tmp1)){
			HX_STACK_LINE(332)
			return null();
		}
		HX_STACK_LINE(335)
		::haxe::ui::toolkit::core::Component tmp2 = event->get_component();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStateComponent >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		if ((tmp3)){
			HX_STACK_LINE(336)
			::haxe::ui::toolkit::core::Component tmp4 = event->get_component();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(336)
			::haxe::ui::toolkit::core::interfaces::IStateComponent tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(336)
			tmp5 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(tmp4);
			HX_STACK_LINE(336)
			tmp5->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemMouseOver,(void))

Void ListView_obj::_onListItemMouseOut( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemMouseOut",0xbe92b5e7,"haxe.ui.toolkit.containers.ListView._onListItemMouseOut","haxe/ui/toolkit/containers/ListView.hx",340,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(341)
		bool tmp = this->_allowSelection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		if ((tmp1)){
			HX_STACK_LINE(342)
			return null();
		}
		HX_STACK_LINE(345)
		::haxe::ui::toolkit::core::Component tmp2 = event->get_component();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStateComponent >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		if ((tmp3)){
			HX_STACK_LINE(346)
			::haxe::ui::toolkit::core::Component tmp4 = event->get_component();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(346)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = ((::haxe::ui::toolkit::core::interfaces::IItemRenderer)(tmp4));		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(347)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			bool tmp6 = this->isSelected(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(347)
			if ((tmp6)){
				HX_STACK_LINE(348)
				::haxe::ui::toolkit::core::interfaces::IStateComponent tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(348)
				tmp7 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(item);
				HX_STACK_LINE(348)
				tmp7->set_state(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
			}
			else{
				HX_STACK_LINE(350)
				::haxe::ui::toolkit::core::interfaces::IStateComponent tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(350)
				tmp7 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(item);
				HX_STACK_LINE(350)
				tmp7->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemMouseOut,(void))

Void ListView_obj::_onListItemClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemClick",0x9a7ed30a,"haxe.ui.toolkit.containers.ListView._onListItemClick","haxe/ui/toolkit/containers/ListView.hx",355,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(356)
		bool tmp = this->_allowSelection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		if ((tmp1)){
			HX_STACK_LINE(357)
			return null();
		}
		HX_STACK_LINE(360)
		::haxe::ui::toolkit::core::Component tmp2 = event->get_component();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		if ((tmp3)){
			HX_STACK_LINE(361)
			::haxe::ui::toolkit::core::Component tmp4 = event->get_component();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(361)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = ((::haxe::ui::toolkit::core::interfaces::IItemRenderer)(tmp4));		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(362)
			Float tmp5 = event->stageX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(362)
			Float tmp6 = event->stageY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(362)
			bool tmp7 = item->allowSelection(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(362)
			if ((tmp7)){
				HX_STACK_LINE(363)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp8 = item;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(363)
				::haxe::ui::toolkit::events::UIEvent tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(363)
				this->handleListSelection(tmp8,tmp9,null());
				HX_STACK_LINE(364)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp10 = item;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(364)
				this->handleClick(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemClick,(void))

Void ListView_obj::handleListSelection( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item,::haxe::ui::toolkit::events::UIEvent event,hx::Null< bool >  __o_raiseEvent){
bool raiseEvent = __o_raiseEvent.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","handleListSelection",0xa73ab8b5,"haxe.ui.toolkit.containers.ListView.handleListSelection","haxe/ui/toolkit/containers/ListView.hx",369,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(raiseEvent,"raiseEvent")
{
		HX_STACK_LINE(370)
		bool shiftPressed = false;		HX_STACK_VAR(shiftPressed,"shiftPressed");
		HX_STACK_LINE(371)
		bool ctrlPressed = false;		HX_STACK_VAR(ctrlPressed,"ctrlPressed");
		HX_STACK_LINE(373)
		bool tmp = (event != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		if ((tmp)){
			HX_STACK_LINE(373)
			::haxe::ui::toolkit::events::UIEvent tmp2 = event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			::haxe::ui::toolkit::events::UIEvent tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(373)
			tmp1 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::_legacy::events::MouseEvent >());
		}
		else{
			HX_STACK_LINE(373)
			tmp1 = false;
		}
		HX_STACK_LINE(373)
		if ((tmp1)){
			HX_STACK_LINE(374)
			::openfl::_legacy::events::MouseEvent tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			tmp2 = hx::TCast< ::openfl::_legacy::events::MouseEvent >::cast(event);
			HX_STACK_LINE(374)
			::openfl::_legacy::events::MouseEvent mouseEvent = tmp2;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(375)
			shiftPressed = mouseEvent->shiftKey;
			HX_STACK_LINE(376)
			ctrlPressed = mouseEvent->ctrlKey;
		}
		HX_STACK_LINE(379)
		bool tmp2 = (ctrlPressed == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		if ((tmp2)){
		}
		else{
			HX_STACK_LINE(381)
			bool tmp3 = (shiftPressed == true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			if ((tmp3)){
			}
			else{
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(384)
					Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(384)
					while((true)){
						HX_STACK_LINE(384)
						bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(384)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(384)
						if ((tmp5)){
							HX_STACK_LINE(384)
							break;
						}
						HX_STACK_LINE(384)
						::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(384)
						::haxe::ui::toolkit::core::interfaces::IItemRenderer selectedItem = tmp6;		HX_STACK_VAR(selectedItem,"selectedItem");
						HX_STACK_LINE(384)
						++(_g);
						HX_STACK_LINE(385)
						bool tmp7 = (selectedItem != item);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(385)
						if ((tmp7)){
							HX_STACK_LINE(386)
							selectedItem->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
						}
					}
				}
				HX_STACK_LINE(389)
				this->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
			}
		}
		HX_STACK_LINE(392)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp3 = item;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(392)
		bool tmp4 = this->isSelected(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		if ((tmp4)){
			HX_STACK_LINE(393)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			this->_selectedItems->remove(tmp5);
			HX_STACK_LINE(394)
			item->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(396)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(396)
			this->_selectedItems->push(tmp5);
			HX_STACK_LINE(397)
			item->set_state(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
		}
		HX_STACK_LINE(400)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(400)
		this->ensureVisible(tmp5);
		HX_STACK_LINE(402)
		bool tmp6 = (raiseEvent == true);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(402)
		if ((tmp6)){
			HX_STACK_LINE(403)
			int tmp7 = this->get_selectedIndex();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(403)
			bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(403)
			if ((tmp8)){
				HX_STACK_LINE(404)
				::haxe::ui::toolkit::containers::VBox tmp9 = this->_content;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(404)
				int tmp10 = this->get_selectedIndex();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(404)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = tmp9->getChildAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(404)
				::haxe::ui::toolkit::core::renderers::ItemRenderer item1 = ((::haxe::ui::toolkit::core::renderers::ItemRenderer)(tmp11));		HX_STACK_VAR(item1,"item1");
				HX_STACK_LINE(405)
				bool tmp12 = (item1 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(405)
				if ((tmp12)){
					HX_STACK_LINE(406)
					::String tmp13 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(406)
					::haxe::ui::toolkit::events::UIEvent tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(406)
					item1->dispatchProxyEvent(tmp13,tmp14);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ListView_obj,handleListSelection,(void))

Void ListView_obj::handleClick( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","handleClick",0xecad75ef,"haxe.ui.toolkit.containers.ListView.handleClick","haxe/ui/toolkit/containers/ListView.hx",414,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(415)
		::haxe::ui::toolkit::containers::VBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp1 = item;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		int tmp2 = ::Lambda_obj::indexOf(tmp->get_children(),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(415)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(416)
		int tmp3 = this->_lastSelection;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		if ((tmp5)){
			HX_STACK_LINE(417)
			::String tmp6 = HX_HCSTRING("haxeui_doubleClick","\x72","\x30","\x7f","\x05");		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			::haxe::ui::toolkit::events::UIEvent tmp7 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp6,null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			::haxe::ui::toolkit::events::UIEvent event = tmp7;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(418)
			::haxe::ui::toolkit::events::UIEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(418)
			this->dispatchEvent(tmp8);
			HX_STACK_LINE(419)
			this->_lastSelection = (int)-1;
		}
		else{
			HX_STACK_LINE(421)
			this->_lastSelection = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,handleClick,(void))

bool ListView_obj::isSelected( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","isSelected",0xd718d0d6,"haxe.ui.toolkit.containers.ListView.isSelected","haxe/ui/toolkit/containers/ListView.hx",425,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(426)
	::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp = item;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(426)
	int tmp1 = ::Lambda_obj::indexOf(this->_selectedItems,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(426)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(426)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,isSelected,return )

int ListView_obj::getItemIndex( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","getItemIndex",0x9ff5f03a,"haxe.ui.toolkit.containers.ListView.getItemIndex","haxe/ui/toolkit/containers/ListView.hx",432,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(433)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(434)
	bool tmp = (item != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	if ((tmp)){
		HX_STACK_LINE(435)
		::haxe::ui::toolkit::containers::VBox tmp1 = this->_content;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp2 = item;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(435)
		int tmp3 = ::Lambda_obj::indexOf(tmp1->get_children(),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		index = tmp3;
	}
	HX_STACK_LINE(437)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,getItemIndex,return )

int ListView_obj::setSelectedIndexNoEvent( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","setSelectedIndexNoEvent",0xe52f6fd3,"haxe.ui.toolkit.containers.ListView.setSelectedIndexNoEvent","haxe/ui/toolkit/containers/ListView.hx",440,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(441)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	if ((tmp1)){
		HX_STACK_LINE(442)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		return tmp2;
	}
	HX_STACK_LINE(444)
	::haxe::ui::toolkit::containers::VBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(444)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(444)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = tmp2->getChildAt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(444)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(444)
	if ((tmp5)){
		HX_STACK_LINE(445)
		::haxe::ui::toolkit::containers::VBox tmp6 = this->_content;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(445)
		int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp6->getChildAt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(445)
		tmp9 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(tmp8);
		HX_STACK_LINE(445)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item = tmp9;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(446)
		bool tmp10 = (item != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(446)
		if ((tmp10)){
			HX_STACK_LINE(447)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp11 = item;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(447)
			this->handleListSelection(tmp11,null(),false);
		}
	}
	HX_STACK_LINE(450)
	int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(450)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,setSelectedIndexNoEvent,return )

Void ListView_obj::ensureVisible( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","ensureVisible",0xf4cc0683,"haxe.ui.toolkit.containers.ListView.ensureVisible","haxe/ui/toolkit/containers/ListView.hx",453,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(454)
		bool tmp = (item == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		if ((tmp)){
			HX_STACK_LINE(455)
			return null();
		}
		HX_STACK_LINE(457)
		Float vpos = (int)0;		HX_STACK_VAR(vpos,"vpos");
		HX_STACK_LINE(458)
		::haxe::ui::toolkit::controls::VScroll tmp1 = this->_vscroll;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(458)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(458)
		if ((tmp2)){
			HX_STACK_LINE(459)
			::haxe::ui::toolkit::controls::VScroll tmp3 = this->_vscroll;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(459)
			Float tmp4 = tmp3->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(459)
			vpos = tmp4;
		}
		HX_STACK_LINE(461)
		Float tmp3 = item->get_y();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(461)
		Float tmp4 = item->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(461)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(461)
		Float tmp6 = vpos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(461)
		::haxe::ui::toolkit::containers::Box tmp7 = this->_container;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(461)
		Float tmp8 = tmp7->get_clipHeight();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(461)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(461)
		bool tmp10 = (tmp5 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(461)
		if ((tmp10)){
			HX_STACK_LINE(462)
			::haxe::ui::toolkit::controls::VScroll tmp11 = this->_vscroll;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(462)
			Float tmp12 = item->get_y();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(462)
			Float tmp13 = item->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(462)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(462)
			::haxe::ui::toolkit::containers::Box tmp15 = this->_container;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(462)
			Float tmp16 = tmp15->get_clipHeight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(462)
			Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(462)
			tmp11->set_pos(tmp17);
		}
		else{
			HX_STACK_LINE(463)
			Float tmp11 = item->get_y();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(463)
			Float tmp12 = vpos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(463)
			bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(463)
			if ((tmp13)){
				HX_STACK_LINE(464)
				::haxe::ui::toolkit::controls::VScroll tmp14 = this->_vscroll;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(464)
				Float tmp15 = item->get_y();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(464)
				tmp14->set_pos(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,ensureVisible,(void))

::haxe::ui::toolkit::core::interfaces::IItemRenderer ListView_obj::createRendererInstance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","createRendererInstance",0xeda51105,"haxe.ui.toolkit.containers.ListView.createRendererInstance","haxe/ui/toolkit/containers/ListView.hx",468,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(469)
	::haxe::ui::toolkit::core::interfaces::IItemRenderer r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(470)
	Dynamic tmp = this->_itemRenderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	if ((tmp1)){
		HX_STACK_LINE(471)
		return null();
	}
	HX_STACK_LINE(474)
	Dynamic tmp2 = this->_itemRenderer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(474)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(474)
	if ((tmp3)){
		HX_STACK_LINE(475)
		Dynamic tmp4 = this->_itemRenderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(475)
		::haxe::ui::toolkit::core::renderers::ItemRenderer tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(475)
		tmp5 = hx::TCast< ::haxe::ui::toolkit::core::renderers::ItemRenderer >::cast(tmp4);
		HX_STACK_LINE(475)
		::haxe::ui::toolkit::core::renderers::ItemRenderer tmp6 = hx::TCast< ::haxe::ui::toolkit::core::renderers::ItemRenderer >::cast(tmp5->clone());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(475)
		r = tmp6;
	}
	else{
		HX_STACK_LINE(476)
		Dynamic tmp4 = this->_itemRenderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(476)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(476)
		if ((tmp5)){
			HX_STACK_LINE(477)
			Dynamic tmp6 = this->_itemRenderer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(477)
			::hx::Class tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(477)
			tmp7 = hx::TCast< ::hx::Class >::cast(tmp6);
			HX_STACK_LINE(477)
			::hx::Class cls = tmp7;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(478)
			::hx::Class tmp8 = cls;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(478)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp9 = ::Type_obj::createInstance(tmp8,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(478)
			r = tmp9;
		}
		else{
			HX_STACK_LINE(479)
			Dynamic tmp6 = this->_itemRenderer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(479)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(479)
			if ((tmp7)){
				HX_STACK_LINE(480)
				Dynamic tmp8 = this->_itemRenderer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(480)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(480)
				tmp9 = hx::TCast< ::String >::cast(tmp8);
				HX_STACK_LINE(480)
				::String classString = tmp9;		HX_STACK_VAR(classString,"classString");
				HX_STACK_LINE(481)
				::String tmp10 = classString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(481)
				::hx::Class tmp11 = ::haxe::ui::toolkit::util::Types_obj::resolveClass(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(481)
				::hx::Class cls = tmp11;		HX_STACK_VAR(cls,"cls");
				HX_STACK_LINE(482)
				::hx::Class tmp12 = cls;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(482)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp13 = ::Type_obj::createInstance(tmp12,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(482)
				r = tmp13;
			}
		}
	}
	HX_STACK_LINE(485)
	bool tmp4 = (r != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(485)
	if ((tmp4)){
		HX_STACK_LINE(486)
		r->__FieldRef(HX_HCSTRING("eventDispatcher","\x61","\x7a","\xd7","\xfd")) = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(489)
	bool tmp5 = this->_allowSelection;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(489)
	r->set_useHandCursor(tmp5);
	HX_STACK_LINE(491)
	::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(491)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,createRendererInstance,return )

::haxe::ui::toolkit::core::DisplayObject ListView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","clone",0x71b0d48c,"haxe.ui.toolkit.containers.ListView.clone","src/haxe/ui/toolkit/containers/ListView.hx",1,0x5b3f328c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollView tmp = hx::TCast< ::haxe::ui::toolkit::containers::ScrollView >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ListView c = ((::haxe::ui::toolkit::containers::ListView)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::ListView tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ListView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","self",0xdd25453d,"haxe.ui.toolkit.containers.ListView.self","src/haxe/ui/toolkit/containers/ListView.hx",1,0x5b3f328c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ListView tmp = ::haxe::ui::toolkit::containers::ListView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


Dynamic ListView_obj::set_onComponentEvent( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_onComponentEvent",0xf26e8fca,"haxe.ui.toolkit.containers.ListView.set_onComponentEvent","haxe/ui/toolkit/containers/ListView.hx",24,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(24)
	this->onComponentEvent = value;
	HX_STACK_LINE(25)
	::String tmp = HX_HCSTRING("haxeui_componentEvent","\x02","\x5c","\xae","\x33");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(29)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_onComponentEvent,return )


ListView_obj::ListView_obj()
{
}

void ListView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListView);
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_MARK_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_MARK_MEMBER_NAME(listSize,"listSize");
	HX_MARK_MEMBER_NAME(itemHeight,"itemHeight");
	HX_MARK_MEMBER_NAME(selectedItems,"selectedItems");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_VISIT_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_VISIT_MEMBER_NAME(listSize,"listSize");
	HX_VISIT_MEMBER_NAME(itemHeight,"itemHeight");
	HX_VISIT_MEMBER_NAME(selectedItems,"selectedItems");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"syncUI") ) { return syncUI_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"content") ) { return inCallProp == hx::paccAlways ? get_content() : content; }
		if (HX_FIELD_EQ(inName,"getItem") ) { return getItem_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return _content; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"listSize") ) { return inCallProp == hx::paccAlways ? get_listSize() : listSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"itemHeight") ) { return inCallProp == hx::paccAlways ? get_itemHeight() : itemHeight; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return get_dataSource(); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return isSelected_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return _dataSource; }
		if (HX_FIELD_EQ(inName,"get_content") ) { return get_content_dyn(); }
		if (HX_FIELD_EQ(inName,"handleClick") ) { return handleClick_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == hx::paccAlways) return get_itemRenderer(); }
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return get_listSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getItemIndex") ) { return getItemIndex_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return _itemRenderer; }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { return inCallProp == hx::paccAlways ? get_selectedItems() : selectedItems; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ensureVisible_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { return _selectedItems; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { return _lastSelection; }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { if (inCallProp == hx::paccAlways) return get_allowSelection(); }
		if (HX_FIELD_EQ(inName,"get_itemHeight") ) { return get_itemHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return get_dataSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return set_dataSource_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { return _allowSelection; }
		if (HX_FIELD_EQ(inName,"addListViewItem") ) { return addListViewItem_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_itemRenderer") ) { return get_itemRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_itemRenderer") ) { return set_itemRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"_onListItemClick") ) { return _onListItemClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { return onComponentEvent; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedItems") ) { return get_selectedItems_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_allowSelection") ) { return get_allowSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowSelection") ) { return set_allowSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"removeListViewItem") ) { return removeListViewItem_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_onListItemMouseOut") ) { return _onListItemMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"handleListSelection") ) { return handleListSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onDataSourceChanged") ) { return _onDataSourceChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"_onListItemMouseOver") ) { return _onListItemMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onComponentEvent") ) { return set_onComponentEvent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createRendererInstance") ) { return createRendererInstance_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setSelectedIndexNoEvent") ) { return setSelectedIndexNoEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listSize") ) { listSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemHeight") ) { itemHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return set_dataSource(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast< ::haxe::ui::toolkit::data::IDataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { if (inCallProp == hx::paccAlways) return set_itemRenderer(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { _selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { _lastSelection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { if (inCallProp == hx::paccAlways) return set_allowSelection(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { _allowSelection=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { if (inCallProp == hx::paccAlways) return set_onComponentEvent(inValue);onComponentEvent=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"));
	outFields->push(HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"));
	outFields->push(HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6"));
	outFields->push(HX_HCSTRING("_lastSelection","\x57","\xc3","\xa5","\xca"));
	outFields->push(HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79"));
	outFields->push(HX_HCSTRING("_allowSelection","\x22","\x23","\x00","\xaa"));
	outFields->push(HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"));
	outFields->push(HX_HCSTRING("itemHeight","\x5a","\xd1","\x59","\xf0"));
	outFields->push(HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("itemRenderer","\x76","\x11","\x05","\x97"));
	outFields->push(HX_HCSTRING("allowSelection","\x83","\xda","\x9f","\x60"));
	outFields->push(HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::data::IDataSource*/ ,(int)offsetof(ListView_obj,_dataSource),HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(ListView_obj,_content),HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListView_obj,_selectedItems),HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6")},
	{hx::fsInt,(int)offsetof(ListView_obj,_lastSelection),HX_HCSTRING("_lastSelection","\x57","\xc3","\xa5","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListView_obj,_itemRenderer),HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79")},
	{hx::fsBool,(int)offsetof(ListView_obj,_allowSelection),HX_HCSTRING("_allowSelection","\x22","\x23","\x00","\xaa")},
	{hx::fsInt,(int)offsetof(ListView_obj,listSize),HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c")},
	{hx::fsFloat,(int)offsetof(ListView_obj,itemHeight),HX_HCSTRING("itemHeight","\x5a","\xd1","\x59","\xf0")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListView_obj,selectedItems),HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(ListView_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListView_obj,onComponentEvent),HX_HCSTRING("onComponentEvent","\x9c","\x87","\x21","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"),
	HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"),
	HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6"),
	HX_HCSTRING("_lastSelection","\x57","\xc3","\xa5","\xca"),
	HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79"),
	HX_HCSTRING("_allowSelection","\x22","\x23","\x00","\xaa"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"),
	HX_HCSTRING("itemHeight","\x5a","\xd1","\x59","\xf0"),
	HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"),
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("get_listSize","\x48","\x24","\x62","\xe1"),
	HX_HCSTRING("get_itemHeight","\xa3","\x59","\x4f","\x66"),
	HX_HCSTRING("getItem","\xc9","\x74","\x42","\x18"),
	HX_HCSTRING("get_selectedItems","\xfc","\x92","\xbe","\xbe"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("get_content","\x50","\xed","\x71","\x9f"),
	HX_HCSTRING("get_itemRenderer","\xff","\xfd","\xa3","\x9b"),
	HX_HCSTRING("set_itemRenderer","\x73","\xeb","\xe5","\xf1"),
	HX_HCSTRING("get_allowSelection","\x4c","\xbb","\x39","\xfc"),
	HX_HCSTRING("set_allowSelection","\xc0","\xed","\xe8","\xd8"),
	HX_HCSTRING("get_dataSource","\xee","\xfe","\xc8","\x93"),
	HX_HCSTRING("set_dataSource","\x62","\xe7","\xe8","\xb3"),
	HX_HCSTRING("_onDataSourceChanged","\xb1","\xf3","\x43","\x03"),
	HX_HCSTRING("syncUI","\x6f","\x91","\x87","\xef"),
	HX_HCSTRING("addListViewItem","\x57","\x8c","\xb6","\x71"),
	HX_HCSTRING("removeListViewItem","\xfa","\x5e","\x9d","\x37"),
	HX_HCSTRING("_onListItemMouseOver","\x2a","\x3e","\xa2","\xcb"),
	HX_HCSTRING("_onListItemMouseOut","\x78","\xe0","\xe2","\xba"),
	HX_HCSTRING("_onListItemClick","\xd9","\xd3","\xe1","\xc6"),
	HX_HCSTRING("handleListSelection","\x46","\xe3","\x8a","\xa3"),
	HX_HCSTRING("handleClick","\x80","\x27","\xa8","\xfa"),
	HX_HCSTRING("isSelected","\x65","\x3c","\x1c","\x2c"),
	HX_HCSTRING("getItemIndex","\x89","\x9d","\x56","\xcd"),
	HX_HCSTRING("setSelectedIndexNoEvent","\xe4","\xb6","\xf6","\x9a"),
	HX_HCSTRING("ensureVisible","\x54","\xfe","\x02","\x7c"),
	HX_HCSTRING("createRendererInstance","\x14","\x17","\x23","\xa6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	HX_HCSTRING("onComponentEvent","\x9c","\x87","\x21","\xd1"),
	HX_HCSTRING("set_onComponentEvent","\x19","\xa4","\x43","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#endif

hx::Class ListView_obj::__mClass;

void ListView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.ListView","\x5d","\x04","\xbc","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListView_obj >;
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
