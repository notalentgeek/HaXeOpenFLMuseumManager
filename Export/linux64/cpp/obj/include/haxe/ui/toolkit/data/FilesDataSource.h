#ifndef INCLUDED_haxe_ui_toolkit_data_FilesDataSource
#define INCLUDED_haxe_ui_toolkit_data_FilesDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,ArrayDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,FilesDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  FilesDataSource_obj : public ::haxe::ui::toolkit::data::ArrayDataSource_obj{
	public:
		typedef ::haxe::ui::toolkit::data::ArrayDataSource_obj super;
		typedef FilesDataSource_obj OBJ_;
		FilesDataSource_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.data.FilesDataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FilesDataSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilesDataSource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FilesDataSource","\xdc","\xbb","\x0e","\xec"); }

		::String _dir;
		virtual Void create( ::Xml config);

		virtual bool _open( );

		virtual Void createFromString( ::String data,Dynamic config);

		virtual Void createFromResource( ::String resourceId,Dynamic config);

		virtual bool isDir( ::String dir);
		Dynamic isDir_dyn();

		virtual bool isRoot( ::String dir);
		Dynamic isRoot_dyn();

		virtual ::String fixDir( ::String dir);
		Dynamic fixDir_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_FilesDataSource */ 
