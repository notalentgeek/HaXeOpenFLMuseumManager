#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_SimplePopupContent
#include <haxe/ui/toolkit/controls/popups/SimplePopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void SimplePopupContent_obj::__construct(::String __o_text)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.SimplePopupContent","new",0x18f84762,"haxe.ui.toolkit.controls.popups.SimplePopupContent.new","haxe/ui/toolkit/controls/popups/SimplePopupContent.hx",11,0x6b04b1ed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_text,"text")
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(13)
	this->_autoSize = true;
	HX_STACK_LINE(14)
	::haxe::ui::toolkit::controls::Text tmp = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->_textControl = tmp;
	HX_STACK_LINE(15)
	::haxe::ui::toolkit::controls::Text tmp1 = this->_textControl;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	tmp1->set_multiline(true);
	HX_STACK_LINE(16)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textControl;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	tmp2->set_wrapLines(true);
	HX_STACK_LINE(17)
	::haxe::ui::toolkit::controls::Text tmp3 = this->_textControl;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	tmp3->set_percentWidth((int)100);
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::controls::Text tmp4 = this->_textControl;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	::String tmp5 = text;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(18)
	tmp4->set_text(tmp5);
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::controls::Text tmp6 = this->_textControl;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(19)
	tmp6->set_autoSize(true);
}
;
	return null();
}

//SimplePopupContent_obj::~SimplePopupContent_obj() { }

Dynamic SimplePopupContent_obj::__CreateEmpty() { return  new SimplePopupContent_obj; }
hx::ObjectPtr< SimplePopupContent_obj > SimplePopupContent_obj::__new(::String __o_text)
{  hx::ObjectPtr< SimplePopupContent_obj > _result_ = new SimplePopupContent_obj();
	_result_->__construct(__o_text);
	return _result_;}

Dynamic SimplePopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimplePopupContent_obj > _result_ = new SimplePopupContent_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SimplePopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.SimplePopupContent","initialize",0xd6087e8e,"haxe.ui.toolkit.controls.popups.SimplePopupContent.initialize","haxe/ui/toolkit/controls/popups/SimplePopupContent.hx",25,0x6b04b1ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->super::initialize();
		HX_STACK_LINE(27)
		::haxe::ui::toolkit::controls::Text tmp = this->_textControl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		this->addChild(tmp);
	}
return null();
}


::haxe::ui::toolkit::core::DisplayObject SimplePopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.SimplePopupContent","clone",0x2c54cedf,"haxe.ui.toolkit.controls.popups.SimplePopupContent.clone","src/haxe/ui/toolkit/controls/popups/SimplePopupContent.hx",1,0xdbe4bf42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp = hx::TCast< ::haxe::ui::toolkit::controls::popups::PopupContent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::SimplePopupContent c = ((::haxe::ui::toolkit::controls::popups::SimplePopupContent)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::popups::SimplePopupContent tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject SimplePopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.SimplePopupContent","self",0xc394364a,"haxe.ui.toolkit.controls.popups.SimplePopupContent.self","src/haxe/ui/toolkit/controls/popups/SimplePopupContent.hx",1,0xdbe4bf42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::SimplePopupContent tmp = ::haxe::ui::toolkit::controls::popups::SimplePopupContent_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



SimplePopupContent_obj::SimplePopupContent_obj()
{
}

void SimplePopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimplePopupContent);
	HX_MARK_MEMBER_NAME(_textControl,"_textControl");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimplePopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textControl,"_textControl");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimplePopupContent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textControl") ) { return _textControl; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimplePopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_textControl") ) { _textControl=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimplePopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_textControl","\x31","\x14","\x0b","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(SimplePopupContent_obj,_textControl),HX_HCSTRING("_textControl","\x31","\x14","\x0b","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_textControl","\x31","\x14","\x0b","\x5b"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimplePopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimplePopupContent_obj::__mClass,"__mClass");
};

#endif

hx::Class SimplePopupContent_obj::__mClass;

void SimplePopupContent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.popups.SimplePopupContent","\x70","\xae","\x6c","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimplePopupContent_obj >;
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
} // end namespace popups
