#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewLayout
#include <haxe/ui/toolkit/containers/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
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
namespace containers{

Void ScrollViewLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","new",0x706f4dc8,"haxe.ui.toolkit.containers.ScrollViewLayout.new","haxe/ui/toolkit/containers/ScrollView.hx",870,0x89f00132)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(871)
	this->_inlineScrolls = false;
	HX_STACK_LINE(874)
	super::__construct();
}
;
	return null();
}

//ScrollViewLayout_obj::~ScrollViewLayout_obj() { }

Dynamic ScrollViewLayout_obj::__CreateEmpty() { return  new ScrollViewLayout_obj; }
hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__new()
{  hx::ObjectPtr< ScrollViewLayout_obj > _result_ = new ScrollViewLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScrollViewLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollViewLayout_obj > _result_ = new ScrollViewLayout_obj();
	_result_->__construct();
	return _result_;}

Void ScrollViewLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","resizeChildren",0x0f406eeb,"haxe.ui.toolkit.containers.ScrollViewLayout.resizeChildren","haxe/ui/toolkit/containers/ScrollView.hx",878,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(878)
		this->super::resizeChildren();
	}
return null();
}


Void ScrollViewLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","repositionChildren",0xf2b0d853,"haxe.ui.toolkit.containers.ScrollViewLayout.repositionChildren","haxe/ui/toolkit/containers/ScrollView.hx",881,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(882)
		this->super::repositionChildren();
		HX_STACK_LINE(884)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(884)
		::haxe::ui::toolkit::controls::HScroll tmp1 = tmp->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(884)
		::haxe::ui::toolkit::controls::HScroll hscroll = tmp1;		HX_STACK_VAR(hscroll,"hscroll");
		HX_STACK_LINE(885)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(885)
		::haxe::ui::toolkit::controls::VScroll tmp3 = tmp2->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(885)
		::haxe::ui::toolkit::controls::VScroll vscroll = tmp3;		HX_STACK_VAR(vscroll,"vscroll");
		HX_STACK_LINE(886)
		bool tmp4 = (hscroll != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(886)
		if ((tmp4)){
			HX_STACK_LINE(887)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = this->get_container();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(887)
			Float tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(887)
			Float tmp7 = hscroll->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(887)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(887)
			::openfl::_legacy::geom::Rectangle tmp9 = this->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(887)
			Float tmp10 = tmp9->get_bottom();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(887)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(887)
			hscroll->set_y(tmp11);
		}
		HX_STACK_LINE(889)
		bool tmp5 = (vscroll != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(889)
		if ((tmp5)){
			HX_STACK_LINE(890)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(890)
			Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(890)
			Float tmp8 = vscroll->get_width();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(890)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(890)
			::openfl::_legacy::geom::Rectangle tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(890)
			Float tmp11 = tmp10->get_right();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(890)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(890)
			vscroll->set_x(tmp12);
		}
	}
return null();
}


Float ScrollViewLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","get_usableWidth",0x2584b8ed,"haxe.ui.toolkit.containers.ScrollViewLayout.get_usableWidth","haxe/ui/toolkit/containers/ScrollView.hx",895,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(896)
	Float tmp = this->get_innerWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(896)
	Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(897)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_container();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(897)
	::haxe::ui::toolkit::controls::VScroll tmp2 = tmp1->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(897)
	::haxe::ui::toolkit::controls::VScroll vscroll = tmp2;		HX_STACK_VAR(vscroll,"vscroll");
	HX_STACK_LINE(898)
	bool tmp3 = (vscroll != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(898)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(898)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(898)
	if ((tmp4)){
		HX_STACK_LINE(898)
		bool tmp6 = vscroll->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(898)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(898)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(898)
		tmp5 = (tmp8 == true);
	}
	else{
		HX_STACK_LINE(898)
		tmp5 = false;
	}
	HX_STACK_LINE(898)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(898)
	if ((tmp5)){
		HX_STACK_LINE(898)
		bool tmp7 = this->_inlineScrolls;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(898)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(898)
		tmp6 = (tmp8 == false);
	}
	else{
		HX_STACK_LINE(898)
		tmp6 = false;
	}
	HX_STACK_LINE(898)
	if ((tmp6)){
		HX_STACK_LINE(899)
		Float tmp7 = vscroll->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(899)
		int tmp8 = this->get_spacingX();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(899)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(899)
		hx::SubEq(ucx,tmp9);
	}
	HX_STACK_LINE(901)
	Float tmp7 = ucx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(901)
	return tmp7;
}


Float ScrollViewLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","get_usableHeight",0x64ec8f20,"haxe.ui.toolkit.containers.ScrollViewLayout.get_usableHeight","haxe/ui/toolkit/containers/ScrollView.hx",905,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(906)
	Float tmp = this->get_innerHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(906)
	Float ucy = tmp;		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(907)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_container();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(907)
	::haxe::ui::toolkit::controls::HScroll tmp2 = tmp1->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(907)
	::haxe::ui::toolkit::controls::HScroll hscroll = tmp2;		HX_STACK_VAR(hscroll,"hscroll");
	HX_STACK_LINE(908)
	bool tmp3 = (hscroll != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(908)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(908)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(908)
	if ((tmp4)){
		HX_STACK_LINE(908)
		tmp5 = hscroll->get_visible();
	}
	else{
		HX_STACK_LINE(908)
		tmp5 = false;
	}
	HX_STACK_LINE(908)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(908)
	if ((tmp5)){
		HX_STACK_LINE(908)
		bool tmp7 = this->_inlineScrolls;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(908)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(908)
		tmp6 = (tmp8 == false);
	}
	else{
		HX_STACK_LINE(908)
		tmp6 = false;
	}
	HX_STACK_LINE(908)
	if ((tmp6)){
		HX_STACK_LINE(909)
		Float tmp7 = hscroll->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(909)
		int tmp8 = this->get_spacingY();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(909)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(909)
		hx::SubEq(ucy,tmp9);
	}
	HX_STACK_LINE(911)
	Float tmp7 = ucy;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(911)
	return tmp7;
}


bool ScrollViewLayout_obj::get_inlineScrolls( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","get_inlineScrolls",0xfe65ad2c,"haxe.ui.toolkit.containers.ScrollViewLayout.get_inlineScrolls","haxe/ui/toolkit/containers/ScrollView.hx",919,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(920)
	bool tmp = this->_inlineScrolls;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewLayout_obj,get_inlineScrolls,return )

bool ScrollViewLayout_obj::set_inlineScrolls( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","set_inlineScrolls",0x21d38538,"haxe.ui.toolkit.containers.ScrollViewLayout.set_inlineScrolls","haxe/ui/toolkit/containers/ScrollView.hx",923,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(924)
	this->_inlineScrolls = value;
	HX_STACK_LINE(925)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(925)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewLayout_obj,set_inlineScrolls,return )

::haxe::ui::toolkit::layout::Layout ScrollViewLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","clone",0x9466bac5,"haxe.ui.toolkit.containers.ScrollViewLayout.clone","src/haxe/ui/toolkit/containers/ScrollViewLayout.hx",1,0x7c87a1b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout tmp = hx::TCast< ::haxe::ui::toolkit::layout::DefaultLayout >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollViewLayout c = ((::haxe::ui::toolkit::containers::ScrollViewLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::ScrollViewLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout ScrollViewLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","self",0xf442c924,"haxe.ui.toolkit.containers.ScrollViewLayout.self","src/haxe/ui/toolkit/containers/ScrollViewLayout.hx",1,0x7c87a1b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollViewLayout tmp = ::haxe::ui::toolkit::containers::ScrollViewLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ScrollViewLayout_obj::ScrollViewLayout_obj()
{
}

Dynamic ScrollViewLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { if (inCallProp == hx::paccAlways) return get_inlineScrolls(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { return _inlineScrolls; }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_inlineScrolls") ) { return get_inlineScrolls_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inlineScrolls") ) { return set_inlineScrolls_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScrollViewLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { if (inCallProp == hx::paccAlways) return set_inlineScrolls(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { _inlineScrolls=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ScrollViewLayout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ScrollViewLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_inlineScrolls","\xae","\x6e","\xb2","\x89"));
	outFields->push(HX_HCSTRING("inlineScrolls","\x6d","\x7e","\x60","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ScrollViewLayout_obj,_inlineScrolls),HX_HCSTRING("_inlineScrolls","\xae","\x6e","\xb2","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_inlineScrolls","\xae","\x6e","\xb2","\x89"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	HX_HCSTRING("get_inlineScrolls","\xc4","\x89","\xd0","\x51"),
	HX_HCSTRING("set_inlineScrolls","\xd0","\x61","\x3e","\x75"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollViewLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollViewLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class ScrollViewLayout_obj::__mClass;

void ScrollViewLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.ScrollViewLayout","\xd6","\x09","\x3b","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ScrollViewLayout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollViewLayout_obj >;
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
