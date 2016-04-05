#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#define INCLUDED_haxe_ui_toolkit_core_ClassManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,ClassManager)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ClassManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClassManager_obj OBJ_;
		ClassManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.ClassManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClassManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClassManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ClassManager","\x35","\x85","\x54","\xc4"); }

		static ::haxe::ui::toolkit::core::ClassManager _instance;
		static ::haxe::ui::toolkit::core::ClassManager instance;
		static ::haxe::ui::toolkit::core::ClassManager get_instance( );
		static Dynamic get_instance_dyn();

		virtual Void registerDefaults( );
		Dynamic registerDefaults_dyn();

		::haxe::ds::StringMap componentClassMap;
		virtual ::String getComponentClassName( ::String simpleName);
		Dynamic getComponentClassName_dyn();

		virtual Void registerComponentClass( ::hx::Class cls,::String simpleName);
		Dynamic registerComponentClass_dyn();

		virtual Void registerComponentClassName( ::String className,::String simpleName);
		Dynamic registerComponentClassName_dyn();

		::haxe::ds::StringMap dataSourceClassMap;
		virtual bool hasDataSourceClass( ::String simpleName);
		Dynamic hasDataSourceClass_dyn();

		virtual ::String getDataSourceClassName( ::String simpleName);
		Dynamic getDataSourceClassName_dyn();

		virtual Void registerDataSourceClass( ::hx::Class cls,::String simpleName);
		Dynamic registerDataSourceClass_dyn();

		virtual Void registerDataSourceClassName( ::String className,::String simpleName);
		Dynamic registerDataSourceClassName_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_ClassManager */ 
