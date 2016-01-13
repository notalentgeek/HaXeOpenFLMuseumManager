#ifndef INCLUDED_haxe_ui_toolkit_resources_IResourceHook
#define INCLUDED_haxe_ui_toolkit_resources_IResourceHook

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(haxe,ui,toolkit,resources,IResourceHook)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace haxe{
namespace ui{
namespace toolkit{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  IResourceHook_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IResourceHook_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String resourceId,::String locale)=0;
		virtual Dynamic getBitmapData_dyn()=0;
		virtual ::String getText( ::String resourceId,::String locale)=0;
		virtual Dynamic getText_dyn()=0;
		virtual ::openfl::_legacy::utils::ByteArray getBytes( ::String resourceId,::String locale)=0;
		virtual Dynamic getBytes_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_resources_IResourceHook \
virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String resourceId,::String locale) { return mDelegate->getBitmapData(resourceId,locale);}  \
virtual Dynamic getBitmapData_dyn() { return mDelegate->getBitmapData_dyn();}  \
virtual ::String getText( ::String resourceId,::String locale) { return mDelegate->getText(resourceId,locale);}  \
virtual Dynamic getText_dyn() { return mDelegate->getText_dyn();}  \
virtual ::openfl::_legacy::utils::ByteArray getBytes( ::String resourceId,::String locale) { return mDelegate->getBytes(resourceId,locale);}  \
virtual Dynamic getBytes_dyn() { return mDelegate->getBytes_dyn();}  \


template<typename IMPL>
class IResourceHook_delegate_ : public IResourceHook_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IResourceHook_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_resources_IResourceHook
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace resources

#endif /* INCLUDED_haxe_ui_toolkit_resources_IResourceHook */ 
