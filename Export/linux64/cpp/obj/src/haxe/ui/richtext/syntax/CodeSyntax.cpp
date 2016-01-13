#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_CSSSyntax
#include <haxe/ui/richtext/syntax/CSSSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_HaxeSyntax
#include <haxe/ui/richtext/syntax/HaxeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_HaxeUIXMLSyntax
#include <haxe/ui/richtext/syntax/HaxeUIXMLSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_XMLSyntax
#include <haxe/ui/richtext/syntax/XMLSyntax.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{

Void CodeSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","new",0xfb881d5a,"haxe.ui.richtext.syntax.CodeSyntax.new","haxe/ui/richtext/syntax/CodeSyntax.hx",12,0x47c0ea96)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->_identifier = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(14)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		tmp = tmp2;
	}
	HX_STACK_LINE(14)
	this->_rules = tmp;
	HX_STACK_LINE(15)
	this->_rulesArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(16)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(16)
	this->_compiledRules = tmp1;
	HX_STACK_LINE(17)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"),(int)13,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	this->_defaultFormat = tmp2;
}
;
	return null();
}

//CodeSyntax_obj::~CodeSyntax_obj() { }

Dynamic CodeSyntax_obj::__CreateEmpty() { return  new CodeSyntax_obj; }
hx::ObjectPtr< CodeSyntax_obj > CodeSyntax_obj::__new()
{  hx::ObjectPtr< CodeSyntax_obj > _result_ = new CodeSyntax_obj();
	_result_->__construct();
	return _result_;}

Dynamic CodeSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodeSyntax_obj > _result_ = new CodeSyntax_obj();
	_result_->__construct();
	return _result_;}

Void CodeSyntax_obj::addRule( ::String regex,int color,hx::Null< bool >  __o_bold){
bool bold = __o_bold.Default(false);
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","addRule",0x93680db7,"haxe.ui.richtext.syntax.CodeSyntax.addRule","haxe/ui/richtext/syntax/CodeSyntax.hx",20,0x47c0ea96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(regex,"regex")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(bold,"bold")
{
		HX_STACK_LINE(21)
		::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		::String tmp1 = tmp->font;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		Dynamic tmp3 = tmp2->size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		::openfl::_legacy::text::TextFormat tmp5 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp1,tmp3,tmp4,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		::openfl::_legacy::text::TextFormat f = tmp5;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(22)
		f->bold = bold;
		HX_STACK_LINE(23)
		::haxe::ds::StringMap tmp6 = this->_rules;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		::String tmp7 = regex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		::openfl::_legacy::text::TextFormat tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(24)
		::String tmp9 = regex;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		this->_rulesArray->push(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CodeSyntax_obj,addRule,(void))

::String CodeSyntax_obj::get_identifier( ){
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","get_identifier",0x76ea91f8,"haxe.ui.richtext.syntax.CodeSyntax.get_identifier","haxe/ui/richtext/syntax/CodeSyntax.hx",50,0x47c0ea96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::String tmp = this->_identifier;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CodeSyntax_obj,get_identifier,return )

::openfl::_legacy::text::TextFormat CodeSyntax_obj::get_defaultFormat( ){
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","get_defaultFormat",0xddd2bca9,"haxe.ui.richtext.syntax.CodeSyntax.get_defaultFormat","haxe/ui/richtext/syntax/CodeSyntax.hx",54,0x47c0ea96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CodeSyntax_obj,get_defaultFormat,return )

::openfl::_legacy::text::TextFormat CodeSyntax_obj::set_defaultFormat( ::openfl::_legacy::text::TextFormat value){
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","set_defaultFormat",0x014094b5,"haxe.ui.richtext.syntax.CodeSyntax.set_defaultFormat","haxe/ui/richtext/syntax/CodeSyntax.hx",58,0x47c0ea96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(59)
	this->_defaultFormat = value;
	HX_STACK_LINE(60)
	::openfl::_legacy::text::TextFormat tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CodeSyntax_obj,set_defaultFormat,return )

::haxe::ds::StringMap CodeSyntax_obj::get_rules( ){
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","get_rules",0x8a6b04c8,"haxe.ui.richtext.syntax.CodeSyntax.get_rules","haxe/ui/richtext/syntax/CodeSyntax.hx",63,0x47c0ea96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::haxe::ds::StringMap tmp = this->_rules;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CodeSyntax_obj,get_rules,return )

Array< ::String > CodeSyntax_obj::get_rulesArray( ){
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","get_rulesArray",0xef4383b1,"haxe.ui.richtext.syntax.CodeSyntax.get_rulesArray","haxe/ui/richtext/syntax/CodeSyntax.hx",68,0x47c0ea96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->_rulesArray;
}


HX_DEFINE_DYNAMIC_FUNC0(CodeSyntax_obj,get_rulesArray,return )

::EReg CodeSyntax_obj::getCompiledRule( ::String rule){
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","getCompiledRule",0x038f12dd,"haxe.ui.richtext.syntax.CodeSyntax.getCompiledRule","haxe/ui/richtext/syntax/CodeSyntax.hx",73,0x47c0ea96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_LINE(74)
	::haxe::ds::StringMap tmp = this->_compiledRules;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::String tmp1 = rule;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::EReg tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	::EReg r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(75)
	bool tmp3 = (r == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	if ((tmp3)){
		HX_STACK_LINE(76)
		::EReg tmp4 = ::EReg_obj::__new(rule,HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		r = tmp4;
		HX_STACK_LINE(77)
		::haxe::ds::StringMap tmp5 = this->_compiledRules;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		::String tmp6 = rule;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		::EReg tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		tmp5->set(tmp6,tmp7);
	}
	HX_STACK_LINE(79)
	::EReg tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(CodeSyntax_obj,getCompiledRule,return )

::haxe::ui::richtext::syntax::CodeSyntax CodeSyntax_obj::getSyntax( ::String id){
	HX_STACK_FRAME("haxe.ui.richtext.syntax.CodeSyntax","getSyntax",0xc1565013,"haxe.ui.richtext.syntax.CodeSyntax.getSyntax","haxe/ui/richtext/syntax/CodeSyntax.hx",27,0x47c0ea96)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(28)
	::haxe::ui::richtext::syntax::CodeSyntax tmp = ::haxe::ui::richtext::syntax::CodeSyntax_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::haxe::ui::richtext::syntax::CodeSyntax syntax = tmp;		HX_STACK_VAR(syntax,"syntax");
	HX_STACK_LINE(29)
	::String tmp1 = id.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	id = tmp1;
	HX_STACK_LINE(30)
	bool tmp2 = (id == HX_HCSTRING("haxe","\x26","\x34","\x08","\x45"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	if ((tmp2)){
		HX_STACK_LINE(31)
		::haxe::ui::richtext::syntax::HaxeSyntax tmp3 = ::haxe::ui::richtext::syntax::HaxeSyntax_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		syntax = tmp3;
	}
	else{
		HX_STACK_LINE(32)
		bool tmp3 = (id == HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		if ((tmp3)){
			HX_STACK_LINE(33)
			::haxe::ui::richtext::syntax::XMLSyntax tmp4 = ::haxe::ui::richtext::syntax::XMLSyntax_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			syntax = tmp4;
		}
		else{
			HX_STACK_LINE(34)
			bool tmp4 = (id == HX_HCSTRING("css","\xc3","\x83","\x4b","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			if ((tmp4)){
				HX_STACK_LINE(35)
				::haxe::ui::richtext::syntax::CSSSyntax tmp5 = ::haxe::ui::richtext::syntax::CSSSyntax_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				syntax = tmp5;
			}
			else{
				HX_STACK_LINE(36)
				bool tmp5 = (id == HX_HCSTRING("haxeui-xml","\xc4","\xfc","\x44","\x9e"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(36)
				if ((tmp5)){
					HX_STACK_LINE(37)
					::haxe::ui::richtext::syntax::HaxeUIXMLSyntax tmp6 = ::haxe::ui::richtext::syntax::HaxeUIXMLSyntax_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(37)
					syntax = tmp6;
				}
			}
		}
	}
	HX_STACK_LINE(39)
	::haxe::ui::richtext::syntax::CodeSyntax tmp3 = syntax;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodeSyntax_obj,getSyntax,return )


CodeSyntax_obj::CodeSyntax_obj()
{
}

void CodeSyntax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodeSyntax);
	HX_MARK_MEMBER_NAME(_rules,"_rules");
	HX_MARK_MEMBER_NAME(_rulesArray,"_rulesArray");
	HX_MARK_MEMBER_NAME(_compiledRules,"_compiledRules");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_identifier,"_identifier");
	HX_MARK_MEMBER_NAME(identifier,"identifier");
	HX_MARK_MEMBER_NAME(rules,"rules");
	HX_MARK_MEMBER_NAME(rulesArray,"rulesArray");
	HX_MARK_END_CLASS();
}

void CodeSyntax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rules,"_rules");
	HX_VISIT_MEMBER_NAME(_rulesArray,"_rulesArray");
	HX_VISIT_MEMBER_NAME(_compiledRules,"_compiledRules");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_identifier,"_identifier");
	HX_VISIT_MEMBER_NAME(identifier,"identifier");
	HX_VISIT_MEMBER_NAME(rules,"rules");
	HX_VISIT_MEMBER_NAME(rulesArray,"rulesArray");
}

Dynamic CodeSyntax_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { return inCallProp == hx::paccAlways ? get_rules() : rules; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { return _rules; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addRule") ) { return addRule_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_rules") ) { return get_rules_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identifier") ) { return inCallProp == hx::paccAlways ? get_identifier() : identifier; }
		if (HX_FIELD_EQ(inName,"rulesArray") ) { return inCallProp == hx::paccAlways ? get_rulesArray() : rulesArray; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_rulesArray") ) { return _rulesArray; }
		if (HX_FIELD_EQ(inName,"_identifier") ) { return _identifier; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { if (inCallProp == hx::paccAlways) return get_defaultFormat(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_compiledRules") ) { return _compiledRules; }
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"get_identifier") ) { return get_identifier_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rulesArray") ) { return get_rulesArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCompiledRule") ) { return getCompiledRule_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_defaultFormat") ) { return get_defaultFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultFormat") ) { return set_defaultFormat_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool CodeSyntax_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getSyntax") ) { outValue = getSyntax_dyn(); return true;  }
	}
	return false;
}

Dynamic CodeSyntax_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { rules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identifier") ) { identifier=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rulesArray") ) { rulesArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_rulesArray") ) { _rulesArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_identifier") ) { _identifier=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { if (inCallProp == hx::paccAlways) return set_defaultFormat(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_compiledRules") ) { _compiledRules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CodeSyntax_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CodeSyntax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_rules","\x38","\xab","\x3d","\xed"));
	outFields->push(HX_HCSTRING("_rulesArray","\x41","\x87","\x0f","\x19"));
	outFields->push(HX_HCSTRING("_compiledRules","\xe7","\x16","\x83","\x47"));
	outFields->push(HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"));
	outFields->push(HX_HCSTRING("_identifier","\x88","\x95","\xb6","\xa0"));
	outFields->push(HX_HCSTRING("identifier","\x69","\xc8","\x2c","\xce"));
	outFields->push(HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"));
	outFields->push(HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"));
	outFields->push(HX_HCSTRING("rulesArray","\x22","\xba","\x85","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(CodeSyntax_obj,_rules),HX_HCSTRING("_rules","\x38","\xab","\x3d","\xed")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CodeSyntax_obj,_rulesArray),HX_HCSTRING("_rulesArray","\x41","\x87","\x0f","\x19")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(CodeSyntax_obj,_compiledRules),HX_HCSTRING("_compiledRules","\xe7","\x16","\x83","\x47")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(CodeSyntax_obj,_defaultFormat),HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36")},
	{hx::fsString,(int)offsetof(CodeSyntax_obj,_identifier),HX_HCSTRING("_identifier","\x88","\x95","\xb6","\xa0")},
	{hx::fsString,(int)offsetof(CodeSyntax_obj,identifier),HX_HCSTRING("identifier","\x69","\xc8","\x2c","\xce")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(CodeSyntax_obj,rules),HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CodeSyntax_obj,rulesArray),HX_HCSTRING("rulesArray","\x22","\xba","\x85","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_rules","\x38","\xab","\x3d","\xed"),
	HX_HCSTRING("_rulesArray","\x41","\x87","\x0f","\x19"),
	HX_HCSTRING("_compiledRules","\xe7","\x16","\x83","\x47"),
	HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"),
	HX_HCSTRING("_identifier","\x88","\x95","\xb6","\xa0"),
	HX_HCSTRING("addRule","\xbd","\xbb","\xf0","\x87"),
	HX_HCSTRING("identifier","\x69","\xc8","\x2c","\xce"),
	HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"),
	HX_HCSTRING("rulesArray","\x22","\xba","\x85","\x46"),
	HX_HCSTRING("get_identifier","\xb2","\x50","\x22","\x44"),
	HX_HCSTRING("get_defaultFormat","\x2f","\x6e","\x77","\xfe"),
	HX_HCSTRING("set_defaultFormat","\x3b","\x46","\xe5","\x21"),
	HX_HCSTRING("get_rules","\x4e","\xc0","\xff","\x34"),
	HX_HCSTRING("get_rulesArray","\x6b","\x42","\x7b","\xbc"),
	HX_HCSTRING("getCompiledRule","\xe3","\x36","\x1e","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodeSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodeSyntax_obj::__mClass,"__mClass");
};

#endif

hx::Class CodeSyntax_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getSyntax","\x99","\x0b","\xeb","\x6b"),
	::String(null()) };

void CodeSyntax_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.syntax.CodeSyntax","\x68","\x28","\xec","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CodeSyntax_obj::__GetStatic;
	__mClass->mSetStaticField = &CodeSyntax_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CodeSyntax_obj >;
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
} // end namespace richtext
} // end namespace syntax
