#ifndef INCLUDED_haxe_ui_toolkit_layout_GridLayout
#define INCLUDED_haxe_ui_toolkit_layout_GridLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,GridLayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES  GridLayout_obj : public ::haxe::ui::toolkit::layout::Layout_obj{
	public:
		typedef ::haxe::ui::toolkit::layout::Layout_obj super;
		typedef GridLayout_obj OBJ_;
		GridLayout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.layout.GridLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GridLayout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GridLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		::String __ToString() const { return HX_HCSTRING("GridLayout","\x30","\x56","\x88","\x85"); }

		int _columns;
		virtual int get_columns( );
		Dynamic get_columns_dyn();

		virtual int set_columns( int value);
		Dynamic set_columns_dyn();

		virtual Void resizeChildren( );

		virtual Void repositionChildren( );

		virtual Float get_usableWidth( );

		virtual Float get_usableHeight( );

		virtual Array< bool > calcExplicitWidths( );
		Dynamic calcExplicitWidths_dyn();

		virtual Array< bool > calcExplicitHeights( );
		Dynamic calcExplicitHeights_dyn();

		virtual Array< Float > calcColumnWidths( );
		Dynamic calcColumnWidths_dyn();

		virtual Array< Float > calcRowHeights( );
		Dynamic calcRowHeights_dyn();

		virtual ::haxe::ui::toolkit::layout::Layout clone( );

		virtual ::haxe::ui::toolkit::layout::Layout self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout

#endif /* INCLUDED_haxe_ui_toolkit_layout_GridLayout */ 
