#ifndef INCLUDED_EnumVisitorMode
#define INCLUDED_EnumVisitorMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumVisitorMode)


class EnumVisitorMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumVisitorMode_obj OBJ_;

	public:
		EnumVisitorMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumVisitorMode","\x90","\x14","\x6c","\x1f"); }
		::String __ToString() const { return HX_HCSTRING("EnumVisitorMode.","\x9e","\xe9","\x25","\x5f") + tag; }

		static ::EnumVisitorMode HARDWARE_MANUAL;
		static inline ::EnumVisitorMode HARDWARE_MANUAL_dyn() { return HARDWARE_MANUAL; }
		static ::EnumVisitorMode SOFTWARE_AUTO;
		static inline ::EnumVisitorMode SOFTWARE_AUTO_dyn() { return SOFTWARE_AUTO; }
		static ::EnumVisitorMode SOFTWARE_MANUAL;
		static inline ::EnumVisitorMode SOFTWARE_MANUAL_dyn() { return SOFTWARE_MANUAL; }
};


#endif /* INCLUDED_EnumVisitorMode */ 
