package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_oxygen_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_oxygen_bold_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		className.set ("styles/windows/popup.png", __ASSET__styles_windows_popup_png);
		type.set ("styles/windows/popup.png", AssetType.IMAGE);
		className.set ("styles/windows/optionbox.png", __ASSET__styles_windows_optionbox_png);
		type.set ("styles/windows/optionbox.png", AssetType.IMAGE);
		className.set ("styles/windows/accordion.css", __ASSET__styles_windows_accordion_css);
		type.set ("styles/windows/accordion.css", AssetType.TEXT);
		className.set ("styles/windows/menus.css", __ASSET__styles_windows_menus_css);
		type.set ("styles/windows/menus.css", AssetType.TEXT);
		className.set ("styles/windows/button.png", __ASSET__styles_windows_button_png);
		type.set ("styles/windows/button.png", AssetType.IMAGE);
		className.set ("styles/windows/textinput.png", __ASSET__styles_windows_textinput_png);
		type.set ("styles/windows/textinput.png", AssetType.IMAGE);
		className.set ("styles/windows/buttons.css", __ASSET__styles_windows_buttons_css);
		type.set ("styles/windows/buttons.css", AssetType.TEXT);
		className.set ("styles/windows/vprogress.png", __ASSET__styles_windows_vprogress_png);
		type.set ("styles/windows/vprogress.png", AssetType.IMAGE);
		className.set ("styles/windows/hprogress.png", __ASSET__styles_windows_hprogress_png);
		type.set ("styles/windows/hprogress.png", AssetType.IMAGE);
		className.set ("styles/windows/listview.png", __ASSET__styles_windows_listview_png);
		type.set ("styles/windows/listview.png", AssetType.IMAGE);
		className.set ("styles/windows/accordion.min.css", __ASSET__styles_windows_accordion_min_css);
		type.set ("styles/windows/accordion.min.css", AssetType.TEXT);
		className.set ("styles/windows/buttons.min.css", __ASSET__styles_windows_buttons_min_css);
		type.set ("styles/windows/buttons.min.css", AssetType.TEXT);
		className.set ("styles/windows/sliders.css", __ASSET__styles_windows_sliders_css);
		type.set ("styles/windows/sliders.css", AssetType.TEXT);
		className.set ("styles/windows/windows.css", __ASSET__styles_windows_windows_css);
		type.set ("styles/windows/windows.css", AssetType.TEXT);
		className.set ("styles/windows/vscroll.png", __ASSET__styles_windows_vscroll_png);
		type.set ("styles/windows/vscroll.png", AssetType.IMAGE);
		className.set ("styles/windows/calendar.css", __ASSET__styles_windows_calendar_css);
		type.set ("styles/windows/calendar.css", AssetType.TEXT);
		className.set ("styles/windows/listview.min.css", __ASSET__styles_windows_listview_min_css);
		type.set ("styles/windows/listview.min.css", AssetType.TEXT);
		className.set ("styles/windows/popups.css", __ASSET__styles_windows_popups_css);
		type.set ("styles/windows/popups.css", AssetType.TEXT);
		className.set ("styles/windows/container.png", __ASSET__styles_windows_container_png);
		type.set ("styles/windows/container.png", AssetType.IMAGE);
		className.set ("styles/windows/hscroll.png", __ASSET__styles_windows_hscroll_png);
		type.set ("styles/windows/hscroll.png", AssetType.IMAGE);
		className.set ("styles/windows/listview.css", __ASSET__styles_windows_listview_css);
		type.set ("styles/windows/listview.css", AssetType.TEXT);
		className.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_up_png);
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_down_png);
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_over_png);
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/right_arrow.png", __ASSET__styles_windows_glyphs_right_arrow_png);
		type.set ("styles/windows/glyphs/right_arrow.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_down_png);
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/left_arrow.png", __ASSET__styles_windows_glyphs_left_arrow_png);
		type.set ("styles/windows/glyphs/left_arrow.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_up_png);
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/up_arrow.png", __ASSET__styles_windows_glyphs_up_arrow_png);
		type.set ("styles/windows/glyphs/up_arrow.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/down_arrow.png", __ASSET__styles_windows_glyphs_down_arrow_png);
		type.set ("styles/windows/glyphs/down_arrow.png", AssetType.IMAGE);
		className.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_over_png);
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", AssetType.IMAGE);
		className.set ("styles/windows/checkbox.png", __ASSET__styles_windows_checkbox_png);
		type.set ("styles/windows/checkbox.png", AssetType.IMAGE);
		className.set ("styles/windows/tab.png", __ASSET__styles_windows_tab_png);
		type.set ("styles/windows/tab.png", AssetType.IMAGE);
		className.set ("styles/windows/tabs.css", __ASSET__styles_windows_tabs_css);
		type.set ("styles/windows/tabs.css", AssetType.TEXT);
		className.set ("styles/windows/scrolls.min.css", __ASSET__styles_windows_scrolls_min_css);
		type.set ("styles/windows/scrolls.min.css", AssetType.TEXT);
		className.set ("styles/windows/scrolls.css", __ASSET__styles_windows_scrolls_css);
		type.set ("styles/windows/scrolls.css", AssetType.TEXT);
		className.set ("styles/windows/rtf.css", __ASSET__styles_windows_rtf_css);
		type.set ("styles/windows/rtf.css", AssetType.TEXT);
		className.set ("styles/gradient/circle_dark.png", __ASSET__styles_gradient_circle_dark_png);
		type.set ("styles/gradient/circle_dark.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_right2.png", __ASSET__styles_gradient_arrow_right2_png);
		type.set ("styles/gradient/arrow_right2.png", AssetType.IMAGE);
		className.set ("styles/gradient/gripper_vertical_disabled.png", __ASSET__styles_gradient_gripper_vertical_disabled_png);
		type.set ("styles/gradient/gripper_vertical_disabled.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_down_dark.png", __ASSET__styles_gradient_arrow_down_dark_png);
		type.set ("styles/gradient/arrow_down_dark.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_left.png", __ASSET__styles_gradient_arrow_left_png);
		type.set ("styles/gradient/arrow_left.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_down_disabled.png", __ASSET__styles_gradient_arrow_down_disabled_png);
		type.set ("styles/gradient/arrow_down_disabled.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_down.png", __ASSET__styles_gradient_arrow_down_png);
		type.set ("styles/gradient/arrow_down.png", AssetType.IMAGE);
		className.set ("styles/gradient/gradient_mobile.min.css", __ASSET__styles_gradient_gradient_mobile_min_css);
		type.set ("styles/gradient/gradient_mobile.min.css", AssetType.TEXT);
		className.set ("styles/gradient/arrow_right_dark.png", __ASSET__styles_gradient_arrow_right_dark_png);
		type.set ("styles/gradient/arrow_right_dark.png", AssetType.IMAGE);
		className.set ("styles/gradient/cross_light_small.png", __ASSET__styles_gradient_cross_light_small_png);
		type.set ("styles/gradient/cross_light_small.png", AssetType.IMAGE);
		className.set ("styles/gradient/gripper_horizontal.png", __ASSET__styles_gradient_gripper_horizontal_png);
		type.set ("styles/gradient/gripper_horizontal.png", AssetType.IMAGE);
		className.set ("styles/gradient/gradient.css", __ASSET__styles_gradient_gradient_css);
		type.set ("styles/gradient/gradient.css", AssetType.TEXT);
		className.set ("styles/gradient/cross_dark_disabled.png", __ASSET__styles_gradient_cross_dark_disabled_png);
		type.set ("styles/gradient/cross_dark_disabled.png", AssetType.IMAGE);
		className.set ("styles/gradient/gradient.min.css", __ASSET__styles_gradient_gradient_min_css);
		type.set ("styles/gradient/gradient.min.css", AssetType.TEXT);
		className.set ("styles/gradient/gripper_vertical.png", __ASSET__styles_gradient_gripper_vertical_png);
		type.set ("styles/gradient/gripper_vertical.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_left_disabled.png", __ASSET__styles_gradient_arrow_left_disabled_png);
		type.set ("styles/gradient/arrow_left_disabled.png", AssetType.IMAGE);
		className.set ("styles/gradient/gripper_horizontal_disabled.png", __ASSET__styles_gradient_gripper_horizontal_disabled_png);
		type.set ("styles/gradient/gripper_horizontal_disabled.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_right.png", __ASSET__styles_gradient_arrow_right_png);
		type.set ("styles/gradient/arrow_right.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_right_disabled.png", __ASSET__styles_gradient_arrow_right_disabled_png);
		type.set ("styles/gradient/arrow_right_disabled.png", AssetType.IMAGE);
		className.set ("styles/gradient/cross_dark.png", __ASSET__styles_gradient_cross_dark_png);
		type.set ("styles/gradient/cross_dark.png", AssetType.IMAGE);
		className.set ("styles/gradient/hsplitter_gripper.png", __ASSET__styles_gradient_hsplitter_gripper_png);
		type.set ("styles/gradient/hsplitter_gripper.png", AssetType.IMAGE);
		className.set ("styles/gradient/gradient_mobile.css", __ASSET__styles_gradient_gradient_mobile_css);
		type.set ("styles/gradient/gradient_mobile.css", AssetType.TEXT);
		className.set ("styles/gradient/arrow_up_disabled.png", __ASSET__styles_gradient_arrow_up_disabled_png);
		type.set ("styles/gradient/arrow_up_disabled.png", AssetType.IMAGE);
		className.set ("styles/gradient/vsplitter_gripper.png", __ASSET__styles_gradient_vsplitter_gripper_png);
		type.set ("styles/gradient/vsplitter_gripper.png", AssetType.IMAGE);
		className.set ("styles/gradient/arrow_up.png", __ASSET__styles_gradient_arrow_up_png);
		type.set ("styles/gradient/arrow_up.png", AssetType.IMAGE);
		className.set ("styles/default/circle.png", __ASSET__styles_default_circle_png);
		type.set ("styles/default/circle.png", AssetType.IMAGE);
		className.set ("styles/default/up_down.png", __ASSET__styles_default_up_down_png);
		type.set ("styles/default/up_down.png", AssetType.IMAGE);
		className.set ("styles/default/collapse.png", __ASSET__styles_default_collapse_png);
		type.set ("styles/default/collapse.png", AssetType.IMAGE);
		className.set ("styles/default/cross.png", __ASSET__styles_default_cross_png);
		type.set ("styles/default/cross.png", AssetType.IMAGE);
		className.set ("styles/default/expand.png", __ASSET__styles_default_expand_png);
		type.set ("styles/default/expand.png", AssetType.IMAGE);
		className.set ("fonts/Oxygen.eot", __ASSET__fonts_oxygen_eot);
		type.set ("fonts/Oxygen.eot", AssetType.BINARY);
		className.set ("fonts/Oxygen-Bold.woff", __ASSET__fonts_oxygen_bold_woff);
		type.set ("fonts/Oxygen-Bold.woff", AssetType.BINARY);
		className.set ("fonts/Oxygen-Bold.eot", __ASSET__fonts_oxygen_bold_eot);
		type.set ("fonts/Oxygen-Bold.eot", AssetType.BINARY);
		className.set ("fonts/Oxygen.svg", __ASSET__fonts_oxygen_svg);
		type.set ("fonts/Oxygen.svg", AssetType.TEXT);
		className.set ("fonts/Oxygen-Bold.woff2", __ASSET__fonts_oxygen_bold_woff2);
		type.set ("fonts/Oxygen-Bold.woff2", AssetType.BINARY);
		className.set ("fonts/Oxygen-Bold.svg", __ASSET__fonts_oxygen_bold_svg);
		type.set ("fonts/Oxygen-Bold.svg", AssetType.TEXT);
		className.set ("fonts/Oxygen.ttf", __ASSET__fonts_oxygen_ttf);
		type.set ("fonts/Oxygen.ttf", AssetType.FONT);
		className.set ("fonts/Oxygen-Bold.ttf", __ASSET__fonts_oxygen_bold_ttf);
		type.set ("fonts/Oxygen-Bold.ttf", AssetType.FONT);
		className.set ("fonts/Oxygen.woff2", __ASSET__fonts_oxygen_woff2);
		type.set ("fonts/Oxygen.woff2", AssetType.BINARY);
		className.set ("fonts/Oxygen.woff", __ASSET__fonts_oxygen_woff);
		type.set ("fonts/Oxygen.woff", AssetType.BINARY);
		className.set ("assets/ui/demo.xml", __ASSET__assets_ui_demo_xml);
		type.set ("assets/ui/demo.xml", AssetType.TEXT);
		className.set ("assets/ui/example.xml", __ASSET__assets_ui_example_xml);
		type.set ("assets/ui/example.xml", AssetType.TEXT);
		className.set ("assets/ui/example.txt", __ASSET__assets_ui_example_txt);
		type.set ("assets/ui/example.txt", AssetType.TEXT);
		className.set ("assets/ui/example.hx", __ASSET__assets_ui_example_hx);
		type.set ("assets/ui/example.hx", AssetType.TEXT);
		className.set ("assets/img/rtfview/edit-italic.png", __ASSET__assets_img_rtfview_edit_italic_png);
		type.set ("assets/img/rtfview/edit-italic.png", AssetType.IMAGE);
		className.set ("assets/img/rtfview/edit-alignment-center.png", __ASSET__assets_img_rtfview_edit_alignment_center_png);
		type.set ("assets/img/rtfview/edit-alignment-center.png", AssetType.IMAGE);
		className.set ("assets/img/rtfview/edit-bold.png", __ASSET__assets_img_rtfview_edit_bold_png);
		type.set ("assets/img/rtfview/edit-bold.png", AssetType.IMAGE);
		className.set ("assets/img/rtfview/edit-alignment-right.png", __ASSET__assets_img_rtfview_edit_alignment_right_png);
		type.set ("assets/img/rtfview/edit-alignment-right.png", AssetType.IMAGE);
		className.set ("assets/img/rtfview/edit-underline.png", __ASSET__assets_img_rtfview_edit_underline_png);
		type.set ("assets/img/rtfview/edit-underline.png", AssetType.IMAGE);
		className.set ("assets/img/rtfview/edit-alignment-left.png", __ASSET__assets_img_rtfview_edit_alignment_left_png);
		type.set ("assets/img/rtfview/edit-alignment-left.png", AssetType.IMAGE);
		className.set ("assets/img/rtfview/edit-alignment-justify.png", __ASSET__assets_img_rtfview_edit_alignment_justify_png);
		type.set ("assets/img/rtfview/edit-alignment-justify.png", AssetType.IMAGE);
		className.set ("assets/img/rtfview/edit-list.png", __ASSET__assets_img_rtfview_edit_list_png);
		type.set ("assets/img/rtfview/edit-list.png", AssetType.IMAGE);
		className.set ("assets/css/code.min.css", __ASSET__assets_css_code_min_css);
		type.set ("assets/css/code.min.css", AssetType.TEXT);
		className.set ("assets/css/rtf.min.css", __ASSET__assets_css_rtf_min_css);
		type.set ("assets/css/rtf.min.css", AssetType.TEXT);
		className.set ("assets/css/code.css", __ASSET__assets_css_code_css);
		type.set ("assets/css/code.css", AssetType.TEXT);
		className.set ("assets/css/rtf.css", __ASSET__assets_css_rtf_css);
		type.set ("assets/css/rtf.css", AssetType.TEXT);
		className.set ("assets/openfl.svg", __ASSET__assets_openfl_svg);
		type.set ("assets/openfl.svg", AssetType.TEXT);
		className.set ("img/rtfview/edit-italic.png", __ASSET__img_rtfview_edit_italic_png);
		type.set ("img/rtfview/edit-italic.png", AssetType.IMAGE);
		className.set ("img/rtfview/edit-alignment-center.png", __ASSET__img_rtfview_edit_alignment_center_png);
		type.set ("img/rtfview/edit-alignment-center.png", AssetType.IMAGE);
		className.set ("img/rtfview/edit-bold.png", __ASSET__img_rtfview_edit_bold_png);
		type.set ("img/rtfview/edit-bold.png", AssetType.IMAGE);
		className.set ("img/rtfview/edit-alignment-right.png", __ASSET__img_rtfview_edit_alignment_right_png);
		type.set ("img/rtfview/edit-alignment-right.png", AssetType.IMAGE);
		className.set ("img/rtfview/edit-underline.png", __ASSET__img_rtfview_edit_underline_png);
		type.set ("img/rtfview/edit-underline.png", AssetType.IMAGE);
		className.set ("img/rtfview/edit-alignment-left.png", __ASSET__img_rtfview_edit_alignment_left_png);
		type.set ("img/rtfview/edit-alignment-left.png", AssetType.IMAGE);
		className.set ("img/rtfview/edit-alignment-justify.png", __ASSET__img_rtfview_edit_alignment_justify_png);
		type.set ("img/rtfview/edit-alignment-justify.png", AssetType.IMAGE);
		className.set ("img/rtfview/edit-list.png", __ASSET__img_rtfview_edit_list_png);
		type.set ("img/rtfview/edit-list.png", AssetType.IMAGE);
		className.set ("css/code.min.css", __ASSET__css_code_min_css);
		type.set ("css/code.min.css", AssetType.TEXT);
		className.set ("css/rtf.min.css", __ASSET__css_rtf_min_css);
		type.set ("css/rtf.min.css", AssetType.TEXT);
		className.set ("css/code.css", __ASSET__css_code_css);
		type.set ("css/code.css", AssetType.TEXT);
		className.set ("css/rtf.css", __ASSET__css_rtf_css);
		type.set ("css/rtf.css", AssetType.TEXT);
		className.set ("assets/Layout/UIPopupAddObjectMuseum.xml", __ASSET__assets_layout_uipopupaddobjectmuseum_xml);
		type.set ("assets/Layout/UIPopupAddObjectMuseum.xml", AssetType.TEXT);
		className.set ("assets/Layout/UIPopupEditObjectMuseum.xml", __ASSET__assets_layout_uipopupeditobjectmuseum_xml);
		type.set ("assets/Layout/UIPopupEditObjectMuseum.xml", AssetType.TEXT);
		className.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", __ASSET__assets_layout_uipopupremoveobjectmuseum_xml);
		type.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", AssetType.TEXT);
		className.set ("assets/Layout/UIMain.xml", __ASSET__assets_layout_uimain_xml);
		type.set ("assets/Layout/UIMain.xml", AssetType.TEXT);
		className.set ("layout/UIPopupAddObjectMuseum.xml", __ASSET__layout_uipopupaddobjectmuseum_xml);
		type.set ("layout/UIPopupAddObjectMuseum.xml", AssetType.TEXT);
		className.set ("layout/UIPopupEditObjectMuseum.xml", __ASSET__layout_uipopupeditobjectmuseum_xml);
		type.set ("layout/UIPopupEditObjectMuseum.xml", AssetType.TEXT);
		className.set ("layout/UIPopupRemoveObjectMuseum.xml", __ASSET__layout_uipopupremoveobjectmuseum_xml);
		type.set ("layout/UIPopupRemoveObjectMuseum.xml", AssetType.TEXT);
		className.set ("layout/UIMain.xml", __ASSET__layout_uimain_xml);
		type.set ("layout/UIMain.xml", AssetType.TEXT);
		
		
		#elseif html5
		
		var id;
		id = "styles/windows/popup.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/optionbox.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/accordion.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/menus.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/textinput.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/buttons.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/vprogress.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/hprogress.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/listview.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/accordion.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/buttons.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/sliders.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/windows.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/vscroll.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/calendar.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/listview.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/popups.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/container.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/hscroll.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/listview.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/glyphs/vscroll_thumb_gripper_up.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/vscroll_thumb_gripper_down.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/vscroll_thumb_gripper_over.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/right_arrow.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/hscroll_thumb_gripper_down.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/left_arrow.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/hscroll_thumb_gripper_up.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/up_arrow.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/down_arrow.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/glyphs/hscroll_thumb_gripper_over.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/checkbox.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/tab.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/windows/tabs.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/scrolls.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/scrolls.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/windows/rtf.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/gradient/circle_dark.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_right2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/gripper_vertical_disabled.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_down_dark.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_down_disabled.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_down.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/gradient_mobile.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/gradient/arrow_right_dark.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/cross_light_small.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/gripper_horizontal.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/gradient.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/gradient/cross_dark_disabled.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/gradient.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/gradient/gripper_vertical.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_left_disabled.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/gripper_horizontal_disabled.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_right_disabled.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/cross_dark.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/hsplitter_gripper.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/gradient_mobile.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "styles/gradient/arrow_up_disabled.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/vsplitter_gripper.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/gradient/arrow_up.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/default/circle.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/default/up_down.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/default/collapse.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/default/cross.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "styles/default/expand.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "fonts/Oxygen.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/Oxygen-Bold.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/Oxygen-Bold.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/Oxygen.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "fonts/Oxygen-Bold.woff2";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/Oxygen-Bold.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "fonts/Oxygen.ttf";
		className.set (id, __ASSET__fonts_oxygen_ttf);
		
		type.set (id, AssetType.FONT);
		id = "fonts/Oxygen-Bold.ttf";
		className.set (id, __ASSET__fonts_oxygen_bold_ttf);
		
		type.set (id, AssetType.FONT);
		id = "fonts/Oxygen.woff2";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/Oxygen.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/ui/demo.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/ui/example.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/ui/example.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/ui/example.hx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/img/rtfview/edit-italic.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/rtfview/edit-alignment-center.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/rtfview/edit-bold.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/rtfview/edit-alignment-right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/rtfview/edit-underline.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/rtfview/edit-alignment-left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/rtfview/edit-alignment-justify.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/rtfview/edit-list.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/css/code.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/css/rtf.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/css/code.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/css/rtf.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/openfl.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "img/rtfview/edit-italic.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/rtfview/edit-alignment-center.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/rtfview/edit-bold.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/rtfview/edit-alignment-right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/rtfview/edit-underline.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/rtfview/edit-alignment-left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/rtfview/edit-alignment-justify.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/rtfview/edit-list.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "css/code.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "css/rtf.min.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "css/code.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "css/rtf.css";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/Layout/UIPopupAddObjectMuseum.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/Layout/UIPopupEditObjectMuseum.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/Layout/UIPopupRemoveObjectMuseum.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/Layout/UIMain.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "layout/UIPopupAddObjectMuseum.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "layout/UIPopupEditObjectMuseum.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "layout/UIPopupRemoveObjectMuseum.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "layout/UIMain.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("styles/windows/popup.png", __ASSET__styles_windows_popup_png);
		type.set ("styles/windows/popup.png", AssetType.IMAGE);
		
		className.set ("styles/windows/optionbox.png", __ASSET__styles_windows_optionbox_png);
		type.set ("styles/windows/optionbox.png", AssetType.IMAGE);
		
		className.set ("styles/windows/accordion.css", __ASSET__styles_windows_accordion_css);
		type.set ("styles/windows/accordion.css", AssetType.TEXT);
		
		className.set ("styles/windows/menus.css", __ASSET__styles_windows_menus_css);
		type.set ("styles/windows/menus.css", AssetType.TEXT);
		
		className.set ("styles/windows/button.png", __ASSET__styles_windows_button_png);
		type.set ("styles/windows/button.png", AssetType.IMAGE);
		
		className.set ("styles/windows/textinput.png", __ASSET__styles_windows_textinput_png);
		type.set ("styles/windows/textinput.png", AssetType.IMAGE);
		
		className.set ("styles/windows/buttons.css", __ASSET__styles_windows_buttons_css);
		type.set ("styles/windows/buttons.css", AssetType.TEXT);
		
		className.set ("styles/windows/vprogress.png", __ASSET__styles_windows_vprogress_png);
		type.set ("styles/windows/vprogress.png", AssetType.IMAGE);
		
		className.set ("styles/windows/hprogress.png", __ASSET__styles_windows_hprogress_png);
		type.set ("styles/windows/hprogress.png", AssetType.IMAGE);
		
		className.set ("styles/windows/listview.png", __ASSET__styles_windows_listview_png);
		type.set ("styles/windows/listview.png", AssetType.IMAGE);
		
		className.set ("styles/windows/accordion.min.css", __ASSET__styles_windows_accordion_min_css);
		type.set ("styles/windows/accordion.min.css", AssetType.TEXT);
		
		className.set ("styles/windows/buttons.min.css", __ASSET__styles_windows_buttons_min_css);
		type.set ("styles/windows/buttons.min.css", AssetType.TEXT);
		
		className.set ("styles/windows/sliders.css", __ASSET__styles_windows_sliders_css);
		type.set ("styles/windows/sliders.css", AssetType.TEXT);
		
		className.set ("styles/windows/windows.css", __ASSET__styles_windows_windows_css);
		type.set ("styles/windows/windows.css", AssetType.TEXT);
		
		className.set ("styles/windows/vscroll.png", __ASSET__styles_windows_vscroll_png);
		type.set ("styles/windows/vscroll.png", AssetType.IMAGE);
		
		className.set ("styles/windows/calendar.css", __ASSET__styles_windows_calendar_css);
		type.set ("styles/windows/calendar.css", AssetType.TEXT);
		
		className.set ("styles/windows/listview.min.css", __ASSET__styles_windows_listview_min_css);
		type.set ("styles/windows/listview.min.css", AssetType.TEXT);
		
		className.set ("styles/windows/popups.css", __ASSET__styles_windows_popups_css);
		type.set ("styles/windows/popups.css", AssetType.TEXT);
		
		className.set ("styles/windows/container.png", __ASSET__styles_windows_container_png);
		type.set ("styles/windows/container.png", AssetType.IMAGE);
		
		className.set ("styles/windows/hscroll.png", __ASSET__styles_windows_hscroll_png);
		type.set ("styles/windows/hscroll.png", AssetType.IMAGE);
		
		className.set ("styles/windows/listview.css", __ASSET__styles_windows_listview_css);
		type.set ("styles/windows/listview.css", AssetType.TEXT);
		
		className.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_up_png);
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_down_png);
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_over_png);
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/right_arrow.png", __ASSET__styles_windows_glyphs_right_arrow_png);
		type.set ("styles/windows/glyphs/right_arrow.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_down_png);
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/left_arrow.png", __ASSET__styles_windows_glyphs_left_arrow_png);
		type.set ("styles/windows/glyphs/left_arrow.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_up_png);
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/up_arrow.png", __ASSET__styles_windows_glyphs_up_arrow_png);
		type.set ("styles/windows/glyphs/up_arrow.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/down_arrow.png", __ASSET__styles_windows_glyphs_down_arrow_png);
		type.set ("styles/windows/glyphs/down_arrow.png", AssetType.IMAGE);
		
		className.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_over_png);
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", AssetType.IMAGE);
		
		className.set ("styles/windows/checkbox.png", __ASSET__styles_windows_checkbox_png);
		type.set ("styles/windows/checkbox.png", AssetType.IMAGE);
		
		className.set ("styles/windows/tab.png", __ASSET__styles_windows_tab_png);
		type.set ("styles/windows/tab.png", AssetType.IMAGE);
		
		className.set ("styles/windows/tabs.css", __ASSET__styles_windows_tabs_css);
		type.set ("styles/windows/tabs.css", AssetType.TEXT);
		
		className.set ("styles/windows/scrolls.min.css", __ASSET__styles_windows_scrolls_min_css);
		type.set ("styles/windows/scrolls.min.css", AssetType.TEXT);
		
		className.set ("styles/windows/scrolls.css", __ASSET__styles_windows_scrolls_css);
		type.set ("styles/windows/scrolls.css", AssetType.TEXT);
		
		className.set ("styles/windows/rtf.css", __ASSET__styles_windows_rtf_css);
		type.set ("styles/windows/rtf.css", AssetType.TEXT);
		
		className.set ("styles/gradient/circle_dark.png", __ASSET__styles_gradient_circle_dark_png);
		type.set ("styles/gradient/circle_dark.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_right2.png", __ASSET__styles_gradient_arrow_right2_png);
		type.set ("styles/gradient/arrow_right2.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/gripper_vertical_disabled.png", __ASSET__styles_gradient_gripper_vertical_disabled_png);
		type.set ("styles/gradient/gripper_vertical_disabled.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_down_dark.png", __ASSET__styles_gradient_arrow_down_dark_png);
		type.set ("styles/gradient/arrow_down_dark.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_left.png", __ASSET__styles_gradient_arrow_left_png);
		type.set ("styles/gradient/arrow_left.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_down_disabled.png", __ASSET__styles_gradient_arrow_down_disabled_png);
		type.set ("styles/gradient/arrow_down_disabled.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_down.png", __ASSET__styles_gradient_arrow_down_png);
		type.set ("styles/gradient/arrow_down.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/gradient_mobile.min.css", __ASSET__styles_gradient_gradient_mobile_min_css);
		type.set ("styles/gradient/gradient_mobile.min.css", AssetType.TEXT);
		
		className.set ("styles/gradient/arrow_right_dark.png", __ASSET__styles_gradient_arrow_right_dark_png);
		type.set ("styles/gradient/arrow_right_dark.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/cross_light_small.png", __ASSET__styles_gradient_cross_light_small_png);
		type.set ("styles/gradient/cross_light_small.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/gripper_horizontal.png", __ASSET__styles_gradient_gripper_horizontal_png);
		type.set ("styles/gradient/gripper_horizontal.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/gradient.css", __ASSET__styles_gradient_gradient_css);
		type.set ("styles/gradient/gradient.css", AssetType.TEXT);
		
		className.set ("styles/gradient/cross_dark_disabled.png", __ASSET__styles_gradient_cross_dark_disabled_png);
		type.set ("styles/gradient/cross_dark_disabled.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/gradient.min.css", __ASSET__styles_gradient_gradient_min_css);
		type.set ("styles/gradient/gradient.min.css", AssetType.TEXT);
		
		className.set ("styles/gradient/gripper_vertical.png", __ASSET__styles_gradient_gripper_vertical_png);
		type.set ("styles/gradient/gripper_vertical.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_left_disabled.png", __ASSET__styles_gradient_arrow_left_disabled_png);
		type.set ("styles/gradient/arrow_left_disabled.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/gripper_horizontal_disabled.png", __ASSET__styles_gradient_gripper_horizontal_disabled_png);
		type.set ("styles/gradient/gripper_horizontal_disabled.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_right.png", __ASSET__styles_gradient_arrow_right_png);
		type.set ("styles/gradient/arrow_right.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_right_disabled.png", __ASSET__styles_gradient_arrow_right_disabled_png);
		type.set ("styles/gradient/arrow_right_disabled.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/cross_dark.png", __ASSET__styles_gradient_cross_dark_png);
		type.set ("styles/gradient/cross_dark.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/hsplitter_gripper.png", __ASSET__styles_gradient_hsplitter_gripper_png);
		type.set ("styles/gradient/hsplitter_gripper.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/gradient_mobile.css", __ASSET__styles_gradient_gradient_mobile_css);
		type.set ("styles/gradient/gradient_mobile.css", AssetType.TEXT);
		
		className.set ("styles/gradient/arrow_up_disabled.png", __ASSET__styles_gradient_arrow_up_disabled_png);
		type.set ("styles/gradient/arrow_up_disabled.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/vsplitter_gripper.png", __ASSET__styles_gradient_vsplitter_gripper_png);
		type.set ("styles/gradient/vsplitter_gripper.png", AssetType.IMAGE);
		
		className.set ("styles/gradient/arrow_up.png", __ASSET__styles_gradient_arrow_up_png);
		type.set ("styles/gradient/arrow_up.png", AssetType.IMAGE);
		
		className.set ("styles/default/circle.png", __ASSET__styles_default_circle_png);
		type.set ("styles/default/circle.png", AssetType.IMAGE);
		
		className.set ("styles/default/up_down.png", __ASSET__styles_default_up_down_png);
		type.set ("styles/default/up_down.png", AssetType.IMAGE);
		
		className.set ("styles/default/collapse.png", __ASSET__styles_default_collapse_png);
		type.set ("styles/default/collapse.png", AssetType.IMAGE);
		
		className.set ("styles/default/cross.png", __ASSET__styles_default_cross_png);
		type.set ("styles/default/cross.png", AssetType.IMAGE);
		
		className.set ("styles/default/expand.png", __ASSET__styles_default_expand_png);
		type.set ("styles/default/expand.png", AssetType.IMAGE);
		
		className.set ("fonts/Oxygen.eot", __ASSET__fonts_oxygen_eot);
		type.set ("fonts/Oxygen.eot", AssetType.BINARY);
		
		className.set ("fonts/Oxygen-Bold.woff", __ASSET__fonts_oxygen_bold_woff);
		type.set ("fonts/Oxygen-Bold.woff", AssetType.BINARY);
		
		className.set ("fonts/Oxygen-Bold.eot", __ASSET__fonts_oxygen_bold_eot);
		type.set ("fonts/Oxygen-Bold.eot", AssetType.BINARY);
		
		className.set ("fonts/Oxygen.svg", __ASSET__fonts_oxygen_svg);
		type.set ("fonts/Oxygen.svg", AssetType.TEXT);
		
		className.set ("fonts/Oxygen-Bold.woff2", __ASSET__fonts_oxygen_bold_woff2);
		type.set ("fonts/Oxygen-Bold.woff2", AssetType.BINARY);
		
		className.set ("fonts/Oxygen-Bold.svg", __ASSET__fonts_oxygen_bold_svg);
		type.set ("fonts/Oxygen-Bold.svg", AssetType.TEXT);
		
		className.set ("fonts/Oxygen.ttf", __ASSET__fonts_oxygen_ttf);
		type.set ("fonts/Oxygen.ttf", AssetType.FONT);
		
		className.set ("fonts/Oxygen-Bold.ttf", __ASSET__fonts_oxygen_bold_ttf);
		type.set ("fonts/Oxygen-Bold.ttf", AssetType.FONT);
		
		className.set ("fonts/Oxygen.woff2", __ASSET__fonts_oxygen_woff2);
		type.set ("fonts/Oxygen.woff2", AssetType.BINARY);
		
		className.set ("fonts/Oxygen.woff", __ASSET__fonts_oxygen_woff);
		type.set ("fonts/Oxygen.woff", AssetType.BINARY);
		
		className.set ("assets/ui/demo.xml", __ASSET__assets_ui_demo_xml);
		type.set ("assets/ui/demo.xml", AssetType.TEXT);
		
		className.set ("assets/ui/example.xml", __ASSET__assets_ui_example_xml);
		type.set ("assets/ui/example.xml", AssetType.TEXT);
		
		className.set ("assets/ui/example.txt", __ASSET__assets_ui_example_txt);
		type.set ("assets/ui/example.txt", AssetType.TEXT);
		
		className.set ("assets/ui/example.hx", __ASSET__assets_ui_example_hx);
		type.set ("assets/ui/example.hx", AssetType.TEXT);
		
		className.set ("assets/img/rtfview/edit-italic.png", __ASSET__assets_img_rtfview_edit_italic_png);
		type.set ("assets/img/rtfview/edit-italic.png", AssetType.IMAGE);
		
		className.set ("assets/img/rtfview/edit-alignment-center.png", __ASSET__assets_img_rtfview_edit_alignment_center_png);
		type.set ("assets/img/rtfview/edit-alignment-center.png", AssetType.IMAGE);
		
		className.set ("assets/img/rtfview/edit-bold.png", __ASSET__assets_img_rtfview_edit_bold_png);
		type.set ("assets/img/rtfview/edit-bold.png", AssetType.IMAGE);
		
		className.set ("assets/img/rtfview/edit-alignment-right.png", __ASSET__assets_img_rtfview_edit_alignment_right_png);
		type.set ("assets/img/rtfview/edit-alignment-right.png", AssetType.IMAGE);
		
		className.set ("assets/img/rtfview/edit-underline.png", __ASSET__assets_img_rtfview_edit_underline_png);
		type.set ("assets/img/rtfview/edit-underline.png", AssetType.IMAGE);
		
		className.set ("assets/img/rtfview/edit-alignment-left.png", __ASSET__assets_img_rtfview_edit_alignment_left_png);
		type.set ("assets/img/rtfview/edit-alignment-left.png", AssetType.IMAGE);
		
		className.set ("assets/img/rtfview/edit-alignment-justify.png", __ASSET__assets_img_rtfview_edit_alignment_justify_png);
		type.set ("assets/img/rtfview/edit-alignment-justify.png", AssetType.IMAGE);
		
		className.set ("assets/img/rtfview/edit-list.png", __ASSET__assets_img_rtfview_edit_list_png);
		type.set ("assets/img/rtfview/edit-list.png", AssetType.IMAGE);
		
		className.set ("assets/css/code.min.css", __ASSET__assets_css_code_min_css);
		type.set ("assets/css/code.min.css", AssetType.TEXT);
		
		className.set ("assets/css/rtf.min.css", __ASSET__assets_css_rtf_min_css);
		type.set ("assets/css/rtf.min.css", AssetType.TEXT);
		
		className.set ("assets/css/code.css", __ASSET__assets_css_code_css);
		type.set ("assets/css/code.css", AssetType.TEXT);
		
		className.set ("assets/css/rtf.css", __ASSET__assets_css_rtf_css);
		type.set ("assets/css/rtf.css", AssetType.TEXT);
		
		className.set ("assets/openfl.svg", __ASSET__assets_openfl_svg);
		type.set ("assets/openfl.svg", AssetType.TEXT);
		
		className.set ("img/rtfview/edit-italic.png", __ASSET__img_rtfview_edit_italic_png);
		type.set ("img/rtfview/edit-italic.png", AssetType.IMAGE);
		
		className.set ("img/rtfview/edit-alignment-center.png", __ASSET__img_rtfview_edit_alignment_center_png);
		type.set ("img/rtfview/edit-alignment-center.png", AssetType.IMAGE);
		
		className.set ("img/rtfview/edit-bold.png", __ASSET__img_rtfview_edit_bold_png);
		type.set ("img/rtfview/edit-bold.png", AssetType.IMAGE);
		
		className.set ("img/rtfview/edit-alignment-right.png", __ASSET__img_rtfview_edit_alignment_right_png);
		type.set ("img/rtfview/edit-alignment-right.png", AssetType.IMAGE);
		
		className.set ("img/rtfview/edit-underline.png", __ASSET__img_rtfview_edit_underline_png);
		type.set ("img/rtfview/edit-underline.png", AssetType.IMAGE);
		
		className.set ("img/rtfview/edit-alignment-left.png", __ASSET__img_rtfview_edit_alignment_left_png);
		type.set ("img/rtfview/edit-alignment-left.png", AssetType.IMAGE);
		
		className.set ("img/rtfview/edit-alignment-justify.png", __ASSET__img_rtfview_edit_alignment_justify_png);
		type.set ("img/rtfview/edit-alignment-justify.png", AssetType.IMAGE);
		
		className.set ("img/rtfview/edit-list.png", __ASSET__img_rtfview_edit_list_png);
		type.set ("img/rtfview/edit-list.png", AssetType.IMAGE);
		
		className.set ("css/code.min.css", __ASSET__css_code_min_css);
		type.set ("css/code.min.css", AssetType.TEXT);
		
		className.set ("css/rtf.min.css", __ASSET__css_rtf_min_css);
		type.set ("css/rtf.min.css", AssetType.TEXT);
		
		className.set ("css/code.css", __ASSET__css_code_css);
		type.set ("css/code.css", AssetType.TEXT);
		
		className.set ("css/rtf.css", __ASSET__css_rtf_css);
		type.set ("css/rtf.css", AssetType.TEXT);
		
		className.set ("assets/Layout/UIPopupAddObjectMuseum.xml", __ASSET__assets_layout_uipopupaddobjectmuseum_xml);
		type.set ("assets/Layout/UIPopupAddObjectMuseum.xml", AssetType.TEXT);
		
		className.set ("assets/Layout/UIPopupEditObjectMuseum.xml", __ASSET__assets_layout_uipopupeditobjectmuseum_xml);
		type.set ("assets/Layout/UIPopupEditObjectMuseum.xml", AssetType.TEXT);
		
		className.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", __ASSET__assets_layout_uipopupremoveobjectmuseum_xml);
		type.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", AssetType.TEXT);
		
		className.set ("assets/Layout/UIMain.xml", __ASSET__assets_layout_uimain_xml);
		type.set ("assets/Layout/UIMain.xml", AssetType.TEXT);
		
		className.set ("layout/UIPopupAddObjectMuseum.xml", __ASSET__layout_uipopupaddobjectmuseum_xml);
		type.set ("layout/UIPopupAddObjectMuseum.xml", AssetType.TEXT);
		
		className.set ("layout/UIPopupEditObjectMuseum.xml", __ASSET__layout_uipopupeditobjectmuseum_xml);
		type.set ("layout/UIPopupEditObjectMuseum.xml", AssetType.TEXT);
		
		className.set ("layout/UIPopupRemoveObjectMuseum.xml", __ASSET__layout_uipopupremoveobjectmuseum_xml);
		type.set ("layout/UIPopupRemoveObjectMuseum.xml", AssetType.TEXT);
		
		className.set ("layout/UIMain.xml", __ASSET__layout_uimain_xml);
		type.set ("layout/UIMain.xml", AssetType.TEXT);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofString (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__styles_windows_popup_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_optionbox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_accordion_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_menus_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_textinput_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_buttons_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_vprogress_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_hprogress_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_listview_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_accordion_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_buttons_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_sliders_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_windows_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_vscroll_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_calendar_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_listview_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_popups_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_container_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_hscroll_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_listview_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_over_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_right_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_left_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_up_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_down_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_over_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_checkbox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_tab_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_windows_tabs_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_scrolls_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_scrolls_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_windows_rtf_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_circle_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_right2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gripper_vertical_disabled_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_down_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_down_disabled_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gradient_mobile_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_right_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_cross_light_small_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gripper_horizontal_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gradient_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_cross_dark_disabled_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gradient_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gripper_vertical_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_left_disabled_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gripper_horizontal_disabled_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_right_disabled_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_cross_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_hsplitter_gripper_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_gradient_mobile_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_up_disabled_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_vsplitter_gripper_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_gradient_arrow_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_default_circle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_default_up_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_default_collapse_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_default_cross_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__styles_default_expand_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_bold_woff extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_bold_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_bold_woff2 extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_bold_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_bold_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_woff2 extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_oxygen_woff extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_ui_demo_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_ui_example_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_ui_example_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_ui_example_hx extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_italic_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_center_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_bold_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_underline_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_justify_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_rtfview_edit_list_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_css_code_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_css_rtf_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_css_code_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_css_rtf_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_openfl_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_italic_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_alignment_center_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_bold_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_alignment_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_underline_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_alignment_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_alignment_justify_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rtfview_edit_list_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__css_code_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__css_rtf_min_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__css_code_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__css_rtf_css extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_layout_uipopupaddobjectmuseum_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_layout_uipopupeditobjectmuseum_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_layout_uipopupremoveobjectmuseum_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_layout_uimain_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__layout_uipopupaddobjectmuseum_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__layout_uipopupeditobjectmuseum_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__layout_uipopupremoveobjectmuseum_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__layout_uimain_xml extends flash.utils.ByteArray { }


#elseif html5










































































@:keep #if display private #end class __ASSET__fonts_oxygen_ttf extends lime.text.Font { public function new () { super (); name = "Oxygen Regular"; } } 
@:keep #if display private #end class __ASSET__fonts_oxygen_bold_ttf extends lime.text.Font { public function new () { super (); name = "Oxygen Bold"; } } 









































#else



#if (windows || mac || linux || cpp)


@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/popup.png") #if display private #end class __ASSET__styles_windows_popup_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/optionbox.png") #if display private #end class __ASSET__styles_windows_optionbox_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/accordion.css") #if display private #end class __ASSET__styles_windows_accordion_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/menus.css") #if display private #end class __ASSET__styles_windows_menus_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/button.png") #if display private #end class __ASSET__styles_windows_button_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/textinput.png") #if display private #end class __ASSET__styles_windows_textinput_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/buttons.css") #if display private #end class __ASSET__styles_windows_buttons_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/vprogress.png") #if display private #end class __ASSET__styles_windows_vprogress_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/hprogress.png") #if display private #end class __ASSET__styles_windows_hprogress_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/listview.png") #if display private #end class __ASSET__styles_windows_listview_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/accordion.min.css") #if display private #end class __ASSET__styles_windows_accordion_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/buttons.min.css") #if display private #end class __ASSET__styles_windows_buttons_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/sliders.css") #if display private #end class __ASSET__styles_windows_sliders_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/windows.css") #if display private #end class __ASSET__styles_windows_windows_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/vscroll.png") #if display private #end class __ASSET__styles_windows_vscroll_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/calendar.css") #if display private #end class __ASSET__styles_windows_calendar_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/listview.min.css") #if display private #end class __ASSET__styles_windows_listview_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/popups.css") #if display private #end class __ASSET__styles_windows_popups_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/container.png") #if display private #end class __ASSET__styles_windows_container_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/hscroll.png") #if display private #end class __ASSET__styles_windows_hscroll_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/listview.css") #if display private #end class __ASSET__styles_windows_listview_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/vscroll_thumb_gripper_up.png") #if display private #end class __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_up_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/vscroll_thumb_gripper_down.png") #if display private #end class __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_down_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/vscroll_thumb_gripper_over.png") #if display private #end class __ASSET__styles_windows_glyphs_vscroll_thumb_gripper_over_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/right_arrow.png") #if display private #end class __ASSET__styles_windows_glyphs_right_arrow_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/hscroll_thumb_gripper_down.png") #if display private #end class __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_down_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/left_arrow.png") #if display private #end class __ASSET__styles_windows_glyphs_left_arrow_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/hscroll_thumb_gripper_up.png") #if display private #end class __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_up_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/up_arrow.png") #if display private #end class __ASSET__styles_windows_glyphs_up_arrow_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/down_arrow.png") #if display private #end class __ASSET__styles_windows_glyphs_down_arrow_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/glyphs/hscroll_thumb_gripper_over.png") #if display private #end class __ASSET__styles_windows_glyphs_hscroll_thumb_gripper_over_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/checkbox.png") #if display private #end class __ASSET__styles_windows_checkbox_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/tab.png") #if display private #end class __ASSET__styles_windows_tab_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/tabs.css") #if display private #end class __ASSET__styles_windows_tabs_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/scrolls.min.css") #if display private #end class __ASSET__styles_windows_scrolls_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/scrolls.css") #if display private #end class __ASSET__styles_windows_scrolls_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/windows/rtf.css") #if display private #end class __ASSET__styles_windows_rtf_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/circle_dark.png") #if display private #end class __ASSET__styles_gradient_circle_dark_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_right2.png") #if display private #end class __ASSET__styles_gradient_arrow_right2_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gripper_vertical_disabled.png") #if display private #end class __ASSET__styles_gradient_gripper_vertical_disabled_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_down_dark.png") #if display private #end class __ASSET__styles_gradient_arrow_down_dark_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_left.png") #if display private #end class __ASSET__styles_gradient_arrow_left_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_down_disabled.png") #if display private #end class __ASSET__styles_gradient_arrow_down_disabled_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_down.png") #if display private #end class __ASSET__styles_gradient_arrow_down_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gradient_mobile.min.css") #if display private #end class __ASSET__styles_gradient_gradient_mobile_min_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_right_dark.png") #if display private #end class __ASSET__styles_gradient_arrow_right_dark_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/cross_light_small.png") #if display private #end class __ASSET__styles_gradient_cross_light_small_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gripper_horizontal.png") #if display private #end class __ASSET__styles_gradient_gripper_horizontal_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gradient.css") #if display private #end class __ASSET__styles_gradient_gradient_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/cross_dark_disabled.png") #if display private #end class __ASSET__styles_gradient_cross_dark_disabled_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gradient.min.css") #if display private #end class __ASSET__styles_gradient_gradient_min_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gripper_vertical.png") #if display private #end class __ASSET__styles_gradient_gripper_vertical_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_left_disabled.png") #if display private #end class __ASSET__styles_gradient_arrow_left_disabled_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gripper_horizontal_disabled.png") #if display private #end class __ASSET__styles_gradient_gripper_horizontal_disabled_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_right.png") #if display private #end class __ASSET__styles_gradient_arrow_right_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_right_disabled.png") #if display private #end class __ASSET__styles_gradient_arrow_right_disabled_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/cross_dark.png") #if display private #end class __ASSET__styles_gradient_cross_dark_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/hsplitter_gripper.png") #if display private #end class __ASSET__styles_gradient_hsplitter_gripper_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/gradient_mobile.css") #if display private #end class __ASSET__styles_gradient_gradient_mobile_css extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_up_disabled.png") #if display private #end class __ASSET__styles_gradient_arrow_up_disabled_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/vsplitter_gripper.png") #if display private #end class __ASSET__styles_gradient_vsplitter_gripper_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/gradient/arrow_up.png") #if display private #end class __ASSET__styles_gradient_arrow_up_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/default/circle.png") #if display private #end class __ASSET__styles_default_circle_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/default/up_down.png") #if display private #end class __ASSET__styles_default_up_down_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/default/collapse.png") #if display private #end class __ASSET__styles_default_collapse_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/default/cross.png") #if display private #end class __ASSET__styles_default_cross_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui/1,8,4/assets/styles/default/expand.png") #if display private #end class __ASSET__styles_default_expand_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen.eot") #if display private #end class __ASSET__fonts_oxygen_eot extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen-Bold.woff") #if display private #end class __ASSET__fonts_oxygen_bold_woff extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen-Bold.eot") #if display private #end class __ASSET__fonts_oxygen_bold_eot extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen.svg") #if display private #end class __ASSET__fonts_oxygen_svg extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen-Bold.woff2") #if display private #end class __ASSET__fonts_oxygen_bold_woff2 extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen-Bold.svg") #if display private #end class __ASSET__fonts_oxygen_bold_svg extends lime.utils.Bytes {}
@:font("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen.ttf") #if display private #end class __ASSET__fonts_oxygen_ttf extends lime.text.Font {}
@:font("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen-Bold.ttf") #if display private #end class __ASSET__fonts_oxygen_bold_ttf extends lime.text.Font {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen.woff2") #if display private #end class __ASSET__fonts_oxygen_woff2 extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui/1,8,4/assets/fonts/Oxygen.woff") #if display private #end class __ASSET__fonts_oxygen_woff extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/ui/demo.xml") #if display private #end class __ASSET__assets_ui_demo_xml extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/ui/example.xml") #if display private #end class __ASSET__assets_ui_example_xml extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/ui/example.txt") #if display private #end class __ASSET__assets_ui_example_txt extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/ui/example.hx") #if display private #end class __ASSET__assets_ui_example_hx extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-italic.png") #if display private #end class __ASSET__assets_img_rtfview_edit_italic_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-center.png") #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_center_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-bold.png") #if display private #end class __ASSET__assets_img_rtfview_edit_bold_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-right.png") #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_right_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-underline.png") #if display private #end class __ASSET__assets_img_rtfview_edit_underline_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-left.png") #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_left_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-justify.png") #if display private #end class __ASSET__assets_img_rtfview_edit_alignment_justify_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-list.png") #if display private #end class __ASSET__assets_img_rtfview_edit_list_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/code.min.css") #if display private #end class __ASSET__assets_css_code_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/rtf.min.css") #if display private #end class __ASSET__assets_css_rtf_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/code.css") #if display private #end class __ASSET__assets_css_code_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/rtf.css") #if display private #end class __ASSET__assets_css_rtf_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/openfl.svg") #if display private #end class __ASSET__assets_openfl_svg extends lime.utils.Bytes {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-italic.png") #if display private #end class __ASSET__img_rtfview_edit_italic_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-center.png") #if display private #end class __ASSET__img_rtfview_edit_alignment_center_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-bold.png") #if display private #end class __ASSET__img_rtfview_edit_bold_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-right.png") #if display private #end class __ASSET__img_rtfview_edit_alignment_right_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-underline.png") #if display private #end class __ASSET__img_rtfview_edit_underline_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-left.png") #if display private #end class __ASSET__img_rtfview_edit_alignment_left_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-alignment-justify.png") #if display private #end class __ASSET__img_rtfview_edit_alignment_justify_png extends lime.graphics.Image {}
@:image("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/img/rtfview/edit-list.png") #if display private #end class __ASSET__img_rtfview_edit_list_png extends lime.graphics.Image {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/code.min.css") #if display private #end class __ASSET__css_code_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/rtf.min.css") #if display private #end class __ASSET__css_rtf_min_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/code.css") #if display private #end class __ASSET__css_code_css extends lime.utils.Bytes {}
@:file("/usr/share/haxe/lib/haxeui-rich-text/0,1,2/assets/css/rtf.css") #if display private #end class __ASSET__css_rtf_css extends lime.utils.Bytes {}
@:file("Assets/Layout/UIPopupAddObjectMuseum.xml") #if display private #end class __ASSET__assets_layout_uipopupaddobjectmuseum_xml extends lime.utils.Bytes {}
@:file("Assets/Layout/UIPopupEditObjectMuseum.xml") #if display private #end class __ASSET__assets_layout_uipopupeditobjectmuseum_xml extends lime.utils.Bytes {}
@:file("Assets/Layout/UIPopupRemoveObjectMuseum.xml") #if display private #end class __ASSET__assets_layout_uipopupremoveobjectmuseum_xml extends lime.utils.Bytes {}
@:file("Assets/Layout/UIMain.xml") #if display private #end class __ASSET__assets_layout_uimain_xml extends lime.utils.Bytes {}
@:file("Assets/Layout/UIPopupAddObjectMuseum.xml") #if display private #end class __ASSET__layout_uipopupaddobjectmuseum_xml extends lime.utils.Bytes {}
@:file("Assets/Layout/UIPopupEditObjectMuseum.xml") #if display private #end class __ASSET__layout_uipopupeditobjectmuseum_xml extends lime.utils.Bytes {}
@:file("Assets/Layout/UIPopupRemoveObjectMuseum.xml") #if display private #end class __ASSET__layout_uipopupremoveobjectmuseum_xml extends lime.utils.Bytes {}
@:file("Assets/Layout/UIMain.xml") #if display private #end class __ASSET__layout_uimain_xml extends lime.utils.Bytes {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__fonts_oxygen_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__fonts_oxygen_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__fonts_oxygen_bold_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__fonts_oxygen_bold_ttf (); src = font.src; name = font.name; super (); }}

#end

#end