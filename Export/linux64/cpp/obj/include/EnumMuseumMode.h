#ifndef INCLUDED_EnumMuseumMode
#define INCLUDED_EnumMuseumMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumMuseumMode)


class EnumMuseumMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumMuseumMode_obj OBJ_;

	public:
		EnumMuseumMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumMuseumMode","\xd6","\xc5","\xa2","\x72"); }
		::String __ToString() const { return HX_HCSTRING("EnumMuseumMode.","\x98","\x55","\xca","\xdb") + tag; }

		static ::EnumMuseumMode MRK_DEL;
		static inline ::EnumMuseumMode MRK_DEL_dyn() { return MRK_DEL; }
		static ::EnumMuseumMode REQ_CH_PARENT;
		static inline ::EnumMuseumMode REQ_CH_PARENT_dyn() { return REQ_CH_PARENT; }
};


#endif /* INCLUDED_EnumMuseumMode */ 
