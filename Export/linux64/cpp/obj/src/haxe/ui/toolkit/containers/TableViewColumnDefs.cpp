#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef
#include <haxe/ui/toolkit/containers/TableViewColumnDef.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDefs
#include <haxe/ui/toolkit/containers/TableViewColumnDefs.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void TableViewColumnDefs_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewColumnDefs","new",0x1a837faf,"haxe.ui.toolkit.containers.TableViewColumnDefs.new","haxe/ui/toolkit/containers/TableView.hx",263,0x496fad85)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(263)
	this->_columns = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TableViewColumnDefs_obj::~TableViewColumnDefs_obj() { }

Dynamic TableViewColumnDefs_obj::__CreateEmpty() { return  new TableViewColumnDefs_obj; }
hx::ObjectPtr< TableViewColumnDefs_obj > TableViewColumnDefs_obj::__new()
{  hx::ObjectPtr< TableViewColumnDefs_obj > _result_ = new TableViewColumnDefs_obj();
	_result_->__construct();
	return _result_;}

Dynamic TableViewColumnDefs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableViewColumnDefs_obj > _result_ = new TableViewColumnDefs_obj();
	_result_->__construct();
	return _result_;}

Void TableViewColumnDefs_obj::add( ::String id,hx::Null< Float >  __o_width,::String __o_title){
Float width = __o_width.Default(0);
::String title = __o_title.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewColumnDefs","add",0x1a79a170,"haxe.ui.toolkit.containers.TableViewColumnDefs.add","haxe/ui/toolkit/containers/TableView.hx",266,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(title,"title")
{
		HX_STACK_LINE(267)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		bool tmp1 = this->has(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		if ((tmp2)){
			HX_STACK_LINE(268)
			::haxe::ui::toolkit::containers::TableViewColumnDef tmp3 = ::haxe::ui::toolkit::containers::TableViewColumnDef_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(268)
			::haxe::ui::toolkit::containers::TableViewColumnDef c = tmp3;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(269)
			c->id = id;
			HX_STACK_LINE(270)
			c->width = width;
			HX_STACK_LINE(271)
			::haxe::ui::toolkit::containers::TableViewColumnDef tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			this->_columns->push(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TableViewColumnDefs_obj,add,(void))

bool TableViewColumnDefs_obj::has( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewColumnDefs","has",0x1a7eeea9,"haxe.ui.toolkit.containers.TableViewColumnDefs.has","haxe/ui/toolkit/containers/TableView.hx",275,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(276)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		Array< ::Dynamic > _g1 = this->_columns;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(277)
		while((true)){
			HX_STACK_LINE(277)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(277)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			if ((tmp1)){
				HX_STACK_LINE(277)
				break;
			}
			HX_STACK_LINE(277)
			::haxe::ui::toolkit::containers::TableViewColumnDef tmp2 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			::haxe::ui::toolkit::containers::TableViewColumnDef c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(277)
			++(_g);
			HX_STACK_LINE(278)
			bool tmp3 = (c->id == id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			if ((tmp3)){
				HX_STACK_LINE(279)
				b = true;
			}
		}
	}
	HX_STACK_LINE(282)
	bool tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewColumnDefs_obj,has,return )

Array< ::Dynamic > TableViewColumnDefs_obj::iterator( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewColumnDefs","iterator",0x3961bc3f,"haxe.ui.toolkit.containers.TableViewColumnDefs.iterator","haxe/ui/toolkit/containers/TableView.hx",286,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	return this->_columns;
}


HX_DEFINE_DYNAMIC_FUNC0(TableViewColumnDefs_obj,iterator,return )

::haxe::ui::toolkit::containers::TableViewColumnDef TableViewColumnDefs_obj::findColumn( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewColumnDefs","findColumn",0x2c246c80,"haxe.ui.toolkit.containers.TableViewColumnDefs.findColumn","haxe/ui/toolkit/containers/TableView.hx",289,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(290)
	::haxe::ui::toolkit::containers::TableViewColumnDef c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(291)
		Array< ::Dynamic > _g1 = this->_columns;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(291)
		while((true)){
			HX_STACK_LINE(291)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(291)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(291)
			if ((tmp1)){
				HX_STACK_LINE(291)
				break;
			}
			HX_STACK_LINE(291)
			::haxe::ui::toolkit::containers::TableViewColumnDef tmp2 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(291)
			::haxe::ui::toolkit::containers::TableViewColumnDef test = tmp2;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(291)
			++(_g);
			HX_STACK_LINE(292)
			bool tmp3 = (test->id == id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(292)
			if ((tmp3)){
				HX_STACK_LINE(293)
				c = test;
				HX_STACK_LINE(294)
				break;
			}
		}
	}
	HX_STACK_LINE(297)
	::haxe::ui::toolkit::containers::TableViewColumnDef tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewColumnDefs_obj,findColumn,return )


TableViewColumnDefs_obj::TableViewColumnDefs_obj()
{
}

void TableViewColumnDefs_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableViewColumnDefs);
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_END_CLASS();
}

void TableViewColumnDefs_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_columns,"_columns");
}

Dynamic TableViewColumnDefs_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"findColumn") ) { return findColumn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TableViewColumnDefs_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TableViewColumnDefs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TableViewColumnDefs_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TableViewColumnDefs_obj,_columns),HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("findColumn","\xef","\x03","\xdf","\xef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewColumnDefs_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewColumnDefs_obj::__mClass,"__mClass");
};

#endif

hx::Class TableViewColumnDefs_obj::__mClass;

void TableViewColumnDefs_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.TableViewColumnDefs","\x3d","\x7c","\x68","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TableViewColumnDefs_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TableViewColumnDefs_obj >;
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
