package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("styles/default/circle.png", "styles/default/circle.png");
			type.set ("styles/default/circle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/default/collapse.png", "styles/default/collapse.png");
			type.set ("styles/default/collapse.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/default/expand.png", "styles/default/expand.png");
			type.set ("styles/default/expand.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/default/up_down.png", "styles/default/up_down.png");
			type.set ("styles/default/up_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/default/cross.png", "styles/default/cross.png");
			type.set ("styles/default/cross.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/gripper_vertical.png", "styles/gradient/gripper_vertical.png");
			type.set ("styles/gradient/gripper_vertical.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_left.png", "styles/gradient/arrow_left.png");
			type.set ("styles/gradient/arrow_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/gradient.css", "styles/gradient/gradient.css");
			type.set ("styles/gradient/gradient.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/gradient/gripper_horizontal.png", "styles/gradient/gripper_horizontal.png");
			type.set ("styles/gradient/gripper_horizontal.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/hsplitter_gripper.png", "styles/gradient/hsplitter_gripper.png");
			type.set ("styles/gradient/hsplitter_gripper.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_down_dark.png", "styles/gradient/arrow_down_dark.png");
			type.set ("styles/gradient/arrow_down_dark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/gripper_horizontal_disabled.png", "styles/gradient/gripper_horizontal_disabled.png");
			type.set ("styles/gradient/gripper_horizontal_disabled.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/cross_light_small.png", "styles/gradient/cross_light_small.png");
			type.set ("styles/gradient/cross_light_small.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_down.png", "styles/gradient/arrow_down.png");
			type.set ("styles/gradient/arrow_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/gripper_vertical_disabled.png", "styles/gradient/gripper_vertical_disabled.png");
			type.set ("styles/gradient/gripper_vertical_disabled.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_left_disabled.png", "styles/gradient/arrow_left_disabled.png");
			type.set ("styles/gradient/arrow_left_disabled.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/circle_dark.png", "styles/gradient/circle_dark.png");
			type.set ("styles/gradient/circle_dark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_right_dark.png", "styles/gradient/arrow_right_dark.png");
			type.set ("styles/gradient/arrow_right_dark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/gradient_mobile.min.css", "styles/gradient/gradient_mobile.min.css");
			type.set ("styles/gradient/gradient_mobile.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/gradient/gradient_mobile.css", "styles/gradient/gradient_mobile.css");
			type.set ("styles/gradient/gradient_mobile.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/gradient/vsplitter_gripper.png", "styles/gradient/vsplitter_gripper.png");
			type.set ("styles/gradient/vsplitter_gripper.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/cross_dark.png", "styles/gradient/cross_dark.png");
			type.set ("styles/gradient/cross_dark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/cross_dark_disabled.png", "styles/gradient/cross_dark_disabled.png");
			type.set ("styles/gradient/cross_dark_disabled.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/gradient.min.css", "styles/gradient/gradient.min.css");
			type.set ("styles/gradient/gradient.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/gradient/arrow_right.png", "styles/gradient/arrow_right.png");
			type.set ("styles/gradient/arrow_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_down_disabled.png", "styles/gradient/arrow_down_disabled.png");
			type.set ("styles/gradient/arrow_down_disabled.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_up.png", "styles/gradient/arrow_up.png");
			type.set ("styles/gradient/arrow_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_right2.png", "styles/gradient/arrow_right2.png");
			type.set ("styles/gradient/arrow_right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_right_disabled.png", "styles/gradient/arrow_right_disabled.png");
			type.set ("styles/gradient/arrow_right_disabled.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/gradient/arrow_up_disabled.png", "styles/gradient/arrow_up_disabled.png");
			type.set ("styles/gradient/arrow_up_disabled.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", "styles/windows/glyphs/hscroll_thumb_gripper_down.png");
			type.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/right_arrow.png", "styles/windows/glyphs/right_arrow.png");
			type.set ("styles/windows/glyphs/right_arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/left_arrow.png", "styles/windows/glyphs/left_arrow.png");
			type.set ("styles/windows/glyphs/left_arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", "styles/windows/glyphs/vscroll_thumb_gripper_over.png");
			type.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", "styles/windows/glyphs/vscroll_thumb_gripper_up.png");
			type.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", "styles/windows/glyphs/hscroll_thumb_gripper_up.png");
			type.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", "styles/windows/glyphs/hscroll_thumb_gripper_over.png");
			type.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", "styles/windows/glyphs/vscroll_thumb_gripper_down.png");
			type.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/up_arrow.png", "styles/windows/glyphs/up_arrow.png");
			type.set ("styles/windows/glyphs/up_arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/glyphs/down_arrow.png", "styles/windows/glyphs/down_arrow.png");
			type.set ("styles/windows/glyphs/down_arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/checkbox.png", "styles/windows/checkbox.png");
			type.set ("styles/windows/checkbox.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/buttons.css", "styles/windows/buttons.css");
			type.set ("styles/windows/buttons.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/accordion.css", "styles/windows/accordion.css");
			type.set ("styles/windows/accordion.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/windows.css", "styles/windows/windows.css");
			type.set ("styles/windows/windows.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/tabs.css", "styles/windows/tabs.css");
			type.set ("styles/windows/tabs.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/hprogress.png", "styles/windows/hprogress.png");
			type.set ("styles/windows/hprogress.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/popup.png", "styles/windows/popup.png");
			type.set ("styles/windows/popup.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/accordion.min.css", "styles/windows/accordion.min.css");
			type.set ("styles/windows/accordion.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/container.png", "styles/windows/container.png");
			type.set ("styles/windows/container.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/scrolls.css", "styles/windows/scrolls.css");
			type.set ("styles/windows/scrolls.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/listview.png", "styles/windows/listview.png");
			type.set ("styles/windows/listview.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/sliders.css", "styles/windows/sliders.css");
			type.set ("styles/windows/sliders.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/textinput.png", "styles/windows/textinput.png");
			type.set ("styles/windows/textinput.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/listview.css", "styles/windows/listview.css");
			type.set ("styles/windows/listview.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/vscroll.png", "styles/windows/vscroll.png");
			type.set ("styles/windows/vscroll.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/listview.min.css", "styles/windows/listview.min.css");
			type.set ("styles/windows/listview.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/button.png", "styles/windows/button.png");
			type.set ("styles/windows/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/optionbox.png", "styles/windows/optionbox.png");
			type.set ("styles/windows/optionbox.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/vprogress.png", "styles/windows/vprogress.png");
			type.set ("styles/windows/vprogress.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/popups.css", "styles/windows/popups.css");
			type.set ("styles/windows/popups.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/buttons.min.css", "styles/windows/buttons.min.css");
			type.set ("styles/windows/buttons.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/scrolls.min.css", "styles/windows/scrolls.min.css");
			type.set ("styles/windows/scrolls.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/calendar.css", "styles/windows/calendar.css");
			type.set ("styles/windows/calendar.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/tab.png", "styles/windows/tab.png");
			type.set ("styles/windows/tab.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("styles/windows/rtf.css", "styles/windows/rtf.css");
			type.set ("styles/windows/rtf.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/menus.css", "styles/windows/menus.css");
			type.set ("styles/windows/menus.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("styles/windows/hscroll.png", "styles/windows/hscroll.png");
			type.set ("styles/windows/hscroll.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("fonts/Oxygen-Bold.eot", "fonts/Oxygen-Bold.eot");
			type.set ("fonts/Oxygen-Bold.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/Oxygen.svg", "fonts/Oxygen.svg");
			type.set ("fonts/Oxygen.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("fonts/Oxygen.woff", "fonts/Oxygen.woff");
			type.set ("fonts/Oxygen.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/Oxygen.eot", "fonts/Oxygen.eot");
			type.set ("fonts/Oxygen.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/Oxygen-Bold.ttf", "fonts/Oxygen-Bold.ttf");
			type.set ("fonts/Oxygen-Bold.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/Oxygen.woff2", "fonts/Oxygen.woff2");
			type.set ("fonts/Oxygen.woff2", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/Oxygen.ttf", "fonts/Oxygen.ttf");
			type.set ("fonts/Oxygen.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/Oxygen-Bold.woff2", "fonts/Oxygen-Bold.woff2");
			type.set ("fonts/Oxygen-Bold.woff2", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/Oxygen-Bold.svg", "fonts/Oxygen-Bold.svg");
			type.set ("fonts/Oxygen-Bold.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("fonts/Oxygen-Bold.woff", "fonts/Oxygen-Bold.woff");
			type.set ("fonts/Oxygen-Bold.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/openfl.svg", "assets/openfl.svg");
			type.set ("assets/openfl.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/css/code.css", "assets/css/code.css");
			type.set ("assets/css/code.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/css/code.min.css", "assets/css/code.min.css");
			type.set ("assets/css/code.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/css/rtf.min.css", "assets/css/rtf.min.css");
			type.set ("assets/css/rtf.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/css/rtf.css", "assets/css/rtf.css");
			type.set ("assets/css/rtf.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-alignment-justify.png", "assets/img/rtfview/edit-alignment-justify.png");
			type.set ("assets/img/rtfview/edit-alignment-justify.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-bold.png", "assets/img/rtfview/edit-bold.png");
			type.set ("assets/img/rtfview/edit-bold.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-alignment-left.png", "assets/img/rtfview/edit-alignment-left.png");
			type.set ("assets/img/rtfview/edit-alignment-left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-alignment-center.png", "assets/img/rtfview/edit-alignment-center.png");
			type.set ("assets/img/rtfview/edit-alignment-center.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-underline.png", "assets/img/rtfview/edit-underline.png");
			type.set ("assets/img/rtfview/edit-underline.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-alignment-right.png", "assets/img/rtfview/edit-alignment-right.png");
			type.set ("assets/img/rtfview/edit-alignment-right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-list.png", "assets/img/rtfview/edit-list.png");
			type.set ("assets/img/rtfview/edit-list.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/rtfview/edit-italic.png", "assets/img/rtfview/edit-italic.png");
			type.set ("assets/img/rtfview/edit-italic.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/ui/example.txt", "assets/ui/example.txt");
			type.set ("assets/ui/example.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/ui/example.hx", "assets/ui/example.hx");
			type.set ("assets/ui/example.hx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/ui/example.xml", "assets/ui/example.xml");
			type.set ("assets/ui/example.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/ui/demo.xml", "assets/ui/demo.xml");
			type.set ("assets/ui/demo.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/rtfview/edit-alignment-justify.png", "img/rtfview/edit-alignment-justify.png");
			type.set ("img/rtfview/edit-alignment-justify.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/rtfview/edit-bold.png", "img/rtfview/edit-bold.png");
			type.set ("img/rtfview/edit-bold.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/rtfview/edit-alignment-left.png", "img/rtfview/edit-alignment-left.png");
			type.set ("img/rtfview/edit-alignment-left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/rtfview/edit-alignment-center.png", "img/rtfview/edit-alignment-center.png");
			type.set ("img/rtfview/edit-alignment-center.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/rtfview/edit-underline.png", "img/rtfview/edit-underline.png");
			type.set ("img/rtfview/edit-underline.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/rtfview/edit-alignment-right.png", "img/rtfview/edit-alignment-right.png");
			type.set ("img/rtfview/edit-alignment-right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/rtfview/edit-list.png", "img/rtfview/edit-list.png");
			type.set ("img/rtfview/edit-list.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/rtfview/edit-italic.png", "img/rtfview/edit-italic.png");
			type.set ("img/rtfview/edit-italic.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("css/code.css", "css/code.css");
			type.set ("css/code.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("css/code.min.css", "css/code.min.css");
			type.set ("css/code.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("css/rtf.min.css", "css/rtf.min.css");
			type.set ("css/rtf.min.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("css/rtf.css", "css/rtf.css");
			type.set ("css/rtf.css", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupEditObjectVisitor.xml", "assets/Layout/UIPopupEditObjectVisitor.xml");
			type.set ("assets/Layout/UIPopupEditObjectVisitor.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupEditObjectMuseum.xml", "assets/Layout/UIPopupEditObjectMuseum.xml");
			type.set ("assets/Layout/UIPopupEditObjectMuseum.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIMain.xml", "assets/Layout/UIMain.xml");
			type.set ("assets/Layout/UIMain.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupAddObjectVisitor.xml", "assets/Layout/UIPopupAddObjectVisitor.xml");
			type.set ("assets/Layout/UIPopupAddObjectVisitor.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupRemoveObjectVisitor.xml", "assets/Layout/UIPopupRemoveObjectVisitor.xml");
			type.set ("assets/Layout/UIPopupRemoveObjectVisitor.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", "assets/Layout/UIPopupRemoveObjectMuseum.xml");
			type.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupRemoveObjectTag.xml", "assets/Layout/UIPopupRemoveObjectTag.xml");
			type.set ("assets/Layout/UIPopupRemoveObjectTag.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupAddObjectMuseum.xml", "assets/Layout/UIPopupAddObjectMuseum.xml");
			type.set ("assets/Layout/UIPopupAddObjectMuseum.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupEditObjectTag.xml", "assets/Layout/UIPopupEditObjectTag.xml");
			type.set ("assets/Layout/UIPopupEditObjectTag.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/Layout/UIPopupAddObjectTag.xml", "assets/Layout/UIPopupAddObjectTag.xml");
			type.set ("assets/Layout/UIPopupAddObjectTag.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupEditObjectVisitor.xml", "layout/UIPopupEditObjectVisitor.xml");
			type.set ("layout/UIPopupEditObjectVisitor.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupEditObjectMuseum.xml", "layout/UIPopupEditObjectMuseum.xml");
			type.set ("layout/UIPopupEditObjectMuseum.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIMain.xml", "layout/UIMain.xml");
			type.set ("layout/UIMain.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupAddObjectVisitor.xml", "layout/UIPopupAddObjectVisitor.xml");
			type.set ("layout/UIPopupAddObjectVisitor.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupRemoveObjectVisitor.xml", "layout/UIPopupRemoveObjectVisitor.xml");
			type.set ("layout/UIPopupRemoveObjectVisitor.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupRemoveObjectMuseum.xml", "layout/UIPopupRemoveObjectMuseum.xml");
			type.set ("layout/UIPopupRemoveObjectMuseum.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupRemoveObjectTag.xml", "layout/UIPopupRemoveObjectTag.xml");
			type.set ("layout/UIPopupRemoveObjectTag.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupAddObjectMuseum.xml", "layout/UIPopupAddObjectMuseum.xml");
			type.set ("layout/UIPopupAddObjectMuseum.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupEditObjectTag.xml", "layout/UIPopupEditObjectTag.xml");
			type.set ("layout/UIPopupEditObjectTag.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("layout/UIPopupAddObjectTag.xml", "layout/UIPopupAddObjectTag.xml");
			type.set ("layout/UIPopupAddObjectTag.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
