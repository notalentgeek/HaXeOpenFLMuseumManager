#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Access
#include <haxe/macro/Access.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprDef
#include <haxe/macro/ExprDef.h>
#endif
#ifndef INCLUDED_haxe_macro_FieldType
#include <haxe/macro/FieldType.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Macros
#include <haxe/ui/toolkit/core/Macros.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_XmlUtil
#include <haxe/ui/toolkit/util/XmlUtil.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Macros_obj::__construct()
{
	return null();
}

//Macros_obj::~Macros_obj() { }

Dynamic Macros_obj::__CreateEmpty() { return  new Macros_obj; }
hx::ObjectPtr< Macros_obj > Macros_obj::__new()
{  hx::ObjectPtr< Macros_obj > _result_ = new Macros_obj();
	_result_->__construct();
	return _result_;}

Dynamic Macros_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Macros_obj > _result_ = new Macros_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap Macros_obj::componentClasses;

::haxe::ds::StringMap Macros_obj::dataSourceClasses;

::haxe::ds::StringMap Macros_obj::themeResources;

Void Macros_obj::processNode( ::Xml node,::haxe::ds::StringMap types,Array< ::String > paths){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","processNode",0xd621bf57,"haxe.ui.toolkit.core.Macros.processNode","haxe/ui/toolkit/core/Macros.hx",450,0x3fba9eca)
		HX_STACK_ARG(node,"node")
		HX_STACK_ARG(types,"types")
		HX_STACK_ARG(paths,"paths")
		HX_STACK_LINE(451)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			int tmp1 = node->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(451)
			int tmp2 = ::Xml_obj::Element;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(451)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(451)
			if ((tmp3)){
				HX_STACK_LINE(451)
				::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(451)
				HX_STACK_DO_THROW(tmp4);
			}
			HX_STACK_LINE(451)
			tmp = node->nodeName;
		}
		HX_STACK_LINE(451)
		::String nodeName = tmp;		HX_STACK_VAR(nodeName,"nodeName");
		HX_STACK_LINE(452)
		int tmp1 = nodeName.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		int n = tmp1;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(453)
		bool tmp2 = (n != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(453)
		if ((tmp2)){
			HX_STACK_LINE(454)
			int tmp3 = (n + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(454)
			int tmp4 = nodeName.length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(454)
			::String tmp5 = nodeName.substr(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(454)
			nodeName = tmp5;
		}
		HX_STACK_LINE(456)
		::String tmp3 = nodeName.toLowerCase();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(456)
		nodeName = tmp3;
		HX_STACK_LINE(458)
		bool tmp4 = (nodeName == HX_HCSTRING("import","\x65","\xa1","\x82","\x08"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(458)
		if ((tmp4)){
			HX_STACK_LINE(460)
			::String tmp5 = node->get(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(460)
			::String resourcePath = tmp5;		HX_STACK_VAR(resourcePath,"resourcePath");
			HX_STACK_LINE(461)
			::String tmp6 = resourcePath;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(461)
			::String tmp7 = ::haxe::ui::toolkit::core::Macros_obj::resolveResource(tmp6,paths);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(461)
			resourcePath = tmp7;
			HX_STACK_LINE(462)
			::String tmp8 = resourcePath;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(462)
			bool tmp9 = ::sys::FileSystem_obj::exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(462)
			bool tmp10 = (tmp9 == false);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(462)
			if ((tmp10)){
				HX_STACK_LINE(463)
				::String tmp11 = (HX_HCSTRING("WARNING: ","\xe2","\xe7","\x94","\xf3") + resourcePath);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(463)
				::String tmp12 = (tmp11 + HX_HCSTRING(" not found","\x55","\xf3","\xa5","\x21"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(463)
				Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Macros.hx","\x17","\x12","\xd7","\xfd"),463,HX_HCSTRING("haxe.ui.toolkit.core.Macros","\xb4","\x92","\xaf","\x02"),HX_HCSTRING("processNode","\x11","\x3c","\xa1","\x65"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(463)
				::haxe::Log_obj::trace(tmp12,tmp13);
			}
			else{
				HX_STACK_LINE(465)
				::String tmp11 = resourcePath;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(465)
				::String tmp12 = ::sys::io::File_obj::getContent(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(465)
				::String contents = tmp12;		HX_STACK_VAR(contents,"contents");
				HX_STACK_LINE(466)
				::String tmp13 = contents;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(466)
				::Xml tmp14 = ::Xml_obj::parse(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(466)
				::Xml xml = tmp14;		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(467)
				::Xml tmp15 = xml->firstElement();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(467)
				::haxe::ds::StringMap tmp16 = types;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(467)
				::haxe::ui::toolkit::core::Macros_obj::processNode(tmp15,tmp16,paths);
				HX_STACK_LINE(468)
				return null();
			}
		}
		HX_STACK_LINE(473)
		::String tmp5 = node->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(473)
		::String id = tmp5;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(474)
		bool tmp6 = (id != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(474)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(474)
		if ((tmp6)){
			HX_STACK_LINE(474)
			tmp7 = (id.length > (int)0);
		}
		else{
			HX_STACK_LINE(474)
			tmp7 = false;
		}
		HX_STACK_LINE(474)
		if ((tmp7)){
			HX_STACK_LINE(475)
			::haxe::ds::StringMap tmp8 = ::haxe::ui::toolkit::core::Macros_obj::componentClasses;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(475)
			::String tmp9 = nodeName;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(475)
			::String tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(475)
			::String cls = tmp10;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(476)
			bool tmp11 = (cls != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(476)
			if ((tmp11)){
				HX_STACK_LINE(477)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(477)
				::String tmp13 = cls;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(477)
				types->set(tmp12,tmp13);
			}
			else{
				HX_STACK_LINE(479)
				::String tmp12 = (HX_HCSTRING("WARNING: '","\x05","\xfe","\xb5","\x2e") + nodeName);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(479)
				::String tmp13 = (tmp12 + HX_HCSTRING("' hasnt been registered","\x7d","\x9f","\xf0","\x1f"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(479)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Macros.hx","\x17","\x12","\xd7","\xfd"),479,HX_HCSTRING("haxe.ui.toolkit.core.Macros","\xb4","\x92","\xaf","\x02"),HX_HCSTRING("processNode","\x11","\x3c","\xa1","\x65"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(479)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		HX_STACK_LINE(482)
		Dynamic tmp8 = node->elements();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp8);  __it->hasNext(); ){
			::Xml child = __it->next();
			{
				HX_STACK_LINE(483)
				::Xml tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(483)
				::haxe::ds::StringMap tmp10 = types;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(483)
				::haxe::ui::toolkit::core::Macros_obj::processNode(tmp9,tmp10,paths);
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,processNode,(void))

Dynamic Macros_obj::getFunction( ::String name,cpp::ArrayBase fields){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getFunction",0xaac6f114,"haxe.ui.toolkit.core.Macros.getFunction","haxe/ui/toolkit/core/Macros.hx",487,0x3fba9eca)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(488)
	Dynamic fn = null();		HX_STACK_VAR(fn,"fn");
	HX_STACK_LINE(489)
	{
		HX_STACK_LINE(489)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(489)
		while((true)){
			HX_STACK_LINE(489)
			bool tmp = (_g < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(489)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(489)
			if ((tmp1)){
				HX_STACK_LINE(489)
				break;
			}
			HX_STACK_LINE(489)
			Dynamic tmp2 = fields->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(489)
			Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(489)
			++(_g);
			HX_STACK_LINE(490)
			bool tmp3 = (f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == name);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(490)
			if ((tmp3)){
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					::haxe::macro::FieldType _g1 = f->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(491)
					int _switch_1 = (_g1->__Index());
					if (  ( _switch_1==(int)1)){
						HX_STACK_LINE(491)
						Dynamic tmp4 = (::haxe::macro::FieldType(_g1))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(491)
						Dynamic f1 = tmp4;		HX_STACK_VAR(f1,"f1");
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(493)
							fn = f1;
							HX_STACK_LINE(494)
							break;
						}
					}
					else  {
					}
;
;
				}
				HX_STACK_LINE(497)
				break;
			}
		}
	}
	HX_STACK_LINE(500)
	Dynamic tmp = fn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,getFunction,return )

Void Macros_obj::addFunction( ::String name,Dynamic e,Array< ::Dynamic > access,cpp::ArrayBase fields,Dynamic pos){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","addFunction",0xb62f659f,"haxe.ui.toolkit.core.Macros.addFunction","haxe/ui/toolkit/core/Macros.hx",503,0x3fba9eca)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(access,"access")
		HX_STACK_ARG(fields,"fields")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(504)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			::haxe::macro::ExprDef tmp1 = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(504)
			::haxe::macro::ExprDef _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(504)
			switch( (int)(_g->__Index())){
				case (int)11: {
					HX_STACK_LINE(504)
					Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(504)
					Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(505)
					tmp = f;
				}
				;break;
				default: {
					HX_STACK_LINE(506)
					HX_STACK_DO_THROW(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));
				}
			}
		}
		HX_STACK_LINE(504)
		Dynamic fn = tmp;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(508)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(508)
		Dynamic tmp2 = fn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(508)
		::haxe::macro::FieldType tmp3 = ::haxe::macro::FieldType_obj::FFun(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(508)
		Dynamic tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::Dynamic > &access,Dynamic &tmp4,::haxe::macro::FieldType &tmp3,::String &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",508,0x3fba9eca)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp1,false);
					__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , null(),false);
					__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , cpp::ArrayBase_obj::__new(),false);
					__result->Add(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b") , access,false);
					__result->Add(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47") , tmp3,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(508)
		Dynamic tmp5 = _Function_1_1::Block(access,tmp4,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(508)
		fields->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Macros_obj,addFunction,(void))

cpp::ArrayBase Macros_obj::getFieldsWithMeta( ::String meta,cpp::ArrayBase fields){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getFieldsWithMeta",0x6d353e80,"haxe.ui.toolkit.core.Macros.getFieldsWithMeta","haxe/ui/toolkit/core/Macros.hx",511,0x3fba9eca)
	HX_STACK_ARG(meta,"meta")
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(512)
	cpp::ArrayBase arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(514)
	{
		HX_STACK_LINE(514)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			bool tmp = (_g < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(514)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(514)
			if ((tmp1)){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(514)
			Dynamic tmp2 = fields->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(514)
			Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(514)
			++(_g);
			HX_STACK_LINE(515)
			Dynamic tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(515)
			::String tmp4 = meta;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(515)
			bool tmp5 = ::haxe::ui::toolkit::core::Macros_obj::hasMeta(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(515)
			if ((tmp5)){
				HX_STACK_LINE(516)
				Dynamic tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(516)
				arr->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
			}
		}
	}
	HX_STACK_LINE(520)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,getFieldsWithMeta,return )

Dynamic Macros_obj::getSuperClass( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getSuperClass",0xf89665b9,"haxe.ui.toolkit.core.Macros.getSuperClass","haxe/ui/toolkit/core/Macros.hx",523,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(524)
	Dynamic superClass = null();		HX_STACK_VAR(superClass,"superClass");
	HX_STACK_LINE(525)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(525)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(526)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(525)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(527)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(525)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(528)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(525)
			cpp::ArrayBase t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(529)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(525)
			::haxe::macro::Type tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			::haxe::macro::Type t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(530)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(525)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(531)
			{
				HX_STACK_LINE(532)
				Dynamic tmp1 = t1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(532)
				superClass = tmp1->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic );
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(525)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(534)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(525)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(535)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(525)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(525)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(536)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(538)
	Dynamic tmp = superClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getSuperClass,return )

Void Macros_obj::insertLine( Dynamic fn,Dynamic e,int location){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","insertLine",0xea641f47,"haxe.ui.toolkit.core.Macros.insertLine","haxe/ui/toolkit/core/Macros.hx",541,0x3fba9eca)
		HX_STACK_ARG(fn,"fn")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(location,"location")
		HX_STACK_LINE(542)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			::haxe::macro::ExprDef tmp1 = fn->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(542)
			::haxe::macro::ExprDef _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(542)
			switch( (int)(_g->__Index())){
				case (int)12: {
					HX_STACK_LINE(542)
					cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(543)
					{
						HX_STACK_LINE(543)
						int tmp2 = location;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(543)
						Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(543)
						::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EBlock(::haxe::ui::toolkit::core::Macros_obj::insertExpr(el,tmp2,tmp3));		HX_STACK_VAR(tmp4,"tmp4");
						struct _Function_4_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",543,0x3fba9eca)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("/usr/share/haxe/lib/haxeui/1,8,3/haxe/ui/toolkit/core/Macros.hx","\x31","\x46","\x17","\x55"),false);
									__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)18014,false);
									__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)18043,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(543)
						Dynamic tmp5 = _Function_4_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
						struct _Function_4_2{
							inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",543,0x3fba9eca)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(543)
						Dynamic tmp6 = _Function_4_2::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(543)
						tmp = tmp6;
					}
				}
				;break;
				default: {
					HX_STACK_LINE(544)
					int tmp2 = location;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(544)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(544)
					::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EBlock(::haxe::ui::toolkit::core::Macros_obj::insertExpr(cpp::ArrayBase_obj::__new().Add(fn->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )),tmp2,tmp3));		HX_STACK_VAR(tmp4,"tmp4");
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",544,0x3fba9eca)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("/usr/share/haxe/lib/haxeui/1,8,3/haxe/ui/toolkit/core/Macros.hx","\x31","\x46","\x17","\x55"),false);
								__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)18066,false);
								__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)18104,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(544)
					Dynamic tmp5 = _Function_3_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
					struct _Function_3_2{
						inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",544,0x3fba9eca)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(544)
					Dynamic tmp6 = _Function_3_2::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(544)
					tmp = tmp6;
				}
			}
		}
		HX_STACK_LINE(542)
		fn->__FieldRef(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43")) = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,insertLine,(void))

cpp::ArrayBase Macros_obj::insertExpr( cpp::ArrayBase arr,int pos,Dynamic item){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","insertExpr",0xe5cf0488,"haxe.ui.toolkit.core.Macros.insertExpr","haxe/ui/toolkit/core/Macros.hx",548,0x3fba9eca)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(549)
	bool tmp = (pos == (int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	if ((tmp)){
		HX_STACK_LINE(550)
		Dynamic tmp1 = item;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		arr->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
	else{
		HX_STACK_LINE(552)
		int tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(552)
		Dynamic tmp2 = item;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(552)
		arr->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp1,tmp2);
	}
	HX_STACK_LINE(554)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,insertExpr,return )

::String Macros_obj::getClassNameFromType( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getClassNameFromType",0xba05058b,"haxe.ui.toolkit.core.Macros.getClassNameFromType","haxe/ui/toolkit/core/Macros.hx",662,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(663)
	::String className = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(664)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(664)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(665)
			{
				HX_STACK_LINE(665)
				::String tmp1 = t1->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(665)
				className = tmp1;
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(664)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(666)
				::String tmp1 = t1->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(666)
				className = tmp1;
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(664)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(667)
			className = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(664)
			cpp::ArrayBase t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(668)
			{
				HX_STACK_LINE(668)
				::String tmp = t1->toString();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(668)
				className = tmp;
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(664)
			::haxe::macro::Type tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			::haxe::macro::Type t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(669)
			className = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(664)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(670)
			{
				HX_STACK_LINE(670)
				::String tmp1 = t1->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(670)
				className = tmp1;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(664)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(671)
			{
				HX_STACK_LINE(671)
				::String tmp1 = t1->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(671)
				className = tmp1;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(664)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(672)
			{
				HX_STACK_LINE(672)
				::String tmp1 = t1->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(672)
				className = tmp1;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(664)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(673)
			{
				HX_STACK_LINE(673)
				::String tmp1 = t1->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(673)
				className = tmp1;
			}
		}
		;break;
	}
	HX_STACK_LINE(675)
	::String tmp = className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(675)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getClassNameFromType,return )

bool Macros_obj::hasMeta( Dynamic f,::String meta){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","hasMeta",0x27fd5385,"haxe.ui.toolkit.core.Macros.hasMeta","haxe/ui/toolkit/core/Macros.hx",678,0x3fba9eca)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(meta,"meta")
	HX_STACK_LINE(679)
	bool has = false;		HX_STACK_VAR(has,"has");
	HX_STACK_LINE(680)
	{
		HX_STACK_LINE(680)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(680)
		cpp::ArrayBase _g1 = f->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(680)
		while((true)){
			HX_STACK_LINE(680)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(680)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(680)
			if ((tmp1)){
				HX_STACK_LINE(680)
				break;
			}
			HX_STACK_LINE(680)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(680)
			Dynamic m = tmp2;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(680)
			++(_g);
			HX_STACK_LINE(681)
			bool tmp3 = (m->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == meta);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(681)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(681)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(681)
			if ((tmp4)){
				HX_STACK_LINE(681)
				::String tmp6 = m->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(681)
				::String tmp7 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + meta);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(681)
				::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(681)
				tmp5 = (tmp6 == tmp8);
			}
			else{
				HX_STACK_LINE(681)
				tmp5 = true;
			}
			HX_STACK_LINE(681)
			if ((tmp5)){
				HX_STACK_LINE(682)
				has = true;
				HX_STACK_LINE(683)
				break;
			}
		}
	}
	HX_STACK_LINE(686)
	bool tmp = has;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(686)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,hasMeta,return )

::String Macros_obj::getClassName( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getClassName",0xeb868927,"haxe.ui.toolkit.core.Macros.getClassName","haxe/ui/toolkit/core/Macros.hx",689,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(690)
	::String name = null();		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(691)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(691)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(692)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(691)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(693)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(691)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(694)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(691)
			cpp::ArrayBase t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(695)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(691)
			::haxe::macro::Type tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			::haxe::macro::Type t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(696)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(691)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(697)
			{
				HX_STACK_LINE(698)
				Dynamic tmp1 = t1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(698)
				name = tmp1->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(691)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(700)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(691)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(701)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(691)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(691)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(702)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(704)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getClassName,return )

bool Macros_obj::hasInterface( ::haxe::macro::Type t,::String interfaceRequired){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","hasInterface",0xc71e70f9,"haxe.ui.toolkit.core.Macros.hasInterface","haxe/ui/toolkit/core/Macros.hx",707,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(interfaceRequired,"interfaceRequired")
	HX_STACK_LINE(708)
	bool has = false;		HX_STACK_VAR(has,"has");
	HX_STACK_LINE(709)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(709)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(710)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(709)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(711)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(709)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(712)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(709)
			cpp::ArrayBase t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(713)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(709)
			::haxe::macro::Type tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			::haxe::macro::Type t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(714)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(709)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(716)
			while((true)){
				HX_STACK_LINE(716)
				bool tmp1 = (t1 != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(716)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(716)
				if ((tmp2)){
					HX_STACK_LINE(716)
					break;
				}
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(717)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(717)
					Dynamic tmp3 = t1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(717)
					cpp::ArrayBase _g1 = tmp3->__Field(HX_HCSTRING("interfaces","\x9a","\x50","\x11","\x65"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(717)
					while((true)){
						HX_STACK_LINE(717)
						bool tmp4 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(717)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(717)
						if ((tmp5)){
							HX_STACK_LINE(717)
							break;
						}
						HX_STACK_LINE(717)
						Dynamic tmp6 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(717)
						Dynamic i = tmp6;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(717)
						++(_g);
						HX_STACK_LINE(718)
						::String tmp7 = i->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic )->toString();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(718)
						::String interfaceName = tmp7;		HX_STACK_VAR(interfaceName,"interfaceName");
						HX_STACK_LINE(719)
						bool tmp8 = (interfaceName == interfaceRequired);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(719)
						if ((tmp8)){
							HX_STACK_LINE(720)
							has = true;
							HX_STACK_LINE(721)
							break;
						}
					}
				}
				HX_STACK_LINE(725)
				bool tmp3 = (has == false);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(725)
				if ((tmp3)){
					HX_STACK_LINE(726)
					Dynamic tmp4 = t1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(726)
					Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(726)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(726)
					if ((tmp6)){
						HX_STACK_LINE(727)
						Dynamic tmp7 = t1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(727)
						Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic )->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(727)
						t1 = tmp8;
					}
					else{
						HX_STACK_LINE(729)
						t1 = null();
					}
				}
				else{
					HX_STACK_LINE(732)
					break;
				}
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(709)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(736)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(709)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(737)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(709)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(738)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(741)
	bool tmp = has;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(741)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,hasInterface,return )

::String Macros_obj::resolveResource( ::String resourcePath,Array< ::String > paths){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","resolveResource",0xa02b9620,"haxe.ui.toolkit.core.Macros.resolveResource","haxe/ui/toolkit/core/Macros.hx",744,0x3fba9eca)
	HX_STACK_ARG(resourcePath,"resourcePath")
	HX_STACK_ARG(paths,"paths")
	HX_STACK_LINE(749)
	Array< ::String > subs = Array_obj< ::String >::__new().Add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(subs,"subs");
	HX_STACK_LINE(750)
	Array< ::String > candidates = Array_obj< ::String >::__new().Add(HX_HCSTRING("project.xml","\xc2","\x31","\x93","\x0e")).Add(HX_HCSTRING("application.xml","\xb9","\xd1","\x41","\xd5"));		HX_STACK_VAR(candidates,"candidates");
	HX_STACK_LINE(751)
	{
		HX_STACK_LINE(751)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(751)
		while((true)){
			HX_STACK_LINE(751)
			bool tmp = (_g < candidates->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(751)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(751)
			if ((tmp1)){
				HX_STACK_LINE(751)
				break;
			}
			HX_STACK_LINE(751)
			::String tmp2 = candidates->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(751)
			::String c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(751)
			++(_g);
			HX_STACK_LINE(752)
			::String tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(752)
			bool tmp4 = ::sys::FileSystem_obj::exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(752)
			if ((tmp4)){
				HX_STACK_LINE(753)
				::String tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(753)
				::String tmp6 = ::sys::io::File_obj::getContent(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(753)
				::Xml tmp7 = ::Xml_obj::parse(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(753)
				::Xml xml = tmp7;		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(754)
				::Xml tmp8 = xml->firstElement();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(754)
				Array< ::String > assetPaths = ::haxe::ui::toolkit::util::XmlUtil_obj::getPathValues(tmp8,HX_HCSTRING("/project/assets/@path","\xfe","\x3d","\xae","\x84"));		HX_STACK_VAR(assetPaths,"assetPaths");
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(755)
					while((true)){
						HX_STACK_LINE(755)
						bool tmp9 = (_g1 < assetPaths->length);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(755)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(755)
						if ((tmp10)){
							HX_STACK_LINE(755)
							break;
						}
						HX_STACK_LINE(755)
						::String tmp11 = assetPaths->__get(_g1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(755)
						::String p = tmp11;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(755)
						++(_g1);
						HX_STACK_LINE(756)
						::String tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(756)
						bool tmp13 = ::StringTools_obj::startsWith(tmp12,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(756)
						bool tmp14 = (tmp13 == false);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(756)
						if ((tmp14)){
							HX_STACK_LINE(757)
							::String tmp15 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + p);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(757)
							p = tmp15;
						}
						HX_STACK_LINE(759)
						::String tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(759)
						bool tmp16 = ::StringTools_obj::endsWith(tmp15,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(759)
						bool tmp17 = (tmp16 == false);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(759)
						if ((tmp17)){
							HX_STACK_LINE(760)
							::String tmp18 = (p + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(760)
							p = tmp18;
						}
						HX_STACK_LINE(762)
						::String tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(762)
						subs->push(tmp18);
					}
				}
				HX_STACK_LINE(764)
				break;
			}
		}
	}
	HX_STACK_LINE(768)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(769)
	::String tmp = resourcePath;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(769)
	bool tmp1 = ::sys::FileSystem_obj::exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(769)
	bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(769)
	if ((tmp2)){
		HX_STACK_LINE(770)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(770)
		while((true)){
			HX_STACK_LINE(770)
			bool tmp3 = (_g < paths->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(770)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(770)
			if ((tmp4)){
				HX_STACK_LINE(770)
				break;
			}
			HX_STACK_LINE(770)
			::String tmp5 = paths->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(770)
			::String path = tmp5;		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(770)
			++(_g);
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(771)
				while((true)){
					HX_STACK_LINE(771)
					bool tmp6 = (_g1 < subs->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(771)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(771)
					if ((tmp7)){
						HX_STACK_LINE(771)
						break;
					}
					HX_STACK_LINE(771)
					::String tmp8 = subs->__get(_g1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(771)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(771)
					++(_g1);
					HX_STACK_LINE(772)
					::String tmp9 = (path + s);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(772)
					::String tmp10 = resourcePath;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(772)
					::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(772)
					::String test = tmp11;		HX_STACK_VAR(test,"test");
					HX_STACK_LINE(773)
					int tmp12 = test.indexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(773)
					bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(773)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(773)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(773)
					if ((tmp14)){
						HX_STACK_LINE(773)
						int tmp16 = test.indexOf(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(773)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(773)
						tmp15 = (tmp17 == (int)0);
					}
					else{
						HX_STACK_LINE(773)
						tmp15 = true;
					}
					HX_STACK_LINE(773)
					if ((tmp15)){
						HX_STACK_LINE(774)
						int tmp16 = test.length;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(774)
						::String tmp17 = test.substr((int)1,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(774)
						test = tmp17;
					}
					HX_STACK_LINE(776)
					::String tmp16 = test;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(776)
					bool tmp17 = ::sys::FileSystem_obj::exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(776)
					if ((tmp17)){
						HX_STACK_LINE(777)
						resourcePath = test;
						HX_STACK_LINE(778)
						found = true;
						HX_STACK_LINE(779)
						break;
					}
				}
			}
			HX_STACK_LINE(783)
			bool tmp6 = (found == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(783)
			if ((tmp6)){
				HX_STACK_LINE(784)
				break;
			}
		}
	}
	HX_STACK_LINE(789)
	::String tmp3 = resourcePath;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(789)
	::String tmp4 = ::StringTools_obj::replace(tmp3,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(789)
	resourcePath = tmp4;
	HX_STACK_LINE(790)
	::String tmp5 = resourcePath;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(790)
	::String tmp6 = ::StringTools_obj::replace(tmp5,HX_HCSTRING("//","\x20","\x29","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(790)
	resourcePath = tmp6;
	HX_STACK_LINE(791)
	::String tmp7 = resourcePath;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(791)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,resolveResource,return )


Macros_obj::Macros_obj()
{
}

bool Macros_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hasMeta") ) { outValue = hasMeta_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"insertLine") ) { outValue = insertLine_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"insertExpr") ) { outValue = insertExpr_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"processNode") ) { outValue = processNode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFunction") ) { outValue = getFunction_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addFunction") ) { outValue = addFunction_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasInterface") ) { outValue = hasInterface_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { outValue = getSuperClass_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"themeResources") ) { outValue = themeResources; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resolveResource") ) { outValue = resolveResource_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentClasses") ) { outValue = componentClasses; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dataSourceClasses") ) { outValue = dataSourceClasses; return true;  }
		if (HX_FIELD_EQ(inName,"getFieldsWithMeta") ) { outValue = getFieldsWithMeta_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getClassNameFromType") ) { outValue = getClassNameFromType_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Macros_obj::componentClasses,HX_HCSTRING("componentClasses","\x69","\xc7","\x2a","\x8d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Macros_obj::dataSourceClasses,HX_HCSTRING("dataSourceClasses","\x81","\x4e","\x8d","\xe7")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Macros_obj::themeResources,HX_HCSTRING("themeResources","\x9c","\xb0","\xdb","\x14")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Macros_obj::componentClasses,"componentClasses");
	HX_MARK_MEMBER_NAME(Macros_obj::dataSourceClasses,"dataSourceClasses");
	HX_MARK_MEMBER_NAME(Macros_obj::themeResources,"themeResources");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Macros_obj::componentClasses,"componentClasses");
	HX_VISIT_MEMBER_NAME(Macros_obj::dataSourceClasses,"dataSourceClasses");
	HX_VISIT_MEMBER_NAME(Macros_obj::themeResources,"themeResources");
};

#endif

hx::Class Macros_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("componentClasses","\x69","\xc7","\x2a","\x8d"),
	HX_HCSTRING("dataSourceClasses","\x81","\x4e","\x8d","\xe7"),
	HX_HCSTRING("themeResources","\x9c","\xb0","\xdb","\x14"),
	HX_HCSTRING("processNode","\x11","\x3c","\xa1","\x65"),
	HX_HCSTRING("getFunction","\xce","\x6d","\x46","\x3a"),
	HX_HCSTRING("addFunction","\x59","\xe2","\xae","\x45"),
	HX_HCSTRING("getFieldsWithMeta","\xba","\x02","\x12","\xc2"),
	HX_HCSTRING("getSuperClass","\xf3","\x04","\x7a","\x04"),
	HX_HCSTRING("insertLine","\xcd","\x17","\x9e","\x2d"),
	HX_HCSTRING("insertExpr","\x0e","\xfd","\x08","\x29"),
	HX_HCSTRING("getClassNameFromType","\x91","\x21","\xd1","\x8a"),
	HX_HCSTRING("hasMeta","\x3f","\x6b","\x9d","\x17"),
	HX_HCSTRING("getClassName","\x2d","\x2f","\x94","\xeb"),
	HX_HCSTRING("hasInterface","\xff","\x16","\x2c","\xc7"),
	HX_HCSTRING("resolveResource","\xda","\xf7","\xa0","\x23"),
	::String(null()) };

void Macros_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Macros","\xb4","\x92","\xaf","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Macros_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Macros_obj >;
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

void Macros_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",11,0x3fba9eca)
		{
			HX_STACK_LINE(11)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11)
			return tmp1;
		}
		return null();
	}
};
	componentClasses= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",12,0x3fba9eca)
		{
			HX_STACK_LINE(12)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12)
			return tmp1;
		}
		return null();
	}
};
	dataSourceClasses= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",13,0x3fba9eca)
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
	themeResources= _Function_0_3::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
