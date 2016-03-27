#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#define INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
#endif
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,renderers,ItemRenderer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{


class HXCPP_CLASS_ATTRIBUTES  ItemRenderer_obj : public ::haxe::ui::toolkit::core::StateComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StateComponent_obj super;
		typedef ItemRenderer_obj OBJ_;
		ItemRenderer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.renderers.ItemRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ItemRenderer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ItemRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
		::String __ToString() const { return HX_HCSTRING("ItemRenderer","\x96","\x5d","\x17","\x5f"); }

		static void __boot();
		static ::String STATE_NORMAL;
		static ::String STATE_OVER;
		static ::String STATE_SELECTED;
		static ::String STATE_DISABLED;
		::String hash;
		::haxe::ui::toolkit::core::interfaces::IEventDispatcher eventDispatcher;
		virtual Void initialize( );

		virtual Void addStatesRecursively( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c);
		Dynamic addStatesRecursively_dyn();

		Dynamic _data;
		virtual Dynamic get_data( );
		Dynamic get_data_dyn();

		virtual Dynamic set_data( Dynamic value);
		Dynamic set_data_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool allowSelection( Float stageX,Float stageY);
		Dynamic allowSelection_dyn();

		virtual Void attachEvents( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c);
		Dynamic attachEvents_dyn();

		virtual Void attachEvent( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c);
		Dynamic attachEvent_dyn();

		virtual Void _onComponentEvent( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onComponentEvent_dyn();

		virtual Void dispatchProxyEvent( ::String type,::haxe::ui::toolkit::events::UIEvent refEvent);
		Dynamic dispatchProxyEvent_dyn();

		virtual Void updateComponents( );
		Dynamic updateComponents_dyn();

		virtual Void updateComponentValue( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c,Dynamic value);
		Dynamic updateComponentValue_dyn();

		virtual Array< ::String > get_states( );

		virtual ::String set_state( ::String value);

		virtual Void setStateRecursively( ::String value,::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c);
		Dynamic setStateRecursively_dyn();

		virtual bool isInteractive( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c);
		Dynamic isInteractive_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers

#endif /* INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer */ 
