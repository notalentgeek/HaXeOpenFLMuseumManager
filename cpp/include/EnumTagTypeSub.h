#ifndef INCLUDED_EnumTagTypeSub
#define INCLUDED_EnumTagTypeSub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumTagTypeSub)


class EnumTagTypeSub_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumTagTypeSub_obj OBJ_;

	public:
		EnumTagTypeSub_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumTagTypeSub","\x2d","\xba","\xee","\x2b"); }
		::String __ToString() const { return HX_HCSTRING("EnumTagTypeSub.","\x61","\x2d","\xf4","\x44") + tag; }

		static ::EnumTagTypeSub ADJ;
		static inline ::EnumTagTypeSub ADJ_dyn() { return ADJ; }
		static ::EnumTagTypeSub ADV;
		static inline ::EnumTagTypeSub ADV_dyn() { return ADV; }
		static ::EnumTagTypeSub NOUN;
		static inline ::EnumTagTypeSub NOUN_dyn() { return NOUN; }
		static ::EnumTagTypeSub NOUN_POS;
		static inline ::EnumTagTypeSub NOUN_POS_dyn() { return NOUN_POS; }
		static ::EnumTagTypeSub NOUN_S;
		static inline ::EnumTagTypeSub NOUN_S_dyn() { return NOUN_S; }
		static ::EnumTagTypeSub NOUN_S_POS;
		static inline ::EnumTagTypeSub NOUN_S_POS_dyn() { return NOUN_S_POS; }
		static ::EnumTagTypeSub VERB_1;
		static inline ::EnumTagTypeSub VERB_1_dyn() { return VERB_1; }
		static ::EnumTagTypeSub VERB_2;
		static inline ::EnumTagTypeSub VERB_2_dyn() { return VERB_2; }
		static ::EnumTagTypeSub VERB_3;
		static inline ::EnumTagTypeSub VERB_3_dyn() { return VERB_3; }
		static ::EnumTagTypeSub VERB_ING;
		static inline ::EnumTagTypeSub VERB_ING_dyn() { return VERB_ING; }
		static ::EnumTagTypeSub VERB_S;
		static inline ::EnumTagTypeSub VERB_S_dyn() { return VERB_S; }
};


#endif /* INCLUDED_EnumTagTypeSub */ 
