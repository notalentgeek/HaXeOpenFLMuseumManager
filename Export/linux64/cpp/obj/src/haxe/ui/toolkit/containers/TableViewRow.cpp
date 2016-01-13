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
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgress
#include <haxe/ui/toolkit/controls/HProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HSlider
#include <haxe/ui/toolkit/controls/HSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
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
namespace containers{

Void TableViewRow_obj::__construct(::haxe::ui::toolkit::containers::TableView parentTable)
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","new",0xfb71bf33,"haxe.ui.toolkit.containers.TableViewRow.new","haxe/ui/toolkit/containers/TableView.hx",321,0x496fad85)
HX_STACK_THIS(this)
HX_STACK_ARG(parentTable,"parentTable")
{
	HX_STACK_LINE(322)
	super::__construct();
	HX_STACK_LINE(323)
	this->_states = Array_obj< ::String >::__new();
	HX_STACK_LINE(324)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	tmp->buttonMode = true;
	HX_STACK_LINE(325)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	tmp1->useHandCursor = true;
	HX_STACK_LINE(326)
	this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	HX_STACK_LINE(327)
	this->_parentTable = parentTable;
}
;
	return null();
}

//TableViewRow_obj::~TableViewRow_obj() { }

Dynamic TableViewRow_obj::__CreateEmpty() { return  new TableViewRow_obj; }
hx::ObjectPtr< TableViewRow_obj > TableViewRow_obj::__new(::haxe::ui::toolkit::containers::TableView parentTable)
{  hx::ObjectPtr< TableViewRow_obj > _result_ = new TableViewRow_obj();
	_result_->__construct(parentTable);
	return _result_;}

Dynamic TableViewRow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableViewRow_obj > _result_ = new TableViewRow_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *TableViewRow_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

TableViewRow_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< TableViewRow_obj >(this); }
TableViewRow_obj::operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< TableViewRow_obj >(this); }
TableViewRow_obj::operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< TableViewRow_obj >(this); }
TableViewRow_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< TableViewRow_obj >(this); }
TableViewRow_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< TableViewRow_obj >(this); }
TableViewRow_obj::operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStateComponent_delegate_< TableViewRow_obj >(this); }
TableViewRow_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< TableViewRow_obj >(this); }
Void TableViewRow_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","initialize",0x49eb12dd,"haxe.ui.toolkit.containers.TableViewRow.initialize","haxe/ui/toolkit/containers/TableView.hx",330,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(331)
		this->super::initialize();
		HX_STACK_LINE(333)
		::String tmp = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		Dynamic tmp1 = this->_onMouseOver_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		this->addEventListener(tmp,tmp1,null(),null(),null());
		HX_STACK_LINE(334)
		::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		Dynamic tmp3 = this->_onMouseOut_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		this->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(335)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		Dynamic tmp5 = this->_onMouseClick_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		this->addEventListener(tmp4,tmp5,null(),null(),null());
	}
return null();
}


Void TableViewRow_obj::_onMouseOver( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","_onMouseOver",0x706ef9c8,"haxe.ui.toolkit.containers.TableViewRow._onMouseOver","haxe/ui/toolkit/containers/TableView.hx",342,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(342)
		this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseOver,(void))

Void TableViewRow_obj::_onMouseOut( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","_onMouseOut",0x8114029a,"haxe.ui.toolkit.containers.TableViewRow._onMouseOut","haxe/ui/toolkit/containers/TableView.hx",345,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(346)
		::haxe::ui::toolkit::containers::TableView tmp = this->_parentTable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		bool tmp1 = tmp->isSelected(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		if ((tmp1)){
			HX_STACK_LINE(347)
			this->set_state(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
		}
		else{
			HX_STACK_LINE(349)
			this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseOut,(void))

Void TableViewRow_obj::_onMouseClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","_onMouseClick",0x01437954,"haxe.ui.toolkit.containers.TableViewRow._onMouseClick","haxe/ui/toolkit/containers/TableView.hx",353,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(360)
		::haxe::ui::toolkit::containers::TableView tmp = this->_parentTable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(360)
		::openfl::_legacy::events::MouseEvent tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(360)
		tmp->handleListSelection(hx::ObjectPtr<OBJ_>(this),tmp1,null());
		HX_STACK_LINE(361)
		::haxe::ui::toolkit::containers::TableView tmp2 = this->_parentTable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(361)
		::openfl::_legacy::events::MouseEvent tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(361)
		tmp2->handleClick(hx::ObjectPtr<OBJ_>(this),tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseClick,(void))

Dynamic TableViewRow_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","get_data",0xab0e8600,"haxe.ui.toolkit.containers.TableViewRow.get_data","haxe/ui/toolkit/containers/TableView.hx",371,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(372)
	Dynamic tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TableViewRow_obj,get_data,return )

Dynamic TableViewRow_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","set_data",0x596bdf74,"haxe.ui.toolkit.containers.TableViewRow.set_data","haxe/ui/toolkit/containers/TableView.hx",374,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(375)
	this->_data = value;
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		::haxe::ui::toolkit::containers::TableView tmp = this->_parentTable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		::haxe::ui::toolkit::containers::TableViewColumnDefs tmp1 = tmp->get_columns();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		Array< ::Dynamic > _g1 = tmp1->iterator();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			if ((tmp3)){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(376)
			::haxe::ui::toolkit::containers::TableViewColumnDef tmp4 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			::haxe::ui::toolkit::containers::TableViewColumnDef colDef = tmp4;		HX_STACK_VAR(colDef,"colDef");
			HX_STACK_LINE(376)
			++(_g);
			HX_STACK_LINE(377)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			::String tmp6 = colDef->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			bool tmp7 = ::Reflect_obj::hasField(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			if ((tmp7)){
				HX_STACK_LINE(378)
				::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(379)
				Dynamic tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(379)
				::String tmp9 = colDef->id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(379)
				Dynamic tmp10 = ::Reflect_obj::field(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(379)
				Dynamic colValue = tmp10;		HX_STACK_VAR(colValue,"colValue");
				HX_STACK_LINE(380)
				::String type = HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c");		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(381)
				Dynamic tmp11 = colValue;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(381)
				bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(381)
				if ((tmp12)){
					HX_STACK_LINE(382)
					Dynamic tmp13 = colValue;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(382)
					::haxe::ui::toolkit::core::Component tmp14 = this->createColumnComponent(tmp13,HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(382)
					c = tmp14;
				}
				else{
					HX_STACK_LINE(384)
					Dynamic tmp13 = colValue;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(384)
					bool tmp14 = ::Reflect_obj::hasField(tmp13,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(384)
					if ((tmp14)){
						HX_STACK_LINE(385)
						Dynamic tmp15 = colValue;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(385)
						Dynamic tmp16 = ::Reflect_obj::field(tmp15,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(385)
						::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(385)
						tmp17 = hx::TCast< ::String >::cast(tmp16);
						HX_STACK_LINE(385)
						type = tmp17;
					}
					HX_STACK_LINE(387)
					Dynamic componentValue = null();		HX_STACK_VAR(componentValue,"componentValue");
					HX_STACK_LINE(388)
					Dynamic tmp15 = colValue;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(388)
					bool tmp16 = ::Reflect_obj::hasField(tmp15,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(388)
					if ((tmp16)){
						HX_STACK_LINE(389)
						Dynamic tmp17 = colValue;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(389)
						Dynamic tmp18 = ::Reflect_obj::field(tmp17,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(389)
						componentValue = tmp18;
					}
					HX_STACK_LINE(391)
					Dynamic tmp17 = componentValue;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(391)
					::String tmp18 = type;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(391)
					::haxe::ui::toolkit::core::Component tmp19 = this->createColumnComponent(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(391)
					c = tmp19;
				}
				HX_STACK_LINE(394)
				bool tmp13 = (c != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				if ((tmp13)){
					HX_STACK_LINE(395)
					bool tmp14 = (type == HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(395)
					if ((tmp14)){
						HX_STACK_LINE(396)
						Dynamic tmp15 = colValue;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(396)
						bool tmp16 = ::Reflect_obj::hasField(tmp15,HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(396)
						if ((tmp16)){
							HX_STACK_LINE(397)
							Dynamic tmp17 = colValue;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(397)
							Dynamic tmp18 = ::Reflect_obj::field(tmp17,HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(397)
							Dynamic controlDataSource = tmp18;		HX_STACK_VAR(controlDataSource,"controlDataSource");
							HX_STACK_LINE(398)
							::haxe::ui::toolkit::data::IDataSource ds = null();		HX_STACK_VAR(ds,"ds");
							HX_STACK_LINE(399)
							Dynamic tmp19 = controlDataSource;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(399)
							bool tmp20 = ::Std_obj::is(tmp19,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(399)
							if ((tmp20)){
								HX_STACK_LINE(400)
								::haxe::ui::toolkit::data::ArrayDataSource tmp21 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(400)
								ds = tmp21;
								HX_STACK_LINE(401)
								{
									HX_STACK_LINE(401)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(401)
									cpp::ArrayBase _g3;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(401)
									_g3 = hx::TCastToArray(controlDataSource);
									HX_STACK_LINE(401)
									while((true)){
										HX_STACK_LINE(401)
										bool tmp22 = (_g2 < _g3->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(401)
										bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(401)
										if ((tmp23)){
											HX_STACK_LINE(401)
											break;
										}
										HX_STACK_LINE(401)
										Dynamic tmp24 = _g3->__GetItem(_g2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(401)
										Dynamic o = tmp24;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(401)
										++(_g2);
										HX_STACK_LINE(402)
										Dynamic tmp25 = o;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(402)
										ds->add(tmp25);
									}
								}
							}
							HX_STACK_LINE(405)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(405)
							tmp21 = hx::TCast< ::haxe::ui::toolkit::controls::selection::ListSelector >::cast(c);
							HX_STACK_LINE(405)
							::haxe::ui::toolkit::data::IDataSource tmp22 = ds;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(405)
							tmp21->set_dataSource(tmp22);
						}
					}
					HX_STACK_LINE(409)
					c->set_autoSize(true);
					HX_STACK_LINE(410)
					::haxe::ui::toolkit::core::Component tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(410)
					this->addChild(tmp15);
					HX_STACK_LINE(411)
					::String tmp16 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp16,"tmp16");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,::haxe::ui::toolkit::containers::TableViewColumnDef,colDef,::haxe::ui::toolkit::core::Component,c)
					int __ArgCount() const { return 1; }
					Void run(Dynamic e){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","haxe/ui/toolkit/containers/TableView.hx",411,0x496fad85)
						HX_STACK_ARG(e,"e")
						{
							HX_STACK_LINE(412)
							bool tmp17 = (colDef->width <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(412)
							if ((tmp17)){
								HX_STACK_LINE(413)
								Float tmp18 = c->get_width();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(413)
								Float tmp19 = colDef->calculatedWidth;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(413)
								bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(413)
								if ((tmp20)){
									HX_STACK_LINE(414)
									Float tmp21 = c->get_width();		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(414)
									colDef->calculatedWidth = tmp21;
								}
								else{
									HX_STACK_LINE(416)
									Float tmp21 = colDef->calculatedWidth;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									c->set_width(tmp21);
								}
							}
							else{
								HX_STACK_LINE(419)
								Float tmp18 = colDef->width;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(419)
								c->set_width(tmp18);
								HX_STACK_LINE(420)
								colDef->calculatedWidth = colDef->width;
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(411)
					c->addEventListener(tmp16, Dynamic(new _Function_5_1(colDef,c)),null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(426)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(426)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,set_data,return )

::haxe::ui::toolkit::core::Component TableViewRow_obj::createColumnComponent( Dynamic value,::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","createColumnComponent",0x1a22f2fe,"haxe.ui.toolkit.containers.TableViewRow.createColumnComponent","haxe/ui/toolkit/containers/TableView.hx",432,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(433)
	::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(434)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	if ((tmp)){
		HX_STACK_LINE(435)
		::haxe::ui::toolkit::controls::Spacer tmp1 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		c = tmp1;
		HX_STACK_LINE(436)
		::haxe::ui::toolkit::core::Component tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(436)
		return tmp2;
	}
	HX_STACK_LINE(438)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	::String _switch_1 = (tmp1);
	if (  ( _switch_1==HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"))){
		HX_STACK_LINE(440)
		::haxe::ui::toolkit::controls::Text tmp2 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(440)
		c = tmp2;
		HX_STACK_LINE(441)
		c->set_autoSize(false);
		HX_STACK_LINE(442)
		::haxe::ui::toolkit::controls::Text tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::controls::Text >::cast(c);
		HX_STACK_LINE(442)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		tmp4 = hx::TCast< ::String >::cast(value);
		HX_STACK_LINE(442)
		tmp3->set_text(tmp4);
		HX_STACK_LINE(443)
		::haxe::ui::toolkit::controls::Text tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		tmp5 = hx::TCast< ::haxe::ui::toolkit::controls::Text >::cast(c);
		HX_STACK_LINE(443)
		tmp5->addStates(this->get_states(),null());
	}
	else if (  ( _switch_1==HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"))){
		HX_STACK_LINE(445)
		::haxe::ui::toolkit::controls::Button tmp2 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		c = tmp2;
		HX_STACK_LINE(446)
		::haxe::ui::toolkit::controls::Button tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(c);
		HX_STACK_LINE(446)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(446)
		tmp4 = hx::TCast< ::String >::cast(value);
		HX_STACK_LINE(446)
		tmp3->set_text(tmp4);
	}
	else if (  ( _switch_1==HX_HCSTRING("slider","\x21","\xc6","\x04","\x70"))){
		HX_STACK_LINE(448)
		::haxe::ui::toolkit::controls::HSlider tmp2 = ::haxe::ui::toolkit::controls::HSlider_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		c = tmp2;
		HX_STACK_LINE(449)
		::haxe::ui::toolkit::controls::HSlider tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::controls::HSlider >::cast(c);
		HX_STACK_LINE(449)
		Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(449)
		tmp3->set_pos(tmp5);
	}
	else if (  ( _switch_1==HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"))){
		HX_STACK_LINE(451)
		::haxe::ui::toolkit::controls::HProgress tmp2 = ::haxe::ui::toolkit::controls::HProgress_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		c = tmp2;
		HX_STACK_LINE(452)
		::haxe::ui::toolkit::controls::HProgress tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(452)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::controls::HProgress >::cast(c);
		HX_STACK_LINE(452)
		Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(452)
		Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(452)
		tmp3->set_pos(tmp5);
	}
	else if (  ( _switch_1==HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"))){
		HX_STACK_LINE(454)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		c = tmp2;
		HX_STACK_LINE(455)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(455)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::controls::selection::ListSelector >::cast(c);
		HX_STACK_LINE(455)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(455)
		tmp4 = hx::TCast< ::String >::cast(value);
		HX_STACK_LINE(455)
		tmp3->set_text(tmp4);
	}
	else  {
		HX_STACK_LINE(457)
		::haxe::ui::toolkit::controls::Spacer tmp2 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(457)
		c = tmp2;
	}
;
;
	HX_STACK_LINE(459)
	::haxe::ui::toolkit::core::Component tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(459)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(TableViewRow_obj,createColumnComponent,return )

Void TableViewRow_obj::buildStyles( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","buildStyles",0x92f945c3,"haxe.ui.toolkit.containers.TableViewRow.buildStyles","haxe/ui/toolkit/containers/TableView.hx",466,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(466)
		Array< ::String > _g1 = this->get_states();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(466)
		while((true)){
			HX_STACK_LINE(466)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(466)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(466)
			if ((tmp1)){
				HX_STACK_LINE(466)
				break;
			}
			HX_STACK_LINE(466)
			::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(466)
			::String s = tmp2;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(466)
			++(_g);
			HX_STACK_LINE(467)
			::haxe::ui::toolkit::style::StyleManager tmp3 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(467)
			::String tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			::haxe::ui::toolkit::style::Style tmp5 = tmp3->buildStyleFor(hx::ObjectPtr<OBJ_>(this),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(467)
			::haxe::ui::toolkit::style::Style stateStyle = tmp5;		HX_STACK_VAR(stateStyle,"stateStyle");
			HX_STACK_LINE(468)
			bool tmp6 = (stateStyle != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(468)
			if ((tmp6)){
				HX_STACK_LINE(470)
				::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(470)
				::haxe::ui::toolkit::style::Style tmp8 = stateStyle;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(470)
				this->storeStyle(tmp7,tmp8);
			}
		}
	}
return null();
}


Void TableViewRow_obj::addStates( Array< ::String > stateNames){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","addStates",0xa7955d56,"haxe.ui.toolkit.containers.TableViewRow.addStates","haxe/ui/toolkit/containers/TableView.hx",475,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stateNames,"stateNames")
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(476)
			while((true)){
				HX_STACK_LINE(476)
				bool tmp = (_g < stateNames->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(476)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(476)
				if ((tmp1)){
					HX_STACK_LINE(476)
					break;
				}
				HX_STACK_LINE(476)
				::String tmp2 = stateNames->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(476)
				::String stateName = tmp2;		HX_STACK_VAR(stateName,"stateName");
				HX_STACK_LINE(476)
				++(_g);
				HX_STACK_LINE(477)
				::String tmp3 = stateName;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(477)
				this->_states->push(tmp3);
			}
		}
		HX_STACK_LINE(479)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		if ((tmp)){
			HX_STACK_LINE(480)
			bool tmp1 = this->_lazyLoadStyles;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(480)
			bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(480)
			if ((tmp2)){
				HX_STACK_LINE(481)
				this->buildStyles();
			}
			else{
				HX_STACK_LINE(483)
				this->clearStyles(null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,addStates,(void))

::String TableViewRow_obj::get_state( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","get_state",0xb12a217b,"haxe.ui.toolkit.containers.TableViewRow.get_state","haxe/ui/toolkit/containers/TableView.hx",494,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(495)
	::String tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TableViewRow_obj,get_state,return )

::String TableViewRow_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","set_state",0x947b0d87,"haxe.ui.toolkit.containers.TableViewRow.set_state","haxe/ui/toolkit/containers/TableView.hx",498,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(499)
	::String tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(499)
	if ((tmp2)){
		HX_STACK_LINE(500)
		this->_state = value;
		HX_STACK_LINE(501)
		::String tmp3 = this->_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		::haxe::ui::toolkit::style::Style tmp4 = this->retrieveStyle(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		if ((tmp5)){
			HX_STACK_LINE(502)
			::String tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(502)
			::haxe::ui::toolkit::style::Style tmp7 = this->retrieveStyle(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(502)
			this->set_baseStyle(tmp7);
		}
		else{
			HX_STACK_LINE(504)
			this->invalidate((int)4096,null());
		}
		HX_STACK_LINE(507)
		{
			HX_STACK_LINE(507)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(507)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(507)
			while((true)){
				HX_STACK_LINE(507)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(507)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(507)
				if ((tmp7)){
					HX_STACK_LINE(507)
					break;
				}
				HX_STACK_LINE(507)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(507)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp8;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(507)
				++(_g);
				HX_STACK_LINE(508)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(508)
				bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(508)
				if ((tmp10)){
					HX_STACK_LINE(509)
					::haxe::ui::toolkit::controls::Text tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(509)
					tmp11 = hx::TCast< ::haxe::ui::toolkit::controls::Text >::cast(c);
					HX_STACK_LINE(509)
					Float tmp12 = tmp11->get_width();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(509)
					Float cx = tmp12;		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(510)
					::haxe::ui::toolkit::controls::Text tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(510)
					tmp13 = hx::TCast< ::haxe::ui::toolkit::controls::Text >::cast(c);
					HX_STACK_LINE(510)
					::String tmp14 = value;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(510)
					tmp13->set_state(tmp14);
					HX_STACK_LINE(511)
					::haxe::ui::toolkit::controls::Text tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(511)
					tmp15 = hx::TCast< ::haxe::ui::toolkit::controls::Text >::cast(c);
					HX_STACK_LINE(511)
					Float tmp16 = cx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(511)
					tmp15->set_width(tmp16);
				}
			}
		}
	}
	HX_STACK_LINE(515)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(515)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,set_state,return )

Array< ::String > TableViewRow_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","get_states",0x53b32a98,"haxe.ui.toolkit.containers.TableViewRow.get_states","haxe/ui/toolkit/containers/TableView.hx",519,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(519)
	return Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("over","\x54","\x91","\xb8","\x49")).Add(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
}


HX_DEFINE_DYNAMIC_FUNC0(TableViewRow_obj,get_states,return )

bool TableViewRow_obj::hasState( ::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","hasState",0xf95434a4,"haxe.ui.toolkit.containers.TableViewRow.hasState","haxe/ui/toolkit/containers/TableView.hx",522,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(523)
	bool tmp = (this->get_states() == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	if ((tmp)){
		HX_STACK_LINE(524)
		return false;
	}
	HX_STACK_LINE(526)
	::String tmp1 = state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(526)
	int tmp2 = ::Lambda_obj::indexOf(this->get_states(),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(526)
	bool tmp3 = (tmp2 != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(526)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,hasState,return )

::haxe::ui::toolkit::core::DisplayObject TableViewRow_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","clone",0xb9f89cf0,"haxe.ui.toolkit.containers.TableViewRow.clone","src/haxe/ui/toolkit/containers/TableViewRow.hx",1,0xac386528)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::HBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::HBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TableViewRow c = ((::haxe::ui::toolkit::containers::TableViewRow)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::TableViewRow tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject TableViewRow_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","self",0x0b639559,"haxe.ui.toolkit.containers.TableViewRow.self","src/haxe/ui/toolkit/containers/TableViewRow.hx",1,0xac386528)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TableViewRow tmp = ::haxe::ui::toolkit::containers::TableViewRow_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


::String TableViewRow_obj::STATE_NORMAL;

::String TableViewRow_obj::STATE_OVER;

::String TableViewRow_obj::STATE_SELECTED;


TableViewRow_obj::TableViewRow_obj()
{
}

void TableViewRow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableViewRow);
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_states,"_states");
	HX_MARK_MEMBER_NAME(_parentTable,"_parentTable");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TableViewRow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_states,"_states");
	HX_VISIT_MEMBER_NAME(_parentTable,"_parentTable");
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TableViewRow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return get_state(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"states") ) { return inCallProp == hx::paccAlways ? get_states() : states; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { return _states; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return hasState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addStates") ) { return addStates_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"buildStyles") ) { return buildStyles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentTable") ) { return _parentTable; }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createColumnComponent") ) { return createColumnComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TableViewRow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return set_state(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { _states=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentTable") ) { _parentTable=inValue.Cast< ::haxe::ui::toolkit::containers::TableView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TableViewRow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TableViewRow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"));
	outFields->push(HX_HCSTRING("_parentTable","\x85","\xd8","\xa7","\x01"));
	outFields->push(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TableViewRow_obj,_state),HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TableViewRow_obj,_states),HX_HCSTRING("_states","\xe1","\xea","\x72","\x74")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::TableView*/ ,(int)offsetof(TableViewRow_obj,_parentTable),HX_HCSTRING("_parentTable","\x85","\xd8","\xa7","\x01")},
	{hx::fsString,(int)offsetof(TableViewRow_obj,hash),HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TableViewRow_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TableViewRow_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TableViewRow_obj::STATE_NORMAL,HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60")},
	{hx::fsString,(void *) &TableViewRow_obj::STATE_OVER,HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38")},
	{hx::fsString,(void *) &TableViewRow_obj::STATE_SELECTED,HX_HCSTRING("STATE_SELECTED","\xa9","\x3d","\x8c","\x22")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"),
	HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"),
	HX_HCSTRING("_parentTable","\x85","\xd8","\xa7","\x01"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("_onMouseClick","\xc1","\xa4","\xdd","\x20"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("createColumnComponent","\x6b","\xd3","\x29","\xc1"),
	HX_HCSTRING("buildStyles","\xf0","\xcb","\x43","\x66"),
	HX_HCSTRING("addStates","\x43","\x0e","\x20","\xbe"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("get_state","\x68","\xd2","\xb4","\xc7"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	HX_HCSTRING("get_states","\x0b","\x49","\x83","\xf6"),
	HX_HCSTRING("hasState","\x57","\xc0","\x63","\x10"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewRow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TableViewRow_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(TableViewRow_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(TableViewRow_obj::STATE_SELECTED,"STATE_SELECTED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::STATE_SELECTED,"STATE_SELECTED");
};

#endif

hx::Class TableViewRow_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60"),
	HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38"),
	HX_HCSTRING("STATE_SELECTED","\xa9","\x3d","\x8c","\x22"),
	::String(null()) };

void TableViewRow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.TableViewRow","\xc1","\xa9","\xd7","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TableViewRow_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TableViewRow_obj >;
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

void TableViewRow_obj::__boot()
{
	STATE_NORMAL= HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
	STATE_OVER= HX_HCSTRING("over","\x54","\x91","\xb8","\x49");
	STATE_SELECTED= HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
