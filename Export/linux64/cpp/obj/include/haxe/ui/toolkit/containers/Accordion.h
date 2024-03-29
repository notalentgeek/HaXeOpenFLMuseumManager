#ifndef INCLUDED_haxe_ui_toolkit_containers_Accordion
#define INCLUDED_haxe_ui_toolkit_containers_Accordion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Accordion)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,AccordionButton)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  Accordion_obj : public ::haxe::ui::toolkit::containers::VBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::VBox_obj super;
		typedef Accordion_obj OBJ_;
		Accordion_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.Accordion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Accordion_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Accordion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		::String __ToString() const { return HX_HCSTRING("Accordion","\x68","\x4a","\x4f","\x0a"); }

		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _panels;
		Array< ::Dynamic > _buttons;
		int _selectedIndex;
		virtual Void initialize( );

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child);

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose);

		virtual int get_selectedIndex( );
		Dynamic get_selectedIndex_dyn();

		virtual int set_selectedIndex( int value);
		Dynamic set_selectedIndex_dyn();

		::haxe::ui::toolkit::controls::Button selectedButton;
		virtual ::haxe::ui::toolkit::controls::Button get_selectedButton( );
		Dynamic get_selectedButton_dyn();

		virtual ::haxe::ui::toolkit::controls::Button getButton( int index);
		Dynamic getButton_dyn();

		virtual Void showPage( int index);
		Dynamic showPage_dyn();

		virtual Void _onButtonClick( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onButtonClick_dyn();

		virtual Void showPanel( int index);
		Dynamic showPanel_dyn();

		virtual Void unselectButton( ::haxe::ui::toolkit::controls::Button button);
		Dynamic unselectButton_dyn();

		virtual Void _onTweenUpdate( Float ucy,::haxe::ui::toolkit::core::Component panel,::haxe::ui::toolkit::core::Component panelOld);
		Dynamic _onTweenUpdate_dyn();

		virtual Void _onTweenComplete( ::haxe::ui::toolkit::core::Component panel,::haxe::ui::toolkit::core::Component panelOld,::haxe::ui::toolkit::controls::Button buttonOld);
		Dynamic _onTweenComplete_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_Accordion */ 
