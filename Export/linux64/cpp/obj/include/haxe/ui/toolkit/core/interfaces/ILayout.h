#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#define INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  ILayout_obj : public ::haxe::ui::toolkit::core::interfaces::IClonable_obj{
	public:
		typedef ::haxe::ui::toolkit::core::interfaces::IClonable_obj super;
		typedef ILayout_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_container( )=0;
		virtual Dynamic get_container_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer set_container( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value)=0;
		virtual Dynamic set_container_dyn()=0;
		virtual ::openfl::_legacy::geom::Rectangle get_padding( )=0;
		virtual Dynamic get_padding_dyn()=0;
		virtual ::openfl::_legacy::geom::Rectangle set_padding( ::openfl::_legacy::geom::Rectangle value)=0;
		virtual Dynamic set_padding_dyn()=0;
		virtual int get_spacingX( )=0;
		virtual Dynamic get_spacingX_dyn()=0;
		virtual int set_spacingX( int value)=0;
		virtual Dynamic set_spacingX_dyn()=0;
		virtual int get_spacingY( )=0;
		virtual Dynamic get_spacingY_dyn()=0;
		virtual int set_spacingY( int value)=0;
		virtual Dynamic set_spacingY_dyn()=0;
		virtual Float get_innerWidth( )=0;
		virtual Dynamic get_innerWidth_dyn()=0;
		virtual Float get_innerHeight( )=0;
		virtual Dynamic get_innerHeight_dyn()=0;
		virtual Float get_usableWidth( )=0;
		virtual Dynamic get_usableWidth_dyn()=0;
		virtual Float get_usableHeight( )=0;
		virtual Dynamic get_usableHeight_dyn()=0;
		virtual Void refresh( )=0;
		virtual Dynamic refresh_dyn()=0;
		virtual Void resizeChildren( )=0;
		virtual Dynamic resizeChildren_dyn()=0;
		virtual Void repositionChildren( )=0;
		virtual Dynamic repositionChildren_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_ILayout \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_container( ) { return mDelegate->get_container();}  \
virtual Dynamic get_container_dyn() { return mDelegate->get_container_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer set_container( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value) { return mDelegate->set_container(value);}  \
virtual Dynamic set_container_dyn() { return mDelegate->set_container_dyn();}  \
virtual ::openfl::_legacy::geom::Rectangle get_padding( ) { return mDelegate->get_padding();}  \
virtual Dynamic get_padding_dyn() { return mDelegate->get_padding_dyn();}  \
virtual ::openfl::_legacy::geom::Rectangle set_padding( ::openfl::_legacy::geom::Rectangle value) { return mDelegate->set_padding(value);}  \
virtual Dynamic set_padding_dyn() { return mDelegate->set_padding_dyn();}  \
virtual int get_spacingX( ) { return mDelegate->get_spacingX();}  \
virtual Dynamic get_spacingX_dyn() { return mDelegate->get_spacingX_dyn();}  \
virtual int set_spacingX( int value) { return mDelegate->set_spacingX(value);}  \
virtual Dynamic set_spacingX_dyn() { return mDelegate->set_spacingX_dyn();}  \
virtual int get_spacingY( ) { return mDelegate->get_spacingY();}  \
virtual Dynamic get_spacingY_dyn() { return mDelegate->get_spacingY_dyn();}  \
virtual int set_spacingY( int value) { return mDelegate->set_spacingY(value);}  \
virtual Dynamic set_spacingY_dyn() { return mDelegate->set_spacingY_dyn();}  \
virtual Float get_innerWidth( ) { return mDelegate->get_innerWidth();}  \
virtual Dynamic get_innerWidth_dyn() { return mDelegate->get_innerWidth_dyn();}  \
virtual Float get_innerHeight( ) { return mDelegate->get_innerHeight();}  \
virtual Dynamic get_innerHeight_dyn() { return mDelegate->get_innerHeight_dyn();}  \
virtual Float get_usableWidth( ) { return mDelegate->get_usableWidth();}  \
virtual Dynamic get_usableWidth_dyn() { return mDelegate->get_usableWidth_dyn();}  \
virtual Float get_usableHeight( ) { return mDelegate->get_usableHeight();}  \
virtual Dynamic get_usableHeight_dyn() { return mDelegate->get_usableHeight_dyn();}  \
virtual Void refresh( ) { return mDelegate->refresh();}  \
virtual Dynamic refresh_dyn() { return mDelegate->refresh_dyn();}  \
virtual Void resizeChildren( ) { return mDelegate->resizeChildren();}  \
virtual Dynamic resizeChildren_dyn() { return mDelegate->resizeChildren_dyn();}  \
virtual Void repositionChildren( ) { return mDelegate->repositionChildren();}  \
virtual Dynamic repositionChildren_dyn() { return mDelegate->repositionChildren_dyn();}  \


template<typename IMPL>
class ILayout_delegate_ : public ILayout_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ILayout_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_ILayout
		DELEGATE_haxe_ui_toolkit_core_interfaces_IClonable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout */ 
