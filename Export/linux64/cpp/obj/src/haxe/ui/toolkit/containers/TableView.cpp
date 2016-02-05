#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableView
#include <haxe/ui/toolkit/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef
#include <haxe/ui/toolkit/containers/TableViewColumnDef.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDefs
#include <haxe/ui/toolkit/containers/TableViewColumnDefs.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewRow
#include <haxe/ui/toolkit/containers/TableViewRow.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
namespace containers{

Void TableView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","new",0xd8105f4b,"haxe.ui.toolkit.containers.TableView.new","haxe/ui/toolkit/containers/TableView.hx",21,0x496fad85)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::containers::TableViewColumnDefs tmp = ::haxe::ui::toolkit::containers::TableViewColumnDefs_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->_columnDefs = tmp;
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::data::ArrayDataSource tmp1 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->set_dataSource(tmp1);
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::containers::ScrollView tmp2 = ::haxe::ui::toolkit::containers::ScrollView_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	this->_scrollView = tmp2;
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::containers::ScrollView tmp3 = this->_scrollView;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::style::Style tmp4 = tmp3->get_style();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	tmp4->set_borderSize((int)0);
	HX_STACK_LINE(36)
	this->_selectedItems = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(38)
	::haxe::ui::toolkit::containers::ScrollView tmp5 = this->_scrollView;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	tmp5->set_percentWidth((int)100);
	HX_STACK_LINE(39)
	::haxe::ui::toolkit::containers::ScrollView tmp6 = this->_scrollView;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	tmp6->set_percentHeight((int)100);
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::containers::VBox tmp7 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	this->_scrollContent = tmp7;
	HX_STACK_LINE(41)
	::haxe::ui::toolkit::containers::VBox tmp8 = this->_scrollContent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(41)
	tmp8->set_id(HX_HCSTRING("tableContent","\xcb","\x3a","\x0e","\xb1"));
	HX_STACK_LINE(42)
	::haxe::ui::toolkit::containers::VBox tmp9 = this->_scrollContent;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	tmp9->set_autoSize(true);
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::containers::ScrollView tmp10 = this->_scrollView;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::containers::VBox tmp11 = this->_scrollContent;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(43)
	tmp10->addChild(tmp11);
}
;
	return null();
}

//TableView_obj::~TableView_obj() { }

Dynamic TableView_obj::__CreateEmpty() { return  new TableView_obj; }
hx::ObjectPtr< TableView_obj > TableView_obj::__new()
{  hx::ObjectPtr< TableView_obj > _result_ = new TableView_obj();
	_result_->__construct();
	return _result_;}

Dynamic TableView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableView_obj > _result_ = new TableView_obj();
	_result_->__construct();
	return _result_;}

hx::Object *TableView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
	return super::__ToInterface(inType);
}

TableView_obj::operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDataComponent_delegate_< TableView_obj >(this); }
Void TableView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","initialize",0x411b25c5,"haxe.ui.toolkit.containers.TableView.initialize","haxe/ui/toolkit/containers/TableView.hx",49,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::initialize();
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::containers::ScrollView tmp = this->_scrollView;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		this->addChild(tmp);
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::data::IDataSource tmp1 = this->_dataSource;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		if ((tmp2)){
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::data::ArrayDataSource tmp3 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			this->set_dataSource(tmp3);
		}
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::data::IDataSource tmp3 = this->_dataSource;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		tmp3->open();
		HX_STACK_LINE(60)
		this->syncUI();
	}
return null();
}


Void TableView_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","invalidate",0xdb8a0df0,"haxe.ui.toolkit.containers.TableView.invalidate","haxe/ui/toolkit/containers/TableView.hx",63,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(64)
		int tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		this->super::invalidate(tmp,tmp1);
		HX_STACK_LINE(65)
		bool tmp2 = this->_ready;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(65)
			int tmp4 = (int(type) & int((int)256));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			tmp3 = (tmp5 == (int)256);
		}
		else{
			HX_STACK_LINE(65)
			tmp3 = false;
		}
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::containers::ScrollView tmp4 = this->_scrollView;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp5 = tmp4->get_layout();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			Float tmp6 = tmp5->get_usableWidth();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			if ((tmp7)){
				HX_STACK_LINE(67)
				this->resizeColumns();
			}
		}
	}
return null();
}


::haxe::ui::toolkit::data::IDataSource TableView_obj::get_dataSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","get_dataSource",0x2714d1e3,"haxe.ui.toolkit.containers.TableView.get_dataSource","haxe/ui/toolkit/containers/TableView.hx",77,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,get_dataSource,return )

::haxe::ui::toolkit::data::IDataSource TableView_obj::set_dataSource( ::haxe::ui::toolkit::data::IDataSource value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","set_dataSource",0x4734ba57,"haxe.ui.toolkit.containers.TableView.set_dataSource","haxe/ui/toolkit/containers/TableView.hx",81,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(82)
	::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp1)){
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::data::IDataSource tmp2 = this->_dataSource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::_legacy::events::IEventDispatcher >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		if ((tmp3)){
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::data::IDataSource tmp4 = this->_dataSource;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::openfl::_legacy::events::IEventDispatcher tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			tmp5 = hx::TCast< ::openfl::_legacy::events::IEventDispatcher >::cast(tmp4);
			HX_STACK_LINE(84)
			::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			Dynamic tmp7 = this->_onDataSourceChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			tmp5->removeEventListener(tmp6,tmp7,null());
		}
	}
	HX_STACK_LINE(88)
	this->_dataSource = value;
	HX_STACK_LINE(90)
	::haxe::ui::toolkit::data::IDataSource tmp2 = this->_dataSource;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::_legacy::events::IEventDispatcher >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	if ((tmp3)){
		HX_STACK_LINE(91)
		::haxe::ui::toolkit::data::IDataSource tmp4 = this->_dataSource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		::openfl::_legacy::events::IEventDispatcher tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		tmp5 = hx::TCast< ::openfl::_legacy::events::IEventDispatcher >::cast(tmp4);
		HX_STACK_LINE(91)
		::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		Dynamic tmp7 = this->_onDataSourceChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
	}
	HX_STACK_LINE(94)
	bool tmp4 = this->_ready;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	if ((tmp5)){
		HX_STACK_LINE(95)
		this->syncUI();
	}
	HX_STACK_LINE(98)
	::haxe::ui::toolkit::data::IDataSource tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,set_dataSource,return )

Void TableView_obj::_onDataSourceChanged( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","_onDataSourceChanged",0x0843ec66,"haxe.ui.toolkit.containers.TableView._onDataSourceChanged","haxe/ui/toolkit/containers/TableView.hx",102,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(102)
		this->syncUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,_onDataSourceChanged,(void))

::haxe::ui::toolkit::containers::TableViewColumnDefs TableView_obj::get_columns( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","get_columns",0xf8e9fedf,"haxe.ui.toolkit.containers.TableView.get_columns","haxe/ui/toolkit/containers/TableView.hx",110,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	::haxe::ui::toolkit::containers::TableViewColumnDefs tmp = this->_columnDefs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,get_columns,return )

::haxe::ui::toolkit::containers::TableViewColumnDefs TableView_obj::set_columns( ::haxe::ui::toolkit::containers::TableViewColumnDefs value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","set_columns",0x035705eb,"haxe.ui.toolkit.containers.TableView.set_columns","haxe/ui/toolkit/containers/TableView.hx",113,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(114)
	this->_columnDefs = value;
	HX_STACK_LINE(115)
	::haxe::ui::toolkit::containers::TableViewColumnDefs tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,set_columns,return )

Void TableView_obj::syncUI( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","syncUI",0x0cece764,"haxe.ui.toolkit.containers.TableView.syncUI","haxe/ui/toolkit/containers/TableView.hx",121,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		int pos = (int)0;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(123)
		::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(124)
			::haxe::ui::toolkit::data::IDataSource tmp2 = this->get_dataSource();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			bool tmp3 = tmp2->moveFirst();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			if ((tmp3)){
				HX_STACK_LINE(125)
				while((true)){
					HX_STACK_LINE(126)
					::haxe::ui::toolkit::data::IDataSource tmp4 = this->get_dataSource();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(126)
					::String tmp5 = tmp4->hash();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					::String dataHash = tmp5;		HX_STACK_VAR(dataHash,"dataHash");
					HX_STACK_LINE(127)
					::haxe::ui::toolkit::data::IDataSource tmp6 = this->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(127)
					Dynamic tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(127)
					Dynamic data = tmp7;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(128)
					::haxe::ui::toolkit::containers::TableViewRow item = null();		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(129)
					::haxe::ui::toolkit::containers::VBox tmp8 = this->_scrollContent;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(129)
					int tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(129)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = tmp8->getChildAt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(129)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					if ((tmp11)){
						HX_STACK_LINE(130)
						::haxe::ui::toolkit::containers::VBox tmp12 = this->_scrollContent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(130)
						int tmp13 = pos;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(130)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = tmp12->getChildAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(130)
						::haxe::ui::toolkit::containers::TableViewRow tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(130)
						tmp15 = hx::TCast< ::haxe::ui::toolkit::containers::TableViewRow >::cast(tmp14);
						HX_STACK_LINE(130)
						item = tmp15;
					}
					HX_STACK_LINE(133)
					bool tmp12 = (item == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(133)
					if ((tmp12)){
						HX_STACK_LINE(134)
						::String tmp13 = dataHash;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(134)
						Dynamic tmp14 = data;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(134)
						int tmp15 = pos;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(134)
						this->addTableRow(tmp13,tmp14,tmp15);
						HX_STACK_LINE(135)
						(pos)++;
					}
					else{
						HX_STACK_LINE(137)
						bool tmp13 = (item->hash == dataHash);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(137)
						if ((tmp13)){
							HX_STACK_LINE(138)
							(pos)++;
						}
						else{
							HX_STACK_LINE(140)
							while((true)){
								HX_STACK_LINE(140)
								bool tmp14 = (item != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(140)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(140)
								if ((tmp14)){
									HX_STACK_LINE(140)
									tmp15 = (item->hash != dataHash);
								}
								else{
									HX_STACK_LINE(140)
									tmp15 = false;
								}
								HX_STACK_LINE(140)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(140)
								if ((tmp16)){
									HX_STACK_LINE(140)
									break;
								}
								HX_STACK_LINE(142)
								::haxe::ui::toolkit::containers::VBox tmp17 = this->_scrollContent;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(142)
								int tmp18 = pos;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(142)
								::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp19 = tmp17->getChildAt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(142)
								::haxe::ui::toolkit::containers::TableViewRow tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(142)
								tmp20 = hx::TCast< ::haxe::ui::toolkit::containers::TableViewRow >::cast(tmp19);
								HX_STACK_LINE(142)
								item = tmp20;
							}
							HX_STACK_LINE(144)
							(pos)++;
						}
					}
					HX_STACK_LINE(148)
					::haxe::ui::toolkit::data::IDataSource tmp13 = this->get_dataSource();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					bool tmp14 = tmp13->moveNext();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(148)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(125)
					if ((tmp15)){
						HX_STACK_LINE(125)
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,syncUI,(void))

Void TableView_obj::addTableRow( ::String dataHash,Dynamic data,hx::Null< int >  __o_index){
int index = __o_index.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","addTableRow",0xfeb107d8,"haxe.ui.toolkit.containers.TableView.addTableRow","haxe/ui/toolkit/containers/TableView.hx",153,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dataHash,"dataHash")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(154)
		bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		if ((tmp)){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(158)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(158)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				if ((tmp3)){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(158)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				::String f = tmp4;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(158)
				++(_g);
				HX_STACK_LINE(159)
				bool tmp5 = (f != HX_HCSTRING("__get_id__","\x64","\xca","\xa6","\x68"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(159)
				if ((tmp5)){
					HX_STACK_LINE(160)
					::haxe::ui::toolkit::containers::TableViewColumnDefs tmp6 = this->_columnDefs;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(160)
					::String tmp7 = f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(160)
					bool tmp8 = tmp6->has(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(160)
					bool tmp9 = (tmp8 == false);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(160)
					if ((tmp9)){
						HX_STACK_LINE(161)
						::haxe::ui::toolkit::containers::TableViewColumnDefs tmp10 = this->_columnDefs;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(161)
						::String tmp11 = f;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(161)
						tmp10->add(tmp11,null(),null());
						HX_STACK_LINE(162)
						::String tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(162)
						Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("TableView.hx","\x2b","\xd7","\x4a","\xfc"),162,HX_HCSTRING("haxe.ui.toolkit.containers.TableView","\xd9","\x5d","\x6e","\xb4"),HX_HCSTRING("addTableRow","\xed","\x15","\x1b","\x7f"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(162)
						::haxe::Log_obj::trace(tmp12,tmp13);
					}
				}
			}
		}
		HX_STACK_LINE(167)
		::haxe::ui::toolkit::containers::TableViewRow tmp1 = ::haxe::ui::toolkit::containers::TableViewRow_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		::haxe::ui::toolkit::containers::TableViewRow item = tmp1;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(168)
		item->set_autoSize(true);
		HX_STACK_LINE(169)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		item->set_data(tmp2);
		HX_STACK_LINE(170)
		item->hash = dataHash;
		HX_STACK_LINE(171)
		::haxe::ui::toolkit::containers::VBox tmp3 = this->_scrollContent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		int tmp4 = tmp3->get_numChildren();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		int tmp5 = hx::Mod(tmp4,(int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		if ((tmp6)){
			HX_STACK_LINE(171)
			tmp7 = HX_HCSTRING("even","\x1a","\x6f","\x1c","\x43");
		}
		else{
			HX_STACK_LINE(171)
			tmp7 = HX_HCSTRING("odd","\xaf","\x91","\x54","\x00");
		}
		HX_STACK_LINE(171)
		::String id = tmp7;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(172)
		::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		item->set_id(tmp8);
		HX_STACK_LINE(173)
		bool tmp9 = (index == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		if ((tmp9)){
			HX_STACK_LINE(174)
			::haxe::ui::toolkit::containers::VBox tmp10 = this->_scrollContent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			::haxe::ui::toolkit::containers::TableViewRow tmp11 = item;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			tmp10->addChild(tmp11);
		}
		else{
			HX_STACK_LINE(176)
			::haxe::ui::toolkit::containers::VBox tmp10 = this->_scrollContent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			::haxe::ui::toolkit::containers::TableViewRow tmp11 = item;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(176)
			int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			tmp10->addChildAt(tmp11,tmp12);
		}
		HX_STACK_LINE(179)
		::haxe::ui::toolkit::containers::ScrollView tmp10 = this->_scrollView;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		tmp10->invalidate((int)256,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TableView_obj,addTableRow,(void))

Void TableView_obj::resizeColumns( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","resizeColumns",0xa1b7e3f4,"haxe.ui.toolkit.containers.TableView.resizeColumns","haxe/ui/toolkit/containers/TableView.hx",182,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::containers::VBox tmp = this->_scrollContent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		if ((tmp2)){
			HX_STACK_LINE(185)
			return null();
		}
		HX_STACK_LINE(187)
		::haxe::ui::toolkit::containers::VBox tmp3 = this->_scrollContent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = tmp3->getChildAt((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		::haxe::ui::toolkit::containers::TableViewRow tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		tmp5 = hx::TCast< ::haxe::ui::toolkit::containers::TableViewRow >::cast(tmp4);
		HX_STACK_LINE(187)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp6 = tmp5->get_layout();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		int tmp7 = tmp6->get_spacingX();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(187)
		int sx = tmp7;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(189)
		::haxe::ui::toolkit::containers::TableViewColumnDefs tmp8 = this->_columnDefs;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		Array< ::Dynamic > cols = tmp8->iterator();		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(190)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				bool tmp9 = (_g < cols->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(191)
				if ((tmp10)){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(191)
				::haxe::ui::toolkit::containers::TableViewColumnDef tmp11 = cols->__get(_g).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(191)
				::haxe::ui::toolkit::containers::TableViewColumnDef c = tmp11;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(191)
				++(_g);
				HX_STACK_LINE(192)
				Float tmp12 = (c->calculatedWidth + sx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(192)
				hx::AddEq(totalWidth,tmp12);
			}
		}
		HX_STACK_LINE(195)
		Float tmp9 = totalWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		::haxe::ui::toolkit::containers::ScrollView tmp10 = this->_scrollView;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(195)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp11 = tmp10->get_layout();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		Float tmp12 = tmp11->get_usableWidth();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		bool tmp13 = (tmp9 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(195)
		if ((tmp13)){
			HX_STACK_LINE(196)
			::haxe::ui::toolkit::containers::ScrollView tmp14 = this->_scrollView;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(196)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp15 = tmp14->get_layout();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(196)
			Float tmp16 = tmp15->get_usableWidth();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(196)
			Float tmp17 = totalWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(196)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(196)
			Float diff = tmp18;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(197)
			int tmp19 = (cols->length - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(197)
			::haxe::ui::toolkit::containers::TableViewColumnDef tmp20 = cols->__get(tmp19).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(197)
			Float tmp21 = tmp20->calculatedWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(197)
			Float tmp22 = diff;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(197)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(197)
			Float newWidth = tmp23;		HX_STACK_VAR(newWidth,"newWidth");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(198)
				::haxe::ui::toolkit::containers::VBox tmp24 = this->_scrollContent;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(198)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp24->get_children();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(198)
				while((true)){
					HX_STACK_LINE(198)
					bool tmp25 = (_g < _g1->length);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(198)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(198)
					if ((tmp26)){
						HX_STACK_LINE(198)
						break;
					}
					HX_STACK_LINE(198)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp27 = _g1->__get(_g);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(198)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp27;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(198)
					++(_g);
					HX_STACK_LINE(199)
					::haxe::ui::toolkit::containers::TableViewRow tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(199)
					tmp28 = hx::TCast< ::haxe::ui::toolkit::containers::TableViewRow >::cast(child);
					HX_STACK_LINE(199)
					::haxe::ui::toolkit::containers::TableViewRow temp = tmp28;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(200)
					int tmp29 = temp->get_numChildren();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(200)
					int tmp30 = (tmp29 - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(200)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp31 = temp->getChildAt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(200)
					Float tmp32 = newWidth;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(200)
					tmp31->set_width(tmp32);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,resizeColumns,(void))

Void TableView_obj::handleListSelection( ::haxe::ui::toolkit::containers::TableViewRow item,::openfl::_legacy::events::Event event,hx::Null< bool >  __o_raiseEvent){
bool raiseEvent = __o_raiseEvent.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","handleListSelection",0x27953831,"haxe.ui.toolkit.containers.TableView.handleListSelection","haxe/ui/toolkit/containers/TableView.hx",205,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(raiseEvent,"raiseEvent")
{
		HX_STACK_LINE(206)
		bool shiftPressed = false;		HX_STACK_VAR(shiftPressed,"shiftPressed");
		HX_STACK_LINE(207)
		bool ctrlPressed = false;		HX_STACK_VAR(ctrlPressed,"ctrlPressed");
		HX_STACK_LINE(209)
		bool tmp = (event != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		if ((tmp)){
			HX_STACK_LINE(209)
			::openfl::_legacy::events::Event tmp2 = event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(209)
			::openfl::_legacy::events::Event tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(209)
			tmp1 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::_legacy::events::MouseEvent >());
		}
		else{
			HX_STACK_LINE(209)
			tmp1 = false;
		}
		HX_STACK_LINE(209)
		if ((tmp1)){
			HX_STACK_LINE(210)
			::openfl::_legacy::events::MouseEvent tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			tmp2 = hx::TCast< ::openfl::_legacy::events::MouseEvent >::cast(event);
			HX_STACK_LINE(210)
			::openfl::_legacy::events::MouseEvent mouseEvent = tmp2;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(211)
			shiftPressed = mouseEvent->shiftKey;
			HX_STACK_LINE(212)
			ctrlPressed = mouseEvent->ctrlKey;
		}
		HX_STACK_LINE(215)
		bool tmp2 = (ctrlPressed == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		if ((tmp2)){
		}
		else{
			HX_STACK_LINE(217)
			bool tmp3 = (shiftPressed == true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			if ((tmp3)){
			}
			else{
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(220)
					Array< ::Dynamic > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(220)
					while((true)){
						HX_STACK_LINE(220)
						bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(220)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(220)
						if ((tmp5)){
							HX_STACK_LINE(220)
							break;
						}
						HX_STACK_LINE(220)
						::haxe::ui::toolkit::containers::TableViewRow tmp6 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::containers::TableViewRow >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(220)
						::haxe::ui::toolkit::containers::TableViewRow selectedItem = tmp6;		HX_STACK_VAR(selectedItem,"selectedItem");
						HX_STACK_LINE(220)
						++(_g);
						HX_STACK_LINE(221)
						bool tmp7 = (selectedItem != item);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(221)
						if ((tmp7)){
							HX_STACK_LINE(222)
							selectedItem->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
						}
					}
				}
				HX_STACK_LINE(225)
				this->_selectedItems = Array_obj< ::Dynamic >::__new();
			}
		}
		HX_STACK_LINE(228)
		::haxe::ui::toolkit::containers::TableViewRow tmp3 = item;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		bool tmp4 = this->isSelected(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		if ((tmp4)){
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::containers::TableViewRow tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			this->_selectedItems->remove(tmp5);
			HX_STACK_LINE(230)
			item->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(232)
			::haxe::ui::toolkit::containers::TableViewRow tmp5 = item;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			this->_selectedItems->push(tmp5);
			HX_STACK_LINE(233)
			item->set_state(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
		}
		HX_STACK_LINE(238)
		bool tmp5 = (raiseEvent == true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		if ((tmp5)){
			HX_STACK_LINE(239)
			::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			::openfl::_legacy::events::Event tmp7 = ::openfl::_legacy::events::Event_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			::openfl::_legacy::events::Event event1 = tmp7;		HX_STACK_VAR(event1,"event1");
			HX_STACK_LINE(240)
			::openfl::_legacy::events::Event tmp8 = event1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			this->dispatchEvent(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TableView_obj,handleListSelection,(void))

Void TableView_obj::handleClick( ::haxe::ui::toolkit::containers::TableViewRow item,::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","handleClick",0x7a3e196b,"haxe.ui.toolkit.containers.TableView.handleClick","haxe/ui/toolkit/containers/TableView.hx",244,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(245)
		::haxe::ui::toolkit::containers::VBox tmp = this->_scrollContent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		::haxe::ui::toolkit::containers::TableViewRow tmp1 = item;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		int tmp2 = ::Lambda_obj::indexOf(tmp->get_children(),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(246)
		int tmp3 = this->_lastSelection;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		if ((tmp5)){
			HX_STACK_LINE(247)
			::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::DOUBLE_CLICK;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			::openfl::_legacy::events::MouseEvent tmp7 = ::openfl::_legacy::events::MouseEvent_obj::__new(tmp6,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(247)
			::openfl::_legacy::events::MouseEvent event1 = tmp7;		HX_STACK_VAR(event1,"event1");
			HX_STACK_LINE(248)
			::openfl::_legacy::events::MouseEvent tmp8 = event1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(248)
			this->dispatchEvent(tmp8);
			HX_STACK_LINE(249)
			this->_lastSelection = (int)-1;
		}
		else{
			HX_STACK_LINE(251)
			this->_lastSelection = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TableView_obj,handleClick,(void))

bool TableView_obj::isSelected( ::haxe::ui::toolkit::containers::TableViewRow item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","isSelected",0x807c30da,"haxe.ui.toolkit.containers.TableView.isSelected","haxe/ui/toolkit/containers/TableView.hx",255,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(256)
	::haxe::ui::toolkit::containers::TableViewRow tmp = item;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	int tmp1 = ::Lambda_obj::indexOf(this->_selectedItems,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,isSelected,return )

::haxe::ui::toolkit::core::DisplayObject TableView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","clone",0xf3917308,"haxe.ui.toolkit.containers.TableView.clone","src/haxe/ui/toolkit/containers/TableView.hx",1,0xd6c0401a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TableView c = ((::haxe::ui::toolkit::containers::TableView)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::TableView tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject TableView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","self",0x39910a41,"haxe.ui.toolkit.containers.TableView.self","src/haxe/ui/toolkit/containers/TableView.hx",1,0xd6c0401a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TableView tmp = ::haxe::ui::toolkit::containers::TableView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



TableView_obj::TableView_obj()
{
}

void TableView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableView);
	HX_MARK_MEMBER_NAME(_scrollView,"_scrollView");
	HX_MARK_MEMBER_NAME(_scrollContent,"_scrollContent");
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_MARK_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_MARK_MEMBER_NAME(_columnDefs,"_columnDefs");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TableView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollView,"_scrollView");
	HX_VISIT_MEMBER_NAME(_scrollContent,"_scrollContent");
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_VISIT_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_VISIT_MEMBER_NAME(_columnDefs,"_columnDefs");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TableView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return get_columns(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return get_dataSource(); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return isSelected_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollView") ) { return _scrollView; }
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return _dataSource; }
		if (HX_FIELD_EQ(inName,"_columnDefs") ) { return _columnDefs; }
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return set_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"addTableRow") ) { return addTableRow_dyn(); }
		if (HX_FIELD_EQ(inName,"handleClick") ) { return handleClick_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resizeColumns") ) { return resizeColumns_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_scrollContent") ) { return _scrollContent; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { return _selectedItems; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { return _lastSelection; }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return get_dataSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return set_dataSource_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"handleListSelection") ) { return handleListSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onDataSourceChanged") ) { return _onDataSourceChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TableView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return set_columns(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return set_dataSource(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollView") ) { _scrollView=inValue.Cast< ::haxe::ui::toolkit::containers::ScrollView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast< ::haxe::ui::toolkit::data::IDataSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_columnDefs") ) { _columnDefs=inValue.Cast< ::haxe::ui::toolkit::containers::TableViewColumnDefs >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_scrollContent") ) { _scrollContent=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { _selectedItems=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { _lastSelection=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TableView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_scrollView","\x31","\x8e","\x98","\xde"));
	outFields->push(HX_HCSTRING("_scrollContent","\xed","\x98","\x10","\xca"));
	outFields->push(HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"));
	outFields->push(HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6"));
	outFields->push(HX_HCSTRING("_lastSelection","\x57","\xc3","\xa5","\xca"));
	outFields->push(HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));
	outFields->push(HX_HCSTRING("_columnDefs","\x23","\xbe","\xd3","\xe0"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::ScrollView*/ ,(int)offsetof(TableView_obj,_scrollView),HX_HCSTRING("_scrollView","\x31","\x8e","\x98","\xde")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(TableView_obj,_scrollContent),HX_HCSTRING("_scrollContent","\xed","\x98","\x10","\xca")},
	{hx::fsObject /*::haxe::ui::toolkit::data::IDataSource*/ ,(int)offsetof(TableView_obj,_dataSource),HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TableView_obj,_selectedItems),HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6")},
	{hx::fsInt,(int)offsetof(TableView_obj,_lastSelection),HX_HCSTRING("_lastSelection","\x57","\xc3","\xa5","\xca")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::TableViewColumnDefs*/ ,(int)offsetof(TableView_obj,_columnDefs),HX_HCSTRING("_columnDefs","\x23","\xbe","\xd3","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_scrollView","\x31","\x8e","\x98","\xde"),
	HX_HCSTRING("_scrollContent","\xed","\x98","\x10","\xca"),
	HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"),
	HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6"),
	HX_HCSTRING("_lastSelection","\x57","\xc3","\xa5","\xca"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("get_dataSource","\xee","\xfe","\xc8","\x93"),
	HX_HCSTRING("set_dataSource","\x62","\xe7","\xe8","\xb3"),
	HX_HCSTRING("_onDataSourceChanged","\xb1","\xf3","\x43","\x03"),
	HX_HCSTRING("_columnDefs","\x23","\xbe","\xd3","\xe0"),
	HX_HCSTRING("get_columns","\xf4","\x0c","\x54","\x79"),
	HX_HCSTRING("set_columns","\x00","\x14","\xc1","\x83"),
	HX_HCSTRING("syncUI","\x6f","\x91","\x87","\xef"),
	HX_HCSTRING("addTableRow","\xed","\x15","\x1b","\x7f"),
	HX_HCSTRING("resizeColumns","\x49","\x61","\x51","\x9b"),
	HX_HCSTRING("handleListSelection","\x46","\xe3","\x8a","\xa3"),
	HX_HCSTRING("handleClick","\x80","\x27","\xa8","\xfa"),
	HX_HCSTRING("isSelected","\x65","\x3c","\x1c","\x2c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableView_obj::__mClass,"__mClass");
};

#endif

hx::Class TableView_obj::__mClass;

void TableView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.TableView","\xd9","\x5d","\x6e","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TableView_obj >;
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
