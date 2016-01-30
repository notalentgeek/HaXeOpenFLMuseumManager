#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#define INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  StyleableDisplayObject_obj : public ::haxe::ui::toolkit::core::DisplayObjectContainer_obj{
	public:
		typedef ::haxe::ui::toolkit::core::DisplayObjectContainer_obj super;
		typedef StyleableDisplayObject_obj OBJ_;
		StyleableDisplayObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.StyleableDisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StyleableDisplayObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleableDisplayObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
		::String __ToString() const { return HX_HCSTRING("StyleableDisplayObject","\x76","\x4c","\x7e","\x15"); }

		static void __boot();
		::haxe::ui::toolkit::style::Style _baseStyle;
		::haxe::ds::StringMap _storedStyles;
		::String _styleName;
		::String _styleString;
		::haxe::ui::toolkit::style::Style _inlineStyle;
		bool _lazyLoadStyles;
		virtual Void preInitialize( );

		virtual Void paint( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual ::String set_id( ::String value);

		virtual ::haxe::ui::toolkit::core::interfaces::ILayout set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value);

		virtual ::haxe::ui::toolkit::style::Style get_baseStyle( );
		Dynamic get_baseStyle_dyn();

		virtual ::haxe::ui::toolkit::style::Style set_baseStyle( ::haxe::ui::toolkit::style::Style value);
		Dynamic set_baseStyle_dyn();

		virtual ::String get_styleName( );
		Dynamic get_styleName_dyn();

		virtual ::String set_styleName( ::String value);
		Dynamic set_styleName_dyn();

		virtual ::String get_styleString( );
		Dynamic get_styleString_dyn();

		virtual ::String set_styleString( ::String value);
		Dynamic set_styleString_dyn();

		virtual ::haxe::ui::toolkit::style::Style get_style( );
		Dynamic get_style_dyn();

		virtual ::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value);
		Dynamic set_style_dyn();

		virtual Void storeStyle( ::String id,::haxe::ui::toolkit::style::Style value);
		Dynamic storeStyle_dyn();

		virtual ::haxe::ui::toolkit::style::Style retrieveStyle( ::String id);
		Dynamic retrieveStyle_dyn();

		virtual Void applyStyle( );
		Dynamic applyStyle_dyn();

		virtual Void reapplyFilters( );
		Dynamic reapplyFilters_dyn();

		virtual Void buildStyles( );
		Dynamic buildStyles_dyn();

		virtual Void clearStyles( hx::Null< bool >  recursive);
		Dynamic clearStyles_dyn();

		virtual Void refreshStyle( );
		Dynamic refreshStyle_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

		static Dynamic __meta__;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject */ 
