#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#define INCLUDED_haxe_ui_toolkit_data_DataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  DataSource_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef DataSource_obj OBJ_;
		DataSource_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.data.DataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DataSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataSource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::data::IDataSource_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
		::String __ToString() const { return HX_HCSTRING("DataSource","\xc5","\x7a","\x84","\x14"); }

		static void __boot();
		::Xml config;
		::Xml _config;
		::String _id;
		bool allowAdditions;
		bool allowUpdates;
		bool allowDeletions;
		bool _allowEvents;
		bool _hasChanged;
		virtual ::Xml get_config( );
		Dynamic get_config_dyn();

		virtual ::haxe::ui::toolkit::data::DataSource clone( );
		Dynamic clone_dyn();

		virtual bool get_allowEvents( );
		Dynamic get_allowEvents_dyn();

		virtual bool set_allowEvents( bool value);
		Dynamic set_allowEvents_dyn();

		virtual ::String get_id( );
		Dynamic get_id_dyn();

		virtual ::String set_id( ::String value);
		Dynamic set_id_dyn();

		virtual Void create( ::Xml config);
		Dynamic create_dyn();

		virtual bool open( );
		Dynamic open_dyn();

		virtual bool close( );
		Dynamic close_dyn();

		virtual bool moveFirst( );
		Dynamic moveFirst_dyn();

		virtual bool moveNext( );
		Dynamic moveNext_dyn();

		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual bool add( Dynamic o);
		Dynamic add_dyn();

		virtual bool update( Dynamic o);
		Dynamic update_dyn();

		virtual bool remove( );
		Dynamic remove_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual ::String hash( );
		Dynamic hash_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool _open( );
		Dynamic _open_dyn();

		virtual bool _close( );
		Dynamic _close_dyn();

		virtual bool _moveFirst( );
		Dynamic _moveFirst_dyn();

		virtual bool _moveNext( );
		Dynamic _moveNext_dyn();

		virtual Dynamic _get( );
		Dynamic _get_dyn();

		virtual bool _add( Dynamic o);
		Dynamic _add_dyn();

		virtual bool _update( Dynamic o);
		Dynamic _update_dyn();

		virtual bool _remove( );
		Dynamic _remove_dyn();

		virtual Void createFromString( ::String data,Dynamic config);
		Dynamic createFromString_dyn();

		virtual Void createFromResource( ::String resourceId,Dynamic config);
		Dynamic createFromResource_dyn();

		virtual Void dispatchChanged( );
		Dynamic dispatchChanged_dyn();

		virtual int getObjectId( Dynamic obj);
		Dynamic getObjectId_dyn();

		static int SAFE_NUM;
		static int clsId;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_DataSource */ 
