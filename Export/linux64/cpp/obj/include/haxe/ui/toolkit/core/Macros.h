#ifndef INCLUDED_haxe_ui_toolkit_core_Macros
#define INCLUDED_haxe_ui_toolkit_core_Macros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,macro,Access)
HX_DECLARE_CLASS2(haxe,macro,Type)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Macros)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Macros_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Macros_obj OBJ_;
		Macros_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.Macros")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Macros_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Macros_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Macros","\x07","\x0f","\x20","\xe5"); }

		static void __boot();
		static ::haxe::ds::StringMap componentClasses;
		static ::haxe::ds::StringMap dataSourceClasses;
		static ::haxe::ds::StringMap themeResources;
		static Void processNode( ::Xml node,::haxe::ds::StringMap types,Array< ::String > paths);
		static Dynamic processNode_dyn();

		static Dynamic getFunction( ::String name,cpp::ArrayBase fields);
		static Dynamic getFunction_dyn();

		static Void addFunction( ::String name,Dynamic e,Array< ::Dynamic > access,cpp::ArrayBase fields,Dynamic pos);
		static Dynamic addFunction_dyn();

		static cpp::ArrayBase getFieldsWithMeta( ::String meta,cpp::ArrayBase fields);
		static Dynamic getFieldsWithMeta_dyn();

		static Dynamic getSuperClass( ::haxe::macro::Type t);
		static Dynamic getSuperClass_dyn();

		static Void insertLine( Dynamic fn,Dynamic e,int location);
		static Dynamic insertLine_dyn();

		static cpp::ArrayBase insertExpr( cpp::ArrayBase arr,int pos,Dynamic item);
		static Dynamic insertExpr_dyn();

		static ::String getClassNameFromType( ::haxe::macro::Type t);
		static Dynamic getClassNameFromType_dyn();

		static bool hasMeta( Dynamic f,::String meta);
		static Dynamic hasMeta_dyn();

		static ::String getClassName( ::haxe::macro::Type t);
		static Dynamic getClassName_dyn();

		static bool hasInterface( ::haxe::macro::Type t,::String interfaceRequired);
		static Dynamic hasInterface_dyn();

		static ::String resolveResource( ::String resourcePath,Array< ::String > paths);
		static Dynamic resolveResource_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Macros */ 
