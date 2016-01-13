#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_AbsoluteLayout
#include <haxe/ui/toolkit/layout/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void AbsoluteLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","new",0xfbb2d655,"haxe.ui.toolkit.layout.AbsoluteLayout.new","haxe/ui/toolkit/layout/AbsoluteLayout.hx",5,0x6fedeb3b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//AbsoluteLayout_obj::~AbsoluteLayout_obj() { }

Dynamic AbsoluteLayout_obj::__CreateEmpty() { return  new AbsoluteLayout_obj; }
hx::ObjectPtr< AbsoluteLayout_obj > AbsoluteLayout_obj::__new()
{  hx::ObjectPtr< AbsoluteLayout_obj > _result_ = new AbsoluteLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic AbsoluteLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbsoluteLayout_obj > _result_ = new AbsoluteLayout_obj();
	_result_->__construct();
	return _result_;}

Void AbsoluteLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","resizeChildren",0xfd89477e,"haxe.ui.toolkit.layout.AbsoluteLayout.resizeChildren","haxe/ui/toolkit/layout/AbsoluteLayout.hx",11,0x6fedeb3b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::resizeChildren();
		HX_STACK_LINE(13)
		Float tmp = this->get_usableWidth();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(14)
		Float tmp1 = this->get_usableHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		Float ucy = tmp1;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(15)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(15)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp2->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(15)
			while((true)){
				HX_STACK_LINE(15)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(15)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(15)
				if ((tmp4)){
					HX_STACK_LINE(15)
					break;
				}
				HX_STACK_LINE(15)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(15)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(15)
				++(_g);
				HX_STACK_LINE(17)
				bool tmp6 = child->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(17)
				bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(17)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(17)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(17)
				if ((tmp8)){
					HX_STACK_LINE(17)
					bool tmp10 = child->get_includeInLayout();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(17)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(17)
					tmp9 = (tmp11 == false);
				}
				else{
					HX_STACK_LINE(17)
					tmp9 = true;
				}
				HX_STACK_LINE(17)
				if ((tmp9)){
					HX_STACK_LINE(18)
					continue;
				}
				HX_STACK_LINE(21)
				Float tmp10 = child->get_percentWidth();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(21)
				bool tmp11 = (tmp10 > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(21)
				if ((tmp11)){
					HX_STACK_LINE(22)
					Float tmp12 = ucx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(22)
					Float tmp13 = child->get_percentWidth();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(22)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(22)
					Float tmp15 = (Float(tmp14) / Float((int)100));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(22)
					child->set_width(tmp15);
				}
				HX_STACK_LINE(25)
				Float tmp12 = child->get_percentHeight();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(25)
				bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(25)
				if ((tmp13)){
					HX_STACK_LINE(26)
					Float tmp14 = ucy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(26)
					Float tmp15 = child->get_percentHeight();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(26)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(26)
					Float tmp17 = (Float(tmp16) / Float((int)100));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(26)
					child->set_height(tmp17);
				}
			}
		}
	}
return null();
}


::haxe::ui::toolkit::layout::Layout AbsoluteLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","clone",0x1e074092,"haxe.ui.toolkit.layout.AbsoluteLayout.clone","src/haxe/ui/toolkit/layout/AbsoluteLayout.hx",1,0x891d9b06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::AbsoluteLayout c = ((::haxe::ui::toolkit::layout::AbsoluteLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::layout::AbsoluteLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout AbsoluteLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","self",0x4416bbf7,"haxe.ui.toolkit.layout.AbsoluteLayout.self","src/haxe/ui/toolkit/layout/AbsoluteLayout.hx",1,0x891d9b06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::AbsoluteLayout tmp = ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



AbsoluteLayout_obj::AbsoluteLayout_obj()
{
}

Dynamic AbsoluteLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbsoluteLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbsoluteLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class AbsoluteLayout_obj::__mClass;

void AbsoluteLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.AbsoluteLayout","\xe3","\x07","\xf2","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbsoluteLayout_obj >;
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
} // end namespace layout
