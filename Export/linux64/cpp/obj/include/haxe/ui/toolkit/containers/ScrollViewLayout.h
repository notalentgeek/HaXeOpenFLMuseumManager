#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewLayout
#define INCLUDED_haxe_ui_toolkit_containers_ScrollViewLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollViewLayout)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,DefaultLayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  ScrollViewLayout_obj : public ::haxe::ui::toolkit::layout::DefaultLayout_obj{
	public:
		typedef ::haxe::ui::toolkit::layout::DefaultLayout_obj super;
		typedef ScrollViewLayout_obj OBJ_;
		ScrollViewLayout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.ScrollViewLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScrollViewLayout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScrollViewLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ScrollViewLayout","\x7c","\xd9","\xdf","\xcc"); }

		bool _inlineScrolls;
		virtual Void resizeChildren( );

		virtual Void repositionChildren( );

		virtual Float get_usableWidth( );

		virtual Float get_usableHeight( );

		virtual bool get_inlineScrolls( );
		Dynamic get_inlineScrolls_dyn();

		virtual bool set_inlineScrolls( bool value);
		Dynamic set_inlineScrolls_dyn();

		virtual ::haxe::ui::toolkit::layout::Layout clone( );

		virtual ::haxe::ui::toolkit::layout::Layout self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_ScrollViewLayout */ 
