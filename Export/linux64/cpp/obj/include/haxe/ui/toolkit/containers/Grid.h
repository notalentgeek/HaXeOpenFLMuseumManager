#ifndef INCLUDED_haxe_ui_toolkit_containers_Grid
#define INCLUDED_haxe_ui_toolkit_containers_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Grid)
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  Grid_obj : public ::haxe::ui::toolkit::containers::Container_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::Container_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.Grid")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Grid_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Grid_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		::String __ToString() const { return HX_HCSTRING("Grid","\xe6","\x02","\x45","\x2f"); }

		virtual int get_columns( );
		Dynamic get_columns_dyn();

		virtual int set_columns( int value);
		Dynamic set_columns_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_Grid */ 
