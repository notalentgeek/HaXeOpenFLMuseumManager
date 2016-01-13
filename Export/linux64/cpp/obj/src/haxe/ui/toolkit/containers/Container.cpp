#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void Container_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Container","new",0xbd640df9,"haxe.ui.toolkit.containers.Container.new","haxe/ui/toolkit/containers/Container.hx",8,0xc0b4ee97)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//Container_obj::~Container_obj() { }

Dynamic Container_obj::__CreateEmpty() { return  new Container_obj; }
hx::ObjectPtr< Container_obj > Container_obj::__new()
{  hx::ObjectPtr< Container_obj > _result_ = new Container_obj();
	_result_->__construct();
	return _result_;}

Dynamic Container_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Container_obj > _result_ = new Container_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Container_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Container_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Container_obj >(this); }
::haxe::ui::toolkit::core::DisplayObject Container_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Container","clone",0x9830a936,"haxe.ui.toolkit.containers.Container.clone","haxe/ui/toolkit/core/Macros.hx",543,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Container c = ((::haxe::ui::toolkit::containers::Container)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		while((true)){
			HX_STACK_LINE(15)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(15)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(15)
			if ((tmp2)){
				HX_STACK_LINE(15)
				break;
			}
			HX_STACK_LINE(15)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(15)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(15)
			++(_g);
			HX_STACK_LINE(16)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child->clone();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(16)
			c->addChild(tmp4);
		}
	}
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Container tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Container_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Container","self",0xfd7633d3,"haxe.ui.toolkit.containers.Container.self","src/haxe/ui/toolkit/containers/Container.hx",1,0x4e05812c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Container tmp = ::haxe::ui::toolkit::containers::Container_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	return tmp;
}



Container_obj::Container_obj()
{
}

Dynamic Container_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Container_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Container_obj::__mClass,"__mClass");
};

#endif

hx::Class Container_obj::__mClass;

void Container_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.Container","\x87","\x9d","\xfd","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Container_obj >;
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
