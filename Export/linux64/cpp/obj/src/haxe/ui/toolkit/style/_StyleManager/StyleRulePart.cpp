#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart
#include <haxe/ui/toolkit/style/_StyleManager/StyleRulePart.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{
namespace _StyleManager{

Void StyleRulePart_obj::__construct(::String rulePart)
{
HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRulePart","new",0x00e30c00,"haxe.ui.toolkit.style._StyleManager.StyleRulePart.new","haxe/ui/toolkit/style/StyleManager.hx",410,0x60b8f881)
HX_STACK_THIS(this)
HX_STACK_ARG(rulePart,"rulePart")
{
	HX_STACK_LINE(411)
	int tmp = rulePart.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	int n = tmp;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(412)
	bool tmp1 = (n != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	if ((tmp1)){
		HX_STACK_LINE(413)
		int tmp2 = (n + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		int tmp3 = rulePart.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		::String tmp4 = rulePart.substr(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		this->state = tmp4;
		HX_STACK_LINE(414)
		int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(414)
		::String tmp6 = rulePart.substr((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(414)
		rulePart = tmp6;
	}
	HX_STACK_LINE(417)
	::String tmp2 = rulePart;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(417)
	bool tmp3 = ::StringTools_obj::startsWith(tmp2,HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(417)
	if ((tmp3)){
		HX_STACK_LINE(418)
		int tmp4 = rulePart.length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		::String tmp5 = rulePart.substr((int)1,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(418)
		this->id = tmp5;
		HX_STACK_LINE(419)
		::String tmp6 = this->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(419)
		int tmp7 = tmp6.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(419)
		n = tmp7;
		HX_STACK_LINE(420)
		bool tmp8 = (n != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(420)
		if ((tmp8)){
			HX_STACK_LINE(421)
			::String tmp9 = this->id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(421)
			int tmp10 = (n + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(421)
			::String tmp11 = this->id;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(421)
			int tmp12 = tmp11.length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(421)
			::String tmp13 = tmp9.substr(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(421)
			this->styleName = tmp13;
			HX_STACK_LINE(422)
			::String tmp14 = this->id;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(422)
			int tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(422)
			::String tmp16 = tmp14.substr((int)0,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(422)
			this->id = tmp16;
		}
	}
	else{
		HX_STACK_LINE(425)
		this->className = rulePart;
		HX_STACK_LINE(426)
		::String tmp4 = this->className;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		int tmp5 = tmp4.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(426)
		n = tmp5;
		HX_STACK_LINE(427)
		bool tmp6 = (n != (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(427)
		if ((tmp6)){
			HX_STACK_LINE(428)
			::String tmp7 = this->className;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(428)
			int tmp8 = (n + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(428)
			::String tmp9 = this->className;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(428)
			int tmp10 = tmp9.length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(428)
			::String tmp11 = tmp7.substr(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			this->styleName = tmp11;
			HX_STACK_LINE(429)
			::String tmp12 = this->className;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(429)
			int tmp13 = n;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			::String tmp14 = tmp12.substr((int)0,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			this->className = tmp14;
			HX_STACK_LINE(430)
			::String tmp15 = this->className;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(430)
			int tmp16 = tmp15.length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(430)
			bool tmp17 = (tmp16 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(430)
			if ((tmp17)){
				HX_STACK_LINE(431)
				this->className = null();
			}
		}
	}
	HX_STACK_LINE(436)
	::String tmp4 = this->styleName;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(436)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(436)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(436)
	if ((tmp5)){
		HX_STACK_LINE(436)
		::String tmp7 = this->styleName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(436)
		int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(436)
		tmp6 = (tmp9 == (int)0);
	}
	else{
		HX_STACK_LINE(436)
		tmp6 = false;
	}
	HX_STACK_LINE(436)
	if ((tmp6)){
		HX_STACK_LINE(437)
		this->styleName = null();
	}
}
;
	return null();
}

//StyleRulePart_obj::~StyleRulePart_obj() { }

Dynamic StyleRulePart_obj::__CreateEmpty() { return  new StyleRulePart_obj; }
hx::ObjectPtr< StyleRulePart_obj > StyleRulePart_obj::__new(::String rulePart)
{  hx::ObjectPtr< StyleRulePart_obj > _result_ = new StyleRulePart_obj();
	_result_->__construct(rulePart);
	return _result_;}

Dynamic StyleRulePart_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleRulePart_obj > _result_ = new StyleRulePart_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


StyleRulePart_obj::StyleRulePart_obj()
{
}

void StyleRulePart_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleRulePart);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(styleName,"styleName");
	HX_MARK_END_CLASS();
}

void StyleRulePart_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(styleName,"styleName");
}

Dynamic StyleRulePart_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"styleName") ) { return styleName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleRulePart_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styleName") ) { styleName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleRulePart_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StyleRulePart_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StyleRulePart_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(StyleRulePart_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsString,(int)offsetof(StyleRulePart_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsString,(int)offsetof(StyleRulePart_obj,styleName),HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleRulePart_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleRulePart_obj::__mClass,"__mClass");
};

#endif

hx::Class StyleRulePart_obj::__mClass;

void StyleRulePart_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style._StyleManager.StyleRulePart","\x0e","\x4c","\xf5","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StyleRulePart_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StyleRulePart_obj >;
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
} // end namespace style
} // end namespace _StyleManager
