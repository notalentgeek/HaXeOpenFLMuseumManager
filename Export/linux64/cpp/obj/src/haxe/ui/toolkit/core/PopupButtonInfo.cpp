#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#include <haxe/ui/toolkit/core/PopupButtonInfo.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void PopupButtonInfo_obj::__construct(hx::Null< int >  __o_type,::String text,Dynamic fn)
{
HX_STACK_FRAME("haxe.ui.toolkit.core.PopupButtonInfo","new",0xe87807d1,"haxe.ui.toolkit.core.PopupButtonInfo.new","haxe/ui/toolkit/core/PopupManager.hx",321,0xc348cc90)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
HX_STACK_ARG(text,"text")
HX_STACK_ARG(fn,"fn")
int type = __o_type.Default(1);
{
	HX_STACK_LINE(322)
	this->type = (int)-1;
	HX_STACK_LINE(327)
	this->type = type;
	HX_STACK_LINE(328)
	this->text = text;
	HX_STACK_LINE(329)
	this->fn = fn;
}
;
	return null();
}

//PopupButtonInfo_obj::~PopupButtonInfo_obj() { }

Dynamic PopupButtonInfo_obj::__CreateEmpty() { return  new PopupButtonInfo_obj; }
hx::ObjectPtr< PopupButtonInfo_obj > PopupButtonInfo_obj::__new(hx::Null< int >  __o_type,::String text,Dynamic fn)
{  hx::ObjectPtr< PopupButtonInfo_obj > _result_ = new PopupButtonInfo_obj();
	_result_->__construct(__o_type,text,fn);
	return _result_;}

Dynamic PopupButtonInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupButtonInfo_obj > _result_ = new PopupButtonInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


PopupButtonInfo_obj::PopupButtonInfo_obj()
{
}

void PopupButtonInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupButtonInfo);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(fn,"fn");
	HX_MARK_END_CLASS();
}

void PopupButtonInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(fn,"fn");
}

Dynamic PopupButtonInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fn") ) { return fn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupButtonInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fn") ) { fn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PopupButtonInfo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PopupButtonInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PopupButtonInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(PopupButtonInfo_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PopupButtonInfo_obj,fn),HX_HCSTRING("fn","\x48","\x59","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("fn","\x48","\x59","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupButtonInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupButtonInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class PopupButtonInfo_obj::__mClass;

void PopupButtonInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.PopupButtonInfo","\x5f","\xcb","\x69","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PopupButtonInfo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PopupButtonInfo_obj >;
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
} // end namespace core
