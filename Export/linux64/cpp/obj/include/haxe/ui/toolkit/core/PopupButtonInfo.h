#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#define INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,PopupButtonInfo)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  PopupButtonInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PopupButtonInfo_obj OBJ_;
		PopupButtonInfo_obj();
		Void __construct(hx::Null< int >  __o_type,::String text,Dynamic fn);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.PopupButtonInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PopupButtonInfo_obj > __new(hx::Null< int >  __o_type,::String text,Dynamic fn);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PopupButtonInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PopupButtonInfo","\xac","\xac","\x2e","\x90"); }

		int type;
		::String text;
		Dynamic fn;
		Dynamic &fn_dyn() { return fn;}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo */ 
