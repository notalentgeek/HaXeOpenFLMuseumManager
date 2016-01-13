#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void XMLProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.XMLProcessor","new",0x1bb8b3f1,"haxe.ui.toolkit.core.xml.XMLProcessor.new","haxe/ui/toolkit/core/xml/XMLProcessor.hx",4,0x288993fe)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//XMLProcessor_obj::~XMLProcessor_obj() { }

Dynamic XMLProcessor_obj::__CreateEmpty() { return  new XMLProcessor_obj; }
hx::ObjectPtr< XMLProcessor_obj > XMLProcessor_obj::__new()
{  hx::ObjectPtr< XMLProcessor_obj > _result_ = new XMLProcessor_obj();
	_result_->__construct();
	return _result_;}

Dynamic XMLProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLProcessor_obj > _result_ = new XMLProcessor_obj();
	_result_->__construct();
	return _result_;}

hx::Object *XMLProcessor_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::xml::IXMLProcessor_obj)) return operator ::haxe::ui::toolkit::core::xml::IXMLProcessor_obj *();
	return super::__ToInterface(inType);
}

XMLProcessor_obj::operator ::haxe::ui::toolkit::core::xml::IXMLProcessor_obj *()
	{ return new ::haxe::ui::toolkit::core::xml::IXMLProcessor_delegate_< XMLProcessor_obj >(this); }
Dynamic XMLProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.XMLProcessor","process",0x01772280,"haxe.ui.toolkit.core.xml.XMLProcessor.process","haxe/ui/toolkit/core/xml/XMLProcessor.hx",9,0x288993fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(9)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(XMLProcessor_obj,process,return )

::String XMLProcessor_obj::stripNamespace( ::String nodeName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.XMLProcessor","stripNamespace",0x6ea070b2,"haxe.ui.toolkit.core.xml.XMLProcessor.stripNamespace","haxe/ui/toolkit/core/xml/XMLProcessor.hx",12,0x288993fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(13)
	int tmp = nodeName.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	int n = tmp;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(14)
	bool tmp1 = (n != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	if ((tmp1)){
		HX_STACK_LINE(15)
		int tmp2 = (n + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = nodeName.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		::String tmp4 = nodeName.substr(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		nodeName = tmp4;
	}
	HX_STACK_LINE(17)
	::String tmp2 = nodeName.toLowerCase();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	nodeName = tmp2;
	HX_STACK_LINE(19)
	::String tmp3 = nodeName;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(XMLProcessor_obj,stripNamespace,return )


XMLProcessor_obj::XMLProcessor_obj()
{
}

Dynamic XMLProcessor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stripNamespace") ) { return stripNamespace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("stripNamespace","\xa3","\x5c","\xe3","\xdb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XMLProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLProcessor_obj::__mClass,"__mClass");
};

#endif

hx::Class XMLProcessor_obj::__mClass;

void XMLProcessor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.xml.XMLProcessor","\x7f","\xe7","\x99","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XMLProcessor_obj >;
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
} // end namespace xml
