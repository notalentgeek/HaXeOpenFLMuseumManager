#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#define INCLUDED_haxe_ui_toolkit_containers_ListView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ListView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  ListView_obj : public ::haxe::ui::toolkit::containers::ScrollView_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::ScrollView_obj super;
		typedef ListView_obj OBJ_;
		ListView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.ListView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ListView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
		::String __ToString() const { return HX_HCSTRING("ListView","\x03","\xbe","\xf5","\x07"); }

		::haxe::ui::toolkit::data::IDataSource _dataSource;
		::haxe::ui::toolkit::containers::VBox _content;
		Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _selectedItems;
		int _lastSelection;
		Dynamic _itemRenderer;
		bool _allowSelection;
		virtual Void initialize( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual Void dispose( );

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child);

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index);

		int listSize;
		Float itemHeight;
		Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > selectedItems;
		::haxe::ui::toolkit::core::Component content;
		virtual int get_listSize( );
		Dynamic get_listSize_dyn();

		virtual Float get_itemHeight( );
		Dynamic get_itemHeight_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IItemRenderer getItem( int index);
		Dynamic getItem_dyn();

		virtual Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > get_selectedItems( );
		Dynamic get_selectedItems_dyn();

		virtual int get_selectedIndex( );
		Dynamic get_selectedIndex_dyn();

		virtual int set_selectedIndex( int value);
		Dynamic set_selectedIndex_dyn();

		virtual ::haxe::ui::toolkit::core::Component get_content( );
		Dynamic get_content_dyn();

		virtual Dynamic get_itemRenderer( );
		Dynamic get_itemRenderer_dyn();

		virtual Dynamic set_itemRenderer( Dynamic value);
		Dynamic set_itemRenderer_dyn();

		virtual bool get_allowSelection( );
		Dynamic get_allowSelection_dyn();

		virtual bool set_allowSelection( bool value);
		Dynamic set_allowSelection_dyn();

		virtual ::haxe::ui::toolkit::data::IDataSource get_dataSource( );
		Dynamic get_dataSource_dyn();

		virtual ::haxe::ui::toolkit::data::IDataSource set_dataSource( ::haxe::ui::toolkit::data::IDataSource value);
		Dynamic set_dataSource_dyn();

		virtual Void _onDataSourceChanged( ::openfl::_legacy::events::Event event);
		Dynamic _onDataSourceChanged_dyn();

		virtual Void syncUI( );
		Dynamic syncUI_dyn();

		virtual Void addListViewItem( ::String dataHash,Dynamic data,hx::Null< int >  index);
		Dynamic addListViewItem_dyn();

		virtual Void removeListViewItem( int index);
		Dynamic removeListViewItem_dyn();

		virtual Void _onListItemMouseOver( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onListItemMouseOver_dyn();

		virtual Void _onListItemMouseOut( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onListItemMouseOut_dyn();

		virtual Void _onListItemClick( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onListItemClick_dyn();

		virtual Void handleListSelection( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item,::haxe::ui::toolkit::events::UIEvent event,hx::Null< bool >  raiseEvent);
		Dynamic handleListSelection_dyn();

		virtual Void handleClick( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item);
		Dynamic handleClick_dyn();

		virtual bool isSelected( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item);
		Dynamic isSelected_dyn();

		virtual int getItemIndex( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item);
		Dynamic getItemIndex_dyn();

		virtual int setSelectedIndexNoEvent( int value);
		Dynamic setSelectedIndexNoEvent_dyn();

		virtual Void ensureVisible( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item);
		Dynamic ensureVisible_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IItemRenderer createRendererInstance( );
		Dynamic createRendererInstance_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

		Dynamic onComponentEvent;
		Dynamic &onComponentEvent_dyn() { return onComponentEvent;}
		virtual Dynamic set_onComponentEvent( Dynamic value);
		Dynamic set_onComponentEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_ListView */ 
