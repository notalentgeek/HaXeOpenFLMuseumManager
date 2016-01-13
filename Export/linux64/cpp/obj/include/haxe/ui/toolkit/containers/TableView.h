#ifndef INCLUDED_haxe_ui_toolkit_containers_TableView
#define INCLUDED_haxe_ui_toolkit_containers_TableView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableViewColumnDefs)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableViewRow)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
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
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  TableView_obj : public ::haxe::ui::toolkit::core::Component_obj{
	public:
		typedef ::haxe::ui::toolkit::core::Component_obj super;
		typedef TableView_obj OBJ_;
		TableView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.TableView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TableView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
		::String __ToString() const { return HX_HCSTRING("TableView","\x73","\x15","\xb7","\x5d"); }

		::haxe::ui::toolkit::containers::ScrollView _scrollView;
		::haxe::ui::toolkit::containers::VBox _scrollContent;
		::haxe::ui::toolkit::data::IDataSource _dataSource;
		Array< ::Dynamic > _selectedItems;
		int _lastSelection;
		virtual Void initialize( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual ::haxe::ui::toolkit::data::IDataSource get_dataSource( );
		Dynamic get_dataSource_dyn();

		virtual ::haxe::ui::toolkit::data::IDataSource set_dataSource( ::haxe::ui::toolkit::data::IDataSource value);
		Dynamic set_dataSource_dyn();

		virtual Void _onDataSourceChanged( ::openfl::_legacy::events::Event event);
		Dynamic _onDataSourceChanged_dyn();

		::haxe::ui::toolkit::containers::TableViewColumnDefs _columnDefs;
		virtual ::haxe::ui::toolkit::containers::TableViewColumnDefs get_columns( );
		Dynamic get_columns_dyn();

		virtual ::haxe::ui::toolkit::containers::TableViewColumnDefs set_columns( ::haxe::ui::toolkit::containers::TableViewColumnDefs value);
		Dynamic set_columns_dyn();

		virtual Void syncUI( );
		Dynamic syncUI_dyn();

		virtual Void addTableRow( ::String dataHash,Dynamic data,hx::Null< int >  index);
		Dynamic addTableRow_dyn();

		virtual Void resizeColumns( );
		Dynamic resizeColumns_dyn();

		virtual Void handleListSelection( ::haxe::ui::toolkit::containers::TableViewRow item,::openfl::_legacy::events::Event event,hx::Null< bool >  raiseEvent);
		Dynamic handleListSelection_dyn();

		virtual Void handleClick( ::haxe::ui::toolkit::containers::TableViewRow item,::openfl::_legacy::events::MouseEvent event);
		Dynamic handleClick_dyn();

		virtual bool isSelected( ::haxe::ui::toolkit::containers::TableViewRow item);
		Dynamic isSelected_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_TableView */ 
