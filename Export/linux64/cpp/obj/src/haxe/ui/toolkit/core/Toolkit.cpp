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
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_DateSelector
#include <haxe/ui/toolkit/controls/selection/DateSelector.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#include <haxe/ui/toolkit/controls/selection/ListSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor
#include <haxe/ui/toolkit/core/xml/DataProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor
#include <haxe/ui/toolkit/core/xml/StyleProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor
#include <haxe/ui/toolkit/core/xml/UIProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper
#include <haxe/ui/toolkit/hscript/ClientWrapper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_DefaultStyles
#include <haxe/ui/toolkit/style/DefaultStyles.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_themes_DefaultTheme
#include <haxe/ui/toolkit/themes/DefaultTheme.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_Capabilities
#include <openfl/_legacy/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Toolkit_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","new",0xcf7551c3,"haxe.ui.toolkit.core.Toolkit.new","haxe/ui/toolkit/core/Toolkit.hx",333,0xd65388cd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(333)
	this->initInstance();
}
;
	return null();
}

//Toolkit_obj::~Toolkit_obj() { }

Dynamic Toolkit_obj::__CreateEmpty() { return  new Toolkit_obj; }
hx::ObjectPtr< Toolkit_obj > Toolkit_obj::__new()
{  hx::ObjectPtr< Toolkit_obj > _result_ = new Toolkit_obj();
	_result_->__construct();
	return _result_;}

Dynamic Toolkit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Toolkit_obj > _result_ = new Toolkit_obj();
	_result_->__construct();
	return _result_;}

Void Toolkit_obj::initInstance( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","initInstance",0xa68a6102,"haxe.ui.toolkit.core.Toolkit.initInstance","haxe/ui/toolkit/core/Toolkit.hx",338,0xd65388cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(338)
		::haxe::ui::toolkit::core::ClassManager_obj::get_instance();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,initInstance,(void))

int Toolkit_obj::DPI_THRESHOLD;

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::_instance;

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::instance;

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_instance",0xb6ed8ddb,"haxe.ui.toolkit.core.Toolkit.get_instance","haxe/ui/toolkit/core/Toolkit.hx",31,0xd65388cd)
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::core::Toolkit tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(33)
		::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		tmp3->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(34)
		::openfl::_legacy::display::MovieClip tmp4 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::openfl::_legacy::display::Stage tmp5 = tmp4->get_stage();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		tmp5->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::core::Toolkit tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::core::Toolkit_obj::_instance = tmp6;
	}
	HX_STACK_LINE(37)
	::haxe::ui::toolkit::core::Toolkit tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_instance,return )

Void Toolkit_obj::init( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","init",0xb3eaf04d,"haxe.ui.toolkit.core.Toolkit.init","haxe/ui/toolkit/core/Toolkit.hx",43,0xd65388cd)
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(46)
				::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(HX_HCSTRING("{\n  \"name\": \"hxcpp\",\n  \"url\": \"http://gamehaxe.com/\",\n  \"license\": \"BSD\",\n  \"tags\": [ \"haxe\", \"hxcpp\", \"cpp\" ],\n  \"description\": \"Hxcpp is the runtime support for the c++ backend of the haxe compiler.  This release constains the headers, libraries and support code required to generate a fully compiled executable from haxe code.\",\n  \"version\": \"3.2.205\",\n  \"releasenote\": \"See Changes.md\",\n  \"contributors\": [\"gamehaxe\"],\n  \"binaryversion\": 41,\n  \"dependencies\": {\n\n  }\n}\n","\xac","\x4c","\x9e","\xba"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(46)
				Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(44)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				tmp2->set(HX_HCSTRING("hxcpp","\x13","\x70","\x49","\x31"),tmp3);
			}
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(HX_HCSTRING("{\n\t\"name\": \"openfl\",\n\t\"url\": \"http://www.openfl.org\",\n\t\"license\": \"MIT\",\n\t\"tags\": [],\n\t\"description\": \"The \\\"Open Flash Library\\\" for fast 2D development\",\n\t\"version\": \"3.5.2\",\n\t\"releasenote\": \"Extern improvements, minor fixes\",\n\t\"contributors\": [ \"singmajesty\" ]\n}","\xb5","\x0f","\x6b","\x64"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(61)
				Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(61)
				Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(61)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(61)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				tmp2->set(HX_HCSTRING("openfl","\x90","\x63","\x94","\x21"),tmp3);
			}
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(72)
				::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(HX_HCSTRING("{\n\t\"name\": \"lime\",\n\t\"url\": \"https://github.com/openfl/lime\",\n\t\"license\": \"MIT\",\n\t\"tags\": [],\n\t\"description\": \"A flexible lightweight layer for Haxe cross-platform developers\",\n\t\"version\": \"2.8.3\",\n\t\"releasenote\": \"Improved current Android NDK support, other fixes\",\n\t\"contributors\": [ \"singmajesty\" ]\n}","\x69","\xc1","\x4c","\x82"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(72)
				Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(71)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(71)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				tmp2->set(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),tmp3);
			}
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(HX_HCSTRING("{\r\n  \"name\": \"hscript\",\r\n  \"url\": \"https://github.com/HaxeFoundation/hscript\",\r\n  \"license\": \"MIT\",\r\n  \"description\": \"Haxe Script is a scripting engine for a subset of the Haxe language\",\r\n  \"version\": \"2.0.5\",\r\n  \"releasenote\": \"switch and array comprehension support\",\r\n  \"contributors\": [\"ncannasse\"]\r\n}","\xdb","\x40","\xe4","\xe8"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(91)
				Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(91)
				Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(91)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(91)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(91)
				tmp2->set(HX_HCSTRING("hscript","\x73","\x8c","\x18","\x2c"),tmp3);
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(102)
				::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(HX_HCSTRING("{\n    \"name\": \"haxeui\",\n    \"license\": \"MIT\",\n    \"tags\": [\n        \"rich\",\n        \"ui\"\n    ],\n    \"description\": \"Styleable application centric rich UI\",\n    \"contributors\": [\n        \"ianharrigan\"\n    ],\n    \"releasenote\": \"Stop fixing openfl/lime versions\",\n    \"version\": \"1.8.4\",\n    \"url\": \"https://github.com/ianharrigan/haxeui\",\n    \"dependencies\": {\n        \"lime\": \"\",\n        \"actuate\": \"\",\n        \"openfl\": \"\",\n        \"hscript\": \"\"\n    }\n}","\x84","\x8a","\xb5","\x1f"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(102)
				Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(102)
				Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(101)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				tmp2->set(HX_HCSTRING("haxeui","\xfa","\x6f","\x9a","\xbe"),tmp3);
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(117)
				::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(HX_HCSTRING("{\r\n  \"name\": \"actuate\",\r\n  \"url\": \"http://github.com/openfl/actuate\",\r\n  \"license\": \"MIT\",\r\n  \"tags\": [ \"flash\", \"cpp\", \"neko\", \"js\" ],\r\n  \"description\": \"Actuate is a fast and flexible tween library that uses a jQuery-style \\\"chaining\\\" syntax. It out-performs other libraries (such as TweenLite) and is easy to extend with custom actuators.\",\r\n  \"version\": \"1.8.6\",\r\n  \"releasenote\": \"Patches for C++ type reflection, Actuate.update and Lime\",\r\n  \"contributors\": [ \"singmajesty\" ],\r\n  \"dependencies\": {}\r\n}\r\n","\x61","\x27","\x92","\x8f"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(117)
				Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(117)
				Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(116)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(116)
				tmp2->set(HX_HCSTRING("actuate","\x0f","\xf9","\x11","\x6f"),tmp3);
			}
			HX_STACK_LINE(127)
			{
				HX_STACK_LINE(127)
				::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(HX_HCSTRING("{\r\n    \"name\"         : \"haxeui-rich-text\",\r\n    \"url\"          : \"https://github.com/ianharrigan/haxeui-rich-text\",\r\n    \"license\"      : \"MIT\",\r\n    \"tags\"         : [\"rich\", \"ui\", \"haxeui\"],\r\n    \"description\"  : \"Rich text for HaxeUI\",\r\n    \"version\"      : \"0.1.2\",\r\n    \"releasenote\"  : \"Improved RegExp syntax rules\",\r\n    \"contributors\" : [\"ianharrigan\"],\r\n    \"dependencies\" : {\r\n        \"openfl\"        : \"\",\r\n        \"actuate\"       : \"\",\r\n        \"hscript\"       : \"\",\r\n        \"haxeui\"       : \"\"\r\n    }\r\n}\r\n","\xc5","\x03","\x1f","\xd1"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(127)
				Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(127)
				Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(127)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(127)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(127)
				tmp2->set(HX_HCSTRING("haxeui-rich-text","\x6b","\xea","\x04","\x1f"),tmp3);
			}
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::core::ClassManager tmp = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			tmp->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ScrollView","\x0c","\xd6","\x67","\x8c"),HX_HCSTRING("scrollview","\xf2","\x94","\x35","\x21"));
			HX_STACK_LINE(54)
			::haxe::ui::toolkit::core::ClassManager tmp1 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			tmp1->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Text","\xc3","\x81","\x76","\x93"),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::ClassManager tmp2 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			tmp2->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.DefaultScrollViewRefreshing","\xc0","\x5a","\x28","\x69"),HX_HCSTRING("defaultscrollviewrefreshing","\x9a","\xa4","\xee","\x44"));
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::ClassManager tmp3 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			tmp3->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ScrollViewRefreshPrompt","\x33","\x98","\x8d","\x7e"),HX_HCSTRING("scrollviewrefreshprompt","\x8d","\x3d","\xb5","\x3c"));
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::core::ClassManager tmp4 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			tmp4->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.TextInput","\x47","\x6f","\x38","\x73"),HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"));
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::core::ClassManager tmp5 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			tmp5->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.Absolute","\xf1","\xd0","\x0d","\x34"),HX_HCSTRING("absolute","\x77","\xce","\x95","\xc3"));
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::core::ClassManager tmp6 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			tmp6->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ListView","\x5d","\x04","\xbc","\x9e"),HX_HCSTRING("listview","\xc3","\xd5","\x6a","\x43"));
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::core::ClassManager tmp7 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			tmp7->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.VBox","\xaf","\x60","\x24","\x63"),HX_HCSTRING("vbox","\x55","\xeb","\x49","\x4e"));
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::core::ClassManager tmp8 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			tmp8->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Menu","\xb5","\xfa","\xd5","\x8e"),HX_HCSTRING("menu","\x9f","\x45","\x59","\x48"));
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::core::ClassManager tmp9 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			tmp9->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ContinuousHBox","\x2c","\x25","\xea","\x1f"),HX_HCSTRING("continuoushbox","\x32","\x27","\x89","\x1e"));
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::core::ClassManager tmp10 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			tmp10->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.renderers.ItemRenderer","\xa1","\x20","\x3a","\x86"),HX_HCSTRING("itemrenderer","\x56","\x55","\x53","\xbd"));
			HX_STACK_LINE(96)
			::haxe::ui::toolkit::core::ClassManager tmp11 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(96)
			tmp11->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","\x48","\x29","\x63","\x3f"),HX_HCSTRING("componentitemrenderer","\x93","\xed","\xeb","\xf1"));
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::core::ClassManager tmp12 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			tmp12->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.Component","\x10","\x17","\x45","\x40"),HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::core::ClassManager tmp13 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			tmp13->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.HBox","\xfd","\x63","\xe3","\x59"),HX_HCSTRING("hbox","\xa3","\xee","\x08","\x45"));
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::core::ClassManager tmp14 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(107)
			tmp14->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.HSplitter","\x15","\xc4","\xfe","\x57"),HX_HCSTRING("hsplitter","\xaf","\xdf","\xc2","\x85"));
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::core::ClassManager tmp15 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(111)
			tmp15->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.MenuItem","\x68","\xea","\x7a","\xb2"),HX_HCSTRING("menuitem","\x32","\xc6","\x55","\x61"));
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::core::ClassManager tmp16 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(114)
			tmp16->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.Container","\x87","\x9d","\xfd","\xb7"),HX_HCSTRING("container","\x41","\x75","\x73","\xbf"));
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::core::ClassManager tmp17 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			tmp17->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.MenuSeparator","\xf0","\xc6","\x93","\xef"),HX_HCSTRING("menuseparator","\xe6","\xee","\x95","\x16"));
			HX_STACK_LINE(118)
			::haxe::ui::toolkit::core::ClassManager tmp18 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(118)
			tmp18->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Spacer","\x82","\x47","\x39","\x1f"),HX_HCSTRING("spacer","\xec","\xa0","\x54","\xb8"));
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::core::ClassManager tmp19 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(120)
			tmp19->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.VSplitterGripper","\x68","\x8d","\x7a","\xd5"),HX_HCSTRING("vsplittergripper","\x2e","\x51","\x47","\x95"));
			HX_STACK_LINE(123)
			::haxe::ui::toolkit::core::ClassManager tmp20 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(123)
			tmp20->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.VScroll","\xcd","\x25","\x0b","\x48"),HX_HCSTRING("vscroll","\x03","\x95","\x49","\x72"));
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::core::ClassManager tmp21 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(125)
			tmp21->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.MenuBar","\x3a","\x9c","\x90","\x06"),HX_HCSTRING("menubar","\x94","\x79","\x63","\xba"));
			HX_STACK_LINE(126)
			::haxe::ui::toolkit::core::ClassManager tmp22 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(126)
			tmp22->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Value","\x9b","\x3d","\x5a","\x98"),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::core::ClassManager tmp23 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(128)
			tmp23->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt","\xa6","\xf6","\x3f","\x10"),HX_HCSTRING("defaultscrollviewrefreshprompt","\xec","\x5c","\x51","\xf0"));
			HX_STACK_LINE(130)
			::haxe::ui::toolkit::core::ClassManager tmp24 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(130)
			tmp24->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.HScroll","\x3f","\xa7","\xde","\x01"),HX_HCSTRING("hscroll","\x75","\x16","\x1d","\x2c"));
			HX_STACK_LINE(134)
			::haxe::ui::toolkit::core::ClassManager tmp25 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(134)
			tmp25->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.CheckBoxValue","\x78","\xbe","\x5c","\xcc"),HX_HCSTRING("checkboxvalue","\x4e","\x9a","\x52","\x28"));
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::core::ClassManager tmp26 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(139)
			tmp26->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ScrollViewRefreshing","\x13","\xef","\x2b","\xa9"),HX_HCSTRING("refreshing","\xe7","\x8d","\x3e","\x07"));
			HX_STACK_LINE(147)
			::haxe::ui::toolkit::core::ClassManager tmp27 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(147)
			tmp27->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ScrollViewRefreshPrompt","\x33","\x98","\x8d","\x7e"),HX_HCSTRING("refreshprompt","\xbf","\x81","\xfe","\x7e"));
			HX_STACK_LINE(151)
			::haxe::ui::toolkit::core::ClassManager tmp28 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(151)
			tmp28->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.TabView","\x20","\x72","\x0a","\x93"),HX_HCSTRING("tabview","\x3a","\xdb","\xeb","\x5b"));
			HX_STACK_LINE(155)
			::haxe::ui::toolkit::core::ClassManager tmp29 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(155)
			tmp29->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Progress","\xc3","\xef","\x76","\xec"),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
			HX_STACK_LINE(159)
			::haxe::ui::toolkit::core::ClassManager tmp30 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(159)
			tmp30->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ExpandablePanel","\x36","\x06","\xc6","\xb8"),HX_HCSTRING("expandablepanel","\x90","\xf5","\x21","\x70"));
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::core::ClassManager tmp31 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(161)
			tmp31->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.ToolTip","\x8d","\x81","\xa1","\x0b"),HX_HCSTRING("tooltip","\x03","\xad","\x8c","\x6a"));
			HX_STACK_LINE(165)
			::haxe::ui::toolkit::core::ClassManager tmp32 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(165)
			tmp32->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Slider","\xb7","\x6c","\xe9","\xd6"),HX_HCSTRING("slider","\x21","\xc6","\x04","\x70"));
			HX_STACK_LINE(170)
			::haxe::ui::toolkit::core::ClassManager tmp33 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(170)
			tmp33->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.MenuButton","\x87","\x46","\xaf","\x47"),HX_HCSTRING("menubutton","\xd1","\x28","\xd0","\x87"));
			HX_STACK_LINE(173)
			::haxe::ui::toolkit::core::ClassManager tmp34 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(173)
			tmp34->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.VSplitter","\x23","\x82","\x32","\xe1"),HX_HCSTRING("vsplitter","\xbd","\x9d","\xf6","\x0e"));
			HX_STACK_LINE(177)
			::haxe::ui::toolkit::core::ClassManager tmp35 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(177)
			tmp35->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.selection.DropDownList","\x27","\xf5","\x45","\x0e"),HX_HCSTRING("dropdownlist","\xef","\x6c","\x7c","\x4d"));
			HX_STACK_LINE(182)
			::haxe::ui::toolkit::core::ClassManager tmp36 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(182)
			tmp36->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.CalendarView","\xbd","\xbb","\xfe","\x29"),HX_HCSTRING("calendarview","\x23","\xc8","\xa1","\x26"));
			HX_STACK_LINE(184)
			::haxe::ui::toolkit::core::ClassManager tmp37 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(184)
			tmp37->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ExpandableButton","\x80","\xa2","\x86","\xe3"),HX_HCSTRING("expandablebutton","\xe6","\x21","\x9c","\x9c"));
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::core::ClassManager tmp38 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(189)
			tmp38->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Link","\x10","\xcd","\x2f","\x8e"),HX_HCSTRING("link","\xfa","\x17","\xb3","\x47"));
			HX_STACK_LINE(195)
			::haxe::ui::toolkit::core::ClassManager tmp39 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(195)
			tmp39->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.StateComponent","\x39","\x9d","\xb2","\x70"),HX_HCSTRING("statecomponent","\x8c","\xb0","\x1b","\x4a"));
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::core::ClassManager tmp40 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(198)
			tmp40->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.VSlider","\xe1","\x13","\xab","\x70"),HX_HCSTRING("vslider","\x17","\x83","\xe9","\x9a"));
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::core::ClassManager tmp41 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(201)
			tmp41->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.VProgress","\x6d","\x35","\x50","\xb7"),HX_HCSTRING("vprogress","\x23","\x5e","\x71","\xc1"));
			HX_STACK_LINE(202)
			::haxe::ui::toolkit::core::ClassManager tmp42 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(202)
			tmp42->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.CalendarDay","\xe8","\x93","\x59","\x96"),HX_HCSTRING("calendarday","\x5e","\x22","\x68","\x40"));
			HX_STACK_LINE(209)
			::haxe::ui::toolkit::core::ClassManager tmp43 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(209)
			tmp43->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ContinuousVBox","\xde","\x21","\x2b","\x29"),HX_HCSTRING("continuousvbox","\xe4","\x23","\xca","\x27"));
			HX_STACK_LINE(215)
			::haxe::ui::toolkit::core::ClassManager tmp44 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(215)
			tmp44->registerComponentClassName(HX_HCSTRING("haxe.ui.richtext.RTFView","\x36","\x9d","\xf2","\x6f"),HX_HCSTRING("rtfview","\xc9","\x1a","\x23","\xef"));
			HX_STACK_LINE(218)
			::haxe::ui::toolkit::core::ClassManager tmp45 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(218)
			tmp45->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.TabBar","\x14","\x19","\x22","\xe3"),HX_HCSTRING("tabbar","\x9e","\xba","\x55","\x7c"));
			HX_STACK_LINE(222)
			::haxe::ui::toolkit::core::ClassManager tmp46 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(222)
			tmp46->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Image","\x85","\xdd","\x0a","\x24"),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
			HX_STACK_LINE(225)
			::haxe::ui::toolkit::core::ClassManager tmp47 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(225)
			tmp47->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.OptionBoxValue","\x91","\x22","\x52","\x2c"),HX_HCSTRING("optionboxvalue","\xfb","\xc9","\x04","\xb1"));
			HX_STACK_LINE(228)
			::haxe::ui::toolkit::core::ClassManager tmp48 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(228)
			tmp48->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.ScrollViewRefreshing","\x13","\xef","\x2b","\xa9"),HX_HCSTRING("scrollviewrefreshing","\x59","\x85","\xf6","\x04"));
			HX_STACK_LINE(235)
			::haxe::ui::toolkit::core::ClassManager tmp49 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(235)
			tmp49->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.HSlider","\x53","\x95","\x7e","\x2a"),HX_HCSTRING("hslider","\x89","\x04","\xbd","\x54"));
			HX_STACK_LINE(238)
			::haxe::ui::toolkit::core::ClassManager tmp50 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(238)
			tmp50->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.TableView","\xd9","\x5d","\x6e","\xb4"),HX_HCSTRING("tableview","\x73","\x09","\x0b","\xd1"));
			HX_STACK_LINE(242)
			::haxe::ui::toolkit::core::ClassManager tmp51 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(242)
			tmp51->registerComponentClassName(HX_HCSTRING("haxe.ui.richtext.Code","\xc0","\x7c","\xcb","\xea"),HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"));
			HX_STACK_LINE(244)
			::haxe::ui::toolkit::core::ClassManager tmp52 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(244)
			tmp52->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.CheckBox","\x39","\x82","\x29","\x13"),HX_HCSTRING("checkbox","\x43","\xd2","\xf5","\xac"));
			HX_STACK_LINE(247)
			::haxe::ui::toolkit::core::ClassManager tmp53 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(247)
			tmp53->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.TableViewRow","\xc1","\xa9","\xd7","\x4c"),HX_HCSTRING("tableviewrow","\x87","\x02","\x1b","\x67"));
			HX_STACK_LINE(252)
			::haxe::ui::toolkit::core::ClassManager tmp54 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(252)
			tmp54->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.DisplayObject","\x74","\x86","\x60","\xd8"),HX_HCSTRING("displayobject","\x81","\xc6","\x0d","\xa2"));
			HX_STACK_LINE(259)
			::haxe::ui::toolkit::core::ClassManager tmp55 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(259)
			tmp55->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.OptionBox","\xc0","\x94","\x80","\x9e"),HX_HCSTRING("optionbox","\xb6","\xc1","\x6b","\x82"));
			HX_STACK_LINE(261)
			::haxe::ui::toolkit::core::ClassManager tmp56 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(261)
			tmp56->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.Root","\xaf","\x68","\x55","\x8b"),HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
			HX_STACK_LINE(262)
			::haxe::ui::toolkit::core::ClassManager tmp57 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(262)
			tmp57->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.DisplayObjectContainer","\x2d","\x60","\x63","\x99"),HX_HCSTRING("displayobjectcontainer","\xa0","\x56","\x03","\x72"));
			HX_STACK_LINE(264)
			::haxe::ui::toolkit::core::ClassManager tmp58 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(264)
			tmp58->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.Box","\xd1","\xcd","\x05","\xcf"),HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"));
			HX_STACK_LINE(267)
			::haxe::ui::toolkit::core::ClassManager tmp59 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(267)
			tmp59->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.HProgress","\x5f","\x77","\x1c","\x2e"),HX_HCSTRING("hprogress","\x15","\xa0","\x3d","\x38"));
			HX_STACK_LINE(273)
			::haxe::ui::toolkit::core::ClassManager tmp60 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(273)
			tmp60->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.StyleableDisplayObject","\x23","\xba","\x48","\xc4"),HX_HCSTRING("styleabledisplayobject","\x56","\xd4","\xc2","\x22"));
			HX_STACK_LINE(278)
			::haxe::ui::toolkit::core::ClassManager tmp61 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(278)
			tmp61->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.Stack","\x8e","\x74","\x7e","\xc3"),HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"));
			HX_STACK_LINE(282)
			::haxe::ui::toolkit::core::ClassManager tmp62 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(282)
			tmp62->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.AccordionButton","\x60","\x77","\xfa","\xab"),HX_HCSTRING("accordionbutton","\x7a","\x62","\xef","\xc1"));
			HX_STACK_LINE(287)
			::haxe::ui::toolkit::core::ClassManager tmp63 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(287)
			tmp63->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.HSplitterGripper","\xb6","\x4d","\xd8","\xf0"),HX_HCSTRING("hsplittergripper","\x7c","\x11","\xa5","\xb0"));
			HX_STACK_LINE(290)
			::haxe::ui::toolkit::core::ClassManager tmp64 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(290)
			tmp64->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.Grid","\x40","\x94","\x5e","\x59"),HX_HCSTRING("grid","\xc6","\xd6","\x6b","\x44"));
			HX_STACK_LINE(293)
			::haxe::ui::toolkit::core::ClassManager tmp65 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(293)
			tmp65->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.SpriteContainer","\x42","\xf1","\xff","\x78"),HX_HCSTRING("spritecontainer","\x9c","\x70","\xb6","\x21"));
			HX_STACK_LINE(297)
			::haxe::ui::toolkit::core::ClassManager tmp66 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(297)
			tmp66->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Divider","\x83","\x77","\x04","\x12"),HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"));
			HX_STACK_LINE(300)
			::haxe::ui::toolkit::core::ClassManager tmp67 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(300)
			tmp67->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.selection.ListSelector","\x95","\x39","\x31","\x16"),HX_HCSTRING("listselector","\x7d","\xdd","\x40","\x40"));
			HX_STACK_LINE(304)
			::haxe::ui::toolkit::core::ClassManager tmp68 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(304)
			tmp68->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.containers.Accordion","\xce","\x92","\x06","\x61"),HX_HCSTRING("accordion","\x88","\x6a","\x7c","\x68"));
			HX_STACK_LINE(307)
			::haxe::ui::toolkit::core::ClassManager tmp69 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(307)
			tmp69->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Button","\x88","\x08","\xc5","\x40"),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
			HX_STACK_LINE(310)
			::haxe::ui::toolkit::core::ClassManager tmp70 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(310)
			tmp70->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Scroll","\xa3","\x7e","\x49","\xae"),HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"));
			HX_STACK_LINE(313)
			::haxe::ui::toolkit::core::ClassManager tmp71 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(313)
			tmp71->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.core.renderers.BasicItemRenderer","\x39","\xea","\xaa","\x15"),HX_HCSTRING("basicitemrenderer","\x04","\xcd","\x79","\x17"));
			HX_STACK_LINE(317)
			::haxe::ui::toolkit::core::ClassManager tmp72 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(317)
			tmp72->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.Calendar","\xd4","\x56","\x75","\xe5"),HX_HCSTRING("calendar","\xbe","\x5e","\x29","\x7f"));
			HX_STACK_LINE(321)
			::haxe::ui::toolkit::core::ClassManager tmp73 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(321)
			tmp73->registerComponentClassName(HX_HCSTRING("haxe.ui.toolkit.controls.selection.DateSelector","\x65","\xc3","\x67","\x65"),HX_HCSTRING("dateselector","\x4d","\x67","\x77","\x8f"));
			HX_STACK_LINE(325)
			::haxe::ui::toolkit::core::ClassManager tmp74 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(325)
			tmp74->registerDataSourceClassName(HX_HCSTRING("haxe.ui.toolkit.data.ArrayDataSource","\xfc","\x86","\xd9","\xfa"),HX_HCSTRING("array","\x99","\x6d","\x8f","\x25"));
			HX_STACK_LINE(326)
			::haxe::ui::toolkit::core::ClassManager tmp75 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(326)
			tmp75->registerDataSourceClassName(HX_HCSTRING("haxe.ui.toolkit.data.XMLDataSource","\x3a","\xb1","\x99","\xf4"),HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"));
			HX_STACK_LINE(330)
			::haxe::ui::toolkit::core::ClassManager tmp76 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(330)
			tmp76->registerDataSourceClassName(HX_HCSTRING("haxe.ui.toolkit.data.JSONDataSource","\x2f","\x43","\x0a","\x4d"),HX_HCSTRING("json","\x28","\x42","\x68","\x46"));
			HX_STACK_LINE(332)
			::haxe::ui::toolkit::core::ClassManager tmp77 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(332)
			tmp77->registerDataSourceClassName(HX_HCSTRING("haxe.ui.toolkit.data.FilesDataSource","\x5a","\xf9","\xef","\x6a"),HX_HCSTRING("files","\x77","\xde","\x98","\x00"));
			HX_STACK_LINE(337)
			::haxe::ui::toolkit::core::ClassManager tmp78 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(337)
			tmp78->registerDataSourceClassName(HX_HCSTRING("haxe.ui.toolkit.data.MySQLDataSource","\xa5","\x64","\x03","\x14"),HX_HCSTRING("mysql","\x22","\xb2","\xff","\x12"));
			HX_STACK_LINE(341)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("__PUBLIC__","\x29","\x2f","\x12","\xa8"),HX_HCSTRING("css/rtf.css","\x2d","\xaf","\xb3","\x39"));
			HX_STACK_LINE(344)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("__PUBLIC__","\x29","\x2f","\x12","\xa8"),HX_HCSTRING("css/code.css","\x0e","\x53","\xe4","\xd4"));
			HX_STACK_LINE(348)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("gradient","\xf0","\x39","\x3f","\x2a"),HX_HCSTRING("styles/gradient/gradient.css","\x17","\x58","\x42","\x93"));
			HX_STACK_LINE(349)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),hx::ClassOf< ::haxe::ui::toolkit::style::DefaultStyles >());
			HX_STACK_LINE(350)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("gradient_mobile","\x11","\xa2","\x43","\x34"),HX_HCSTRING("styles/gradient/gradient_mobile.css","\x54","\x7f","\x21","\x4c"));
			HX_STACK_LINE(353)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/windows.css","\xdf","\x23","\x84","\x38"));
			HX_STACK_LINE(358)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/buttons.css","\x9d","\x4e","\x5c","\x95"));
			HX_STACK_LINE(359)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/tabs.css","\xec","\xbd","\x3f","\xd1"));
			HX_STACK_LINE(360)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/listview.css","\x31","\xea","\xcd","\xee"));
			HX_STACK_LINE(362)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/scrolls.css","\xa2","\xd6","\x8e","\x91"));
			HX_STACK_LINE(367)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/sliders.css","\x0e","\x60","\x93","\xb7"));
			HX_STACK_LINE(368)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/accordion.css","\x24","\xc6","\x8b","\x6c"));
			HX_STACK_LINE(371)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/rtf.css","\xc0","\x20","\x8e","\x65"));
			HX_STACK_LINE(372)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/calendar.css","\xac","\x0c","\x04","\xe6"));
			HX_STACK_LINE(376)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/popups.css","\xf5","\xba","\x62","\xd7"));
			HX_STACK_LINE(383)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),HX_HCSTRING("styles/windows/menus.css","\x10","\x38","\x00","\xbe"));
		}
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::core::Toolkit_obj::get_instance();
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::UIProcessor >(),HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));
		HX_STACK_LINE(53)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::UIProcessor >(),HX_HCSTRING("selection","\x4c","\xf8","\x1a","\x8e"));
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::StyleProcessor >(),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::DataProcessor >(),HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 3; }
		Void run(::hx::Class cls,::String transition,Float time){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/core/Toolkit.hx",57,0xd65388cd)
			HX_STACK_ARG(cls,"cls")
			HX_STACK_ARG(transition,"transition")
			HX_STACK_ARG(time,"time")
			{
				HX_STACK_LINE(58)
				::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(58)
				::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(58)
				::String className = tmp1;		HX_STACK_VAR(className,"className");
				HX_STACK_LINE(60)
				::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(60)
				if ((tmp4)){
					HX_STACK_LINE(60)
					::haxe::ds::StringMap tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					::String tmp8 = className;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					::String tmp10 = tmp7->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(60)
					tmp5 = (tmp11 == null());
				}
				else{
					HX_STACK_LINE(60)
					tmp5 = true;
				}
				HX_STACK_LINE(60)
				if ((tmp5)){
					HX_STACK_LINE(61)
					::hx::Class tmp6 = cls;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					::String tmp7 = transition;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(61)
					::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(tmp6,tmp7);
					HX_STACK_LINE(63)
					::haxe::ds::StringMap tmp8 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(63)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(63)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(63)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(63)
					if ((tmp10)){
						HX_STACK_LINE(63)
						::haxe::ds::StringMap tmp12 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(63)
						::haxe::ds::StringMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(63)
						::String tmp14 = className;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(63)
						::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(63)
						Dynamic tmp16 = tmp13->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(63)
						Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(63)
						tmp11 = (tmp17 == null());
					}
					else{
						HX_STACK_LINE(63)
						tmp11 = true;
					}
					HX_STACK_LINE(63)
					if ((tmp11)){
						HX_STACK_LINE(64)
						::hx::Class tmp12 = cls;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(64)
						Float tmp13 = time;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(64)
						::haxe::ui::toolkit::core::Toolkit_obj::setTransitionTimeForClass(tmp12,tmp13);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC3((void))

		HX_STACK_LINE(57)
		Dynamic setDefaultTransition =  Dynamic(new _Function_1_1());		HX_STACK_VAR(setDefaultTransition,"setDefaultTransition");
		HX_STACK_LINE(69)
		setDefaultTransition(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >(),HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),((Float)0.1)).Cast< Void >();
		HX_STACK_LINE(70)
		setDefaultTransition(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >(),HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"),((Float)0.15)).Cast< Void >();
		HX_STACK_LINE(71)
		setDefaultTransition(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"),((Float)0.15)).Cast< Void >();
		HX_STACK_LINE(72)
		setDefaultTransition(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >(),HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"),((Float)0.3)).Cast< Void >();
		HX_STACK_LINE(74)
		::haxe::ui::toolkit::themes::Theme t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(75)
		Dynamic tmp = ::haxe::ui::toolkit::core::Toolkit_obj::theme;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::themes::Theme >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(76)
			Dynamic tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::theme;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			t = ((::haxe::ui::toolkit::themes::Theme)(tmp2));
		}
		else{
			HX_STACK_LINE(77)
			Dynamic tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::theme;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			if ((tmp3)){
				HX_STACK_LINE(78)
				::haxe::ui::toolkit::themes::Theme tmp4 = ::haxe::ui::toolkit::themes::Theme_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				t = tmp4;
				HX_STACK_LINE(79)
				Dynamic tmp5 = ::haxe::ui::toolkit::core::Toolkit_obj::theme;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				t->name = ((::String)(tmp5));
			}
		}
		HX_STACK_LINE(82)
		bool tmp2 = (t == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		if ((tmp2)){
			HX_STACK_LINE(82)
			bool tmp4 = ::haxe::ui::toolkit::core::Toolkit_obj::useDefaultTheme;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			tmp3 = (tmp5 == true);
		}
		else{
			HX_STACK_LINE(82)
			tmp3 = false;
		}
		HX_STACK_LINE(82)
		if ((tmp3)){
			HX_STACK_LINE(83)
			::haxe::ui::toolkit::themes::DefaultTheme tmp4 = ::haxe::ui::toolkit::themes::DefaultTheme_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			t = tmp4;
		}
		HX_STACK_LINE(86)
		bool tmp4 = (t != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		if ((tmp4)){
			HX_STACK_LINE(87)
			t->apply();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,init,(void))

::haxe::ds::StringMap Toolkit_obj::_versionInfo;

::haxe::ds::StringMap Toolkit_obj::versionInfo;

::haxe::ds::StringMap Toolkit_obj::get_versionInfo( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_versionInfo",0x11d4f920,"haxe.ui.toolkit.core.Toolkit.get_versionInfo","haxe/ui/toolkit/core/Toolkit.hx",93,0xd65388cd)
	HX_STACK_LINE(94)
	::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_versionInfo,return )

::String Toolkit_obj::versionString;

::String Toolkit_obj::get_versionString( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_versionString",0x67c0fa03,"haxe.ui.toolkit.core.Toolkit.get_versionString","haxe/ui/toolkit/core/Toolkit.hx",98,0xd65388cd)
	HX_STACK_LINE(99)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(100)
	::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String lib = __it->next();
		{
			HX_STACK_LINE(101)
			::String tmp2 = (lib + HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			::haxe::ds::StringMap tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::_versionInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			::String tmp4 = lib;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			::String tmp6 = ::Std_obj::string(tmp5->__Field(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			::String tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			::String tmp8 = (tmp7 + HX_HCSTRING("]\n","\x0d","\x51","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			hx::AddEq(s,tmp8);
		}
;
	}
	HX_STACK_LINE(103)
	::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_versionString,return )

::haxe::ds::StringMap Toolkit_obj::_registeredProcessors;

Void Toolkit_obj::registerXMLProcessor( ::hx::Class cls,::String prefix){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","registerXMLProcessor",0x096212bb,"haxe.ui.toolkit.core.Toolkit.registerXMLProcessor","haxe/ui/toolkit/core/Toolkit.hx",107,0xd65388cd)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(108)
		::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		if ((tmp1)){
			HX_STACK_LINE(109)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors = tmp2;
		}
		HX_STACK_LINE(111)
		::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		::String tmp3 = prefix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		::hx::Class tmp4 = cls;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		::String tmp5 = ::Type_obj::getClassName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		tmp2->set(tmp3,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,registerXMLProcessor,(void))

bool Toolkit_obj::useDefaultTheme;

Dynamic Toolkit_obj::theme;

bool Toolkit_obj::autoScale;

Dynamic Toolkit_obj::processXmlResource( ::String resourceId){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXmlResource",0xc500f993,"haxe.ui.toolkit.core.Toolkit.processXmlResource","haxe/ui/toolkit/core/Toolkit.hx",129,0xd65388cd)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_LINE(130)
	::haxe::ui::toolkit::resources::ResourceManager tmp = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	::String tmp1 = resourceId;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	::Xml tmp2 = tmp->getXML(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	Dynamic tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::processXml(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXmlResource,return )

Dynamic Toolkit_obj::processXml( ::Xml xml){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXml",0x282b33a5,"haxe.ui.toolkit.core.Toolkit.processXml","haxe/ui/toolkit/core/Toolkit.hx",133,0xd65388cd)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(134)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(136)
	::Xml tmp = xml->firstElement();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	Dynamic tmp1 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlNode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	result = tmp1;
	HX_STACK_LINE(137)
	::Xml tmp2 = xml->firstElement();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	Dynamic tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	::haxe::ui::toolkit::core::Toolkit_obj::postProcessXmlNode(tmp2,tmp3);
	HX_STACK_LINE(139)
	Dynamic tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(139)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXml,return )

Dynamic Toolkit_obj::processXmlNode( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXmlNode",0xbe41a047,"haxe.ui.toolkit.core.Toolkit.processXmlNode","haxe/ui/toolkit/core/Toolkit.hx",142,0xd65388cd)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(143)
	bool tmp = (node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	if ((tmp)){
		HX_STACK_LINE(144)
		return null();
	}
	HX_STACK_LINE(147)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(148)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		int tmp2 = node->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		int tmp3 = ::Xml_obj::Element;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		if ((tmp4)){
			HX_STACK_LINE(148)
			::String tmp5 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node->nodeType);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(148)
		tmp1 = node->nodeName;
	}
	HX_STACK_LINE(148)
	::String nodeName = tmp1;		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(149)
	int tmp2 = nodeName.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	int n = tmp2;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(150)
	bool tmp3 = (n != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	if ((tmp3)){
		HX_STACK_LINE(151)
		int tmp4 = (n + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		int tmp5 = nodeName.length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		::String tmp6 = nodeName.substr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		nodeName = tmp6;
	}
	HX_STACK_LINE(153)
	::String tmp4 = nodeName.toLowerCase();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(153)
	nodeName = tmp4;
	HX_STACK_LINE(155)
	::String tmp5 = node->get(HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(155)
	::String condition = tmp5;		HX_STACK_VAR(condition,"condition");
	HX_STACK_LINE(156)
	bool tmp6 = (condition != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(156)
	if ((tmp6)){
		HX_STACK_LINE(157)
		::hscript::Parser tmp7 = ::hscript::Parser_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		::hscript::Parser parser = tmp7;		HX_STACK_VAR(parser,"parser");
		HX_STACK_LINE(158)
		::String tmp8 = condition;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		::hscript::Expr tmp9 = parser->parseString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(158)
		::hscript::Expr program = tmp9;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(159)
		::hscript::Interp tmp10 = ::hscript::Interp_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(159)
		::hscript::Interp interp = tmp10;		HX_STACK_VAR(interp,"interp");
		HX_STACK_LINE(160)
		::haxe::ui::toolkit::hscript::ClientWrapper tmp11 = ::haxe::ui::toolkit::hscript::ClientWrapper_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(160)
		::haxe::ui::toolkit::hscript::ClientWrapper clientWrapper = tmp11;		HX_STACK_VAR(clientWrapper,"clientWrapper");
		HX_STACK_LINE(161)
		::haxe::ui::toolkit::hscript::ClientWrapper tmp12 = clientWrapper;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(161)
		interp->variables->set(HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),tmp12);
		HX_STACK_LINE(162)
		::hscript::Expr tmp13 = program;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(162)
		Dynamic tmp14 = interp->execute(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(162)
		bool conditionResult = tmp14;		HX_STACK_VAR(conditionResult,"conditionResult");
		HX_STACK_LINE(163)
		bool tmp15 = (conditionResult == false);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		if ((tmp15)){
			HX_STACK_LINE(164)
			return null();
		}
	}
	HX_STACK_LINE(168)
	bool tmp7 = (nodeName == HX_HCSTRING("import","\x65","\xa1","\x82","\x08"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(168)
	if ((tmp7)){
		HX_STACK_LINE(169)
		::String tmp8 = node->get(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		::String importResource = tmp8;		HX_STACK_VAR(importResource,"importResource");
		HX_STACK_LINE(170)
		bool tmp9 = (importResource != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		if ((tmp9)){
			HX_STACK_LINE(171)
			::haxe::ui::toolkit::resources::ResourceManager tmp10 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(171)
			::String tmp11 = importResource;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			::String tmp12 = tmp10->getText(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(171)
			::String importData = tmp12;		HX_STACK_VAR(importData,"importData");
			HX_STACK_LINE(172)
			bool tmp13 = (importData != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(172)
			if ((tmp13)){
				HX_STACK_LINE(173)
				::String tmp14 = importData;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(173)
				::Xml tmp15 = ::Xml_obj::parse(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(173)
				::Xml importXml = tmp15;		HX_STACK_VAR(importXml,"importXml");
				HX_STACK_LINE(174)
				::Xml tmp16 = importXml;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(174)
				Dynamic tmp17 = ::haxe::ui::toolkit::core::Toolkit_obj::processXml(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(174)
				return tmp17;
			}
		}
	}
	else{
		HX_STACK_LINE(177)
		bool tmp8 = (nodeName == HX_HCSTRING("script","\x0b","\x4e","\x60","\x47"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(177)
		if ((tmp8)){
		}
		else{
			HX_STACK_LINE(178)
			bool tmp9 = (nodeName == HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(178)
			if ((tmp9)){
				HX_STACK_LINE(179)
				::haxe::ui::toolkit::core::xml::StyleProcessor tmp10 = ::haxe::ui::toolkit::core::xml::StyleProcessor_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(179)
				::haxe::ui::toolkit::core::xml::IXMLProcessor p = tmp10;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(180)
				::Xml tmp11 = node;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(180)
				Dynamic tmp12 = p->process(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(180)
				result = tmp12;
			}
			else{
				HX_STACK_LINE(182)
				::haxe::ui::toolkit::core::ClassManager tmp10 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(182)
				::String tmp11 = nodeName;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(182)
				bool tmp12 = tmp10->hasDataSourceClass(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				if ((tmp12)){
					HX_STACK_LINE(183)
					::haxe::ui::toolkit::core::xml::DataProcessor tmp13 = ::haxe::ui::toolkit::core::xml::DataProcessor_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(183)
					::haxe::ui::toolkit::core::xml::IXMLProcessor p = tmp13;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(184)
					::Xml tmp14 = node;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(184)
					Dynamic tmp15 = p->process(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(184)
					result = tmp15;
				}
				else{
					HX_STACK_LINE(186)
					::haxe::ui::toolkit::core::xml::UIProcessor tmp13 = ::haxe::ui::toolkit::core::xml::UIProcessor_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					::haxe::ui::toolkit::core::xml::IXMLProcessor p = tmp13;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(187)
					::Xml tmp14 = node;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(187)
					Dynamic tmp15 = p->process(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(187)
					result = tmp15;
					HX_STACK_LINE(188)
					bool tmp16 = (result == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					if ((tmp16)){
						HX_STACK_LINE(189)
						::String tmp17 = (HX_HCSTRING("WARNING: Could not find processor for '","\xc9","\xa6","\xaa","\xee") + nodeName);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(189)
						::String tmp18 = (tmp17 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(189)
						Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Toolkit.hx","\xe0","\xf8","\x1b","\x71"),189,HX_HCSTRING("haxe.ui.toolkit.core.Toolkit","\x51","\xb4","\xda","\xf7"),HX_HCSTRING("processXmlNode","\xca","\x1c","\x7e","\x28"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(189)
						::haxe::Log_obj::trace(tmp18,tmp19);
					}
				}
			}
		}
	}
	HX_STACK_LINE(194)
	Dynamic tmp8 = node->elements();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(194)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp8);  __it->hasNext(); ){
		::Xml child = __it->next();
		{
			HX_STACK_LINE(195)
			::Xml tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(195)
			Dynamic tmp10 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlNode(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			Dynamic childResult = tmp10;		HX_STACK_VAR(childResult,"childResult");
			HX_STACK_LINE(197)
			Dynamic tmp11 = childResult;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(197)
			Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(197)
			bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::haxe::ui::toolkit::data::IDataSource >());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(197)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(197)
			if ((tmp13)){
				HX_STACK_LINE(197)
				Dynamic tmp15 = result;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(197)
				Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(197)
				tmp14 = ::Std_obj::is(tmp16,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDataComponent >());
			}
			else{
				HX_STACK_LINE(197)
				tmp14 = false;
			}
			HX_STACK_LINE(197)
			if ((tmp14)){
				HX_STACK_LINE(198)
				::haxe::ui::toolkit::core::interfaces::IDataComponent tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(198)
				tmp15 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDataComponent >::cast(result);
				HX_STACK_LINE(198)
				::haxe::ui::toolkit::data::IDataSource tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(198)
				tmp16 = hx::TCast< ::haxe::ui::toolkit::data::IDataSource >::cast(childResult);
				HX_STACK_LINE(198)
				tmp15->set_dataSource(tmp16);
			}
			HX_STACK_LINE(201)
			Dynamic tmp15 = childResult;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(201)
			Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(201)
			bool tmp17 = ::Std_obj::is(tmp16,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(201)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(201)
			if ((tmp17)){
				HX_STACK_LINE(201)
				Dynamic tmp19 = result;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(201)
				Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(201)
				tmp18 = ::Std_obj::is(tmp20,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());
			}
			else{
				HX_STACK_LINE(201)
				tmp18 = false;
			}
			HX_STACK_LINE(201)
			if ((tmp18)){
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(202)
				tmp19 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(result);
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(202)
				tmp20 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(childResult);
				HX_STACK_LINE(202)
				tmp19->addChild(tmp20);
			}
		}
;
	}
	HX_STACK_LINE(206)
	Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(206)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXmlNode,return )

Dynamic Toolkit_obj::postProcessXmlNode( ::Xml node,Dynamic parentObject){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","postProcessXmlNode",0x4d42a347,"haxe.ui.toolkit.core.Toolkit.postProcessXmlNode","haxe/ui/toolkit/core/Toolkit.hx",209,0xd65388cd)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(parentObject,"parentObject")
	HX_STACK_LINE(210)
	bool tmp = (node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	if ((tmp)){
		HX_STACK_LINE(211)
		return null();
	}
	HX_STACK_LINE(214)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(215)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		int tmp2 = node->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		int tmp3 = ::Xml_obj::Element;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		if ((tmp4)){
			HX_STACK_LINE(215)
			::String tmp5 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node->nodeType);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(215)
		tmp1 = node->nodeName;
	}
	HX_STACK_LINE(215)
	::String nodeName = tmp1;		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(216)
	int tmp2 = nodeName.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	int n = tmp2;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(217)
	bool tmp3 = (n != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	if ((tmp3)){
		HX_STACK_LINE(218)
		int tmp4 = (n + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(218)
		int tmp5 = nodeName.length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		::String tmp6 = nodeName.substr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		nodeName = tmp6;
	}
	HX_STACK_LINE(220)
	::String tmp4 = nodeName.toLowerCase();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(220)
	nodeName = tmp4;
	HX_STACK_LINE(222)
	::String tmp5 = node->get(HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(222)
	::String condition = tmp5;		HX_STACK_VAR(condition,"condition");
	HX_STACK_LINE(223)
	bool tmp6 = (condition != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(223)
	if ((tmp6)){
		HX_STACK_LINE(224)
		::hscript::Parser tmp7 = ::hscript::Parser_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(224)
		::hscript::Parser parser = tmp7;		HX_STACK_VAR(parser,"parser");
		HX_STACK_LINE(225)
		::String tmp8 = condition;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(225)
		::hscript::Expr tmp9 = parser->parseString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(225)
		::hscript::Expr program = tmp9;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(226)
		::hscript::Interp tmp10 = ::hscript::Interp_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(226)
		::hscript::Interp interp = tmp10;		HX_STACK_VAR(interp,"interp");
		HX_STACK_LINE(227)
		::haxe::ui::toolkit::hscript::ClientWrapper tmp11 = ::haxe::ui::toolkit::hscript::ClientWrapper_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(227)
		::haxe::ui::toolkit::hscript::ClientWrapper clientWrapper = tmp11;		HX_STACK_VAR(clientWrapper,"clientWrapper");
		HX_STACK_LINE(228)
		::haxe::ui::toolkit::hscript::ClientWrapper tmp12 = clientWrapper;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(228)
		interp->variables->set(HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),tmp12);
		HX_STACK_LINE(229)
		::hscript::Expr tmp13 = program;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(229)
		Dynamic tmp14 = interp->execute(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(229)
		bool conditionResult = tmp14;		HX_STACK_VAR(conditionResult,"conditionResult");
		HX_STACK_LINE(230)
		bool tmp15 = (conditionResult == false);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(230)
		if ((tmp15)){
			HX_STACK_LINE(231)
			return null();
		}
	}
	HX_STACK_LINE(235)
	bool tmp7 = (nodeName == HX_HCSTRING("script","\x0b","\x4e","\x60","\x47"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(235)
	if ((tmp7)){
		HX_STACK_LINE(236)
		::String tmp8 = node->get(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(236)
		::String scriptResource = tmp8;		HX_STACK_VAR(scriptResource,"scriptResource");
		HX_STACK_LINE(237)
		::String scriptData = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(scriptData,"scriptData");
		HX_STACK_LINE(238)
		bool tmp9 = (scriptResource != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		if ((tmp9)){
			HX_STACK_LINE(239)
			::haxe::ui::toolkit::resources::ResourceManager tmp10 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(239)
			::String tmp11 = scriptResource;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(239)
			::String tmp12 = tmp10->getText(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(239)
			hx::AddEq(scriptData,tmp12);
			HX_STACK_LINE(240)
			hx::AddEq(scriptData,HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));
		}
		HX_STACK_LINE(242)
		::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			::Xml tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					int tmp12 = node->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(242)
					int tmp13 = ::Xml_obj::Document;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(242)
					bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(242)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(242)
					if ((tmp14)){
						HX_STACK_LINE(242)
						int tmp16 = node->nodeType;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(242)
						int tmp17 = ::Xml_obj::Element;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(242)
						int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(242)
						tmp15 = (tmp16 != tmp18);
					}
					else{
						HX_STACK_LINE(242)
						tmp15 = false;
					}
					HX_STACK_LINE(242)
					if ((tmp15)){
						HX_STACK_LINE(242)
						::String tmp16 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + node->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(242)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(242)
				tmp11 = node->children->__get((int)0).StaticCast< ::Xml >();
			}
			HX_STACK_LINE(242)
			::Xml _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(242)
			int tmp12 = _this->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(242)
			int tmp13 = ::Xml_obj::Document;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(242)
			bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(242)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(242)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(242)
			if ((tmp15)){
				HX_STACK_LINE(242)
				int tmp17 = _this->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(242)
				int tmp18 = ::Xml_obj::Element;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(242)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(242)
				tmp16 = (tmp17 == tmp19);
			}
			else{
				HX_STACK_LINE(242)
				tmp16 = true;
			}
			HX_STACK_LINE(242)
			if ((tmp16)){
				HX_STACK_LINE(242)
				::String tmp17 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + _this->nodeType);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(242)
				HX_STACK_DO_THROW(tmp17);
			}
			HX_STACK_LINE(242)
			tmp10 = _this->nodeValue;
		}
		HX_STACK_LINE(242)
		::String scriptNodeData = tmp10;		HX_STACK_VAR(scriptNodeData,"scriptNodeData");
		HX_STACK_LINE(243)
		bool tmp11 = (scriptNodeData != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(243)
		if ((tmp11)){
			HX_STACK_LINE(244)
			::String tmp12 = scriptNodeData;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(244)
			::String tmp13 = ::StringTools_obj::trim(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(244)
			scriptNodeData = tmp13;
			HX_STACK_LINE(245)
			::String tmp14 = (HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00") + scriptNodeData);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(245)
			hx::AddEq(scriptData,tmp14);
		}
		HX_STACK_LINE(247)
		bool tmp12 = (parentObject != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(247)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(247)
		if ((tmp12)){
			HX_STACK_LINE(247)
			Dynamic tmp14 = parentObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(247)
			Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(247)
			tmp13 = ::Std_obj::is(tmp15,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IComponent >());
		}
		else{
			HX_STACK_LINE(247)
			tmp13 = false;
		}
		HX_STACK_LINE(247)
		if ((tmp13)){
			HX_STACK_LINE(248)
			::haxe::ui::toolkit::core::interfaces::IComponent tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(248)
			tmp14 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IComponent >::cast(parentObject);
			HX_STACK_LINE(248)
			::String tmp15 = scriptData;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(248)
			tmp14->addScriptlet(tmp15);
		}
	}
	HX_STACK_LINE(252)
	Dynamic tmp8 = node->elements();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(252)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp8);  __it->hasNext(); ){
		::Xml child = __it->next();
		{
			HX_STACK_LINE(253)
			::Xml tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(253)
			Dynamic tmp10 = parentObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(253)
			Dynamic tmp11 = ::haxe::ui::toolkit::core::Toolkit_obj::postProcessXmlNode(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(253)
			Dynamic childResult = tmp11;		HX_STACK_VAR(childResult,"childResult");
		}
;
	}
	HX_STACK_LINE(256)
	Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(256)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,postProcessXmlNode,return )

::String Toolkit_obj::_defaultTransition;

Float Toolkit_obj::_defaultTransitionTime;

::haxe::ds::StringMap Toolkit_obj::_transitionRegister;

::haxe::ds::StringMap Toolkit_obj::_transitionTimeRegister;

::String Toolkit_obj::get_defaultTransition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_defaultTransition",0x6463deb0,"haxe.ui.toolkit.core.Toolkit.get_defaultTransition","haxe/ui/toolkit/core/Toolkit.hx",269,0xd65388cd)
	HX_STACK_LINE(270)
	::String tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_defaultTransition,return )

::String Toolkit_obj::set_defaultTransition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","set_defaultTransition",0xb86cacbc,"haxe.ui.toolkit.core.Toolkit.set_defaultTransition","haxe/ui/toolkit/core/Toolkit.hx",273,0xd65388cd)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(274)
	::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition = value;
	HX_STACK_LINE(275)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_defaultTransition,return )

Float Toolkit_obj::get_defaultTransitionTime( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_defaultTransitionTime",0x5506eedd,"haxe.ui.toolkit.core.Toolkit.get_defaultTransitionTime","haxe/ui/toolkit/core/Toolkit.hx",278,0xd65388cd)
	HX_STACK_LINE(279)
	Float tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransitionTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_defaultTransitionTime,return )

Float Toolkit_obj::set_defaultTransitionTime( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","set_defaultTransitionTime",0xc15db2e9,"haxe.ui.toolkit.core.Toolkit.set_defaultTransitionTime","haxe/ui/toolkit/core/Toolkit.hx",282,0xd65388cd)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(283)
	::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransitionTime = value;
	HX_STACK_LINE(284)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_defaultTransitionTime,return )

::String Toolkit_obj::getTransitionForClass( ::hx::Class cls){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","getTransitionForClass",0x0e947f7d,"haxe.ui.toolkit.core.Toolkit.getTransitionForClass","haxe/ui/toolkit/core/Toolkit.hx",287,0xd65388cd)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(288)
	::String tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	::String s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(289)
	::hx::Class tmp1 = cls;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	::String tmp2 = ::Type_obj::getClassName(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	::String className = tmp2;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(290)
	::haxe::ds::StringMap tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(290)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(290)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(290)
	if ((tmp4)){
		HX_STACK_LINE(290)
		::haxe::ds::StringMap tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(290)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(290)
		::String tmp8 = className;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(290)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(290)
		::String tmp10 = tmp7->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(290)
		::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(290)
		tmp5 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(290)
		tmp5 = false;
	}
	HX_STACK_LINE(290)
	if ((tmp5)){
		HX_STACK_LINE(291)
		::haxe::ds::StringMap tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(291)
		::String tmp7 = className;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(291)
		::String tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(291)
		s = tmp8;
	}
	HX_STACK_LINE(293)
	::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(293)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,getTransitionForClass,return )

Void Toolkit_obj::setTransitionForClass( ::hx::Class cls,::String transition){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","setTransitionForClass",0x629d4d89,"haxe.ui.toolkit.core.Toolkit.setTransitionForClass","haxe/ui/toolkit/core/Toolkit.hx",296,0xd65388cd)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(transition,"transition")
		HX_STACK_LINE(297)
		::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		if ((tmp1)){
			HX_STACK_LINE(298)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister = tmp2;
		}
		HX_STACK_LINE(300)
		::hx::Class tmp2 = cls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		::String className = tmp3;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(301)
		::haxe::ds::StringMap tmp4 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		::String tmp5 = className;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		::String tmp6 = transition;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(301)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,setTransitionForClass,(void))

Float Toolkit_obj::getTransitionTimeForClass( ::hx::Class cls){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","getTransitionTimeForClass",0xa1f8fbaa,"haxe.ui.toolkit.core.Toolkit.getTransitionTimeForClass","haxe/ui/toolkit/core/Toolkit.hx",304,0xd65388cd)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(305)
	Float tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransitionTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	Float s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(306)
	::hx::Class tmp1 = cls;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	::String tmp2 = ::Type_obj::getClassName(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	::String className = tmp2;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(307)
	::haxe::ds::StringMap tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(307)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(307)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(307)
	if ((tmp4)){
		HX_STACK_LINE(307)
		::haxe::ds::StringMap tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(307)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(307)
		::String tmp8 = className;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(307)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(307)
		Dynamic tmp10 = tmp7->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(307)
		Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(307)
		tmp5 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(307)
		tmp5 = false;
	}
	HX_STACK_LINE(307)
	if ((tmp5)){
		HX_STACK_LINE(308)
		::haxe::ds::StringMap tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(308)
		::String tmp7 = className;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(308)
		Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(308)
		s = tmp8;
	}
	HX_STACK_LINE(310)
	Float tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(310)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,getTransitionTimeForClass,return )

Void Toolkit_obj::setTransitionTimeForClass( ::hx::Class cls,Float transitionTime){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","setTransitionTimeForClass",0x0e4fbfb6,"haxe.ui.toolkit.core.Toolkit.setTransitionTimeForClass","haxe/ui/toolkit/core/Toolkit.hx",313,0xd65388cd)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(transitionTime,"transitionTime")
		HX_STACK_LINE(314)
		::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		if ((tmp1)){
			HX_STACK_LINE(315)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(315)
			::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister = tmp2;
		}
		HX_STACK_LINE(317)
		::hx::Class tmp2 = cls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		::String className = tmp3;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(318)
		::haxe::ds::StringMap tmp4 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionTimeRegister;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(318)
		::String tmp5 = className;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(318)
		Float tmp6 = transitionTime;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(318)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,setTransitionTimeForClass,(void))

Void Toolkit_obj::addScriptletClass( ::String name,::hx::Class cls){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","addScriptletClass",0x656c3a0c,"haxe.ui.toolkit.core.Toolkit.addScriptletClass","haxe/ui/toolkit/core/Toolkit.hx",321,0xd65388cd)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(cls,"cls")
		HX_STACK_LINE(322)
		::haxe::ui::toolkit::hscript::ScriptManager tmp = ::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		::hx::Class tmp2 = cls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		tmp->addClass(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,addScriptletClass,(void))

Void Toolkit_obj::addStyleSheet( ::String resourceId){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","addStyleSheet",0xb2cfc052,"haxe.ui.toolkit.core.Toolkit.addStyleSheet","haxe/ui/toolkit/core/Toolkit.hx",325,0xd65388cd)
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_LINE(326)
		::haxe::ui::toolkit::style::StyleManager tmp = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		::haxe::ui::toolkit::resources::ResourceManager tmp1 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		::String tmp2 = resourceId;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		::String tmp3 = tmp1->getText(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		::haxe::ui::toolkit::style::Styles tmp4 = ::haxe::ui::toolkit::style::StyleParser_obj::fromString(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		tmp->addStyles(tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,addStyleSheet,(void))

::haxe::ui::toolkit::core::Root Toolkit_obj::open( Dynamic fn,Dynamic options){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","open",0xb7e3b907,"haxe.ui.toolkit.core.Toolkit.open","haxe/ui/toolkit/core/Toolkit.hx",341,0xd65388cd)
	HX_STACK_ARG(fn,"fn")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(342)
	bool tmp = (options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	if ((tmp)){
		HX_STACK_LINE(343)
		Dynamic tmp1 = options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		Dynamic tmp2 = fn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		::haxe::ui::toolkit::core::Root tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::openPopup(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		return tmp3;
	}
	HX_STACK_LINE(345)
	Dynamic tmp1 = fn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	::haxe::ui::toolkit::core::Root tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::openFullscreen(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,open,return )

::haxe::ui::toolkit::core::Root Toolkit_obj::openFullscreen( Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","openFullscreen",0xc39f2622,"haxe.ui.toolkit.core.Toolkit.openFullscreen","haxe/ui/toolkit/core/Toolkit.hx",348,0xd65388cd)
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(349)
	::haxe::ui::toolkit::core::RootManager tmp = ::haxe::ui::toolkit::core::RootManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",349,0xd65388cd)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)0,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)0,false);
				__result->Add(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe") , (int)100,false);
				__result->Add(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10") , (int)100,false);
				__result->Add(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde") , HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(349)
	Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	Dynamic tmp2 = fn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(349)
	::haxe::ui::toolkit::core::Root tmp3 = tmp->createRoot(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(349)
	::haxe::ui::toolkit::core::Root root = tmp3;		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(350)
	::haxe::ui::toolkit::core::Root tmp4 = root;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(350)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,openFullscreen,return )

::haxe::ui::toolkit::core::Root Toolkit_obj::openPopup( Dynamic options,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","openPopup",0xfd3fa7a5,"haxe.ui.toolkit.core.Toolkit.openPopup","haxe/ui/toolkit/core/Toolkit.hx",353,0xd65388cd)
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(354)
	bool tmp = (options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",355,0xd65388cd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(355)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		options = tmp1;
	}
	HX_STACK_LINE(358)
	bool tmp1 = (options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(358)
	if ((tmp1)){
		HX_STACK_LINE(358)
		tmp2 = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(358)
		tmp2 = (int)20;
	}
	HX_STACK_LINE(358)
	options->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = tmp2;
	HX_STACK_LINE(359)
	bool tmp3 = (options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(359)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(359)
	if ((tmp3)){
		HX_STACK_LINE(359)
		tmp4 = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(359)
		tmp4 = (int)20;
	}
	HX_STACK_LINE(359)
	options->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = tmp4;
	HX_STACK_LINE(360)
	bool tmp5 = (options->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(360)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(360)
	if ((tmp5)){
		HX_STACK_LINE(360)
		tmp6 = options->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(360)
		tmp6 = HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6");
	}
	HX_STACK_LINE(360)
	options->__FieldRef(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde")) = tmp6;
	HX_STACK_LINE(362)
	::haxe::ui::toolkit::core::RootManager tmp7 = ::haxe::ui::toolkit::core::RootManager_obj::get_instance();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(362)
	Dynamic tmp8 = options;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(362)
	Dynamic tmp9 = fn;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(362)
	::haxe::ui::toolkit::core::Root tmp10 = tmp7->createRoot(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(362)
	::haxe::ui::toolkit::core::Root root = tmp10;		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(363)
	::haxe::ui::toolkit::core::Root tmp11 = root;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(363)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,openPopup,return )

Float Toolkit_obj::_scaleFactor;

Float Toolkit_obj::get_scaleFactor( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_scaleFactor",0x0642a073,"haxe.ui.toolkit.core.Toolkit.get_scaleFactor","haxe/ui/toolkit/core/Toolkit.hx",368,0xd65388cd)
	HX_STACK_LINE(369)
	Float tmp = ::haxe::ui::toolkit::core::Toolkit_obj::_scaleFactor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(369)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(369)
	if ((tmp1)){
		HX_STACK_LINE(370)
		bool tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::autoScale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		if ((tmp3)){
			HX_STACK_LINE(371)
			Float tmp4 = ::openfl::_legacy::_system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			::haxe::ui::toolkit::core::Toolkit_obj::set_scaleFactor(tmp4);
			HX_STACK_LINE(372)
			Float tmp5 = ::haxe::ui::toolkit::core::Toolkit_obj::_scaleFactor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(372)
			bool tmp6 = (tmp5 > (int)160);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(372)
			if ((tmp6)){
				HX_STACK_LINE(373)
				hx::DivEq(::haxe::ui::toolkit::core::Toolkit_obj::_scaleFactor,(int)160);
			}
			else{
				HX_STACK_LINE(375)
				::haxe::ui::toolkit::core::Toolkit_obj::_scaleFactor = (int)1;
			}
		}
		else{
			HX_STACK_LINE(378)
			::haxe::ui::toolkit::core::Toolkit_obj::_scaleFactor = (int)1;
		}
	}
	HX_STACK_LINE(381)
	Float tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::_scaleFactor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_scaleFactor,return )

Float Toolkit_obj::set_scaleFactor( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","set_scaleFactor",0x020e1d7f,"haxe.ui.toolkit.core.Toolkit.set_scaleFactor","haxe/ui/toolkit/core/Toolkit.hx",383,0xd65388cd)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(384)
	::haxe::ui::toolkit::core::Toolkit_obj::_scaleFactor = value;
	HX_STACK_LINE(385)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_scaleFactor,return )


Toolkit_obj::Toolkit_obj()
{
}

Dynamic Toolkit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"initInstance") ) { return initInstance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Toolkit_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"open") ) { outValue = open_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { outValue = theme; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		if (HX_FIELD_EQ(inName,"autoScale") ) { outValue = autoScale; return true;  }
		if (HX_FIELD_EQ(inName,"openPopup") ) { outValue = openPopup_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"processXml") ) { outValue = processXml_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionInfo") ) { outValue = inCallProp == hx::paccAlways ? get_versionInfo() : versionInfo; return true; }
		if (HX_FIELD_EQ(inName,"scaleFactor") ) { if (inCallProp == hx::paccAlways) { outValue = get_scaleFactor(); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_versionInfo") ) { outValue = _versionInfo; return true;  }
		if (HX_FIELD_EQ(inName,"_scaleFactor") ) { outValue = _scaleFactor; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { outValue = inCallProp == hx::paccAlways ? get_versionString() : versionString; return true; }
		if (HX_FIELD_EQ(inName,"addStyleSheet") ) { outValue = addStyleSheet_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processXmlNode") ) { outValue = processXmlNode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"openFullscreen") ) { outValue = openFullscreen_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_versionInfo") ) { outValue = get_versionInfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"useDefaultTheme") ) { outValue = useDefaultTheme; return true;  }
		if (HX_FIELD_EQ(inName,"get_scaleFactor") ) { outValue = get_scaleFactor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_scaleFactor") ) { outValue = set_scaleFactor_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_versionString") ) { outValue = get_versionString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"defaultTransition") ) { if (inCallProp == hx::paccAlways) { outValue = get_defaultTransition(); return true; } }
		if (HX_FIELD_EQ(inName,"addScriptletClass") ) { outValue = addScriptletClass_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"processXmlResource") ) { outValue = processXmlResource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"postProcessXmlNode") ) { outValue = postProcessXmlNode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_defaultTransition") ) { outValue = _defaultTransition; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_transitionRegister") ) { outValue = _transitionRegister; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"registerXMLProcessor") ) { outValue = registerXMLProcessor_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredProcessors") ) { outValue = _registeredProcessors; return true;  }
		if (HX_FIELD_EQ(inName,"get_defaultTransition") ) { outValue = get_defaultTransition_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_defaultTransition") ) { outValue = set_defaultTransition_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTransitionForClass") ) { outValue = getTransitionForClass_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setTransitionForClass") ) { outValue = setTransitionForClass_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_defaultTransitionTime") ) { outValue = _defaultTransitionTime; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_transitionTimeRegister") ) { outValue = _transitionTimeRegister; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_defaultTransitionTime") ) { outValue = get_defaultTransitionTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_defaultTransitionTime") ) { outValue = set_defaultTransitionTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTransitionTimeForClass") ) { outValue = getTransitionTimeForClass_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setTransitionTimeForClass") ) { outValue = setTransitionTimeForClass_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Toolkit_obj::DPI_THRESHOLD,HX_HCSTRING("DPI_THRESHOLD","\xc9","\xdc","\xfe","\x5d")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Toolkit*/ ,(void *) &Toolkit_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Toolkit*/ ,(void *) &Toolkit_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Toolkit_obj::_versionInfo,HX_HCSTRING("_versionInfo","\xa7","\x65","\xad","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Toolkit_obj::versionInfo,HX_HCSTRING("versionInfo","\xa6","\xb7","\xa3","\xdb")},
	{hx::fsString,(void *) &Toolkit_obj::versionString,HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Toolkit_obj::_registeredProcessors,HX_HCSTRING("_registeredProcessors","\xe2","\x4c","\xdf","\x11")},
	{hx::fsBool,(void *) &Toolkit_obj::useDefaultTheme,HX_HCSTRING("useDefaultTheme","\x6f","\x00","\xc2","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Toolkit_obj::theme,HX_HCSTRING("theme","\x09","\x7e","\x86","\x0f")},
	{hx::fsBool,(void *) &Toolkit_obj::autoScale,HX_HCSTRING("autoScale","\x9b","\x0c","\xda","\x56")},
	{hx::fsString,(void *) &Toolkit_obj::_defaultTransition,HX_HCSTRING("_defaultTransition","\x77","\xea","\x26","\x02")},
	{hx::fsFloat,(void *) &Toolkit_obj::_defaultTransitionTime,HX_HCSTRING("_defaultTransitionTime","\x24","\xea","\x68","\x8d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Toolkit_obj::_transitionRegister,HX_HCSTRING("_transitionRegister","\x37","\x91","\x32","\x67")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Toolkit_obj::_transitionTimeRegister,HX_HCSTRING("_transitionTimeRegister","\x64","\x68","\x7f","\x85")},
	{hx::fsFloat,(void *) &Toolkit_obj::_scaleFactor,HX_HCSTRING("_scaleFactor","\xfa","\x0c","\x1b","\x36")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initInstance","\xc5","\xa6","\x97","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Toolkit_obj::DPI_THRESHOLD,"DPI_THRESHOLD");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Toolkit_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_versionInfo,"_versionInfo");
	HX_MARK_MEMBER_NAME(Toolkit_obj::versionInfo,"versionInfo");
	HX_MARK_MEMBER_NAME(Toolkit_obj::versionString,"versionString");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_registeredProcessors,"_registeredProcessors");
	HX_MARK_MEMBER_NAME(Toolkit_obj::useDefaultTheme,"useDefaultTheme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::autoScale,"autoScale");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_defaultTransition,"_defaultTransition");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_defaultTransitionTime,"_defaultTransitionTime");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_transitionRegister,"_transitionRegister");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_transitionTimeRegister,"_transitionTimeRegister");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_scaleFactor,"_scaleFactor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::DPI_THRESHOLD,"DPI_THRESHOLD");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_versionInfo,"_versionInfo");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::versionInfo,"versionInfo");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::versionString,"versionString");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_registeredProcessors,"_registeredProcessors");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::useDefaultTheme,"useDefaultTheme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::autoScale,"autoScale");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_defaultTransition,"_defaultTransition");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_defaultTransitionTime,"_defaultTransitionTime");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_transitionRegister,"_transitionRegister");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_transitionTimeRegister,"_transitionTimeRegister");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_scaleFactor,"_scaleFactor");
};

#endif

hx::Class Toolkit_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DPI_THRESHOLD","\xc9","\xdc","\xfe","\x5d"),
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("_versionInfo","\xa7","\x65","\xad","\x41"),
	HX_HCSTRING("versionInfo","\xa6","\xb7","\xa3","\xdb"),
	HX_HCSTRING("get_versionInfo","\x3d","\x6f","\x85","\x9c"),
	HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51"),
	HX_HCSTRING("get_versionString","\x60","\xf1","\x10","\x58"),
	HX_HCSTRING("_registeredProcessors","\xe2","\x4c","\xdf","\x11"),
	HX_HCSTRING("registerXMLProcessor","\x7e","\x53","\x9f","\x75"),
	HX_HCSTRING("useDefaultTheme","\x6f","\x00","\xc2","\x9c"),
	HX_HCSTRING("theme","\x09","\x7e","\x86","\x0f"),
	HX_HCSTRING("autoScale","\x9b","\x0c","\xda","\x56"),
	HX_HCSTRING("processXmlResource","\x96","\x73","\xa9","\x1a"),
	HX_HCSTRING("processXml","\xa8","\x72","\x28","\xd7"),
	HX_HCSTRING("processXmlNode","\xca","\x1c","\x7e","\x28"),
	HX_HCSTRING("postProcessXmlNode","\x4a","\x1d","\xeb","\xa2"),
	HX_HCSTRING("_defaultTransition","\x77","\xea","\x26","\x02"),
	HX_HCSTRING("_defaultTransitionTime","\x24","\xea","\x68","\x8d"),
	HX_HCSTRING("_transitionRegister","\x37","\x91","\x32","\x67"),
	HX_HCSTRING("_transitionTimeRegister","\x64","\x68","\x7f","\x85"),
	HX_HCSTRING("get_defaultTransition","\x8d","\x48","\xbf","\xad"),
	HX_HCSTRING("set_defaultTransition","\x99","\x16","\xc8","\x01"),
	HX_HCSTRING("get_defaultTransitionTime","\x3a","\x0b","\x59","\x3a"),
	HX_HCSTRING("set_defaultTransitionTime","\x46","\xcf","\xaf","\xa6"),
	HX_HCSTRING("getTransitionForClass","\x5a","\xe9","\xef","\x57"),
	HX_HCSTRING("setTransitionForClass","\x66","\xb7","\xf8","\xab"),
	HX_HCSTRING("getTransitionTimeForClass","\x07","\x18","\x4b","\x87"),
	HX_HCSTRING("setTransitionTimeForClass","\x13","\xdc","\xa1","\xf3"),
	HX_HCSTRING("addScriptletClass","\x69","\x31","\xbc","\x55"),
	HX_HCSTRING("addStyleSheet","\x2f","\x85","\x5f","\x66"),
	HX_HCSTRING("open","\xca","\x03","\xb4","\x49"),
	HX_HCSTRING("openFullscreen","\xa5","\xa2","\xdb","\x2d"),
	HX_HCSTRING("openPopup","\x02","\x7a","\xba","\x39"),
	HX_HCSTRING("_scaleFactor","\xfa","\x0c","\x1b","\x36"),
	HX_HCSTRING("get_scaleFactor","\x90","\x16","\xf3","\x90"),
	HX_HCSTRING("set_scaleFactor","\x9c","\x93","\xbe","\x8c"),
	::String(null()) };

void Toolkit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Toolkit","\x51","\xb4","\xda","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Toolkit_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Toolkit_obj >;
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

void Toolkit_obj::__boot()
{
	DPI_THRESHOLD= (int)160;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",91,0xd65388cd)
		{
			HX_STACK_LINE(91)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			return tmp1;
		}
		return null();
	}
};
	_versionInfo= _Function_0_1::Block();
	useDefaultTheme= true;
	autoScale= true;
	_defaultTransition= HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e");
	_defaultTransitionTime= ((Float).3);
	_scaleFactor= ((Float)0);
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
