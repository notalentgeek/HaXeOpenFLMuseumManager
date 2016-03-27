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
#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#include <haxe/ui/toolkit/layout/BoxLayout.h>
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

Void BoxLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","new",0x9dea6965,"haxe.ui.toolkit.layout.BoxLayout.new","haxe/ui/toolkit/layout/BoxLayout.hx",8,0xd04b792b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//BoxLayout_obj::~BoxLayout_obj() { }

Dynamic BoxLayout_obj::__CreateEmpty() { return  new BoxLayout_obj; }
hx::ObjectPtr< BoxLayout_obj > BoxLayout_obj::__new()
{  hx::ObjectPtr< BoxLayout_obj > _result_ = new BoxLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic BoxLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoxLayout_obj > _result_ = new BoxLayout_obj();
	_result_->__construct();
	return _result_;}

Void BoxLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","resizeChildren",0x309b6e6e,"haxe.ui.toolkit.layout.BoxLayout.resizeChildren","haxe/ui/toolkit/layout/BoxLayout.hx",14,0xd04b792b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		this->super::resizeChildren();
		HX_STACK_LINE(16)
		Float tmp = this->get_usableWidth();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(17)
		Float tmp1 = this->get_usableHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		Float ucy = tmp1;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(18)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(19)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp2->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			while((true)){
				HX_STACK_LINE(20)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(20)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(20)
				if ((tmp4)){
					HX_STACK_LINE(20)
					break;
				}
				HX_STACK_LINE(20)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(20)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(20)
				++(_g);
				HX_STACK_LINE(22)
				bool tmp6 = child->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(22)
				bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(22)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(22)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(22)
				if ((tmp8)){
					HX_STACK_LINE(22)
					bool tmp10 = child->get_includeInLayout();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(22)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(22)
					tmp9 = (tmp11 == false);
				}
				else{
					HX_STACK_LINE(22)
					tmp9 = true;
				}
				HX_STACK_LINE(22)
				if ((tmp9)){
					HX_STACK_LINE(23)
					continue;
				}
				HX_STACK_LINE(26)
				Float tmp10 = child->get_percentWidth();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(26)
				bool tmp11 = (tmp10 > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(26)
				if ((tmp11)){
					HX_STACK_LINE(27)
					Float tmp12 = ucx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(27)
					Float tmp13 = child->get_percentWidth();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(27)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(27)
					Float tmp15 = (Float(tmp14) / Float((int)100));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(27)
					child->set_width(tmp15);
				}
				HX_STACK_LINE(30)
				Float tmp12 = child->get_percentHeight();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(30)
				bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(30)
				if ((tmp13)){
					HX_STACK_LINE(31)
					Float tmp14 = ucy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(31)
					Float tmp15 = child->get_percentHeight();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(31)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(31)
					Float tmp17 = (Float(tmp16) / Float((int)100));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(31)
					child->set_height(tmp17);
				}
				HX_STACK_LINE(35)
				Float tmp14 = child->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				Float tmp15 = totalWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				if ((tmp16)){
					HX_STACK_LINE(36)
					Float tmp17 = child->get_width();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(36)
					totalWidth = tmp17;
				}
				HX_STACK_LINE(38)
				Float tmp17 = child->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(38)
				Float tmp18 = totalHeight;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(38)
				bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(38)
				if ((tmp19)){
					HX_STACK_LINE(39)
					Float tmp20 = child->get_height();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(39)
					totalHeight = tmp20;
				}
			}
		}
		HX_STACK_LINE(43)
		Float tmp2 = totalWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Float tmp3 = totalHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		this->autoSize(tmp2,tmp3);
	}
return null();
}


Void BoxLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","repositionChildren",0x64755556,"haxe.ui.toolkit.layout.BoxLayout.repositionChildren","haxe/ui/toolkit/layout/BoxLayout.hx",46,0xd04b792b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::repositionChildren();
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(48)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				if ((tmp2)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(48)
				++(_g);
				HX_STACK_LINE(50)
				bool tmp4 = child->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				if ((tmp6)){
					HX_STACK_LINE(50)
					bool tmp8 = child->get_includeInLayout();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(50)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(50)
					tmp7 = (tmp9 == false);
				}
				else{
					HX_STACK_LINE(50)
					tmp7 = true;
				}
				HX_STACK_LINE(50)
				if ((tmp7)){
					HX_STACK_LINE(51)
					continue;
				}
				HX_STACK_LINE(54)
				::openfl::_legacy::geom::Rectangle tmp8 = this->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				Float tmp9 = tmp8->get_left();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				Float xpos = tmp9;		HX_STACK_VAR(xpos,"xpos");
				HX_STACK_LINE(55)
				::openfl::_legacy::geom::Rectangle tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				Float tmp11 = tmp10->get_top();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				Float ypos = tmp11;		HX_STACK_VAR(ypos,"ypos");
				HX_STACK_LINE(56)
				::String tmp12 = child->get_horizontalAlign();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				::String halign = tmp12;		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(57)
				::String tmp13 = child->get_verticalAlign();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(57)
				::String valign = tmp13;		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(59)
				::String tmp14 = halign;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(59)
				::String _switch_1 = (tmp14);
				if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(61)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp15 = this->get_container();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(61)
					Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(61)
					Float tmp18 = child->get_width();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(61)
					Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(61)
					Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(61)
					xpos = tmp20;
				}
				else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
					HX_STACK_LINE(63)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp15 = this->get_container();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(63)
					Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(63)
					Float tmp17 = child->get_width();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(63)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(63)
					::openfl::_legacy::geom::Rectangle tmp19 = this->get_padding();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(63)
					Float tmp20 = tmp19->get_right();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(63)
					Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(63)
					xpos = tmp21;
				}
				else  {
				}
;
;
				HX_STACK_LINE(67)
				::String tmp15 = valign;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(67)
				::String _switch_2 = (tmp15);
				if (  ( _switch_2==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(69)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp16 = this->get_container();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(69)
					Float tmp17 = tmp16->get_height();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(69)
					Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(69)
					Float tmp19 = child->get_height();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(69)
					Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(69)
					Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(69)
					ypos = tmp21;
				}
				else if (  ( _switch_2==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
					HX_STACK_LINE(71)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp16 = this->get_container();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(71)
					Float tmp17 = tmp16->get_height();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(71)
					Float tmp18 = child->get_height();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(71)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(71)
					::openfl::_legacy::geom::Rectangle tmp20 = this->get_padding();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(71)
					Float tmp21 = tmp20->get_bottom();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(71)
					Float tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(71)
					ypos = tmp22;
				}
				else  {
				}
;
;
				HX_STACK_LINE(75)
				Float tmp16 = xpos;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(75)
				child->set_x(tmp16);
				HX_STACK_LINE(76)
				Float tmp17 = ypos;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(76)
				child->set_y(tmp17);
			}
		}
	}
return null();
}


Float BoxLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","get_usableWidth",0x33c94c0a,"haxe.ui.toolkit.layout.BoxLayout.get_usableWidth","haxe/ui/toolkit/layout/BoxLayout.hx",85,0xd04b792b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	Float tmp = this->super::get_usableWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(104)
	Float tmp1 = ucx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	return tmp1;
}


Float BoxLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","get_usableHeight",0xd2a8b563,"haxe.ui.toolkit.layout.BoxLayout.get_usableHeight","haxe/ui/toolkit/layout/BoxLayout.hx",107,0xd04b792b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	Float tmp = this->super::get_usableHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	Float ucy = tmp;		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(126)
	Float tmp1 = ucy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout BoxLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","clone",0x6b95b7a2,"haxe.ui.toolkit.layout.BoxLayout.clone","src/haxe/ui/toolkit/layout/BoxLayout.hx",1,0x722fdd40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::BoxLayout c = ((::haxe::ui::toolkit::layout::BoxLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::layout::BoxLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout BoxLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","self",0x927fd6e7,"haxe.ui.toolkit.layout.BoxLayout.self","src/haxe/ui/toolkit/layout/BoxLayout.hx",1,0x722fdd40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::BoxLayout tmp = ::haxe::ui::toolkit::layout::BoxLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



BoxLayout_obj::BoxLayout_obj()
{
}

Dynamic BoxLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
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
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoxLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoxLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class BoxLayout_obj::__mClass;

void BoxLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.BoxLayout","\xf3","\xd2","\xfe","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BoxLayout_obj >;
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
