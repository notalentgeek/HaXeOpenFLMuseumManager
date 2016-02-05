#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#define INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ListView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,selection,ListSelector)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace selection{


class HXCPP_CLASS_ATTRIBUTES  ListSelector_obj : public ::haxe::ui::toolkit::controls::Button_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Button_obj super;
		typedef ListSelector_obj OBJ_;
		ListSelector_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.selection.ListSelector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ListSelector_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListSelector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
		::String __ToString() const { return HX_HCSTRING("ListSelector","\xbd","\xe5","\x04","\xe2"); }

		::haxe::ui::toolkit::data::IDataSource _dataSource;
		::haxe::ui::toolkit::containers::ListView _list;
		int _maxListSize;
		::String _method;
		int _selectedIndex;
		Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _selectedItems;
		virtual Void preInitialize( );

		virtual Void initialize( );

		virtual Void _onMouseClick( ::openfl::_legacy::events::MouseEvent event);

		virtual Void applyStyle( );

		virtual ::haxe::ui::toolkit::data::IDataSource get_dataSource( );
		Dynamic get_dataSource_dyn();

		virtual ::haxe::ui::toolkit::data::IDataSource set_dataSource( ::haxe::ui::toolkit::data::IDataSource value);
		Dynamic set_dataSource_dyn();

		virtual Void showList( );
		Dynamic showList_dyn();

		virtual Void hideList( );
		Dynamic hideList_dyn();

		virtual ::String get_method( );
		Dynamic get_method_dyn();

		virtual ::String set_method( ::String value);
		Dynamic set_method_dyn();

		virtual int get_listSize( );
		Dynamic get_listSize_dyn();

		virtual int set_listSize( int value);
		Dynamic set_listSize_dyn();

		Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > selectedItems;
		virtual Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > get_selectedItems( );
		Dynamic get_selectedItems_dyn();

		virtual int get_selectedIndex( );
		Dynamic get_selectedIndex_dyn();

		virtual int set_selectedIndex( int value);
		Dynamic set_selectedIndex_dyn();

		virtual Void _onRootMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onRootMouseDown_dyn();

		virtual Void _onListChange( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onListChange_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace selection

#endif /* INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector */ 
