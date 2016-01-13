#ifndef INCLUDED_openfl_system_TouchscreenType
#define INCLUDED_openfl_system_TouchscreenType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_system,TouchscreenType)
namespace openfl{
namespace _system{


class TouchscreenType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TouchscreenType_obj OBJ_;

	public:
		TouchscreenType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.system.TouchscreenType","\x44","\x8e","\x80","\x00"); }
		::String __ToString() const { return HX_HCSTRING("TouchscreenType.","\xe9","\xab","\xa4","\x6f") + tag; }

		static ::openfl::_system::TouchscreenType FINGER;
		static inline ::openfl::_system::TouchscreenType FINGER_dyn() { return FINGER; }
		static ::openfl::_system::TouchscreenType NONE;
		static inline ::openfl::_system::TouchscreenType NONE_dyn() { return NONE; }
		static ::openfl::_system::TouchscreenType STYLUS;
		static inline ::openfl::_system::TouchscreenType STYLUS_dyn() { return STYLUS; }
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_TouchscreenType */ 
