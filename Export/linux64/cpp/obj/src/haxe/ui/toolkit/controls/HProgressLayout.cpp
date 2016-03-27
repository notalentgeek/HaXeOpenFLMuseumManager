#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgressLayout
#include <haxe/ui/toolkit/controls/HProgressLayout.h>
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

Void HProgressLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","new",0x64b3f4db,"haxe.ui.toolkit.controls.HProgressLayout.new","haxe/ui/toolkit/controls/Progress.hx",173,0x8f3b099b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(173)
	super::__construct();
}
;
	return null();
}

//HProgressLayout_obj::~HProgressLayout_obj() { }

Dynamic HProgressLayout_obj::__CreateEmpty() { return  new HProgressLayout_obj; }
hx::ObjectPtr< HProgressLayout_obj > HProgressLayout_obj::__new()
{  hx::ObjectPtr< HProgressLayout_obj > _result_ = new HProgressLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic HProgressLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HProgressLayout_obj > _result_ = new HProgressLayout_obj();
	_result_->__construct();
	return _result_;}

Void HProgressLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","resizeChildren",0x7b344ab8,"haxe.ui.toolkit.controls.HProgressLayout.resizeChildren","haxe/ui/toolkit/controls/Progress.hx",176,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		this->super::resizeChildren();
		HX_STACK_LINE(179)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::haxe::ui::toolkit::core::Component tmp1 = tmp->findChild(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		::haxe::ui::toolkit::core::Component background = tmp1;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(180)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(181)
		bool tmp2 = (background != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(182)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = background->findChild(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			value = tmp3;
		}
		HX_STACK_LINE(185)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		::haxe::ui::toolkit::core::interfaces::IScrollable tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		tmp4 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IScrollable >::cast(tmp3);
		HX_STACK_LINE(185)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll = tmp4;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(186)
		bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		if ((tmp5)){
			HX_STACK_LINE(187)
			Float tmp6 = this->get_usableWidth();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			Float ucx = tmp6;		HX_STACK_VAR(ucx,"ucx");
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = this->get_container();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp7->findChild(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = tmp8;		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(190)
			bool tmp9 = (thumb != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(190)
			if ((tmp9)){
				HX_STACK_LINE(191)
				Float tmp10 = thumb->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(191)
				hx::SubEq(ucx,tmp10);
			}
			HX_STACK_LINE(194)
			value->set_percentWidth((int)-1);
			HX_STACK_LINE(195)
			Float tmp10 = scroll->get_pos();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			Float tmp11 = scroll->get_min();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(195)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(195)
			Float tmp13 = scroll->get_max();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			Float tmp14 = scroll->get_min();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(195)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(195)
			Float tmp16 = (Float(tmp12) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(195)
			Float tmp17 = ucx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(195)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(195)
			Float cx = tmp18;		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(197)
			bool tmp19 = (cx < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(197)
			if ((tmp19)){
				HX_STACK_LINE(198)
				cx = (int)0;
			}
			else{
				HX_STACK_LINE(199)
				bool tmp20 = (cx > ucx);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(199)
				if ((tmp20)){
					HX_STACK_LINE(200)
					cx = ucx;
				}
			}
			HX_STACK_LINE(203)
			bool tmp20 = (thumb != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(203)
			if ((tmp20)){
				HX_STACK_LINE(204)
				Float tmp21 = thumb->get_width();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(204)
				Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(204)
				hx::AddEq(cx,tmp22);
			}
			HX_STACK_LINE(207)
			bool tmp21 = (cx == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(207)
			if ((tmp21)){
				HX_STACK_LINE(208)
				value->set_visible(false);
			}
			else{
				HX_STACK_LINE(210)
				Float tmp22 = cx;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(210)
				value->set_width(tmp22);
				HX_STACK_LINE(211)
				value->set_visible(true);
			}
		}
	}
return null();
}


Void HProgressLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","repositionChildren",0x9e531ea0,"haxe.ui.toolkit.controls.HProgressLayout.repositionChildren","haxe/ui/toolkit/controls/Progress.hx",216,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		this->super::repositionChildren();
		HX_STACK_LINE(219)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		::haxe::ui::toolkit::core::Component tmp1 = tmp->findChild(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		::haxe::ui::toolkit::core::Component background = tmp1;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(220)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(221)
		bool tmp2 = (background != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		if ((tmp2)){
			HX_STACK_LINE(222)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(222)
			Float tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			Float tmp6 = background->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(222)
			Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(222)
			background->set_y(tmp8);
			HX_STACK_LINE(223)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = background->findChild(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			value = tmp9;
		}
		HX_STACK_LINE(226)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		::haxe::ui::toolkit::core::interfaces::IScrollable tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		tmp4 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IScrollable >::cast(tmp3);
		HX_STACK_LINE(226)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll = tmp4;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(227)
		bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		if ((tmp5)){
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = tmp6->findChild(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = tmp7;		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(230)
			bool tmp8 = (thumb != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(230)
			if ((tmp8)){
				HX_STACK_LINE(231)
				::openfl::_legacy::geom::Rectangle tmp9 = this->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(231)
				Float tmp10 = tmp9->get_left();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(231)
				Float tmp11 = value->get_x();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(231)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(231)
				Float tmp13 = value->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(231)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(231)
				Float tmp15 = thumb->get_width();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(231)
				Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(231)
				Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(231)
				Float xpos = tmp17;		HX_STACK_VAR(xpos,"xpos");
				HX_STACK_LINE(232)
				Float tmp18 = xpos;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(232)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(232)
				thumb->set_x(tmp19);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::layout::Layout HProgressLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","clone",0xa0718c98,"haxe.ui.toolkit.controls.HProgressLayout.clone","src/haxe/ui/toolkit/controls/HProgressLayout.hx",1,0xb347bd4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout tmp = hx::TCast< ::haxe::ui::toolkit::layout::DefaultLayout >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HProgressLayout c = ((::haxe::ui::toolkit::controls::HProgressLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::HProgressLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout HProgressLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","self",0xbc1052b1,"haxe.ui.toolkit.controls.HProgressLayout.self","src/haxe/ui/toolkit/controls/HProgressLayout.hx",1,0xb347bd4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HProgressLayout tmp = ::haxe::ui::toolkit::controls::HProgressLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



HProgressLayout_obj::HProgressLayout_obj()
{
}

Dynamic HProgressLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(HProgressLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HProgressLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HProgressLayout_obj::__mClass;

void HProgressLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.HProgressLayout","\x69","\xeb","\x13","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HProgressLayout_obj >;
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
