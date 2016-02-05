#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{

Void BasicItemRenderer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","new",0xe6fa9bab,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.new","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",15,0x1902ba66)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	::haxe::ui::toolkit::layout::HorizontalLayout tmp = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	this->_layout = tmp;
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::controls::Text tmp1 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->_maintext = tmp1;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_maintext;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	tmp2->set_text(HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"));
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::Text tmp3 = this->_maintext;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	tmp3->set_id(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::controls::Text tmp4 = this->_maintext;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	tmp4->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::controls::Text tmp5 = this->_maintext;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	tmp5->set_percentWidth((int)100);
	HX_STACK_LINE(24)
	::haxe::ui::toolkit::controls::Text tmp6 = this->_maintext;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	this->addChild(tmp6);
}
;
	return null();
}

//BasicItemRenderer_obj::~BasicItemRenderer_obj() { }

Dynamic BasicItemRenderer_obj::__CreateEmpty() { return  new BasicItemRenderer_obj; }
hx::ObjectPtr< BasicItemRenderer_obj > BasicItemRenderer_obj::__new()
{  hx::ObjectPtr< BasicItemRenderer_obj > _result_ = new BasicItemRenderer_obj();
	_result_->__construct();
	return _result_;}

Dynamic BasicItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicItemRenderer_obj > _result_ = new BasicItemRenderer_obj();
	_result_->__construct();
	return _result_;}

Dynamic BasicItemRenderer_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","set_data",0x1f18cffc,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.set_data","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",27,0x1902ba66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(28)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(29)
	bool tmp = (value->__Field(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(30)
		::haxe::ui::toolkit::controls::Image tmp1 = this->_icon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(31)
			::haxe::ui::toolkit::controls::Image tmp3 = ::haxe::ui::toolkit::controls::Image_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			this->_icon = tmp3;
			HX_STACK_LINE(32)
			::haxe::ui::toolkit::controls::Image tmp4 = this->_icon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			tmp4->set_id(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
			HX_STACK_LINE(33)
			::haxe::ui::toolkit::controls::Image tmp5 = this->_icon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			tmp5->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			HX_STACK_LINE(34)
			::haxe::ui::toolkit::controls::Image tmp6 = this->_icon;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			this->addChildAt(tmp6,tmp7);
			HX_STACK_LINE(35)
			(n)++;
		}
	}
	HX_STACK_LINE(38)
	bool tmp1 = (value->__Field(HX_HCSTRING("subtext","\x2d","\x36","\x24","\x30"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp1)){
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::containers::VBox tmp2 = this->_vbox;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		if ((tmp3)){
			HX_STACK_LINE(40)
			::haxe::ui::toolkit::containers::VBox tmp4 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			this->_vbox = tmp4;
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::containers::VBox tmp5 = this->_vbox;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			tmp5->set_percentWidth((int)100);
			HX_STACK_LINE(42)
			::haxe::ui::toolkit::containers::VBox tmp6 = this->_vbox;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			this->addChildAt(tmp6,tmp7);
		}
		HX_STACK_LINE(44)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_subtext;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		if ((tmp5)){
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::controls::Text tmp6 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			this->_subtext = tmp6;
			HX_STACK_LINE(46)
			::haxe::ui::toolkit::controls::Text tmp7 = this->_subtext;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			tmp7->set_id(HX_HCSTRING("subtext","\x2d","\x36","\x24","\x30"));
			HX_STACK_LINE(47)
			::haxe::ui::toolkit::controls::Text tmp8 = this->_subtext;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			tmp8->set_percentWidth((int)100);
			HX_STACK_LINE(48)
			::haxe::ui::toolkit::controls::Text tmp9 = this->_subtext;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			tmp9->set_multiline(true);
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::controls::Text tmp10 = this->_subtext;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			tmp10->set_wrapLines(true);
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::controls::Text tmp11 = this->_maintext;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(50)
			this->removeChild(tmp11,false);
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::containers::VBox tmp12 = this->_vbox;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::controls::Text tmp13 = this->_maintext;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(51)
			tmp12->addChild(tmp13);
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::containers::VBox tmp14 = this->_vbox;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::controls::Text tmp15 = this->_subtext;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			tmp14->addChild(tmp15);
		}
	}
	HX_STACK_LINE(55)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Dynamic tmp3 = this->super::set_data(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	return tmp3;
}


::haxe::ui::toolkit::core::DisplayObject BasicItemRenderer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","clone",0x3ecb8768,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.clone","src/haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",1,0xbeef587b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::ItemRenderer tmp = hx::TCast< ::haxe::ui::toolkit::core::renderers::ItemRenderer >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer c = ((::haxe::ui::toolkit::core::renderers::BasicItemRenderer)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject BasicItemRenderer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","self",0x379ba1e1,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.self","src/haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",1,0xbeef587b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer tmp = ::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



BasicItemRenderer_obj::BasicItemRenderer_obj()
{
}

void BasicItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicItemRenderer);
	HX_MARK_MEMBER_NAME(_vbox,"_vbox");
	HX_MARK_MEMBER_NAME(_maintext,"_maintext");
	HX_MARK_MEMBER_NAME(_subtext,"_subtext");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	::haxe::ui::toolkit::core::renderers::ItemRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vbox,"_vbox");
	HX_VISIT_MEMBER_NAME(_maintext,"_maintext");
	HX_VISIT_MEMBER_NAME(_subtext,"_subtext");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	::haxe::ui::toolkit::core::renderers::ItemRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BasicItemRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_vbox") ) { return _vbox; }
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_subtext") ) { return _subtext; }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maintext") ) { return _maintext; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicItemRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vbox") ) { _vbox=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::haxe::ui::toolkit::controls::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_subtext") ) { _subtext=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maintext") ) { _maintext=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_vbox","\x34","\x07","\x5b","\x01"));
	outFields->push(HX_HCSTRING("_maintext","\xc5","\x0c","\x39","\x02"));
	outFields->push(HX_HCSTRING("_subtext","\xae","\x8f","\xdc","\x69"));
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(BasicItemRenderer_obj,_vbox),HX_HCSTRING("_vbox","\x34","\x07","\x5b","\x01")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(BasicItemRenderer_obj,_maintext),HX_HCSTRING("_maintext","\xc5","\x0c","\x39","\x02")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(BasicItemRenderer_obj,_subtext),HX_HCSTRING("_subtext","\xae","\x8f","\xdc","\x69")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Image*/ ,(int)offsetof(BasicItemRenderer_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_vbox","\x34","\x07","\x5b","\x01"),
	HX_HCSTRING("_maintext","\xc5","\x0c","\x39","\x02"),
	HX_HCSTRING("_subtext","\xae","\x8f","\xdc","\x69"),
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class BasicItemRenderer_obj::__mClass;

void BasicItemRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.renderers.BasicItemRenderer","\x39","\xea","\xaa","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BasicItemRenderer_obj >;
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
} // end namespace renderers
