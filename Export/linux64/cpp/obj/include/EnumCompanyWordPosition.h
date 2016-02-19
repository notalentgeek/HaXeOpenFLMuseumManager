#ifndef INCLUDED_EnumCompanyWordPosition
#define INCLUDED_EnumCompanyWordPosition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumCompanyWordPosition)


class EnumCompanyWordPosition_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumCompanyWordPosition_obj OBJ_;

	public:
		EnumCompanyWordPosition_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumCompanyWordPosition","\xcf","\x7a","\x95","\x5c"); }
		::String __ToString() const { return HX_HCSTRING("EnumCompanyWordPosition.","\x7f","\xfa","\x35","\xa6") + tag; }

		static ::EnumCompanyWordPosition PRE;
		static inline ::EnumCompanyWordPosition PRE_dyn() { return PRE; }
		static ::EnumCompanyWordPosition SUF;
		static inline ::EnumCompanyWordPosition SUF_dyn() { return SUF; }
};


#endif /* INCLUDED_EnumCompanyWordPosition */ 
