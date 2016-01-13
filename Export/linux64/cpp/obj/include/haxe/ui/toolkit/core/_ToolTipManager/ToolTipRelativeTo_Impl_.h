#ifndef INCLUDED_haxe_ui_toolkit_core__ToolTipManager_ToolTipRelativeTo_Impl_
#define INCLUDED_haxe_ui_toolkit_core__ToolTipManager_ToolTipRelativeTo_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,_ToolTipManager,ToolTipRelativeTo_Impl_)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ToolTipManager{


class HXCPP_CLASS_ATTRIBUTES  ToolTipRelativeTo_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ToolTipRelativeTo_Impl__obj OBJ_;
		ToolTipRelativeTo_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core._ToolTipManager.ToolTipRelativeTo_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ToolTipRelativeTo_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ToolTipRelativeTo_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ToolTipRelativeTo_Impl_","\x2a","\xf4","\x86","\xa6"); }

		static void __boot();
		static ::String Cursor;
		static ::String Target;
		static ::String fromString( ::String s);
		static Dynamic fromString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ToolTipManager

#endif /* INCLUDED_haxe_ui_toolkit_core__ToolTipManager_ToolTipRelativeTo_Impl_ */ 
