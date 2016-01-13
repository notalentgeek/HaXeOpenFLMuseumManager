#ifndef INCLUDED_haxe_ui_toolkit_containers_DefaultScrollViewRefreshPrompt
#define INCLUDED_haxe_ui_toolkit_containers_DefaultScrollViewRefreshPrompt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewRefreshPrompt
#include <haxe/ui/toolkit/containers/ScrollViewRefreshPrompt.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,DefaultScrollViewRefreshPrompt)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollViewRefreshPrompt)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  DefaultScrollViewRefreshPrompt_obj : public ::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt_obj super;
		typedef DefaultScrollViewRefreshPrompt_obj OBJ_;
		DefaultScrollViewRefreshPrompt_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DefaultScrollViewRefreshPrompt_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultScrollViewRefreshPrompt_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DefaultScrollViewRefreshPrompt","\xcc","\x9c","\x3a","\xc0"); }

		::haxe::ui::toolkit::controls::Text _textComponent;
		virtual ::String set_text( ::String value);

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_DefaultScrollViewRefreshPrompt */ 
