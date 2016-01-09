#ifndef INCLUDED_EnumTagType
#define INCLUDED_EnumTagType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnumTagType)


class EnumTagType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnumTagType_obj OBJ_;

	public:
		EnumTagType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnumTagType","\x13","\xd5","\x92","\x12"); }
		::String __ToString() const { return HX_HCSTRING("EnumTagType.","\xbb","\x9b","\xe7","\x2d") + tag; }

		static ::EnumTagType ADJ;
		static inline ::EnumTagType ADJ_dyn() { return ADJ; }
		static ::EnumTagType ADV;
		static inline ::EnumTagType ADV_dyn() { return ADV; }
		static ::EnumTagType NOUN_ALIVE_ABSTRACT;
		static inline ::EnumTagType NOUN_ALIVE_ABSTRACT_dyn() { return NOUN_ALIVE_ABSTRACT; }
		static ::EnumTagType NOUN_ALIVE_CONCRETE;
		static inline ::EnumTagType NOUN_ALIVE_CONCRETE_dyn() { return NOUN_ALIVE_CONCRETE; }
		static ::EnumTagType NOUN_INANIMATE_HOLD_ABSTRACT;
		static inline ::EnumTagType NOUN_INANIMATE_HOLD_ABSTRACT_dyn() { return NOUN_INANIMATE_HOLD_ABSTRACT; }
		static ::EnumTagType NOUN_INANIMATE_HOLD_CONCRETE;
		static inline ::EnumTagType NOUN_INANIMATE_HOLD_CONCRETE_dyn() { return NOUN_INANIMATE_HOLD_CONCRETE; }
		static ::EnumTagType NOUN_INANIMATE_PLACE_ABSTRACT;
		static inline ::EnumTagType NOUN_INANIMATE_PLACE_ABSTRACT_dyn() { return NOUN_INANIMATE_PLACE_ABSTRACT; }
		static ::EnumTagType NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER;
		static inline ::EnumTagType NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER_dyn() { return NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER; }
		static ::EnumTagType NOUN_INANIMATE_PLACE_CONCRETE_OWNER;
		static inline ::EnumTagType NOUN_INANIMATE_PLACE_CONCRETE_OWNER_dyn() { return NOUN_INANIMATE_PLACE_CONCRETE_OWNER; }
		static ::EnumTagType NOUN_INANIMATE_TITLE;
		static inline ::EnumTagType NOUN_INANIMATE_TITLE_dyn() { return NOUN_INANIMATE_TITLE; }
		static ::EnumTagType NOUN_INANIMATE_WEAR_ABSTRACT;
		static inline ::EnumTagType NOUN_INANIMATE_WEAR_ABSTRACT_dyn() { return NOUN_INANIMATE_WEAR_ABSTRACT; }
		static ::EnumTagType NOUN_INANIMATE_WEAR_CONCRETE;
		static inline ::EnumTagType NOUN_INANIMATE_WEAR_CONCRETE_dyn() { return NOUN_INANIMATE_WEAR_CONCRETE; }
		static ::EnumTagType VERB_INTRANSITIVE;
		static inline ::EnumTagType VERB_INTRANSITIVE_dyn() { return VERB_INTRANSITIVE; }
		static ::EnumTagType VERB_TRANSITIVE;
		static inline ::EnumTagType VERB_TRANSITIVE_dyn() { return VERB_TRANSITIVE; }
};


#endif /* INCLUDED_EnumTagType */ 
