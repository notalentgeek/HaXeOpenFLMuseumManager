#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor
#include <haxe/ui/toolkit/core/xml/UIProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataManager
#include <haxe/ui/toolkit/data/DataManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_AbsoluteLayout
#include <haxe/ui/toolkit/layout/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#include <haxe/ui/toolkit/layout/BoxLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_GridLayout
#include <haxe/ui/toolkit/layout/GridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalContinuousLayout
#include <haxe/ui/toolkit/layout/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout
#include <haxe/ui/toolkit/layout/VerticalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_TypeParser
#include <haxe/ui/toolkit/util/TypeParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Types
#include <haxe/ui/toolkit/util/Types.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void UIProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.UIProcessor","new",0xdabcb3ec,"haxe.ui.toolkit.core.xml.UIProcessor.new","haxe/ui/toolkit/core/xml/UIProcessor.hx",28,0xb38abe85)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
}
;
	return null();
}

//UIProcessor_obj::~UIProcessor_obj() { }

Dynamic UIProcessor_obj::__CreateEmpty() { return  new UIProcessor_obj; }
hx::ObjectPtr< UIProcessor_obj > UIProcessor_obj::__new()
{  hx::ObjectPtr< UIProcessor_obj > _result_ = new UIProcessor_obj();
	_result_->__construct();
	return _result_;}

Dynamic UIProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIProcessor_obj > _result_ = new UIProcessor_obj();
	_result_->__construct();
	return _result_;}

Dynamic UIProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.UIProcessor","process",0xb17a3bfb,"haxe.ui.toolkit.core.xml.UIProcessor.process","haxe/ui/toolkit/core/xml/UIProcessor.hx",31,0xb38abe85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(32)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(33)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		int tmp1 = node->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		int tmp2 = ::Xml_obj::Element;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		if ((tmp3)){
			HX_STACK_LINE(33)
			::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(33)
		tmp = node->nodeName;
	}
	HX_STACK_LINE(33)
	::String nodeName = tmp;		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(34)
	int tmp1 = nodeName.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int n = tmp1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(35)
	bool tmp2 = (n != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	if ((tmp2)){
		HX_STACK_LINE(36)
		int tmp3 = (n + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		int tmp4 = nodeName.length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		::String tmp5 = nodeName.substr(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		nodeName = tmp5;
	}
	HX_STACK_LINE(38)
	::String tmp3 = nodeName.toLowerCase();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	nodeName = tmp3;
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::core::ClassManager tmp4 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	::String tmp5 = nodeName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	::String tmp6 = tmp4->getComponentClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	::String className = tmp6;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(41)
	::String tmp7 = node->get(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	::String direction = tmp7;		HX_STACK_VAR(direction,"direction");
	HX_STACK_LINE(42)
	bool tmp8 = (direction != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	if ((tmp8)){
		HX_STACK_LINE(43)
		::String tmp9 = direction.substr((int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		::String directionalPrefix = tmp9;		HX_STACK_VAR(directionalPrefix,"directionalPrefix");
		HX_STACK_LINE(44)
		::String tmp10 = (directionalPrefix + nodeName);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		::String directionalName = tmp10;		HX_STACK_VAR(directionalName,"directionalName");
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::core::ClassManager tmp11 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		::String tmp12 = directionalName;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(45)
		::String tmp13 = tmp11->getComponentClassName(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(45)
		::String directionalClassName = tmp13;		HX_STACK_VAR(directionalClassName,"directionalClassName");
		HX_STACK_LINE(46)
		bool tmp14 = (directionalClassName != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(46)
		if ((tmp14)){
			HX_STACK_LINE(47)
			className = directionalClassName;
		}
	}
	HX_STACK_LINE(50)
	bool tmp9 = (className != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	if ((tmp9)){
		HX_STACK_LINE(51)
		::String tmp10 = className;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		::Xml tmp11 = node;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp12 = ::haxe::ui::toolkit::core::xml::UIProcessor_obj::createComponent(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		result = tmp12;
	}
	HX_STACK_LINE(53)
	Dynamic tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(53)
	return tmp10;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject UIProcessor_obj::createComponent( ::String className,::Xml config){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.UIProcessor","createComponent",0x5b3eafad,"haxe.ui.toolkit.core.xml.UIProcessor.createComponent","haxe/ui/toolkit/core/xml/UIProcessor.hx",56,0xb38abe85)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(57)
	::String tmp = className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::hx::Class tmp1 = ::haxe::ui::toolkit::util::Types_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::haxe::ui::toolkit::core::Component tmp2 = ::Type_obj::createInstance(tmp1,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::haxe::ui::toolkit::core::Component c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(59)
	Dynamic tmp3 = config->attributes();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
		::String attr = __it->next();
		{
			HX_STACK_LINE(60)
			::String tmp4 = attr;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = ::StringTools_obj::startsWith(tmp4,HX_HCSTRING("xmlns:","\xde","\x6e","\x37","\x05"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(61)
				continue;
			}
			HX_STACK_LINE(64)
			::String tmp6 = attr;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			::String tmp7 = config->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			::String value = tmp7;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(65)
			::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			bool tmp9 = ::haxe::ui::toolkit::hscript::ScriptUtils_obj::isScript(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			if ((tmp9)){
				HX_STACK_LINE(66)
				::haxe::ui::toolkit::hscript::ScriptManager tmp10 = ::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				::String tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				::String tmp12 = tmp10->executeScript(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(66)
				value = tmp12;
			}
			HX_STACK_LINE(69)
			bool tmp10 = (attr == HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			if ((tmp10)){
				HX_STACK_LINE(70)
				Float width = (int)0;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(71)
				Float percentWidth = (int)-1;		HX_STACK_VAR(percentWidth,"percentWidth");
				HX_STACK_LINE(72)
				::String widthString = value;		HX_STACK_VAR(widthString,"widthString");
				HX_STACK_LINE(73)
				bool tmp11 = (widthString != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				if ((tmp11)){
					HX_STACK_LINE(74)
					::String tmp12 = widthString;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(74)
					Float tmp13 = ::Std_obj::parseFloat(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(74)
					width = tmp13;
					HX_STACK_LINE(75)
					int tmp14 = widthString.indexOf(HX_HCSTRING("%","\x25","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(75)
					bool tmp15 = (tmp14 != (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(75)
					if ((tmp15)){
						HX_STACK_LINE(76)
						width = (int)0;
						HX_STACK_LINE(77)
						int tmp16 = (widthString.length - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(77)
						::String tmp17 = widthString.substr((int)0,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(77)
						Float tmp18 = ::Std_obj::parseFloat(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(77)
						percentWidth = tmp18;
					}
				}
				HX_STACK_LINE(81)
				bool tmp12 = (width != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(81)
				if ((tmp12)){
					HX_STACK_LINE(82)
					Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(82)
					c->set_width(tmp13);
				}
				HX_STACK_LINE(84)
				bool tmp13 = (percentWidth != (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				if ((tmp13)){
					HX_STACK_LINE(85)
					Float tmp14 = percentWidth;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(85)
					c->set_percentWidth(tmp14);
				}
			}
			else{
				HX_STACK_LINE(87)
				bool tmp11 = (attr == HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				if ((tmp11)){
					HX_STACK_LINE(88)
					Float height = (int)0;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(89)
					Float percentHeight = (int)-1;		HX_STACK_VAR(percentHeight,"percentHeight");
					HX_STACK_LINE(90)
					::String heightString = value;		HX_STACK_VAR(heightString,"heightString");
					HX_STACK_LINE(91)
					bool tmp12 = (heightString != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(91)
					if ((tmp12)){
						HX_STACK_LINE(92)
						::String tmp13 = heightString;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(92)
						Float tmp14 = ::Std_obj::parseFloat(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(92)
						height = tmp14;
						HX_STACK_LINE(93)
						int tmp15 = heightString.indexOf(HX_HCSTRING("%","\x25","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(93)
						bool tmp16 = (tmp15 != (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(93)
						if ((tmp16)){
							HX_STACK_LINE(94)
							height = (int)0;
							HX_STACK_LINE(95)
							int tmp17 = (heightString.length - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(95)
							::String tmp18 = heightString.substr((int)0,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(95)
							Float tmp19 = ::Std_obj::parseFloat(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(95)
							percentHeight = tmp19;
						}
					}
					HX_STACK_LINE(99)
					bool tmp13 = (height != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(99)
					if ((tmp13)){
						HX_STACK_LINE(100)
						Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(100)
						c->set_height(tmp14);
					}
					HX_STACK_LINE(102)
					bool tmp14 = (percentHeight != (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(102)
					if ((tmp14)){
						HX_STACK_LINE(103)
						Float tmp15 = percentHeight;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(103)
						c->set_percentHeight(tmp15);
					}
				}
				else{
					HX_STACK_LINE(105)
					bool tmp12 = (attr == HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(105)
					if ((tmp12)){
						HX_STACK_LINE(106)
						::haxe::ui::toolkit::core::Component tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(106)
						bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(106)
						if ((tmp14)){
							HX_STACK_LINE(107)
							::String tmp15 = (HX_HCSTRING("_temp {","\x0e","\xde","\xb6","\x3f") + value);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(107)
							::String tmp16 = (tmp15 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(107)
							::haxe::ui::toolkit::style::Styles tmp17 = ::haxe::ui::toolkit::style::StyleParser_obj::fromString(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(107)
							::haxe::ui::toolkit::style::Styles inlineStyles = tmp17;		HX_STACK_VAR(inlineStyles,"inlineStyles");
							HX_STACK_LINE(108)
							bool tmp18 = (inlineStyles != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(108)
							if ((tmp18)){
								HX_STACK_LINE(109)
								::haxe::ui::toolkit::style::Style tmp19 = inlineStyles->getStyle(HX_HCSTRING("_temp","\xf3","\xde","\x0a","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(109)
								::haxe::ui::toolkit::style::Style style = tmp19;		HX_STACK_VAR(style,"style");
								HX_STACK_LINE(110)
								bool tmp20 = (style != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(110)
								if ((tmp20)){
									HX_STACK_LINE(111)
									::haxe::ui::toolkit::core::StyleableDisplayObject tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(111)
									tmp21 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(c);
									HX_STACK_LINE(111)
									::haxe::ui::toolkit::style::Style tmp22 = style;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(111)
									tmp21->set_style(tmp22);
									HX_STACK_LINE(112)
									::haxe::ui::toolkit::core::StyleableDisplayObject tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(112)
									tmp23 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(c);
									HX_STACK_LINE(112)
									::String tmp24 = value;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(112)
									tmp23->set_styleString(tmp24);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(116)
						bool tmp13 = (attr == HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						if ((tmp13)){
						}
						else{
							HX_STACK_LINE(117)
							bool tmp14 = (attr == HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(117)
							if ((tmp14)){
								HX_STACK_LINE(118)
								::String tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(118)
								::String _switch_1 = (tmp15);
								if (  ( _switch_1==HX_HCSTRING("absolute","\x77","\xce","\x95","\xc3"))){
									HX_STACK_LINE(119)
									::haxe::ui::toolkit::layout::AbsoluteLayout tmp16 = ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(119)
									c->set_layout(tmp16);
									HX_STACK_LINE(119)
									break;
								}
								else if (  ( _switch_1==HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"))){
									HX_STACK_LINE(120)
									::haxe::ui::toolkit::layout::BoxLayout tmp16 = ::haxe::ui::toolkit::layout::BoxLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(120)
									c->set_layout(tmp16);
									HX_STACK_LINE(120)
									break;
								}
								else if (  ( _switch_1==HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"))){
									HX_STACK_LINE(121)
									::haxe::ui::toolkit::layout::GridLayout tmp16 = ::haxe::ui::toolkit::layout::GridLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(121)
									c->set_layout(tmp16);
									HX_STACK_LINE(121)
									break;
								}
								else if (  ( _switch_1==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
									HX_STACK_LINE(122)
									::haxe::ui::toolkit::layout::HorizontalLayout tmp16 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(122)
									c->set_layout(tmp16);
									HX_STACK_LINE(122)
									break;
								}
								else if (  ( _switch_1==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
									HX_STACK_LINE(123)
									::haxe::ui::toolkit::layout::VerticalLayout tmp16 = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(123)
									c->set_layout(tmp16);
									HX_STACK_LINE(123)
									break;
								}
								else if (  ( _switch_1==HX_HCSTRING("continuousVertical","\xa5","\xa4","\x10","\xa4"))){
									HX_STACK_LINE(124)
									::haxe::ui::toolkit::layout::VerticalContinuousLayout tmp16 = ::haxe::ui::toolkit::layout::VerticalContinuousLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(124)
									c->set_layout(tmp16);
									HX_STACK_LINE(124)
									break;
								}
								else if (  ( _switch_1==HX_HCSTRING("continuousHorizontal","\xd3","\x8e","\x6c","\xf2"))){
									HX_STACK_LINE(125)
									::haxe::ui::toolkit::layout::HorizontalContinuousLayout tmp16 = ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(125)
									c->set_layout(tmp16);
									HX_STACK_LINE(125)
									break;
								}
								else  {
									HX_STACK_LINE(126)
									::haxe::ui::toolkit::layout::DefaultLayout tmp16 = ::haxe::ui::toolkit::layout::DefaultLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(126)
									c->set_layout(tmp16);
									HX_STACK_LINE(126)
									break;
								}
;
;
							}
							else{
								HX_STACK_LINE(128)
								bool tmp15 = (attr == HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(128)
								if ((tmp15)){
									HX_STACK_LINE(129)
									::haxe::ui::toolkit::core::Component tmp16 = c;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(129)
									bool tmp17 = ::Std_obj::is(tmp16,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDataComponent >());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(129)
									if ((tmp17)){
										HX_STACK_LINE(130)
										::haxe::ui::toolkit::core::interfaces::IDataComponent tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(130)
										tmp18 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDataComponent >::cast(c);
										HX_STACK_LINE(130)
										::haxe::ui::toolkit::core::interfaces::IDataComponent dataComponent = tmp18;		HX_STACK_VAR(dataComponent,"dataComponent");
										HX_STACK_LINE(131)
										::haxe::ui::toolkit::data::DataManager tmp19 = ::haxe::ui::toolkit::data::DataManager_obj::get_instance();		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(131)
										::String tmp20 = value;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(131)
										::haxe::ui::toolkit::data::IDataSource tmp21 = tmp19->getRegisteredDataSource(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(131)
										::haxe::ui::toolkit::data::IDataSource registeredDataSource = tmp21;		HX_STACK_VAR(registeredDataSource,"registeredDataSource");
										HX_STACK_LINE(132)
										bool tmp22 = (registeredDataSource != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(132)
										if ((tmp22)){
											HX_STACK_LINE(133)
											::haxe::ui::toolkit::data::IDataSource tmp23 = registeredDataSource;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(133)
											dataComponent->set_dataSource(tmp23);
										}
										else{
											HX_STACK_LINE(135)
											int tmp23 = value.indexOf(HX_HCSTRING("://","\xda","\x2b","\x2c","\x00"),null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(135)
											int n = tmp23;		HX_STACK_VAR(n,"n");
											HX_STACK_LINE(136)
											bool tmp24 = (n != (int)-1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(136)
											if ((tmp24)){
												HX_STACK_LINE(137)
												int tmp25 = n;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(137)
												::String tmp26 = value.substr((int)0,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(137)
												::String proto = tmp26;		HX_STACK_VAR(proto,"proto");
												HX_STACK_LINE(138)
												int tmp27 = (n + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(138)
												int tmp28 = value.length;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(138)
												::String tmp29 = value.substr(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(138)
												value = tmp29;
												HX_STACK_LINE(139)
												::haxe::ui::toolkit::core::ClassManager tmp30 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(139)
												::String tmp31 = proto;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(139)
												::String tmp32 = tmp30->getDataSourceClassName(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(139)
												::String className1 = tmp32;		HX_STACK_VAR(className1,"className1");
												HX_STACK_LINE(140)
												::String tmp33 = className1;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(140)
												::hx::Class tmp34 = ::haxe::ui::toolkit::util::Types_obj::resolveClass(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(140)
												::haxe::ui::toolkit::data::IDataSource tmp35 = ::Type_obj::createInstance(tmp34,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(140)
												::haxe::ui::toolkit::data::IDataSource ds = tmp35;		HX_STACK_VAR(ds,"ds");
												HX_STACK_LINE(141)
												bool tmp36 = (ds != null());		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(141)
												if ((tmp36)){
													HX_STACK_LINE(142)
													::String tmp37 = value;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(142)
													ds->createFromResource(tmp37,null());
													HX_STACK_LINE(143)
													::haxe::ui::toolkit::data::DataManager tmp38 = ::haxe::ui::toolkit::data::DataManager_obj::get_instance();		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(143)
													::haxe::ui::toolkit::data::IDataSource tmp39 = ds;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(143)
													tmp38->registerDataSource(tmp39);
													HX_STACK_LINE(144)
													::haxe::ui::toolkit::data::IDataSource tmp40 = ds;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(144)
													dataComponent->set_dataSource(tmp40);
												}
											}
										}
									}
								}
								else{
									HX_STACK_LINE(149)
									bool tmp16 = (attr == HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(149)
									if ((tmp16)){
										HX_STACK_LINE(150)
										::String tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(150)
										c->set_text(tmp17);
									}
									else{
										HX_STACK_LINE(151)
										::String tmp17 = attr.toLowerCase();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(151)
										bool tmp18 = ::StringTools_obj::startsWith(tmp17,HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(151)
										if ((tmp18)){
											HX_STACK_LINE(152)
											::String tmp19 = attr.substr((int)2,(int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(152)
											::String tmp20 = tmp19.toLowerCase();		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(152)
											::String tmp21 = attr.substr((int)3,null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(152)
											::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(152)
											::String event = tmp22;		HX_STACK_VAR(event,"event");
											HX_STACK_LINE(153)
											::String tmp23 = event;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(153)
											::String tmp24 = value;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(153)
											c->addScriptletEventHandler(tmp23,tmp24);
										}
										else{
											HX_STACK_LINE(155)
											try
											{
											HX_STACK_CATCHABLE(Dynamic, 0);
											{
												HX_STACK_LINE(156)
												::String tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(156)
												Dynamic tmp20 = ::Std_obj::parseInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(156)
												bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(156)
												if ((tmp21)){
													HX_STACK_LINE(157)
													int tmp22 = value.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(157)
													bool tmp23 = (tmp22 == (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(157)
													if ((tmp23)){
														HX_STACK_LINE(158)
														::haxe::ui::toolkit::core::Component tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(158)
														::String tmp25 = attr;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(158)
														::String tmp26 = value;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(158)
														Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(158)
														::Reflect_obj::setProperty(tmp24,tmp25,tmp27);
													}
													else{
														HX_STACK_LINE(160)
														::haxe::ui::toolkit::core::Component tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(160)
														::String tmp25 = attr;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(160)
														::String tmp26 = value;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(160)
														Float tmp27 = ::Std_obj::parseFloat(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(160)
														::Reflect_obj::setProperty(tmp24,tmp25,tmp27);
													}
												}
												else{
													HX_STACK_LINE(162)
													bool tmp22 = (value == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(162)
													bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(162)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(162)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(162)
													if ((tmp24)){
														HX_STACK_LINE(162)
														tmp25 = (value == HX_HCSTRING("yes","\x27","\x29","\x5c","\x00"));
													}
													else{
														HX_STACK_LINE(162)
														tmp25 = true;
													}
													HX_STACK_LINE(162)
													bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(162)
													bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(162)
													bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(162)
													if ((tmp27)){
														HX_STACK_LINE(162)
														tmp28 = (value == HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));
													}
													else{
														HX_STACK_LINE(162)
														tmp28 = true;
													}
													HX_STACK_LINE(162)
													bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(162)
													bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(162)
													if ((tmp29)){
														HX_STACK_LINE(162)
														tmp30 = (value == HX_HCSTRING("no","\x41","\x60","\x00","\x00"));
													}
													else{
														HX_STACK_LINE(162)
														tmp30 = true;
													}
													HX_STACK_LINE(162)
													if ((tmp30)){
														HX_STACK_LINE(163)
														::haxe::ui::toolkit::core::Component tmp31 = c;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(163)
														::String tmp32 = attr;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(163)
														::String tmp33 = value;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(163)
														bool tmp34 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(163)
														::Reflect_obj::setProperty(tmp31,tmp32,tmp34);
													}
													else{
														HX_STACK_LINE(165)
														::haxe::ui::toolkit::core::Component tmp31 = c;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(165)
														::String tmp32 = attr;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(165)
														::String tmp33 = value;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(165)
														::Reflect_obj::setProperty(tmp31,tmp32,tmp33);
													}
												}
											}
											}
											catch(Dynamic __e){
												{
													HX_STACK_BEGIN_CATCH
													Dynamic e = __e;{
														HX_STACK_LINE(168)
														::String tmp19 = (HX_HCSTRING("Exception setting component property: ","\xdf","\x85","\x10","\x0c") + attr);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(168)
														::String tmp20 = (tmp19 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(168)
														Dynamic tmp21 = e;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(168)
														::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(168)
														::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(168)
														::String tmp24 = (tmp23 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(168)
														Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("UIProcessor.hx","\x20","\xe9","\x01","\xd9"),168,HX_HCSTRING("haxe.ui.toolkit.core.xml.UIProcessor","\xfa","\x8d","\x89","\x51"),HX_HCSTRING("createComponent","\x21","\xaa","\x48","\xb0"));		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(168)
														::haxe::Log_obj::trace(tmp24,tmp25);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(173)
	::haxe::ui::toolkit::core::Component tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UIProcessor_obj,createComponent,return )


UIProcessor_obj::UIProcessor_obj()
{
}

Dynamic UIProcessor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool UIProcessor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"createComponent") ) { outValue = createComponent_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIProcessor_obj::__mClass,"__mClass");
};

#endif

hx::Class UIProcessor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createComponent","\x21","\xaa","\x48","\xb0"),
	::String(null()) };

void UIProcessor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.xml.UIProcessor","\xfa","\x8d","\x89","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UIProcessor_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIProcessor_obj >;
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
} // end namespace xml
