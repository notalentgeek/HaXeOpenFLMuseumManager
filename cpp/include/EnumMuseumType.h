#ifndef INCLUDED_EnumMuseumType
#define INCLUDED_EnumMuseumType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumMuseumType)


class EnumMuseumType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumMuseumType_obj OBJ_;

	public:
		EnumMuseumType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumMuseumType","\x2d","\xe5","\x4a","\x77"); }
		::String __ToString() const { return HX_HCSTRING("EnumMuseumType.","\x61","\xa2","\x3d","\xea") + tag; }

		static ::EnumMuseumType EXH;
		static inline ::EnumMuseumType EXH_dyn() { return EXH; }
		static ::EnumMuseumType FLR;
		static inline ::EnumMuseumType FLR_dyn() { return FLR; }
		static ::EnumMuseumType ROM;
		static inline ::EnumMuseumType ROM_dyn() { return ROM; }
};


#endif /* INCLUDED_EnumMuseumType */ 
