#ifndef INCLUDED_motion_IComponentPath
#define INCLUDED_motion_IComponentPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(motion,IComponentPath)
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  IComponentPath_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IComponentPath_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float get_end( )=0;
		virtual Dynamic get_end_dyn()=0;
		virtual Float calculate( Float k)=0;
		virtual Dynamic calculate_dyn()=0;
};

#define DELEGATE_motion_IComponentPath \
virtual Float get_end( ) { return mDelegate->get_end();}  \
virtual Dynamic get_end_dyn() { return mDelegate->get_end_dyn();}  \
virtual Float calculate( Float k) { return mDelegate->calculate(k);}  \
virtual Dynamic calculate_dyn() { return mDelegate->calculate_dyn();}  \


template<typename IMPL>
class IComponentPath_delegate_ : public IComponentPath_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IComponentPath_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_motion_IComponentPath
};

} // end namespace motion

#endif /* INCLUDED_motion_IComponentPath */ 
