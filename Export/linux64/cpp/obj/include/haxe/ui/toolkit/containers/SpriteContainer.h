#ifndef INCLUDED_haxe_ui_toolkit_containers_SpriteContainer
#define INCLUDED_haxe_ui_toolkit_containers_SpriteContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,SpriteContainer)
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
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  SpriteContainer_obj : public ::haxe::ui::toolkit::core::Component_obj{
	public:
		typedef ::haxe::ui::toolkit::core::Component_obj super;
		typedef SpriteContainer_obj OBJ_;
		SpriteContainer_obj();
		Void __construct(::openfl::_legacy::display::Sprite childSprite);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.SpriteContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SpriteContainer_obj > __new(::openfl::_legacy::display::Sprite childSprite);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteContainer_obj();

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
		::String __ToString() const { return HX_HCSTRING("SpriteContainer","\x5c","\x58","\x15","\x24"); }

		::openfl::_legacy::display::Sprite _childSprite;
		::String _spriteClass;
		bool _stretch;
		virtual Void initialize( );

		virtual Void dispose( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual ::openfl::_legacy::display::Sprite get_childSprite( );
		Dynamic get_childSprite_dyn();

		virtual ::openfl::_legacy::display::Sprite set_childSprite( ::openfl::_legacy::display::Sprite value);
		Dynamic set_childSprite_dyn();

		virtual ::String get_spriteClass( );
		Dynamic get_spriteClass_dyn();

		virtual ::String set_spriteClass( ::String value);
		Dynamic set_spriteClass_dyn();

		virtual bool get_stretch( );
		Dynamic get_stretch_dyn();

		virtual bool set_stretch( bool value);
		Dynamic set_stretch_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_SpriteContainer */ 
