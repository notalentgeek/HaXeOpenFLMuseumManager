#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#define INCLUDED_haxe_ui_toolkit_resources_ResourceManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(haxe,ui,toolkit,resources,IResourceHook)
HX_DECLARE_CLASS4(haxe,ui,toolkit,resources,ResourceManager)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace haxe{
namespace ui{
namespace toolkit{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  ResourceManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourceManager_obj OBJ_;
		ResourceManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.resources.ResourceManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ResourceManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ResourceManager","\x1f","\xbb","\x99","\xea"); }

		::haxe::ui::toolkit::resources::IResourceHook resourceHook;
		virtual bool hasAsset( ::String resouceId);
		Dynamic hasAsset_dyn();

		virtual ::Xml getXML( ::String resourceId,::String locale);
		Dynamic getXML_dyn();

		virtual ::String getText( ::String resourceId,::String locale);
		Dynamic getText_dyn();

		virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String resourceId,::String locale);
		Dynamic getBitmapData_dyn();

		virtual ::openfl::_legacy::utils::ByteArray getBytes( ::String resourceId,::String locale);
		Dynamic getBytes_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		static ::haxe::ui::toolkit::resources::ResourceManager _instance;
		static ::haxe::ui::toolkit::resources::ResourceManager instance;
		static ::haxe::ui::toolkit::resources::ResourceManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace resources

#endif /* INCLUDED_haxe_ui_toolkit_resources_ResourceManager */ 
