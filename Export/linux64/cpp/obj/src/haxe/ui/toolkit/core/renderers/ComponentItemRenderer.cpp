#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HSlider
#include <haxe/ui/toolkit/controls/HSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ComponentItemRenderer
#include <haxe/ui/toolkit/core/renderers/ComponentItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{

Void ComponentItemRenderer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","new",0x2e410e3a,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.new","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",14,0x3c8dc337)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//ComponentItemRenderer_obj::~ComponentItemRenderer_obj() { }

Dynamic ComponentItemRenderer_obj::__CreateEmpty() { return  new ComponentItemRenderer_obj; }
hx::ObjectPtr< ComponentItemRenderer_obj > ComponentItemRenderer_obj::__new()
{  hx::ObjectPtr< ComponentItemRenderer_obj > _result_ = new ComponentItemRenderer_obj();
	_result_->__construct();
	return _result_;}

Dynamic ComponentItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComponentItemRenderer_obj > _result_ = new ComponentItemRenderer_obj();
	_result_->__construct();
	return _result_;}

::haxe::ui::toolkit::core::Component ComponentItemRenderer_obj::get_component( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","get_component",0x45da96ee,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.get_component","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",18,0x3c8dc337)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::core::Component tmp = this->_component;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ComponentItemRenderer_obj,get_component,return )

Dynamic ComponentItemRenderer_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","set_data",0x963db70d,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.set_data","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",22,0x3c8dc337)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	::String type = value->__Field(HX_HCSTRING("componentType","\x17","\xb2","\xa9","\xea"), hx::paccDynamic );		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(24)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	if ((tmp)){
		HX_STACK_LINE(25)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::hx::Class tmp2 = this->getClassFromType(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		::hx::Class cls = tmp2;		HX_STACK_VAR(cls,"cls");
		HX_STACK_LINE(26)
		bool tmp3 = (cls != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		if ((tmp3)){
			HX_STACK_LINE(26)
			::haxe::ui::toolkit::core::Component tmp5 = this->_component;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			::haxe::ui::toolkit::core::Component tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			::hx::Class tmp7 = cls;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(26)
			::haxe::ui::toolkit::core::Component tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(26)
			::hx::Class tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(26)
			bool tmp10 = ::Std_obj::is(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(26)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(26)
			tmp4 = (tmp11 == false);
		}
		else{
			HX_STACK_LINE(26)
			tmp4 = false;
		}
		HX_STACK_LINE(26)
		if ((tmp4)){
			HX_STACK_LINE(27)
			::haxe::ui::toolkit::core::Component tmp5 = this->_component;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			if ((tmp6)){
				HX_STACK_LINE(28)
				::haxe::ui::toolkit::core::Component tmp7 = this->_component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(28)
				this->removeChild(tmp7,null());
			}
			HX_STACK_LINE(30)
			::hx::Class tmp7 = cls;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			::haxe::ui::toolkit::core::Component tmp8 = ::Type_obj::createInstance(tmp7,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(30)
			this->_component = tmp8;
			HX_STACK_LINE(31)
			::haxe::ui::toolkit::core::Component tmp9 = this->_component;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			tmp9->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			HX_STACK_LINE(32)
			::haxe::ui::toolkit::core::Component tmp10 = this->_component;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(32)
			tmp10->set_id(HX_HCSTRING("componentValue","\x74","\x31","\xbf","\x80"));
			HX_STACK_LINE(33)
			::haxe::ui::toolkit::core::Component tmp11 = this->_component;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(33)
			tmp11->set_styleName(value->__Field(HX_HCSTRING("componentStyleName","\x9f","\x9f","\x4a","\x36"), hx::paccDynamic ));
			HX_STACK_LINE(34)
			bool tmp12 = (value->__Field(HX_HCSTRING("componentSize","\x1e","\x60","\xf4","\xe9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(34)
			if ((tmp12)){
				HX_STACK_LINE(35)
				int cx = value->__Field(HX_HCSTRING("componentSize","\x1e","\x60","\xf4","\xe9"), hx::paccDynamic );		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(36)
				::haxe::ui::toolkit::core::Component tmp13 = this->_component;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(36)
				tmp13->set_autoSize(false);
				HX_STACK_LINE(37)
				::haxe::ui::toolkit::core::Component tmp14 = this->_component;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(37)
				int tmp15 = cx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(37)
				tmp14->set_width(tmp15);
			}
			HX_STACK_LINE(39)
			::haxe::ui::toolkit::core::Component tmp13 = this->_component;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			int tmp14 = this->get_numChildren();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			this->addChildAt(tmp13,tmp14);
		}
	}
	HX_STACK_LINE(42)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Dynamic tmp2 = this->super::set_data(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	return tmp2;
}


::hx::Class ComponentItemRenderer_obj::getClassFromType( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","getClassFromType",0x9370390c,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.getClassFromType","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",45,0x3c8dc337)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(46)
	::String tmp = type.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	type = tmp;
	HX_STACK_LINE(47)
	bool tmp1 = (type == HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(48)
		return hx::ClassOf< ::haxe::ui::toolkit::controls::Button >();
	}
	else{
		HX_STACK_LINE(49)
		bool tmp2 = (type == HX_HCSTRING("slider","\x21","\xc6","\x04","\x70"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		if ((tmp2)){
			HX_STACK_LINE(50)
			return hx::ClassOf< ::haxe::ui::toolkit::controls::HSlider >();
		}
		else{
			HX_STACK_LINE(51)
			bool tmp3 = (type == HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			if ((tmp3)){
				HX_STACK_LINE(52)
				return hx::ClassOf< ::haxe::ui::toolkit::controls::Image >();
			}
			else{
				HX_STACK_LINE(53)
				bool tmp4 = (type == HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				if ((tmp4)){
					HX_STACK_LINE(54)
					return hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >();
				}
			}
		}
	}
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ComponentItemRenderer_obj,getClassFromType,return )

::haxe::ui::toolkit::core::DisplayObject ComponentItemRenderer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","clone",0xba7efbb7,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.clone","src/haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",1,0xaf8b8fcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer tmp = hx::TCast< ::haxe::ui::toolkit::core::renderers::BasicItemRenderer >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::ComponentItemRenderer c = ((::haxe::ui::toolkit::core::renderers::ComponentItemRenderer)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::core::renderers::ComponentItemRenderer tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ComponentItemRenderer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","self",0x4df96c72,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.self","src/haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",1,0xaf8b8fcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::ComponentItemRenderer tmp = ::haxe::ui::toolkit::core::renderers::ComponentItemRenderer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ComponentItemRenderer_obj::ComponentItemRenderer_obj()
{
}

void ComponentItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentItemRenderer);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(component,"component");
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(component,"component");
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ComponentItemRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return inCallProp == hx::paccAlways ? get_component() : component; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return _component; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_component") ) { return get_component_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getClassFromType") ) { return getClassFromType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ComponentItemRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"));
	outFields->push(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(ComponentItemRenderer_obj,_component),HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(ComponentItemRenderer_obj,component),HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"),
	HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"),
	HX_HCSTRING("get_component","\x94","\xc4","\xb7","\xd0"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("getClassFromType","\x26","\x97","\x06","\x9d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentItemRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentItemRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class ComponentItemRenderer_obj::__mClass;

void ComponentItemRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","\x48","\x29","\x63","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentItemRenderer_obj >;
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
