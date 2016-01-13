#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_DropDownList
#define INCLUDED_haxe_ui_toolkit_controls_selection_DropDownList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ListView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,selection,DropDownList)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace selection{


class HXCPP_CLASS_ATTRIBUTES  DropDownList_obj : public ::haxe::ui::toolkit::containers::ListView_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::ListView_obj super;
		typedef DropDownList_obj OBJ_;
		DropDownList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.selection.DropDownList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DropDownList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DropDownList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DropDownList","\x4f","\xa1","\x19","\xda"); }

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace selection

#endif /* INCLUDED_haxe_ui_toolkit_controls_selection_DropDownList */ 
