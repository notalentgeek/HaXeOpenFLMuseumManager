#ifndef INCLUDED_haxe_IMap
#define INCLUDED_haxe_IMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  IMap_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMap_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Dynamic keys( )=0;
virtual Dynamic keys_dyn()=0;
};



template<typename IMPL>
class IMap_delegate_ : public IMap_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMap_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Dynamic keys( ) { return mDelegate->keys();}
		Dynamic keys_dyn() { return mDelegate->keys_dyn();}
};

} // end namespace haxe

#endif /* INCLUDED_haxe_IMap */ 
