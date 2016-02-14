#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("styles/gradient/hsplitter_gripper.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/gradient_mobile.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/gradient/arrow_down.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/circle_dark.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_down_dark.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/gradient.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/gradient/cross_light_small.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_left.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_right.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/vsplitter_gripper.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/gripper_horizontal.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_right2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/cross_dark.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_down_disabled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_up_disabled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/gripper_horizontal_disabled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/gripper_vertical_disabled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_up.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_left_disabled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_right_disabled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/gripper_vertical.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/gradient_mobile.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/gradient/gradient.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/gradient/cross_dark_disabled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/gradient/arrow_right_dark.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/scrolls.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/calendar.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/accordion.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/accordion.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/vprogress.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/right_arrow.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/hscroll_thumb_gripper_up.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/left_arrow.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/up_arrow.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/down_arrow.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/hscroll_thumb_gripper_over.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/vscroll_thumb_gripper_down.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/vscroll_thumb_gripper_up.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/hscroll_thumb_gripper_down.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/glyphs/vscroll_thumb_gripper_over.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/listview.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/hprogress.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/listview.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/hscroll.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/menus.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/sliders.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/rtf.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/windows.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/popups.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/buttons.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/vscroll.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/container.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/buttons.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/tabs.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/scrolls.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("styles/windows/popup.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/checkbox.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/textinput.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/tab.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/listview.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/optionbox.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/windows/button.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/default/expand.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/default/cross.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/default/up_down.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/default/collapse.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("styles/default/circle.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("fonts/Oxygen.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("Oxygen Regular");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("Oxygen Bold");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("fonts/Oxygen-Bold.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("fonts/Oxygen-Bold.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("fonts/Oxygen.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("fonts/Oxygen.woff2");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("fonts/Oxygen.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("fonts/Oxygen-Bold.woff2");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("fonts/Oxygen-Bold.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/img/rtfview/edit-list.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/rtfview/edit-alignment-right.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/rtfview/edit-alignment-left.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/rtfview/edit-alignment-justify.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/rtfview/edit-underline.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/rtfview/edit-bold.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/rtfview/edit-italic.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/rtfview/edit-alignment-center.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/css/rtf.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/css/code.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/css/rtf.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/css/code.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/openfl.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/ui/example.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/ui/demo.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/ui/example.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/ui/example.hx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("img/rtfview/edit-list.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/rtfview/edit-alignment-right.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/rtfview/edit-alignment-left.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/rtfview/edit-alignment-justify.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/rtfview/edit-underline.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/rtfview/edit-bold.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/rtfview/edit-italic.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/rtfview/edit-alignment-center.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("css/rtf.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("css/code.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("css/rtf.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("css/code.min.css");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupEditObjectMuseum.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupRemoveObjectVisitor.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupAddObjectMuseum.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupRemoveObjectTag.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupAddObjectVisitor.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupEditObjectTag.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIMain.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupEditObjectVisitor.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupRemoveObjectMuseum.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Layout/UIPopupAddObjectTag.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupEditObjectMuseum.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupRemoveObjectVisitor.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupAddObjectMuseum.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupRemoveObjectTag.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupAddObjectVisitor.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupEditObjectTag.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIMain.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupEditObjectVisitor.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupRemoveObjectMuseum.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("layout/UIPopupAddObjectTag.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "161",
			company: "Company Name",
			file: "HaXeOpenFLMuseumManager",
			fps: 60,
			name: "HaXeOpenFLMuseumManager",
			orientation: "",
			packageName: "com.sample.haxeopenflmuseummanager",
			version: "1.0.0",
			windows: [
				
				{
					antialiasing: 0,
					background: 16777215,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: true,
					height: 576,
					parameters: "{}",
					resizable: false,
					stencilBuffer: true,
					title: "HaXeOpenFLMuseumManager",
					vsync: false,
					width: 1024,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.name;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 1024, 576, "FFFFFF");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		#if !flash
		if (openfl.Lib.current.stage.window.fullscreen) {
			
			openfl.Lib.current.stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		#end
		
	}
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
