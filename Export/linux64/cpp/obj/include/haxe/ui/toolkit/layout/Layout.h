#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#define INCLUDED_haxe_ui_toolkit_layout_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES  Layout_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layout_obj OBJ_;
		Layout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.layout.Layout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Layout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::ILayout_obj *();
		::String __ToString() const { return HX_HCSTRING("Layout","\xca","\x22","\x4d","\x8d"); }

		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _container;
		::openfl::_legacy::geom::Rectangle _padding;
		int _spacingX;
		int _spacingY;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_container( );
		Dynamic get_container_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer set_container( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value);
		Dynamic set_container_dyn();

		virtual ::openfl::_legacy::geom::Rectangle get_padding( );
		Dynamic get_padding_dyn();

		virtual ::openfl::_legacy::geom::Rectangle set_padding( ::openfl::_legacy::geom::Rectangle value);
		Dynamic set_padding_dyn();

		virtual int get_spacingX( );
		Dynamic get_spacingX_dyn();

		virtual int set_spacingX( int value);
		Dynamic set_spacingX_dyn();

		virtual int get_spacingY( );
		Dynamic get_spacingY_dyn();

		virtual int set_spacingY( int value);
		Dynamic set_spacingY_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void resizeChildren( );
		Dynamic resizeChildren_dyn();

		virtual Void repositionChildren( );
		Dynamic repositionChildren_dyn();

		virtual Void autoSize( Float totalWidth,Float totalHeight);
		Dynamic autoSize_dyn();

		Float innerWidth;
		Float innerHeight;
		Float usableWidth;
		Float usableHeight;
		virtual Float get_innerWidth( );
		Dynamic get_innerWidth_dyn();

		virtual Float get_innerHeight( );
		Dynamic get_innerHeight_dyn();

		virtual Float get_usableWidth( );
		Dynamic get_usableWidth_dyn();

		virtual Float get_usableHeight( );
		Dynamic get_usableHeight_dyn();

		virtual ::haxe::ui::toolkit::layout::Layout clone( );
		Dynamic clone_dyn();

		virtual ::haxe::ui::toolkit::layout::Layout self( );
		Dynamic self_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout

#endif /* INCLUDED_haxe_ui_toolkit_layout_Layout */ 
