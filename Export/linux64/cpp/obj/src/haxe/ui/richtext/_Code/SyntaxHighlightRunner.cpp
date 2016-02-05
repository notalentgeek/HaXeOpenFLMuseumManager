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
#ifndef INCLUDED_haxe_ui_richtext__Code_SyntaxHighlightRunner
#include <haxe/ui/richtext/_Code/SyntaxHighlightRunner.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{
namespace _Code{

Void SyntaxHighlightRunner_obj::__construct(::openfl::_legacy::text::TextField tf,::haxe::ui::richtext::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare)
{
HX_STACK_FRAME("haxe.ui.richtext._Code.SyntaxHighlightRunner","new",0x55d93d1e,"haxe.ui.richtext._Code.SyntaxHighlightRunner.new","haxe/ui/richtext/Code.hx",122,0x3e2126bd)
HX_STACK_THIS(this)
HX_STACK_ARG(tf,"tf")
HX_STACK_ARG(syntax,"syntax")
HX_STACK_ARG(__o_timeShare,"timeShare")
Float timeShare = __o_timeShare.Default(((Float).9));
{
	HX_STACK_LINE(151)
	this->_ruleIndex = (int)0;
	HX_STACK_LINE(129)
	this->_matchIndex = (int)0;
	HX_STACK_LINE(128)
	this->_matchedSyntax = false;
	HX_STACK_LINE(132)
	super::__construct();
	HX_STACK_LINE(133)
	this->_tf = tf;
	HX_STACK_LINE(134)
	this->_syntax = syntax;
	HX_STACK_LINE(135)
	this->_runningTimeShare = timeShare;
	HX_STACK_LINE(143)
	::haxe::ui::richtext::syntax::CodeSyntax tmp = this->_syntax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	this->_syntaxRules = tmp->get_rulesArray();
	HX_STACK_LINE(144)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(144)
	this->_matches = tmp1;
	HX_STACK_LINE(145)
	::String tmp2 = tf->get_text();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	this->_txt = tmp2;
	HX_STACK_LINE(146)
	::String tmp3 = this->_txt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(146)
	bool tmp4 = (tmp3 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	if ((tmp4)){
		HX_STACK_LINE(147)
		::haxe::ui::richtext::syntax::CodeSyntax tmp5 = this->_syntax;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		::openfl::_legacy::text::TextFormat tmp6 = tmp5->get_defaultFormat();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		::String tmp7 = this->_txt;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		tf->setTextFormat(tmp6,(int)0,tmp8);
	}
}
;
	return null();
}

//SyntaxHighlightRunner_obj::~SyntaxHighlightRunner_obj() { }

Dynamic SyntaxHighlightRunner_obj::__CreateEmpty() { return  new SyntaxHighlightRunner_obj; }
hx::ObjectPtr< SyntaxHighlightRunner_obj > SyntaxHighlightRunner_obj::__new(::openfl::_legacy::text::TextField tf,::haxe::ui::richtext::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare)
{  hx::ObjectPtr< SyntaxHighlightRunner_obj > _result_ = new SyntaxHighlightRunner_obj();
	_result_->__construct(tf,syntax,__o_timeShare);
	return _result_;}

Dynamic SyntaxHighlightRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SyntaxHighlightRunner_obj > _result_ = new SyntaxHighlightRunner_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void SyntaxHighlightRunner_obj::run( ){
{
		HX_STACK_FRAME("haxe.ui.richtext._Code.SyntaxHighlightRunner","run",0x55dc5409,"haxe.ui.richtext._Code.SyntaxHighlightRunner.run","haxe/ui/richtext/Code.hx",153,0x3e2126bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		bool tmp = this->_matchedSyntax;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		if ((tmp1)){
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				int tmp2 = this->_ruleIndex;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(155)
				int _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(155)
				int tmp3 = this->_syntaxRules->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(155)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(155)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(155)
					if ((tmp5)){
						HX_STACK_LINE(155)
						break;
					}
					HX_STACK_LINE(155)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(155)
					int n = tmp6;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(156)
					bool tmp7 = this->_needToExit();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(156)
					bool tmp8 = (tmp7 == true);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(156)
					if ((tmp8)){
						HX_STACK_LINE(157)
						this->_ruleIndex = n;
						HX_STACK_LINE(158)
						return null();
					}
					HX_STACK_LINE(161)
					::String tmp9 = this->_syntaxRules->__get(n);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(161)
					::String rule = tmp9;		HX_STACK_VAR(rule,"rule");
					HX_STACK_LINE(162)
					cpp::ArrayBase matches = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matches,"matches");
					HX_STACK_LINE(163)
					::haxe::ds::StringMap tmp10 = this->_matches;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(163)
					::String tmp11 = rule;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(163)
					tmp10->set(tmp11,matches);
					HX_STACK_LINE(164)
					::haxe::ui::richtext::syntax::CodeSyntax tmp12 = this->_syntax;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(164)
					::String tmp13 = rule;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(164)
					::EReg tmp14 = tmp12->getCompiledRule(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(164)
					::EReg r = tmp14;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(165)
					::String tmp15 = this->_txt;		HX_STACK_VAR(tmp15,"tmp15");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,cpp::ArrayBase,matches)
					int __ArgCount() const { return 1; }
					::String run(::EReg e){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","haxe/ui/richtext/Code.hx",165,0x3e2126bd)
						HX_STACK_ARG(e,"e")
						{
							HX_STACK_LINE(166)
							Dynamic tmp16 = e->matchedPos();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(166)
							Dynamic pos = tmp16;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(167)
							Dynamic tmp17 = pos;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(167)
							matches->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
							HX_STACK_LINE(168)
							return HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(165)
					r->map(tmp15, Dynamic(new _Function_4_1(matches)));
				}
			}
			HX_STACK_LINE(171)
			this->_ruleIndex = (int)0;
			HX_STACK_LINE(172)
			this->_matchedSyntax = true;
		}
		HX_STACK_LINE(175)
		bool tmp2 = this->_matchedSyntax;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		if ((tmp3)){
			HX_STACK_LINE(176)
			int tmp4 = this->_ruleIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			int _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			int tmp5 = this->_syntaxRules->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			while((true)){
				HX_STACK_LINE(176)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(176)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				if ((tmp7)){
					HX_STACK_LINE(176)
					break;
				}
				HX_STACK_LINE(176)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				int n = tmp8;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(177)
				bool tmp9 = this->_needToExit();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				bool tmp10 = (tmp9 == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(177)
				if ((tmp10)){
					HX_STACK_LINE(178)
					this->_ruleIndex = n;
					HX_STACK_LINE(179)
					return null();
				}
				HX_STACK_LINE(182)
				::String tmp11 = this->_syntaxRules->__get(n);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(182)
				::String rule = tmp11;		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(183)
				::haxe::ds::StringMap tmp12 = this->_matches;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(183)
				::String tmp13 = rule;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(183)
				cpp::ArrayBase matches = ((cpp::ArrayBase)(tmp12->get(tmp13)));		HX_STACK_VAR(matches,"matches");
				HX_STACK_LINE(184)
				{
					HX_STACK_LINE(184)
					int tmp14 = this->_matchIndex;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(184)
					int _g3 = tmp14;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(184)
					int _g2 = matches->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(184)
					while((true)){
						HX_STACK_LINE(184)
						bool tmp15 = (_g3 < _g2);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(184)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(184)
						if ((tmp16)){
							HX_STACK_LINE(184)
							break;
						}
						HX_STACK_LINE(184)
						int tmp17 = (_g3)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(184)
						int m = tmp17;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(185)
						bool tmp18 = this->_needToExit();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(185)
						bool tmp19 = (tmp18 == true);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						if ((tmp19)){
							HX_STACK_LINE(186)
							this->_ruleIndex = n;
							HX_STACK_LINE(187)
							this->_matchIndex = m;
							HX_STACK_LINE(188)
							return null();
						}
						HX_STACK_LINE(191)
						Dynamic tmp20 = matches->__GetItem(m);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(191)
						Dynamic match = tmp20;		HX_STACK_VAR(match,"match");
						HX_STACK_LINE(192)
						::openfl::_legacy::text::TextField tmp21 = this->_tf;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(192)
						::openfl::_legacy::text::TextFormat tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(192)
						{
							HX_STACK_LINE(192)
							::haxe::ui::richtext::syntax::CodeSyntax tmp23 = this->_syntax;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(192)
							::haxe::ds::StringMap tmp24 = tmp23->get_rules();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(192)
							::haxe::IMap this1 = tmp24;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(192)
							::String tmp25 = rule;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(192)
							tmp22 = this1->get(tmp25);
						}
						HX_STACK_LINE(192)
						Dynamic tmp23 = (match->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + match->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(192)
						tmp21->setTextFormat(tmp22,match->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ),tmp23);
					}
				}
				HX_STACK_LINE(195)
				this->_matchIndex = (int)0;
			}
		}
		HX_STACK_LINE(199)
		this->_needToExit = null();
		HX_STACK_LINE(200)
		this->_isComplete = true;
	}
return null();
}



SyntaxHighlightRunner_obj::SyntaxHighlightRunner_obj()
{
}

void SyntaxHighlightRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SyntaxHighlightRunner);
	HX_MARK_MEMBER_NAME(_tf,"_tf");
	HX_MARK_MEMBER_NAME(_syntax,"_syntax");
	HX_MARK_MEMBER_NAME(_syntaxRules,"_syntaxRules");
	HX_MARK_MEMBER_NAME(_matches,"_matches");
	HX_MARK_MEMBER_NAME(_txt,"_txt");
	HX_MARK_MEMBER_NAME(_matchedSyntax,"_matchedSyntax");
	HX_MARK_MEMBER_NAME(_matchIndex,"_matchIndex");
	HX_MARK_MEMBER_NAME(_ruleIndex,"_ruleIndex");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SyntaxHighlightRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tf,"_tf");
	HX_VISIT_MEMBER_NAME(_syntax,"_syntax");
	HX_VISIT_MEMBER_NAME(_syntaxRules,"_syntaxRules");
	HX_VISIT_MEMBER_NAME(_matches,"_matches");
	HX_VISIT_MEMBER_NAME(_txt,"_txt");
	HX_VISIT_MEMBER_NAME(_matchedSyntax,"_matchedSyntax");
	HX_VISIT_MEMBER_NAME(_matchIndex,"_matchIndex");
	HX_VISIT_MEMBER_NAME(_ruleIndex,"_ruleIndex");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SyntaxHighlightRunner_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { return _tf; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_txt") ) { return _txt; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { return _syntax; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_matches") ) { return _matches; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ruleIndex") ) { return _ruleIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_matchIndex") ) { return _matchIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_syntaxRules") ) { return _syntaxRules; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_matchedSyntax") ) { return _matchedSyntax; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SyntaxHighlightRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { _tf=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_txt") ) { _txt=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { _syntax=inValue.Cast< ::haxe::ui::richtext::syntax::CodeSyntax >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_matches") ) { _matches=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ruleIndex") ) { _ruleIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_matchIndex") ) { _matchIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_syntaxRules") ) { _syntaxRules=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_matchedSyntax") ) { _matchedSyntax=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SyntaxHighlightRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tf","\x91","\x7b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_syntax","\x02","\x94","\x0b","\x5e"));
	outFields->push(HX_HCSTRING("_syntaxRules","\x95","\x78","\xb6","\xfc"));
	outFields->push(HX_HCSTRING("_matches","\x74","\x96","\x34","\xc3"));
	outFields->push(HX_HCSTRING("_txt","\x71","\xb3","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_matchedSyntax","\xa8","\xe6","\xe9","\x41"));
	outFields->push(HX_HCSTRING("_matchIndex","\xac","\xd4","\xbf","\x85"));
	outFields->push(HX_HCSTRING("_ruleIndex","\x37","\xfc","\x8c","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_tf),HX_HCSTRING("_tf","\x91","\x7b","\x48","\x00")},
	{hx::fsObject /*::haxe::ui::richtext::syntax::CodeSyntax*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_syntax),HX_HCSTRING("_syntax","\x02","\x94","\x0b","\x5e")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_syntaxRules),HX_HCSTRING("_syntaxRules","\x95","\x78","\xb6","\xfc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_matches),HX_HCSTRING("_matches","\x74","\x96","\x34","\xc3")},
	{hx::fsString,(int)offsetof(SyntaxHighlightRunner_obj,_txt),HX_HCSTRING("_txt","\x71","\xb3","\x23","\x3f")},
	{hx::fsBool,(int)offsetof(SyntaxHighlightRunner_obj,_matchedSyntax),HX_HCSTRING("_matchedSyntax","\xa8","\xe6","\xe9","\x41")},
	{hx::fsInt,(int)offsetof(SyntaxHighlightRunner_obj,_matchIndex),HX_HCSTRING("_matchIndex","\xac","\xd4","\xbf","\x85")},
	{hx::fsInt,(int)offsetof(SyntaxHighlightRunner_obj,_ruleIndex),HX_HCSTRING("_ruleIndex","\x37","\xfc","\x8c","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_tf","\x91","\x7b","\x48","\x00"),
	HX_HCSTRING("_syntax","\x02","\x94","\x0b","\x5e"),
	HX_HCSTRING("_syntaxRules","\x95","\x78","\xb6","\xfc"),
	HX_HCSTRING("_matches","\x74","\x96","\x34","\xc3"),
	HX_HCSTRING("_txt","\x71","\xb3","\x23","\x3f"),
	HX_HCSTRING("_matchedSyntax","\xa8","\xe6","\xe9","\x41"),
	HX_HCSTRING("_matchIndex","\xac","\xd4","\xbf","\x85"),
	HX_HCSTRING("_ruleIndex","\x37","\xfc","\x8c","\xad"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SyntaxHighlightRunner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SyntaxHighlightRunner_obj::__mClass,"__mClass");
};

#endif

hx::Class SyntaxHighlightRunner_obj::__mClass;

void SyntaxHighlightRunner_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext._Code.SyntaxHighlightRunner","\x2c","\x16","\x39","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SyntaxHighlightRunner_obj >;
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
} // end namespace _Code
