#ifndef INCLUDED_EnumTagFeelType
#define INCLUDED_EnumTagFeelType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumTagFeelType)


class EnumTagFeelType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumTagFeelType_obj OBJ_;

	public:
		EnumTagFeelType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumTagFeelType","\x19","\x0c","\x12","\x87"); }
		::String __ToString() const { return HX_HCSTRING("EnumTagFeelType.","\xf5","\x89","\xb8","\xa8") + tag; }

		static ::EnumTagFeelType NEGATIVE;
		static inline ::EnumTagFeelType NEGATIVE_dyn() { return NEGATIVE; }
		static ::EnumTagFeelType NEUTRAL;
		static inline ::EnumTagFeelType NEUTRAL_dyn() { return NEUTRAL; }
		static ::EnumTagFeelType POSITIVE;
		static inline ::EnumTagFeelType POSITIVE_dyn() { return POSITIVE; }
};


#endif /* INCLUDED_EnumTagFeelType */ 
