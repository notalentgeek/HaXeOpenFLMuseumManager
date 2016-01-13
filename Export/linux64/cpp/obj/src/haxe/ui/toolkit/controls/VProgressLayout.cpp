#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VProgressLayout
#include <haxe/ui/toolkit/controls/VProgressLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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

Void VProgressLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","new",0xab6b1069,"haxe.ui.toolkit.controls.VProgressLayout.new","haxe/ui/toolkit/controls/Progress.hx",241,0x8f3b099b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(241)
	super::__construct();
}
;
	return null();
}

//VProgressLayout_obj::~VProgressLayout_obj() { }

Dynamic VProgressLayout_obj::__CreateEmpty() { return  new VProgressLayout_obj; }
hx::ObjectPtr< VProgressLayout_obj > VProgressLayout_obj::__new()
{  hx::ObjectPtr< VProgressLayout_obj > _result_ = new VProgressLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic VProgressLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VProgressLayout_obj > _result_ = new VProgressLayout_obj();
	_result_->__construct();
	return _result_;}

Void VProgressLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","resizeChildren",0xfa9bddea,"haxe.ui.toolkit.controls.VProgressLayout.resizeChildren","haxe/ui/toolkit/controls/Progress.hx",244,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		this->super::resizeChildren();
		HX_STACK_LINE(247)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::haxe::ui::toolkit::core::Component tmp1 = tmp->findChild(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		::haxe::ui::toolkit::core::Component background = tmp1;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(248)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(249)
		bool tmp2 = (background != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		if ((tmp2)){
			HX_STACK_LINE(250)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = background->findChild(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			value = tmp3;
		}
		HX_STACK_LINE(253)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		::haxe::ui::toolkit::core::interfaces::IScrollable tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		tmp4 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IScrollable >::cast(tmp3);
		HX_STACK_LINE(253)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll = tmp4;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(254)
		bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		if ((tmp5)){
			HX_STACK_LINE(255)
			Float tmp6 = this->get_usableHeight();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			Float ucy = tmp6;		HX_STACK_VAR(ucy,"ucy");
			HX_STACK_LINE(257)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = this->get_container();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp7->findChild(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(257)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = tmp8;		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(258)
			bool tmp9 = (thumb != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			if ((tmp9)){
				HX_STACK_LINE(259)
				Float tmp10 = thumb->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(259)
				hx::SubEq(ucy,tmp10);
			}
			HX_STACK_LINE(262)
			value->set_percentHeight((int)-1);
			HX_STACK_LINE(263)
			Float tmp10 = scroll->get_pos();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(263)
			Float tmp11 = scroll->get_min();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(263)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(263)
			Float tmp13 = scroll->get_max();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(263)
			Float tmp14 = scroll->get_min();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(263)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(263)
			Float tmp16 = (Float(tmp12) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(263)
			Float tmp17 = ucy;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(263)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(263)
			Float cy = tmp18;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(265)
			bool tmp19 = (cy < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(265)
			if ((tmp19)){
				HX_STACK_LINE(266)
				cy = (int)0;
			}
			else{
				HX_STACK_LINE(267)
				bool tmp20 = (cy > ucy);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(267)
				if ((tmp20)){
					HX_STACK_LINE(268)
					cy = ucy;
				}
			}
			HX_STACK_LINE(271)
			bool tmp20 = (thumb != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(271)
			if ((tmp20)){
				HX_STACK_LINE(272)
				Float tmp21 = thumb->get_height();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(272)
				Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(272)
				hx::AddEq(cy,tmp22);
			}
			HX_STACK_LINE(275)
			bool tmp21 = (cy == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(275)
			if ((tmp21)){
				HX_STACK_LINE(276)
				value->set_visible(false);
			}
			else{
				HX_STACK_LINE(278)
				Float tmp22 = cy;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(278)
				value->set_height(tmp22);
				HX_STACK_LINE(279)
				value->set_visible(true);
			}
		}
	}
return null();
}


Void VProgressLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","repositionChildren",0x0e8932d2,"haxe.ui.toolkit.controls.VProgressLayout.repositionChildren","haxe/ui/toolkit/controls/Progress.hx",284,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		this->super::repositionChildren();
		HX_STACK_LINE(287)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		::haxe::ui::toolkit::core::Component tmp1 = tmp->findChild(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		::haxe::ui::toolkit::core::Component background = tmp1;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(288)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(289)
		bool tmp2 = (background != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		if ((tmp2)){
			HX_STACK_LINE(290)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			Float tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			Float tmp6 = background->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			background->set_x(tmp8);
			HX_STACK_LINE(291)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = background->findChild(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			value = tmp9;
		}
		HX_STACK_LINE(294)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		::haxe::ui::toolkit::core::interfaces::IScrollable tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(294)
		tmp4 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IScrollable >::cast(tmp3);
		HX_STACK_LINE(294)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll = tmp4;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(295)
		bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		if ((tmp5)){
			HX_STACK_LINE(296)
			Float tmp6 = this->get_usableHeight();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(296)
			Float ucy = tmp6;		HX_STACK_VAR(ucy,"ucy");
			HX_STACK_LINE(297)
			Float tmp7 = ucy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			Float tmp8 = value->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp10 = background->get_layout();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			::openfl::_legacy::geom::Rectangle tmp11 = tmp10->get_padding();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			Float tmp12 = tmp11->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			value->set_y(tmp13);
			HX_STACK_LINE(299)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(299)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp15 = tmp14->findChild(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(299)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = tmp15;		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(300)
			bool tmp16 = (thumb != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(300)
			if ((tmp16)){
				HX_STACK_LINE(301)
				::openfl::_legacy::geom::Rectangle tmp17 = this->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(301)
				Float tmp18 = tmp17->get_top();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(301)
				Float tmp19 = value->get_y();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(301)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(301)
				Float tmp21 = thumb->get_height();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(301)
				Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(301)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(301)
				Float ypos = tmp23;		HX_STACK_VAR(ypos,"ypos");
				HX_STACK_LINE(302)
				Float tmp24 = ypos;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(302)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(302)
				thumb->set_y(tmp25);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::layout::Layout VProgressLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","clone",0x57d127a6,"haxe.ui.toolkit.controls.VProgressLayout.clone","src/haxe/ui/toolkit/controls/VProgressLayout.hx",1,0xb4becd7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout tmp = hx::TCast< ::haxe::ui::toolkit::layout::DefaultLayout >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VProgressLayout c = ((::haxe::ui::toolkit::controls::VProgressLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::VProgressLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout VProgressLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","self",0x55915363,"haxe.ui.toolkit.controls.VProgressLayout.self","src/haxe/ui/toolkit/controls/VProgressLayout.hx",1,0xb4becd7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VProgressLayout tmp = ::haxe::ui::toolkit::controls::VProgressLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



VProgressLayout_obj::VProgressLayout_obj()
{
}

Dynamic VProgressLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VProgressLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VProgressLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class VProgressLayout_obj::__mClass;

void VProgressLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.VProgressLayout","\xf7","\xa7","\xd6","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VProgressLayout_obj >;
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
