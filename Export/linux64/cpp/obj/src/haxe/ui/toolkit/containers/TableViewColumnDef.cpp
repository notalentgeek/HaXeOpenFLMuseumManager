#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef
#include <haxe/ui/toolkit/containers/TableViewColumnDef.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void TableViewColumnDef_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewColumnDef","new",0x4a171f68,"haxe.ui.toolkit.containers.TableViewColumnDef.new","haxe/ui/toolkit/containers/TableView.hx",301,0x496fad85)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(305)
	this->calculatedWidth = ((Float)0);
	HX_STACK_LINE(304)
	this->width = ((Float)0);
	HX_STACK_LINE(303)
	this->type = HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c");
}
;
	return null();
}

//TableViewColumnDef_obj::~TableViewColumnDef_obj() { }

Dynamic TableViewColumnDef_obj::__CreateEmpty() { return  new TableViewColumnDef_obj; }
hx::ObjectPtr< TableViewColumnDef_obj > TableViewColumnDef_obj::__new()
{  hx::ObjectPtr< TableViewColumnDef_obj > _result_ = new TableViewColumnDef_obj();
	_result_->__construct();
	return _result_;}

Dynamic TableViewColumnDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableViewColumnDef_obj > _result_ = new TableViewColumnDef_obj();
	_result_->__construct();
	return _result_;}


TableViewColumnDef_obj::TableViewColumnDef_obj()
{
}

void TableViewColumnDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableViewColumnDef);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(calculatedWidth,"calculatedWidth");
	HX_MARK_END_CLASS();
}

void TableViewColumnDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(calculatedWidth,"calculatedWidth");
}

Dynamic TableViewColumnDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calculatedWidth") ) { return calculatedWidth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TableViewColumnDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calculatedWidth") ) { calculatedWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TableViewColumnDef_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TableViewColumnDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("calculatedWidth","\xe8","\xe0","\xd5","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TableViewColumnDef_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(TableViewColumnDef_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(TableViewColumnDef_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(TableViewColumnDef_obj,calculatedWidth),HX_HCSTRING("calculatedWidth","\xe8","\xe0","\xd5","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("calculatedWidth","\xe8","\xe0","\xd5","\xd9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewColumnDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewColumnDef_obj::__mClass,"__mClass");
};

#endif

hx::Class TableViewColumnDef_obj::__mClass;

void TableViewColumnDef_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.TableViewColumnDef","\x76","\x8b","\xf1","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TableViewColumnDef_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TableViewColumnDef_obj >;
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
} // end namespace containers
