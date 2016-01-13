#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
namespace core{

Void Controller_obj::__construct(Dynamic view,Dynamic options)
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","new",0x99ecc45b,"haxe.ui.toolkit.core.Controller.new","haxe/ui/toolkit/core/Controller.hx",19,0xc6f4a5b5)
HX_STACK_THIS(this)
HX_STACK_ARG(view,"view")
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::core::Controller _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	Dynamic tmp = view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(21)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		tmp2 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(view);
		HX_STACK_LINE(21)
		this->_view = tmp2;
	}
	else{
		HX_STACK_LINE(22)
		Dynamic tmp2 = view;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		if ((tmp3)){
			HX_STACK_LINE(23)
			::hx::Class tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			tmp4 = hx::TCast< ::hx::Class >::cast(view);
			HX_STACK_LINE(23)
			::hx::Class cls = tmp4;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(24)
			::hx::Class tmp5 = cls;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			this->_view = tmp6;
		}
		else{
			HX_STACK_LINE(25)
			bool tmp4 = (view != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			if ((tmp4)){
				HX_STACK_LINE(26)
				options = view;
			}
		}
	}
	HX_STACK_LINE(29)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->_view;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	if ((tmp3)){
		HX_STACK_LINE(30)
		::haxe::ui::toolkit::core::Component tmp4 = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		this->_view = tmp4;
	}
	HX_STACK_LINE(33)
	bool tmp4 = (options != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	if ((tmp4)){
		HX_STACK_LINE(34)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		Dynamic tmp5 = options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		Array< ::String > _g11 = ::Reflect_obj::fields(tmp5);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			bool tmp6 = (_g1 < _g11->length);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			if ((tmp7)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(34)
			::String tmp8 = _g11->__get(_g1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			::String f = tmp8;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(34)
			++(_g1);
			HX_STACK_LINE(35)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp9 = this->_view;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(35)
			::String tmp10 = (HX_HCSTRING("set_","\x7d","\x92","\x50","\x4c") + f);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			Dynamic tmp11 = ::Reflect_obj::getProperty(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			if ((tmp12)){
				HX_STACK_LINE(36)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp13 = this->_view;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(36)
				::String tmp14 = f;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(36)
				Dynamic tmp15 = options;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(36)
				::String tmp16 = f;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(36)
				Dynamic tmp17 = ::Reflect_obj::field(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(36)
				::Reflect_obj::setProperty(tmp13,tmp14,tmp17);
			}
		}
	}
	HX_STACK_LINE(41)
	this->refereshNamedComponents();
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = this->_view;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	::String tmp6 = HX_HCSTRING("haxeui_addedToStage","\x08","\x51","\x53","\xdc");		HX_STACK_VAR(tmp6,"tmp6");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::core::Controller,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/core/Controller.hx",43,0xc6f4a5b5)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(44)
			Float tmp7 = _g->_view->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(44)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(44)
			if ((tmp8)){
				HX_STACK_LINE(44)
				Float tmp10 = _g->_view->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(44)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				tmp9 = (tmp11 != (int)0);
			}
			else{
				HX_STACK_LINE(44)
				tmp9 = false;
			}
			HX_STACK_LINE(44)
			if ((tmp9)){
				HX_STACK_LINE(45)
				_g->onReady();
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(43)
	tmp5->__Field(HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"), hx::paccDynamic )(tmp6, Dynamic(new _Function_1_1(_g)),null(),null(),null());
}
;
	return null();
}

//Controller_obj::~Controller_obj() { }

Dynamic Controller_obj::__CreateEmpty() { return  new Controller_obj; }
hx::ObjectPtr< Controller_obj > Controller_obj::__new(Dynamic view,Dynamic options)
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct(view,options);
	return _result_;}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Controller_obj::onReady( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","onReady",0xa71a4c3f,"haxe.ui.toolkit.core.Controller.onReady","haxe/ui/toolkit/core/Controller.hx",50,0xc6f4a5b5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,onReady,(void))

Dynamic Controller_obj::addChild( Dynamic child,Dynamic options){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","addChild",0x72c08de0,"haxe.ui.toolkit.core.Controller.addChild","haxe/ui/toolkit/core/Controller.hx",54,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject childObject = null();		HX_STACK_VAR(childObject,"childObject");
	HX_STACK_LINE(56)
	Dynamic tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	if ((tmp1)){
		HX_STACK_LINE(57)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		tmp2 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(child);
		HX_STACK_LINE(57)
		childObject = tmp2;
	}
	else{
		HX_STACK_LINE(58)
		Dynamic tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		if ((tmp3)){
			HX_STACK_LINE(59)
			::hx::Class tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			tmp4 = hx::TCast< ::hx::Class >::cast(child);
			HX_STACK_LINE(59)
			::hx::Class cls = tmp4;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(60)
			::hx::Class tmp5 = cls;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			childObject = tmp6;
		}
		else{
			HX_STACK_LINE(61)
			bool tmp4 = (child != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			if ((tmp4)){
				HX_STACK_LINE(62)
				options = child;
			}
		}
	}
	HX_STACK_LINE(65)
	bool tmp2 = (childObject == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	if ((tmp2)){
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::core::Component tmp3 = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		childObject = tmp3;
	}
	HX_STACK_LINE(69)
	bool tmp3 = (options != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	if ((tmp3)){
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		Dynamic tmp4 = options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			if ((tmp6)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			::String tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			::String f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(70)
			++(_g);
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = childObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			::String tmp9 = (HX_HCSTRING("set_","\x7d","\x92","\x50","\x4c") + f);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(71)
			Dynamic tmp10 = ::Reflect_obj::getProperty(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(71)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(71)
			if ((tmp11)){
				HX_STACK_LINE(72)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp12 = childObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(72)
				::String tmp13 = f;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(72)
				Dynamic tmp14 = options;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(72)
				::String tmp15 = f;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(72)
				Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(72)
				::Reflect_obj::setProperty(tmp12,tmp13,tmp16);
			}
		}
	}
	HX_STACK_LINE(77)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = this->_view;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = childObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = tmp4->addChild(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject retVal = tmp6;		HX_STACK_VAR(retVal,"retVal");
	HX_STACK_LINE(78)
	this->refereshNamedComponents();
	HX_STACK_LINE(79)
	Dynamic tmp7 = ((Dynamic)(retVal));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,addChild,return )

Void Controller_obj::attachView( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer newView){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","attachView",0x0e73722f,"haxe.ui.toolkit.core.Controller.attachView","haxe/ui/toolkit/core/Controller.hx",82,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newView,"newView")
		HX_STACK_LINE(83)
		this->_view = newView;
		HX_STACK_LINE(84)
		this->refereshNamedComponents();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,attachView,(void))

Void Controller_obj::attachEvent( ::String id,::String type,Dynamic listener){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","attachEvent",0xd5585910,"haxe.ui.toolkit.core.Controller.attachEvent","haxe/ui/toolkit/core/Controller.hx",87,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(88)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::core::Component tmp1 = this->getComponent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::core::Component c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(89)
		bool tmp2 = (c != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(90)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			c->addEventListener(tmp3,tmp4,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Controller_obj,attachEvent,(void))

Void Controller_obj::detachEvent( ::String id,::String type,Dynamic listener){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","detachEvent",0x139694c2,"haxe.ui.toolkit.core.Controller.detachEvent","haxe/ui/toolkit/core/Controller.hx",94,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(95)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		::haxe::ui::toolkit::core::Component tmp1 = this->getComponent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::haxe::ui::toolkit::core::Component c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(96)
		bool tmp2 = (c != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		if ((tmp2)){
			HX_STACK_LINE(97)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			c->removeEventListener(tmp3,tmp4,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Controller_obj,detachEvent,(void))

Void Controller_obj::detachEvents( ::String id,::String type){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","detachEvents",0x102b9571,"haxe.ui.toolkit.core.Controller.detachEvents","haxe/ui/toolkit/core/Controller.hx",101,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(102)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::core::Component tmp1 = this->getComponent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::core::Component c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(103)
		bool tmp2 = (c != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		if ((tmp2)){
			HX_STACK_LINE(104)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			c->removeEventListenerType(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,detachEvents,(void))

::haxe::ui::toolkit::core::Component Controller_obj::getComponent( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","getComponent",0xcadec1ec,"haxe.ui.toolkit.core.Controller.getComponent","haxe/ui/toolkit/core/Controller.hx",108,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(109)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	::haxe::ui::toolkit::core::Component tmp1 = this->getComponentAs(tmp,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,getComponent,return )

Dynamic Controller_obj::getComponentAs( ::String id,::hx::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","getComponentAs",0x51844dfe,"haxe.ui.toolkit.core.Controller.getComponentAs","haxe/ui/toolkit/core/Controller.hx",112,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(113)
	::haxe::ds::StringMap tmp = this->_namedComponents;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(114)
	bool tmp3 = (c == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	if ((tmp3)){
		HX_STACK_LINE(115)
		return null();
	}
	HX_STACK_LINE(118)
	Dynamic tmp4 = ((Dynamic)(c));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,getComponentAs,return )

Void Controller_obj::refereshNamedComponents( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","refereshNamedComponents",0x484f5b10,"haxe.ui.toolkit.core.Controller.refereshNamedComponents","haxe/ui/toolkit/core/Controller.hx",121,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		this->_namedComponents = tmp;
		HX_STACK_LINE(123)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->_view;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		this->addNamedComponentsFrom(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,refereshNamedComponents,(void))

Void Controller_obj::addNamedComponentsFrom( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer parent){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","addNamedComponentsFrom",0xd21af27d,"haxe.ui.toolkit.core.Controller.addNamedComponentsFrom","haxe/ui/toolkit/core/Controller.hx",126,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_LINE(127)
		bool tmp = (parent == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(128)
			return null();
		}
		HX_STACK_LINE(131)
		bool tmp1 = (parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(131)
			::String tmp3 = parent->get_id();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(131)
			tmp2 = false;
		}
		HX_STACK_LINE(131)
		if ((tmp2)){
			HX_STACK_LINE(132)
			::haxe::ds::StringMap tmp3 = this->_namedComponents;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			::String tmp4 = parent->get_id();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			tmp3->set(tmp4,tmp5);
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = parent->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(135)
			while((true)){
				HX_STACK_LINE(135)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(135)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(135)
				if ((tmp4)){
					HX_STACK_LINE(135)
					break;
				}
				HX_STACK_LINE(135)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(135)
				++(_g);
				HX_STACK_LINE(136)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(136)
				tmp6 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
				HX_STACK_LINE(136)
				this->addNamedComponentsFrom(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,addNamedComponentsFrom,(void))

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer Controller_obj::get_view( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_view",0x81b3ac13,"haxe.ui.toolkit.core.Controller.get_view","haxe/ui/toolkit/core/Controller.hx",140,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->_view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_view,return )

::haxe::ui::toolkit::core::Root Controller_obj::get_root( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_root",0x7f1367d0,"haxe.ui.toolkit.core.Controller.get_root","haxe/ui/toolkit/core/Controller.hx",144,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->_view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	if ((tmp1)){
		HX_STACK_LINE(146)
		return null();
	}
	HX_STACK_LINE(148)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->_view;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	::haxe::ui::toolkit::core::Root tmp3 = tmp2->get_root();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_root,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::get_popup( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_popup",0x8b1b08be,"haxe.ui.toolkit.core.Controller.get_popup","haxe/ui/toolkit/core/Controller.hx",151,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	::haxe::ui::toolkit::controls::popups::Popup popup = null();		HX_STACK_VAR(popup,"popup");
	HX_STACK_LINE(153)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_view();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = tmp->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::PopupContent >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	if ((tmp2)){
		HX_STACK_LINE(154)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_view();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = tmp3->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		::haxe::ui::toolkit::controls::popups::PopupContent tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		tmp5 = hx::TCast< ::haxe::ui::toolkit::controls::popups::PopupContent >::cast(tmp4);
		HX_STACK_LINE(154)
		popup = tmp5->popup;
	}
	HX_STACK_LINE(156)
	::haxe::ui::toolkit::controls::popups::Popup tmp3 = popup;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_popup,return )

::haxe::ds::StringMap Controller_obj::get_namedComponents( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_namedComponents",0xbd013341,"haxe.ui.toolkit.core.Controller.get_namedComponents","haxe/ui/toolkit/core/Controller.hx",160,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	::haxe::ds::StringMap tmp = this->_namedComponents;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_namedComponents,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showPopup( ::String text,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showPopup",0x75d6122a,"haxe.ui.toolkit.core.Controller.showPopup","haxe/ui/toolkit/core/Controller.hx",164,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(165)
		::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		Dynamic tmp2 = config;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		Dynamic tmp3 = fn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		::haxe::ui::toolkit::controls::popups::Popup tmp4 = this->showSimplePopup(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showSimplePopup( ::String text,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showSimplePopup",0x4eb91b18,"haxe.ui.toolkit.core.Controller.showSimplePopup","haxe/ui/toolkit/core/Controller.hx",168,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(169)
		::haxe::ui::toolkit::core::PopupManager tmp = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		::String tmp2 = title;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		Dynamic tmp4 = fn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = tmp->showSimple(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showSimplePopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showCustomPopup( Dynamic content,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showCustomPopup",0xca5d8b39,"haxe.ui.toolkit.core.Controller.showCustomPopup","haxe/ui/toolkit/core/Controller.hx",172,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(content,"content")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(173)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject display = null();		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(174)
		Dynamic tmp = content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		if ((tmp1)){
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			tmp2 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(content);
			HX_STACK_LINE(175)
			display = tmp2;
		}
		else{
			HX_STACK_LINE(176)
			Dynamic tmp2 = content;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			if ((tmp3)){
				HX_STACK_LINE(177)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(177)
				tmp4 = hx::TCast< ::String >::cast(content);
				HX_STACK_LINE(177)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(177)
				display = tmp5;
			}
		}
		HX_STACK_LINE(179)
		bool tmp2 = (display == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		if ((tmp2)){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(182)
		::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = display;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		::String tmp5 = title;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		Dynamic tmp6 = config;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		Dynamic tmp7 = fn;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(182)
		::haxe::ui::toolkit::controls::popups::Popup tmp8 = tmp3->showCustom(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(182)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showCustomPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showListPopup( Dynamic items,hx::Null< int >  __o_selectedIndex,::String title,Dynamic fn){
int selectedIndex = __o_selectedIndex.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showListPopup",0xce6da7ec,"haxe.ui.toolkit.core.Controller.showListPopup","haxe/ui/toolkit/core/Controller.hx",185,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(items,"items")
	HX_STACK_ARG(selectedIndex,"selectedIndex")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(186)
		::haxe::ui::toolkit::core::PopupManager tmp = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		Dynamic tmp1 = items;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		int tmp2 = selectedIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		::String tmp3 = title;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		Dynamic tmp4 = fn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = tmp->showList(tmp1,tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showListPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showBusyPopup( ::String text,hx::Null< int >  __o_delay,::String title,Dynamic config,Dynamic fn){
int delay = __o_delay.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showBusyPopup",0x3f25b531,"haxe.ui.toolkit.core.Controller.showBusyPopup","haxe/ui/toolkit/core/Controller.hx",190,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(191)
		this->hideBusy();
		HX_STACK_LINE(192)
		::haxe::ui::toolkit::core::PopupManager tmp = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		int tmp2 = delay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		::String tmp3 = title;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		Dynamic tmp4 = config;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		Dynamic tmp5 = fn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp->showBusy(tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->_currentBusyPopup = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Controller_obj,showBusyPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showBusy( ::String text,hx::Null< int >  __o_delay,::String title,Dynamic config,Dynamic fn){
int delay = __o_delay.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showBusy",0x5c5096fb,"haxe.ui.toolkit.core.Controller.showBusy","haxe/ui/toolkit/core/Controller.hx",195,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(196)
		::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		int tmp1 = delay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		::String tmp2 = title;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		Dynamic tmp4 = fn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = this->showBusyPopup(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Controller_obj,showBusy,return )

Void Controller_obj::hideBusy( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","hideBusy",0x4d97bd40,"haxe.ui.toolkit.core.Controller.hideBusy","haxe/ui/toolkit/core/Controller.hx",199,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->_currentBusyPopup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		if ((tmp1)){
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::core::PopupManager tmp2 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::controls::popups::Popup tmp3 = this->_currentBusyPopup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			tmp2->hidePopup(tmp3,null());
			HX_STACK_LINE(202)
			this->_currentBusyPopup = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,hideBusy,(void))

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showCalendarPopup( ::String title,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showCalendarPopup",0x0759208c,"haxe.ui.toolkit.core.Controller.showCalendarPopup","haxe/ui/toolkit/core/Controller.hx",206,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(207)
	::haxe::ui::toolkit::core::PopupManager tmp = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	Dynamic tmp2 = fn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	::haxe::ui::toolkit::controls::popups::Popup tmp3 = tmp->showCalendar(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,showCalendarPopup,return )


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(_view,"_view");
	HX_MARK_MEMBER_NAME(_namedComponents,"_namedComponents");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(popup,"popup");
	HX_MARK_MEMBER_NAME(namedComponents,"namedComponents");
	HX_MARK_MEMBER_NAME(_currentBusyPopup,"_currentBusyPopup");
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_view,"_view");
	HX_VISIT_MEMBER_NAME(_namedComponents,"_namedComponents");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(popup,"popup");
	HX_VISIT_MEMBER_NAME(namedComponents,"namedComponents");
	HX_VISIT_MEMBER_NAME(_currentBusyPopup,"_currentBusyPopup");
}

Dynamic Controller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return inCallProp == hx::paccAlways ? get_view() : view; }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp == hx::paccAlways ? get_root() : root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { return _view; }
		if (HX_FIELD_EQ(inName,"popup") ) { return inCallProp == hx::paccAlways ? get_popup() : popup; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { return onReady_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"get_view") ) { return get_view_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		if (HX_FIELD_EQ(inName,"showBusy") ) { return showBusy_dyn(); }
		if (HX_FIELD_EQ(inName,"hideBusy") ) { return hideBusy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_popup") ) { return get_popup_dyn(); }
		if (HX_FIELD_EQ(inName,"showPopup") ) { return showPopup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachView") ) { return attachView_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attachEvent") ) { return attachEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"detachEvent") ) { return detachEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"detachEvents") ) { return detachEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"getComponent") ) { return getComponent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showListPopup") ) { return showListPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"showBusyPopup") ) { return showBusyPopup_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getComponentAs") ) { return getComponentAs_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"namedComponents") ) { return inCallProp == hx::paccAlways ? get_namedComponents() : namedComponents; }
		if (HX_FIELD_EQ(inName,"showSimplePopup") ) { return showSimplePopup_dyn(); }
		if (HX_FIELD_EQ(inName,"showCustomPopup") ) { return showCustomPopup_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_namedComponents") ) { return _namedComponents; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentBusyPopup") ) { return _currentBusyPopup; }
		if (HX_FIELD_EQ(inName,"showCalendarPopup") ) { return showCalendarPopup_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_namedComponents") ) { return get_namedComponents_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"addNamedComponentsFrom") ) { return addNamedComponentsFrom_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"refereshNamedComponents") ) { return refereshNamedComponents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::haxe::ui::toolkit::core::Root >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { _view=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"popup") ) { popup=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"namedComponents") ) { namedComponents=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_namedComponents") ) { _namedComponents=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentBusyPopup") ) { _currentBusyPopup=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Controller_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_view","\x44","\x4e","\x60","\x01"));
	outFields->push(HX_HCSTRING("_namedComponents","\xb0","\xcc","\xd7","\xfd"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6"));
	outFields->push(HX_HCSTRING("namedComponents","\x2f","\x8a","\xf8","\x12"));
	outFields->push(HX_HCSTRING("_currentBusyPopup","\x19","\x39","\x39","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(Controller_obj,_view),HX_HCSTRING("_view","\x44","\x4e","\x60","\x01")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Controller_obj,_namedComponents),HX_HCSTRING("_namedComponents","\xb0","\xcc","\xd7","\xfd")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(Controller_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Root*/ ,(int)offsetof(Controller_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(Controller_obj,popup),HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Controller_obj,namedComponents),HX_HCSTRING("namedComponents","\x2f","\x8a","\xf8","\x12")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(Controller_obj,_currentBusyPopup),HX_HCSTRING("_currentBusyPopup","\x19","\x39","\x39","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_view","\x44","\x4e","\x60","\x01"),
	HX_HCSTRING("_namedComponents","\xb0","\xcc","\xd7","\xfd"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6"),
	HX_HCSTRING("onReady","\xc4","\x3e","\xf8","\x7c"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("attachView","\xca","\x20","\x42","\xce"),
	HX_HCSTRING("attachEvent","\x15","\x72","\x62","\xea"),
	HX_HCSTRING("detachEvent","\xc7","\xad","\xa0","\x28"),
	HX_HCSTRING("detachEvents","\xcc","\x60","\xf7","\x63"),
	HX_HCSTRING("getComponent","\x47","\x8d","\xaa","\x1e"),
	HX_HCSTRING("getComponentAs","\x19","\xe6","\x5d","\x08"),
	HX_HCSTRING("refereshNamedComponents","\x95","\x67","\x5d","\xed"),
	HX_HCSTRING("addNamedComponentsFrom","\x98","\x9d","\xc2","\x1f"),
	HX_HCSTRING("get_view","\xee","\xed","\x09","\xce"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_popup","\x83","\x66","\x3e","\x0a"),
	HX_HCSTRING("namedComponents","\x2f","\x8a","\xf8","\x12"),
	HX_HCSTRING("get_namedComponents","\x46","\x59","\x03","\x9e"),
	HX_HCSTRING("showPopup","\xef","\x6f","\xf9","\xf4"),
	HX_HCSTRING("showSimplePopup","\x9d","\x9a","\x44","\x96"),
	HX_HCSTRING("showCustomPopup","\xbe","\x0a","\xe9","\x11"),
	HX_HCSTRING("showListPopup","\x31","\xcc","\xf3","\xcc"),
	HX_HCSTRING("_currentBusyPopup","\x19","\x39","\x39","\xd9"),
	HX_HCSTRING("showBusyPopup","\x76","\xd9","\xab","\x3d"),
	HX_HCSTRING("showBusy","\xd6","\xd8","\xa6","\xa8"),
	HX_HCSTRING("hideBusy","\x1b","\xff","\xed","\x99"),
	HX_HCSTRING("showCalendarPopup","\x51","\x4b","\x67","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#endif

hx::Class Controller_obj::__mClass;

void Controller_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Controller","\xe9","\xfa","\xce","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Controller_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Controller_obj >;
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
