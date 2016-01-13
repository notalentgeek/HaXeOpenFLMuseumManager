#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#define INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  DisplayObjectContainer_obj : public ::haxe::ui::toolkit::core::DisplayObject_obj{
	public:
		typedef ::haxe::ui::toolkit::core::DisplayObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.DisplayObjectContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayObjectContainer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObjectContainer_obj();

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
		operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
		::String __ToString() const { return HX_HCSTRING("DisplayObjectContainer","\x80","\xf2","\x98","\xea"); }

		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _children;
		::haxe::ui::toolkit::core::interfaces::ILayout _layout;
		bool _autoSize;
		virtual Void initialize( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		int numChildren;
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > children;
		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

		virtual Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > get_children( );
		Dynamic get_children_dyn();

		virtual int indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child);
		Dynamic indexOfChild_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index);
		Dynamic addChildAt_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child);
		Dynamic addChild_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose);
		Dynamic removeChild_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChildAt( int index,hx::Null< bool >  dispose);
		Dynamic removeChildAt_dyn();

		virtual Void removeAllChildren( hx::Null< bool >  dispose);
		Dynamic removeAllChildren_dyn();

		virtual bool contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child);
		Dynamic contains_dyn();

		virtual Void setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index);
		Dynamic setChildIndex_dyn();

		virtual Dynamic findChildAs( ::hx::Class type);
		Dynamic findChildAs_dyn();

		virtual Dynamic findChild( ::String id,::hx::Class type,hx::Null< bool >  recursive);
		Dynamic findChild_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject findComponentUnderPoint( Float stageX,Float stageY);
		Dynamic findComponentUnderPoint_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::ILayout get_layout( );
		Dynamic get_layout_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::ILayout set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value);
		Dynamic set_layout_dyn();

		virtual bool get_autoSize( );
		Dynamic get_autoSize_dyn();

		virtual bool set_autoSize( bool value);
		Dynamic set_autoSize_dyn();

		virtual Void dispose( );

		virtual ::haxe::ui::toolkit::core::Root set_root( ::haxe::ui::toolkit::core::Root value);

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer */ 
