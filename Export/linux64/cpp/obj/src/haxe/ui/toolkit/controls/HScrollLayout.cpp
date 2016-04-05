#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScrollLayout
#include <haxe/ui/toolkit/controls/HScrollLayout.h>
#endif
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void HScrollLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","new",0xd744bcbb,"haxe.ui.toolkit.controls.HScrollLayout.new","haxe/ui/toolkit/controls/HScroll.hx",321,0x2a624a1f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(321)
	super::__construct();
}
;
	return null();
}

//HScrollLayout_obj::~HScrollLayout_obj() { }

Dynamic HScrollLayout_obj::__CreateEmpty() { return  new HScrollLayout_obj; }
hx::ObjectPtr< HScrollLayout_obj > HScrollLayout_obj::__new()
{  hx::ObjectPtr< HScrollLayout_obj > _result_ = new HScrollLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic HScrollLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HScrollLayout_obj > _result_ = new HScrollLayout_obj();
	_result_->__construct();
	return _result_;}

Void HScrollLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","resizeChildren",0x485aced8,"haxe.ui.toolkit.controls.HScrollLayout.resizeChildren","haxe/ui/toolkit/controls/HScroll.hx",324,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(325)
		this->super::resizeChildren();
		HX_STACK_LINE(327)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = tmp->findChild(HX_HCSTRING("deinc","\xfd","\x9b","\x24","\xd7"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(327)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject deinc = tmp1;		HX_STACK_VAR(deinc,"deinc");
		HX_STACK_LINE(328)
		bool tmp2 = (deinc != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		if ((tmp2)){
			HX_STACK_LINE(329)
			Float tmp3 = this->get_innerHeight();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(329)
			deinc->set_width(tmp3);
		}
		HX_STACK_LINE(332)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = tmp3->findChild(HX_HCSTRING("inc","\xde","\x0c","\x50","\x00"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject inc = tmp4;		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(333)
		bool tmp5 = (inc != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(333)
		if ((tmp5)){
			HX_STACK_LINE(334)
			Float tmp6 = this->get_innerHeight();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(334)
			inc->set_width(tmp6);
		}
		HX_STACK_LINE(337)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		::haxe::ui::toolkit::core::interfaces::IScrollable tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(337)
		tmp7 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IScrollable >::cast(tmp6);
		HX_STACK_LINE(337)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll = tmp7;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(338)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = this->get_container();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(338)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = tmp8->findChild(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(338)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = tmp9;		HX_STACK_VAR(thumb,"thumb");
		HX_STACK_LINE(339)
		bool tmp10 = (thumb != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(339)
		if ((tmp10)){
			HX_STACK_LINE(340)
			Float tmp11 = scroll->get_max();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(340)
			Float tmp12 = scroll->get_min();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(340)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(340)
			Float m = tmp13;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(341)
			Float tmp14 = this->get_usableWidth();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(341)
			Float ucx = tmp14;		HX_STACK_VAR(ucx,"ucx");
			HX_STACK_LINE(342)
			Float tmp15 = scroll->get_pageSize();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(342)
			Float tmp16 = m;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(342)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(342)
			Float tmp18 = ucx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(342)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(342)
			Float thumbWidth = tmp19;		HX_STACK_VAR(thumbWidth,"thumbWidth");
			HX_STACK_LINE(343)
			Float tmp20 = thumbWidth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(343)
			Float tmp21 = this->get_innerHeight();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(343)
			bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(343)
			if ((tmp22)){
				HX_STACK_LINE(344)
				Float tmp23 = this->get_innerHeight();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(344)
				thumbWidth = tmp23;
			}
			else{
				HX_STACK_LINE(345)
				bool tmp23 = (thumbWidth > ucx);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(345)
				if ((tmp23)){
					HX_STACK_LINE(346)
					thumbWidth = ucx;
				}
			}
			HX_STACK_LINE(348)
			bool tmp23 = (thumbWidth > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(348)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(348)
			if ((tmp23)){
				HX_STACK_LINE(348)
				Float tmp25 = thumbWidth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(348)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(348)
				bool tmp27 = ::Math_obj::isNaN(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(348)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(348)
				tmp24 = (tmp28 == false);
			}
			else{
				HX_STACK_LINE(348)
				tmp24 = false;
			}
			HX_STACK_LINE(348)
			if ((tmp24)){
				HX_STACK_LINE(349)
				Float tmp25 = thumbWidth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(349)
				thumb->set_width(tmp25);
			}
		}
	}
return null();
}


Void HScrollLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","repositionChildren",0x47de32c0,"haxe.ui.toolkit.controls.HScrollLayout.repositionChildren","haxe/ui/toolkit/controls/HScroll.hx",354,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(355)
		this->super::repositionChildren();
		HX_STACK_LINE(357)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = tmp->findChild(HX_HCSTRING("deinc","\xfd","\x9b","\x24","\xd7"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject deinc = tmp1;		HX_STACK_VAR(deinc,"deinc");
		HX_STACK_LINE(358)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = tmp2->findChild(HX_HCSTRING("inc","\xde","\x0c","\x50","\x00"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject inc = tmp3;		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(359)
		bool tmp4 = (inc != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(359)
		if ((tmp4)){
			HX_STACK_LINE(360)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = this->get_container();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(360)
			Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			Float tmp7 = inc->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(360)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(360)
			::openfl::_legacy::geom::Rectangle tmp9 = this->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(360)
			Float tmp10 = tmp9->get_right();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(360)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(360)
			inc->set_x(tmp11);
		}
		HX_STACK_LINE(363)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = this->get_container();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(363)
		::haxe::ui::toolkit::core::interfaces::IScrollable tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		tmp6 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IScrollable >::cast(tmp5);
		HX_STACK_LINE(363)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll = tmp6;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(364)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = this->get_container();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(364)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp7->findChild(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(364)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = tmp8;		HX_STACK_VAR(thumb,"thumb");
		HX_STACK_LINE(365)
		bool tmp9 = (thumb != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(365)
		if ((tmp9)){
			HX_STACK_LINE(366)
			Float tmp10 = scroll->get_max();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(366)
			Float tmp11 = scroll->get_min();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(366)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(366)
			Float m = tmp12;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(367)
			Float tmp13 = this->get_usableWidth();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(367)
			Float u = tmp13;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(368)
			Float tmp14 = thumb->get_width();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(368)
			hx::SubEq(u,tmp14);
			HX_STACK_LINE(370)
			Float tmp15 = scroll->get_pos();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(370)
			Float tmp16 = scroll->get_min();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(370)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(370)
			Float tmp18 = m;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(370)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(370)
			Float tmp20 = u;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(370)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(370)
			Float x = tmp21;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(371)
			::openfl::_legacy::geom::Rectangle tmp22 = this->get_padding();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(371)
			Float tmp23 = tmp22->get_left();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(371)
			hx::AddEq(x,tmp23);
			HX_STACK_LINE(372)
			bool tmp24 = (deinc != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(372)
			if ((tmp24)){
				HX_STACK_LINE(373)
				Float tmp25 = deinc->get_width();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				int tmp26 = this->get_spacingX();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(373)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(373)
				hx::AddEq(x,tmp27);
			}
			HX_STACK_LINE(376)
			Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(376)
			thumb->set_x(tmp25);
		}
	}
return null();
}


Float HScrollLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","get_usableWidth",0xe37e4860,"haxe.ui.toolkit.controls.HScrollLayout.get_usableWidth","haxe/ui/toolkit/controls/HScroll.hx",381,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(382)
	Float tmp = this->get_innerWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(383)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_container();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(383)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = tmp1->findChild(HX_HCSTRING("deinc","\xfd","\x9b","\x24","\xd7"),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(383)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject deinc = tmp2;		HX_STACK_VAR(deinc,"deinc");
	HX_STACK_LINE(384)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(384)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = tmp3->findChild(HX_HCSTRING("inc","\xde","\x0c","\x50","\x00"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(384)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject inc = tmp4;		HX_STACK_VAR(inc,"inc");
	HX_STACK_LINE(385)
	bool tmp5 = (deinc != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(385)
	if ((tmp5)){
		HX_STACK_LINE(386)
		Float tmp6 = deinc->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(386)
		int tmp7 = this->get_spacingX();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(386)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(386)
		hx::SubEq(ucx,tmp8);
	}
	HX_STACK_LINE(388)
	bool tmp6 = (inc != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(388)
	if ((tmp6)){
		HX_STACK_LINE(389)
		Float tmp7 = inc->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(389)
		int tmp8 = this->get_spacingX();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(389)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(389)
		hx::SubEq(ucx,tmp9);
	}
	HX_STACK_LINE(391)
	Float tmp7 = ucx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(391)
	return tmp7;
}


::haxe::ui::toolkit::layout::Layout HScrollLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","clone",0x6eac0c78,"haxe.ui.toolkit.controls.HScrollLayout.clone","src/haxe/ui/toolkit/controls/HScrollLayout.hx",1,0xaba6e22a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout tmp = hx::TCast< ::haxe::ui::toolkit::layout::DefaultLayout >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HScrollLayout c = ((::haxe::ui::toolkit::controls::HScrollLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::HScrollLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout HScrollLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","self",0x882e6ed1,"haxe.ui.toolkit.controls.HScrollLayout.self","src/haxe/ui/toolkit/controls/HScrollLayout.hx",1,0xaba6e22a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HScrollLayout tmp = ::haxe::ui::toolkit::controls::HScrollLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



HScrollLayout_obj::HScrollLayout_obj()
{
}

Dynamic HScrollLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HScrollLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HScrollLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HScrollLayout_obj::__mClass;

void HScrollLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.HScrollLayout","\x49","\x43","\xeb","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HScrollLayout_obj >;
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
} // end namespace controls
