#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#define INCLUDED_haxe_ui_toolkit_controls_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Image)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  Image_obj : public ::haxe::ui::toolkit::core::Component_obj{
	public:
		typedef ::haxe::ui::toolkit::core::Component_obj super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.Image")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Image_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		::String __ToString() const { return HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"); }

		::openfl::_legacy::display::Bitmap _bmp;
		Dynamic _resource;
		bool _autoWidth;
		bool _autoHeight;
		bool _autoDisposeBitmapData;
		virtual Void initialize( );

		virtual Void dispose( );

		virtual Void disposeContent( );
		Dynamic disposeContent_dyn();

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual Dynamic get_value( );

		virtual Dynamic set_value( Dynamic newValue);

		virtual Float set_width( Float value);

		virtual Float set_height( Float value);

		virtual Dynamic get_resource( );
		Dynamic get_resource_dyn();

		virtual Dynamic set_resource( Dynamic value);
		Dynamic set_resource_dyn();

		virtual Void loadBitmap( ::String res,Dynamic callback);
		Dynamic loadBitmap_dyn();

		virtual Void updateBitmap( ::openfl::_legacy::display::BitmapData bmpData);
		Dynamic updateBitmap_dyn();

		bool _updatingContent;
		virtual Void updateContent( );
		Dynamic updateContent_dyn();

		virtual bool get_autoDisposeBitmapData( );
		Dynamic get_autoDisposeBitmapData_dyn();

		virtual bool set_autoDisposeBitmapData( bool value);
		Dynamic set_autoDisposeBitmapData_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Image */ 
