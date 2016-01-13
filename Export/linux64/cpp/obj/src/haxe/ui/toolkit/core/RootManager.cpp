#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void RootManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","new",0x3fbd8d70,"haxe.ui.toolkit.core.RootManager.new","haxe/ui/toolkit/core/RootManager.hx",24,0xcb4d01c0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->_roots = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//RootManager_obj::~RootManager_obj() { }

Dynamic RootManager_obj::__CreateEmpty() { return  new RootManager_obj; }
hx::ObjectPtr< RootManager_obj > RootManager_obj::__new()
{  hx::ObjectPtr< RootManager_obj > _result_ = new RootManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic RootManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RootManager_obj > _result_ = new RootManager_obj();
	_result_->__construct();
	return _result_;}

::haxe::ui::toolkit::core::Root RootManager_obj::createRoot( Dynamic options,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","createRoot",0x9f5bb42e,"haxe.ui.toolkit.core.RootManager.createRoot","haxe/ui/toolkit/core/RootManager.hx",27,0xcb4d01c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(28)
	bool tmp = (options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/RootManager.hx",29,0xcb4d01c0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		options = tmp1;
	}
	HX_STACK_LINE(32)
	bool tmp1 = (options->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(32)
		tmp2 = options->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(32)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		tmp2 = tmp3->get_stage();
	}
	HX_STACK_LINE(32)
	options->__FieldRef(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")) = tmp2;
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::core::Root tmp3 = ::haxe::ui::toolkit::core::Root_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::core::Root root = tmp3;		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(35)
	::openfl::_legacy::display::Sprite tmp4 = root->get_sprite();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	::openfl::_legacy::display::Sprite tmp5 = root->get_sprite();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	Float tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	Float tmp7 = tmp5->set_scaleY(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(35)
	tmp4->set_scaleX(tmp7);
	HX_STACK_LINE(36)
	::haxe::ui::toolkit::core::Root tmp8 = root;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(36)
	this->_roots->push(tmp8);
	HX_STACK_LINE(37)
	::String tmp9 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp9,"tmp9");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,fn,::haxe::ui::toolkit::core::Root,root)
	int __ArgCount() const { return 1; }
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/core/RootManager.hx",37,0xcb4d01c0)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(38)
			bool tmp10 = (fn != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(38)
			if ((tmp10)){
				HX_STACK_LINE(42)
				::haxe::ui::toolkit::core::Root tmp11 = root;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(42)
				fn(tmp11).Cast< Void >();
				HX_STACK_LINE(43)
				root->invalidate((int)1048576,null());
			}
			HX_STACK_LINE(46)
			::String tmp11 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			root->removeEventListenerType(tmp11);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(37)
	root->addEventListener(tmp9, Dynamic(new _Function_1_1(fn,root)),null(),null(),null());
	HX_STACK_LINE(49)
	::haxe::ui::toolkit::core::Root tmp10 = root;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	root->set_root(tmp10);
	HX_STACK_LINE(50)
	bool tmp11 = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(50)
	if ((tmp11)){
		HX_STACK_LINE(50)
		tmp12 = options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(50)
		tmp12 = HX_HCSTRING("root","\x22","\xee","\xae","\x4b");
	}
	HX_STACK_LINE(50)
	root->set_id(tmp12);
	HX_STACK_LINE(51)
	bool tmp13 = (options->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(51)
	::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(51)
	if ((tmp13)){
		HX_STACK_LINE(51)
		tmp14 = options->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(51)
		tmp14 = null();
	}
	HX_STACK_LINE(51)
	root->set_styleName(tmp14);
	HX_STACK_LINE(52)
	bool tmp15 = (options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(52)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(52)
	if ((tmp15)){
		HX_STACK_LINE(52)
		tmp16 = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(52)
		tmp16 = (int)0;
	}
	HX_STACK_LINE(52)
	root->set_x(tmp16);
	HX_STACK_LINE(53)
	bool tmp17 = (options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(53)
	Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(53)
	if ((tmp17)){
		HX_STACK_LINE(53)
		tmp18 = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(53)
		tmp18 = (int)0;
	}
	HX_STACK_LINE(53)
	root->set_y(tmp18);
	HX_STACK_LINE(54)
	bool tmp19 = (options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(54)
	Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(54)
	if ((tmp19)){
		HX_STACK_LINE(54)
		tmp20 = options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(54)
		tmp20 = (int)0;
	}
	HX_STACK_LINE(54)
	root->set_width(tmp20);
	HX_STACK_LINE(55)
	bool tmp21 = (options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(55)
	Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(55)
	if ((tmp21)){
		HX_STACK_LINE(55)
		tmp22 = options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(55)
		tmp22 = (int)0;
	}
	HX_STACK_LINE(55)
	root->set_height(tmp22);
	HX_STACK_LINE(56)
	bool tmp23 = (options->__Field(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(56)
	Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(56)
	if ((tmp23)){
		HX_STACK_LINE(56)
		tmp24 = options->__Field(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(56)
		tmp24 = (int)-1;
	}
	HX_STACK_LINE(56)
	root->set_percentWidth(tmp24);
	HX_STACK_LINE(57)
	bool tmp25 = (options->__Field(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(57)
	Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(57)
	if ((tmp25)){
		HX_STACK_LINE(57)
		tmp26 = options->__Field(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(57)
		tmp26 = (int)-1;
	}
	HX_STACK_LINE(57)
	root->set_percentHeight(tmp26);
	HX_STACK_LINE(58)
	options->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(root->get_sprite());
	HX_STACK_LINE(59)
	::haxe::ui::toolkit::core::Root tmp27 = root;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(59)
	return tmp27;
}


HX_DEFINE_DYNAMIC_FUNC2(RootManager_obj,createRoot,return )

Void RootManager_obj::destroyRoot( ::haxe::ui::toolkit::core::Root root){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","destroyRoot",0x63c6994c,"haxe.ui.toolkit.core.RootManager.destroyRoot","haxe/ui/toolkit/core/RootManager.hx",62,0xcb4d01c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(root,"root")
		HX_STACK_LINE(63)
		::openfl::_legacy::display::Sprite tmp = root->get_sprite();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		::openfl::_legacy::display::DisplayObjectContainer tmp1 = tmp->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		if ((tmp2)){
			HX_STACK_LINE(64)
			::openfl::_legacy::display::Sprite tmp3 = root->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			::openfl::_legacy::display::DisplayObjectContainer tmp4 = tmp3->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			::openfl::_legacy::display::Sprite tmp5 = root->get_sprite();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			tmp4->removeChild(tmp5);
		}
		HX_STACK_LINE(65)
		root->dispose();
		HX_STACK_LINE(67)
		::haxe::ui::toolkit::core::Root tmp3 = root;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		this->_roots->remove(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RootManager_obj,destroyRoot,(void))

Void RootManager_obj::destroyAllRoots( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","destroyAllRoots",0x09e2b75a,"haxe.ui.toolkit.core.RootManager.destroyAllRoots","haxe/ui/toolkit/core/RootManager.hx",71,0xcb4d01c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		Array< ::Dynamic > _g1 = this->_roots;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			if ((tmp1)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::core::Root tmp2 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::core::Root >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::core::Root root = tmp2;		HX_STACK_VAR(root,"root");
			HX_STACK_LINE(71)
			++(_g);
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::core::Root tmp3 = root;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			this->destroyRoot(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,destroyAllRoots,(void))

Array< ::Dynamic > RootManager_obj::get_roots( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","get_roots",0x5737b578,"haxe.ui.toolkit.core.RootManager.get_roots","haxe/ui/toolkit/core/RootManager.hx",78,0xcb4d01c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return this->_roots;
}


HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,get_roots,return )

::haxe::ui::toolkit::core::Root RootManager_obj::get_currentRoot( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","get_currentRoot",0xf6bb93a2,"haxe.ui.toolkit.core.RootManager.get_currentRoot","haxe/ui/toolkit/core/RootManager.hx",82,0xcb4d01c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	int tmp = this->_roots->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	if ((tmp1)){
		HX_STACK_LINE(84)
		return null();
	}
	HX_STACK_LINE(86)
	int tmp2 = this->_roots->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	::haxe::ui::toolkit::core::Root tmp4 = this->_roots->__get(tmp3).StaticCast< ::haxe::ui::toolkit::core::Root >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,get_currentRoot,return )

::haxe::ui::toolkit::core::RootManager RootManager_obj::_instance;

::haxe::ui::toolkit::core::RootManager RootManager_obj::instance;

::haxe::ui::toolkit::core::RootManager RootManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","get_instance",0x1998f48e,"haxe.ui.toolkit.core.RootManager.get_instance","haxe/ui/toolkit/core/RootManager.hx",11,0xcb4d01c0)
	HX_STACK_LINE(12)
	::haxe::ui::toolkit::core::RootManager tmp = ::haxe::ui::toolkit::core::RootManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	if ((tmp1)){
		HX_STACK_LINE(13)
		::haxe::ui::toolkit::core::RootManager tmp2 = ::haxe::ui::toolkit::core::RootManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		::haxe::ui::toolkit::core::RootManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(15)
	::haxe::ui::toolkit::core::RootManager tmp2 = ::haxe::ui::toolkit::core::RootManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,get_instance,return )


RootManager_obj::RootManager_obj()
{
}

void RootManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RootManager);
	HX_MARK_MEMBER_NAME(_roots,"_roots");
	HX_MARK_MEMBER_NAME(roots,"roots");
	HX_MARK_MEMBER_NAME(currentRoot,"currentRoot");
	HX_MARK_END_CLASS();
}

void RootManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_roots,"_roots");
	HX_VISIT_MEMBER_NAME(roots,"roots");
	HX_VISIT_MEMBER_NAME(currentRoot,"currentRoot");
}

Dynamic RootManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"roots") ) { return inCallProp == hx::paccAlways ? get_roots() : roots; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_roots") ) { return _roots; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_roots") ) { return get_roots_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRoot") ) { return createRoot_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destroyRoot") ) { return destroyRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"currentRoot") ) { return inCallProp == hx::paccAlways ? get_currentRoot() : currentRoot; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyAllRoots") ) { return destroyAllRoots_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentRoot") ) { return get_currentRoot_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool RootManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic RootManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"roots") ) { roots=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_roots") ) { _roots=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentRoot") ) { currentRoot=inValue.Cast< ::haxe::ui::toolkit::core::Root >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RootManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::core::RootManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::core::RootManager >(); return true; }
	}
	return false;
}

void RootManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_roots","\x52","\xb7","\x48","\xe9"));
	outFields->push(HX_HCSTRING("roots","\x11","\x70","\x61","\xed"));
	outFields->push(HX_HCSTRING("currentRoot","\xfb","\xc6","\x40","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RootManager_obj,_roots),HX_HCSTRING("_roots","\x52","\xb7","\x48","\xe9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RootManager_obj,roots),HX_HCSTRING("roots","\x11","\x70","\x61","\xed")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Root*/ ,(int)offsetof(RootManager_obj,currentRoot),HX_HCSTRING("currentRoot","\xfb","\xc6","\x40","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::RootManager*/ ,(void *) &RootManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::RootManager*/ ,(void *) &RootManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_roots","\x52","\xb7","\x48","\xe9"),
	HX_HCSTRING("createRoot","\x3e","\xaf","\x3c","\x5e"),
	HX_HCSTRING("destroyRoot","\x3c","\x4c","\xc1","\xa9"),
	HX_HCSTRING("destroyAllRoots","\x4a","\xa2","\x49","\x58"),
	HX_HCSTRING("roots","\x11","\x70","\x61","\xed"),
	HX_HCSTRING("get_roots","\x68","\xcc","\x0a","\x31"),
	HX_HCSTRING("currentRoot","\xfb","\xc6","\x40","\x84"),
	HX_HCSTRING("get_currentRoot","\x92","\x7e","\x22","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RootManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RootManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(RootManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RootManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RootManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(RootManager_obj::instance,"instance");
};

#endif

hx::Class RootManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void RootManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.RootManager","\x7e","\x55","\x36","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RootManager_obj::__GetStatic;
	__mClass->mSetStaticField = &RootManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RootManager_obj >;
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
