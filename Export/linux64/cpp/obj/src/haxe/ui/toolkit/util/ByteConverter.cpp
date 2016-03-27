#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_ByteConverter
#include <haxe/ui/toolkit/util/ByteConverter.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void ByteConverter_obj::__construct()
{
	return null();
}

//ByteConverter_obj::~ByteConverter_obj() { }

Dynamic ByteConverter_obj::__CreateEmpty() { return  new ByteConverter_obj; }
hx::ObjectPtr< ByteConverter_obj > ByteConverter_obj::__new()
{  hx::ObjectPtr< ByteConverter_obj > _result_ = new ByteConverter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ByteConverter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteConverter_obj > _result_ = new ByteConverter_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::utils::ByteArray ByteConverter_obj::fromHaxeBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("haxe.ui.toolkit.util.ByteConverter","fromHaxeBytes",0x56937ddb,"haxe.ui.toolkit.util.ByteConverter.fromHaxeBytes","haxe/ui/toolkit/util/ByteConverter.hx",7,0xd1ec6e90)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(8)
	::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	::openfl::_legacy::utils::ByteArray ba = tmp;		HX_STACK_VAR(ba,"ba");
	HX_STACK_LINE(9)
	{
		HX_STACK_LINE(9)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(9)
		int _g = bytes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(9)
		while((true)){
			HX_STACK_LINE(9)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9)
			if ((tmp2)){
				HX_STACK_LINE(9)
				break;
			}
			HX_STACK_LINE(9)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9)
			int a = tmp3;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(10)
			{
				HX_STACK_LINE(10)
				int tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(10)
				unsigned char tmp5 = bytes->b->__unsafe_get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(10)
				int value = ((int)(tmp5));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(10)
				int tmp6 = ba->position;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(10)
				ba->ensureElem(tmp6,true);
				HX_STACK_LINE(10)
				int tmp7 = (ba->position)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(10)
				unsigned char tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(10)
				ba->b[tmp7] = tmp8;
			}
		}
	}
	HX_STACK_LINE(12)
	::openfl::_legacy::utils::ByteArray tmp1 = ba;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteConverter_obj,fromHaxeBytes,return )

::haxe::io::Bytes ByteConverter_obj::toHaxeBytes( ::openfl::_legacy::utils::ByteArray ba){
	HX_STACK_FRAME("haxe.ui.toolkit.util.ByteConverter","toHaxeBytes",0x7d85a3aa,"haxe.ui.toolkit.util.ByteConverter.toHaxeBytes","haxe/ui/toolkit/util/ByteConverter.hx",15,0xd1ec6e90)
	HX_STACK_ARG(ba,"ba")
	HX_STACK_LINE(16)
	int tmp = ba->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		int _g = ba->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		while((true)){
			HX_STACK_LINE(17)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			if ((tmp3)){
				HX_STACK_LINE(17)
				break;
			}
			HX_STACK_LINE(17)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			int a = tmp4;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(18)
			{
				HX_STACK_LINE(18)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(18)
				{
					HX_STACK_LINE(18)
					bool tmp6 = (ba->position < ba->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(18)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(18)
					if ((tmp6)){
						HX_STACK_LINE(18)
						int tmp8 = (ba->position)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(18)
						int pos = tmp8;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(18)
						tmp7 = ba->b->__get(pos);
					}
					else{
						HX_STACK_LINE(18)
						tmp7 = ba->__throwEOFi();
					}
					HX_STACK_LINE(18)
					int value = tmp7;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(18)
					int tmp8 = (int(value) & int((int)128));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(18)
					bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(18)
					if ((tmp9)){
						HX_STACK_LINE(18)
						tmp5 = (value - (int)256);
					}
					else{
						HX_STACK_LINE(18)
						tmp5 = value;
					}
				}
				HX_STACK_LINE(18)
				int v = tmp5;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(18)
				int tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(18)
				bytes->b[a] = tmp6;
			}
		}
	}
	HX_STACK_LINE(20)
	::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteConverter_obj,toHaxeBytes,return )


ByteConverter_obj::ByteConverter_obj()
{
}

bool ByteConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"toHaxeBytes") ) { outValue = toHaxeBytes_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromHaxeBytes") ) { outValue = fromHaxeBytes_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteConverter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteConverter_obj::__mClass,"__mClass");
};

#endif

hx::Class ByteConverter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromHaxeBytes","\x9b","\xb7","\xf9","\x02"),
	HX_HCSTRING("toHaxeBytes","\x6a","\xed","\xf5","\xf5"),
	::String(null()) };

void ByteConverter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.ByteConverter","\xae","\xb6","\x9b","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ByteConverter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
