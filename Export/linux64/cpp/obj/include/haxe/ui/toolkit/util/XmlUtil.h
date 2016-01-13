#ifndef INCLUDED_haxe_ui_toolkit_util_XmlUtil
#define INCLUDED_haxe_ui_toolkit_util_XmlUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(haxe,ui,toolkit,util,XmlUtil)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  XmlUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XmlUtil_obj OBJ_;
		XmlUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.util.XmlUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XmlUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XmlUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XmlUtil","\x59","\x51","\x15","\x48"); }

		static Array< ::String > getPathValues( ::Xml xml,::String path);
		static Dynamic getPathValues_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_XmlUtil */ 
