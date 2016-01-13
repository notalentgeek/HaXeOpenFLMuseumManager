#include <hxcpp.h>

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
namespace layout{

Void DefaultLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","new",0xb4440a9b,"haxe.ui.toolkit.layout.DefaultLayout.new","haxe/ui/toolkit/layout/DefaultLayout.hx",5,0x34f830b5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//DefaultLayout_obj::~DefaultLayout_obj() { }

Dynamic DefaultLayout_obj::__CreateEmpty() { return  new DefaultLayout_obj; }
hx::ObjectPtr< DefaultLayout_obj > DefaultLayout_obj::__new()
{  hx::ObjectPtr< DefaultLayout_obj > _result_ = new DefaultLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultLayout_obj > _result_ = new DefaultLayout_obj();
	_result_->__construct();
	return _result_;}

Void DefaultLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","resizeChildren",0x39348cf8,"haxe.ui.toolkit.layout.DefaultLayout.resizeChildren","haxe/ui/toolkit/layout/DefaultLayout.hx",11,0x34f830b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::resizeChildren();
		HX_STACK_LINE(13)
		Float tmp = this->get_usableWidth();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(14)
		Float tmp1 = this->get_usableHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		Float ucy = tmp1;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(15)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(16)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(17)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp2->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			while((true)){
				HX_STACK_LINE(17)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(17)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				if ((tmp4)){
					HX_STACK_LINE(17)
					break;
				}
				HX_STACK_LINE(17)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(17)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(17)
				++(_g);
				HX_STACK_LINE(19)
				bool tmp6 = child->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(19)
				bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(19)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(19)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(19)
				if ((tmp8)){
					HX_STACK_LINE(19)
					bool tmp10 = child->get_includeInLayout();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(19)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(19)
					tmp9 = (tmp11 == false);
				}
				else{
					HX_STACK_LINE(19)
					tmp9 = true;
				}
				HX_STACK_LINE(19)
				if ((tmp9)){
					HX_STACK_LINE(20)
					continue;
				}
				HX_STACK_LINE(23)
				Float tmp10 = child->get_percentWidth();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(23)
				bool tmp11 = (tmp10 > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(23)
				if ((tmp11)){
					HX_STACK_LINE(24)
					Float tmp12 = ucx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(24)
					Float tmp13 = child->get_percentWidth();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(24)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(24)
					Float tmp15 = (Float(tmp14) / Float((int)100));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(24)
					child->set_width(tmp15);
				}
				HX_STACK_LINE(27)
				Float tmp12 = child->get_percentHeight();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(27)
				bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(27)
				if ((tmp13)){
					HX_STACK_LINE(28)
					Float tmp14 = ucy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(28)
					Float tmp15 = child->get_percentHeight();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(28)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(28)
					Float tmp17 = (Float(tmp16) / Float((int)100));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(28)
					child->set_height(tmp17);
				}
				HX_STACK_LINE(31)
				Float tmp14 = child->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(31)
				Float tmp15 = totalWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(31)
				bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(31)
				if ((tmp16)){
					HX_STACK_LINE(32)
					Float tmp17 = child->get_width();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(32)
					totalWidth = tmp17;
				}
				HX_STACK_LINE(34)
				Float tmp17 = child->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(34)
				Float tmp18 = totalHeight;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(34)
				bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(34)
				if ((tmp19)){
					HX_STACK_LINE(35)
					Float tmp20 = child->get_height();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(35)
					totalHeight = tmp20;
				}
			}
		}
		HX_STACK_LINE(50)
		Float tmp2 = totalWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Float tmp3 = totalHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		this->autoSize(tmp2,tmp3);
	}
return null();
}


Void DefaultLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","repositionChildren",0xa84180e0,"haxe.ui.toolkit.layout.DefaultLayout.repositionChildren","haxe/ui/toolkit/layout/DefaultLayout.hx",53,0x34f830b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->super::repositionChildren();
		HX_STACK_LINE(55)
		::openfl::_legacy::geom::Rectangle tmp = this->get_padding();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		Float tmp1 = tmp->get_left();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		Float xpos = tmp1;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(56)
		::openfl::_legacy::geom::Rectangle tmp2 = this->get_padding();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		Float tmp3 = tmp2->get_top();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		Float ypos = tmp3;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = this->get_container();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp4->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				if ((tmp6)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(59)
				bool tmp8 = child->get_visible();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				bool tmp9 = (tmp8 == false);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(59)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(59)
				if ((tmp10)){
					HX_STACK_LINE(59)
					bool tmp12 = child->get_includeInLayout();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(59)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(59)
					tmp11 = (tmp13 == false);
				}
				else{
					HX_STACK_LINE(59)
					tmp11 = true;
				}
				HX_STACK_LINE(59)
				if ((tmp11)){
					HX_STACK_LINE(60)
					continue;
				}
				HX_STACK_LINE(63)
				Float tmp12 = xpos;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				child->set_x(tmp12);
				HX_STACK_LINE(64)
				Float tmp13 = ypos;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(64)
				child->set_y(tmp13);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::layout::Layout DefaultLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","clone",0x04829258,"haxe.ui.toolkit.layout.DefaultLayout.clone","src/haxe/ui/toolkit/layout/DefaultLayout.hx",1,0xc248c34a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout c = ((::haxe::ui::toolkit::layout::DefaultLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::layout::DefaultLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout DefaultLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","self",0x0a9344f1,"haxe.ui.toolkit.layout.DefaultLayout.self","src/haxe/ui/toolkit/layout/DefaultLayout.hx",1,0xc248c34a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout tmp = ::haxe::ui::toolkit::layout::DefaultLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



DefaultLayout_obj::DefaultLayout_obj()
{
}

Dynamic DefaultLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultLayout_obj::__mClass;

void DefaultLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.DefaultLayout","\x29","\x21","\xf6","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultLayout_obj >;
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
} // end namespace layout
