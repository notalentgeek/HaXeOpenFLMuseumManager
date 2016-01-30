#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewRow
#define INCLUDED_haxe_ui_toolkit_containers_TableViewRow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableViewRow)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  TableViewRow_obj : public ::haxe::ui::toolkit::containers::HBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::HBox_obj super;
		typedef TableViewRow_obj OBJ_;
		TableViewRow_obj();
		Void __construct(::haxe::ui::toolkit::containers::TableView parentTable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.TableViewRow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TableViewRow_obj > __new(::haxe::ui::toolkit::containers::TableView parentTable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableViewRow_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
		::String __ToString() const { return HX_HCSTRING("TableViewRow","\x67","\x2e","\x66","\xfc"); }

		static void __boot();
		::String _state;
		Array< ::String > _states;
		::haxe::ui::toolkit::containers::TableView _parentTable;
		virtual Void initialize( );

		virtual Void _onMouseOver( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseOver_dyn();

		virtual Void _onMouseOut( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseOut_dyn();

		virtual Void _onMouseClick( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseClick_dyn();

		::String hash;
		Dynamic _data;
		virtual Dynamic get_data( );
		Dynamic get_data_dyn();

		virtual Dynamic set_data( Dynamic value);
		Dynamic set_data_dyn();

		virtual ::haxe::ui::toolkit::core::Component createColumnComponent( Dynamic value,::String type);
		Dynamic createColumnComponent_dyn();

		virtual Void buildStyles( );

		virtual Void addStates( Array< ::String > stateNames);
		Dynamic addStates_dyn();

		Array< ::String > states;
		virtual ::String get_state( );
		Dynamic get_state_dyn();

		virtual ::String set_state( ::String value);
		Dynamic set_state_dyn();

		virtual Array< ::String > get_states( );
		Dynamic get_states_dyn();

		virtual bool hasState( ::String state);
		Dynamic hasState_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

		static ::String STATE_NORMAL;
		static ::String STATE_OVER;
		static ::String STATE_SELECTED;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_TableViewRow */ 
