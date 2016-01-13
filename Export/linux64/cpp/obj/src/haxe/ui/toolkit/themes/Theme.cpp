#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{

Void Theme_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","new",0x02ce92f9,"haxe.ui.toolkit.themes.Theme.new","haxe/ui/toolkit/themes/Theme.hx",15,0xd5f9de17)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Theme_obj::~Theme_obj() { }

Dynamic Theme_obj::__CreateEmpty() { return  new Theme_obj; }
hx::ObjectPtr< Theme_obj > Theme_obj::__new()
{  hx::ObjectPtr< Theme_obj > _result_ = new Theme_obj();
	_result_->__construct();
	return _result_;}

Dynamic Theme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_obj > _result_ = new Theme_obj();
	_result_->__construct();
	return _result_;}

Void Theme_obj::apply( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","apply",0xccdee047,"haxe.ui.toolkit.themes.Theme.apply","haxe/ui/toolkit/themes/Theme.hx",18,0xd5f9de17)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		this->applyAssetList(tmp);
		HX_STACK_LINE(20)
		this->applyAssetList(HX_HCSTRING("__PUBLIC__","\x29","\x2f","\x12","\xa8"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_obj,apply,(void))

Void Theme_obj::applyAssetList( ::String n){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","applyAssetList",0x7318a927,"haxe.ui.toolkit.themes.Theme.applyAssetList","haxe/ui/toolkit/themes/Theme.hx",23,0xd5f9de17)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::themes::Theme_obj::assets;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::String tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		cpp::ArrayBase list = ((cpp::ArrayBase)(tmp->get(tmp1)));		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(25)
		bool tmp2 = (list == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		if ((tmp2)){
			HX_STACK_LINE(26)
			return null();
		}
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			while((true)){
				HX_STACK_LINE(29)
				bool tmp3 = (_g < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(29)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(29)
				if ((tmp4)){
					HX_STACK_LINE(29)
					break;
				}
				HX_STACK_LINE(29)
				Dynamic tmp5 = list->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				Dynamic asset = tmp5;		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(29)
				++(_g);
				HX_STACK_LINE(30)
				Dynamic tmp6 = asset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(30)
				this->applyAsset(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,applyAssetList,(void))

Void Theme_obj::applyAsset( Dynamic asset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","applyAsset",0xdbf29829,"haxe.ui.toolkit.themes.Theme.applyAsset","haxe/ui/toolkit/themes/Theme.hx",34,0xd5f9de17)
		HX_STACK_THIS(this)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(35)
		Dynamic tmp = asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		if ((tmp1)){
			HX_STACK_LINE(36)
			Dynamic tmp2 = asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			bool tmp3 = ::StringTools_obj::endsWith(tmp2,HX_HCSTRING(".css","\x55","\x54","\xb3","\x1e"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			if ((tmp3)){
				HX_STACK_LINE(37)
				::haxe::ui::toolkit::style::StyleManager tmp4 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				::haxe::ui::toolkit::resources::ResourceManager tmp5 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				Dynamic tmp6 = asset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				::String tmp7 = tmp5->getText(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				::haxe::ui::toolkit::style::Styles tmp8 = ::haxe::ui::toolkit::style::StyleParser_obj::fromString(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				tmp4->addStyles(tmp8);
			}
		}
		else{
			HX_STACK_LINE(39)
			Dynamic tmp2 = asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			if ((tmp3)){
				HX_STACK_LINE(40)
				Dynamic tmp4 = asset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				::haxe::ui::toolkit::style::Styles tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				::haxe::ui::toolkit::style::Styles styles = tmp5;		HX_STACK_VAR(styles,"styles");
				HX_STACK_LINE(41)
				bool tmp6 = (styles != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(41)
				if ((tmp6)){
					HX_STACK_LINE(42)
					::haxe::ui::toolkit::style::StyleManager tmp7 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					::haxe::ui::toolkit::style::Styles tmp8 = styles;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(42)
					tmp7->addStyles(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,applyAsset,(void))

::haxe::ds::StringMap Theme_obj::assets;

Void Theme_obj::addPublicAsset( Dynamic asset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","addPublicAsset",0xf02b5ded,"haxe.ui.toolkit.themes.Theme.addPublicAsset","haxe/ui/toolkit/themes/Theme.hx",47,0xd5f9de17)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(48)
		Dynamic tmp = asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("__PUBLIC__","\x29","\x2f","\x12","\xa8"),tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,addPublicAsset,(void))

Void Theme_obj::addAsset( ::String t,Dynamic asset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","addAsset",0xcb76c2d6,"haxe.ui.toolkit.themes.Theme.addAsset","haxe/ui/toolkit/themes/Theme.hx",51,0xd5f9de17)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::themes::Theme_obj::assets;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::String tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		cpp::ArrayBase list = ((cpp::ArrayBase)(tmp->get(tmp1)));		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(53)
		bool tmp2 = (list == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		if ((tmp2)){
			HX_STACK_LINE(54)
			list = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(55)
			::haxe::ds::StringMap tmp3 = ::haxe::ui::toolkit::themes::Theme_obj::assets;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			::String tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			tmp3->set(tmp4,list);
		}
		HX_STACK_LINE(57)
		Dynamic tmp3 = asset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Theme_obj,addAsset,(void))


Theme_obj::Theme_obj()
{
}

void Theme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theme);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Theme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Theme_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyAsset") ) { return applyAsset_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"applyAssetList") ) { return applyAssetList_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Theme_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { outValue = assets; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAsset") ) { outValue = addAsset_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addPublicAsset") ) { outValue = addPublicAsset_dyn(); return true;  }
	}
	return false;
}

Dynamic Theme_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Theme_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Theme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Theme_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Theme_obj::assets,HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("applyAssetList","\x20","\xa7","\xd7","\x9a"),
	HX_HCSTRING("applyAsset","\xa2","\xe5","\x8a","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_obj::assets,"assets");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_obj::assets,"assets");
};

#endif

hx::Class Theme_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("addPublicAsset","\xe6","\x5b","\xea","\x17"),
	HX_HCSTRING("addAsset","\x0f","\x90","\x96","\x9f"),
	::String(null()) };

void Theme_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.themes.Theme","\x87","\xa2","\x81","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Theme_obj::__GetStatic;
	__mClass->mSetStaticField = &Theme_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Theme_obj >;
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

void Theme_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/Theme.hx",13,0xd5f9de17)
		{
			HX_STACK_LINE(13)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13)
			return tmp1;
		}
		return null();
	}
};
	assets= _Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes
