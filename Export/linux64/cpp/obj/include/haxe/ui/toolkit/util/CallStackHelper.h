#ifndef INCLUDED_haxe_ui_toolkit_util_CallStackHelper
#define INCLUDED_haxe_ui_toolkit_util_CallStackHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,util,CallStackHelper)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  CallStackHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CallStackHelper_obj OBJ_;
		CallStackHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.util.CallStackHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CallStackHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallStackHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CallStackHelper","\xb8","\x2e","\xb0","\x7b"); }

		static Void traceCallStack( );
		static Dynamic traceCallStack_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_CallStackHelper */ 
