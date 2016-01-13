#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef
#define INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableViewColumnDef)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  TableViewColumnDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TableViewColumnDef_obj OBJ_;
		TableViewColumnDef_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.TableViewColumnDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TableViewColumnDef_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableViewColumnDef_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TableViewColumnDef","\x9c","\x10","\x26","\x91"); }

		::String id;
		::String type;
		Float width;
		Float calculatedWidth;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef */ 
