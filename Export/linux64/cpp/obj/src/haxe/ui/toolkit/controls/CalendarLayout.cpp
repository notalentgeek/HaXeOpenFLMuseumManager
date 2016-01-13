#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarLayout
#include <haxe/ui/toolkit/controls/CalendarLayout.h>
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

Void CalendarLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","new",0x5f209890,"haxe.ui.toolkit.controls.CalendarLayout.new","haxe/ui/toolkit/controls/Calendar.hx",158,0xe933a32a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(158)
	super::__construct();
}
;
	return null();
}

//CalendarLayout_obj::~CalendarLayout_obj() { }

Dynamic CalendarLayout_obj::__CreateEmpty() { return  new CalendarLayout_obj; }
hx::ObjectPtr< CalendarLayout_obj > CalendarLayout_obj::__new()
{  hx::ObjectPtr< CalendarLayout_obj > _result_ = new CalendarLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic CalendarLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CalendarLayout_obj > _result_ = new CalendarLayout_obj();
	_result_->__construct();
	return _result_;}

Void CalendarLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","resizeChildren",0x5f6d0923,"haxe.ui.toolkit.controls.CalendarLayout.resizeChildren","haxe/ui/toolkit/controls/Calendar.hx",164,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		this->super::resizeChildren();
		HX_STACK_LINE(166)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > children = tmp->get_children();		HX_STACK_VAR(children,"children");
		HX_STACK_LINE(167)
		Float tmp1 = this->get_usableWidth();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		int tmp2 = this->get_spacingX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		int tmp3 = ((int)6 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		::openfl::_legacy::geom::Rectangle tmp5 = this->get_padding();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		Float tmp6 = tmp5->get_left();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		::openfl::_legacy::geom::Rectangle tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		Float tmp8 = tmp7->get_right();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(167)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(167)
		Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		Float ucx = tmp10;		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(168)
		Float tmp11 = this->get_usableHeight();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(168)
		int tmp12 = this->get_spacingY();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(168)
		int tmp13 = ((int)5 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(168)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(168)
		::openfl::_legacy::geom::Rectangle tmp15 = this->get_padding();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(168)
		Float tmp16 = tmp15->get_top();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(168)
		::openfl::_legacy::geom::Rectangle tmp17 = this->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(168)
		Float tmp18 = tmp17->get_bottom();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(168)
		Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(168)
		Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(168)
		Float ucy = tmp20;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(169)
		Float tmp21 = (Float(ucx) / Float((int)7));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(169)
		Float bcx = tmp21;		HX_STACK_VAR(bcx,"bcx");
		HX_STACK_LINE(170)
		Float tmp22 = (Float(ucy) / Float((int)6));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(170)
		Float bcy = tmp22;		HX_STACK_VAR(bcy,"bcy");
		HX_STACK_LINE(172)
		Float xpos = (int)0;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(173)
		Float ypos = (int)0;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(174)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(175)
			while((true)){
				HX_STACK_LINE(175)
				bool tmp23 = (_g < (int)6);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(175)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(175)
				if ((tmp24)){
					HX_STACK_LINE(175)
					break;
				}
				HX_STACK_LINE(175)
				int tmp25 = (_g)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(175)
				int i = tmp25;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						bool tmp26 = (_g1 < (int)7);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(176)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(176)
						if ((tmp27)){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(176)
						int j = tmp28;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(177)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp29 = children->__get(n);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(177)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp29;		HX_STACK_VAR(child,"child");
						HX_STACK_LINE(178)
						bool tmp30 = (child != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(178)
						if ((tmp30)){
							HX_STACK_LINE(179)
							Float tmp31 = xpos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(179)
							child->set_x(tmp31);
							HX_STACK_LINE(180)
							Float tmp32 = ypos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(180)
							child->set_y(tmp32);
							HX_STACK_LINE(181)
							Float tmp33 = bcx;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(181)
							child->set_width(tmp33);
							HX_STACK_LINE(182)
							Float tmp34 = bcy;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(182)
							child->set_height(tmp34);
							HX_STACK_LINE(183)
							(n)++;
							HX_STACK_LINE(185)
							Float tmp35 = bcx;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(185)
							int tmp36 = this->get_spacingX();		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(185)
							Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(185)
							hx::AddEq(xpos,tmp37);
						}
					}
				}
				HX_STACK_LINE(188)
				xpos = (int)0;
				HX_STACK_LINE(189)
				Float tmp26 = bcy;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(189)
				int tmp27 = this->get_spacingY();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(189)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(189)
				hx::AddEq(ypos,tmp28);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::layout::Layout CalendarLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","clone",0x8a16478d,"haxe.ui.toolkit.controls.CalendarLayout.clone","src/haxe/ui/toolkit/controls/CalendarLayout.hx",1,0x34b66c2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CalendarLayout c = ((::haxe::ui::toolkit::controls::CalendarLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::CalendarLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout CalendarLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","self",0xe0b2ed5c,"haxe.ui.toolkit.controls.CalendarLayout.self","src/haxe/ui/toolkit/controls/CalendarLayout.hx",1,0x34b66c2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CalendarLayout tmp = ::haxe::ui::toolkit::controls::CalendarLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



CalendarLayout_obj::CalendarLayout_obj()
{
}

Dynamic CalendarLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CalendarLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class CalendarLayout_obj::__mClass;

void CalendarLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.CalendarLayout","\x9e","\x50","\x2d","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CalendarLayout_obj >;
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
