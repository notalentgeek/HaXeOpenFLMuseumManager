#if !lime_hybrid


package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if neko
import neko.vm.Deque;
import neko.vm.Thread;
#elseif cpp
import cpp.vm.Deque;
import cpp.vm.Thread;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._legacy.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	private static var loaded = 0;
	private static var loading = 0;
	private static var workerIncomingQueue = new Deque<Dynamic> ();
	private static var workerResult = new Deque<Dynamic> ();
	private static var workerThread:Thread;
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		Font.registerFont (__ASSET__fonts_oxygen_ttf);
		Font.registerFont (__ASSET__fonts_oxygen_bold_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
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
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), BitmapData);
			
		} else {
			
			return BitmapData.load (path.get (id));
			
		}
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), ByteArray);
			
		} else {
			
			return ByteArray.readFile (path.get (id));
			
		}
		
	}
	
	
	public override function getFont (id:String):Font {
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return new Font (path.get (id));
			
		}
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), Sound);
			
		} else {
			
			return new Sound (new URLRequest (path.get (id)), null, true);
			
		}
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), Sound);
			
		} else {
			
			return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
			
		}
		
	}
	
	
	public override function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		__load (getBitmapData, id, handler);
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		__load (getBytes, id, handler);
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		__load (getFont, id, handler);
		
	}
	
	
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
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
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		__load (getMusic, id, handler);
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		__load (getSound, id, handler);
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
	}
	
	
	private static function __doWork ():Void {
		
		while (true) {
			
			var message = workerIncomingQueue.pop (true);
			
			if (message == "WORK") {
				
				var getMethod = workerIncomingQueue.pop (true);
				var id = workerIncomingQueue.pop (true);
				var handler = workerIncomingQueue.pop (true);
				
				var data = getMethod (id);
				workerResult.add ("RESULT");
				workerResult.add (data);
				workerResult.add (handler);
				
			} else if (message == "EXIT") {
				
				break;
				
			}
			
		}
		
	}
	
	
	private inline function __load<T> (getMethod:String->T, id:String, handler:T->Void):Void {
		
		workerIncomingQueue.add ("WORK");
		workerIncomingQueue.add (getMethod);
		workerIncomingQueue.add (id);
		workerIncomingQueue.add (handler);
		
		loading++;
		
	}
	
	
	public static function __poll ():Void {
		
		if (loading > loaded) {
			
			if (workerThread == null) {
				
				workerThread = Thread.create (__doWork);
				
			}
			
			var message = workerResult.pop (false);
			
			while (message == "RESULT") {
				
				loaded++;
				
				var data = workerResult.pop (true);
				var handler = workerResult.pop (true);
				
				if (handler != null) {
					
					handler (data);
					
				}
				
				message = workerResult.pop (false);
				
			}
			
		} else {
			
			if (workerThread != null) {
				
				workerIncomingQueue.add ("EXIT");
				workerThread = null;
				
			}
			
		}
		
	}
	
	
}


#if (windows || mac || linux)





@:keep class __ASSET__fonts_oxygen_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/Oxygen.ttf"; fontName = "Oxygen Regular"; }}
@:keep class __ASSET__fonts_oxygen_bold_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/Oxygen-Bold.ttf"; fontName = "Oxygen Bold"; }}


#else


class __ASSET__fonts_oxygen_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/Oxygen.ttf"; fontName = "Oxygen Regular";  }}
class __ASSET__fonts_oxygen_bold_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/Oxygen-Bold.ttf"; fontName = "Oxygen Bold";  }}


#end


#else


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
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
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
		
		path.set ("styles/windows/popup.png", "styles/windows/popup.png");
		type.set ("styles/windows/popup.png", AssetType.IMAGE);
		path.set ("styles/windows/optionbox.png", "styles/windows/optionbox.png");
		type.set ("styles/windows/optionbox.png", AssetType.IMAGE);
		path.set ("styles/windows/accordion.css", "styles/windows/accordion.css");
		type.set ("styles/windows/accordion.css", AssetType.TEXT);
		path.set ("styles/windows/menus.css", "styles/windows/menus.css");
		type.set ("styles/windows/menus.css", AssetType.TEXT);
		path.set ("styles/windows/button.png", "styles/windows/button.png");
		type.set ("styles/windows/button.png", AssetType.IMAGE);
		path.set ("styles/windows/textinput.png", "styles/windows/textinput.png");
		type.set ("styles/windows/textinput.png", AssetType.IMAGE);
		path.set ("styles/windows/buttons.css", "styles/windows/buttons.css");
		type.set ("styles/windows/buttons.css", AssetType.TEXT);
		path.set ("styles/windows/vprogress.png", "styles/windows/vprogress.png");
		type.set ("styles/windows/vprogress.png", AssetType.IMAGE);
		path.set ("styles/windows/hprogress.png", "styles/windows/hprogress.png");
		type.set ("styles/windows/hprogress.png", AssetType.IMAGE);
		path.set ("styles/windows/listview.png", "styles/windows/listview.png");
		type.set ("styles/windows/listview.png", AssetType.IMAGE);
		path.set ("styles/windows/accordion.min.css", "styles/windows/accordion.min.css");
		type.set ("styles/windows/accordion.min.css", AssetType.TEXT);
		path.set ("styles/windows/buttons.min.css", "styles/windows/buttons.min.css");
		type.set ("styles/windows/buttons.min.css", AssetType.TEXT);
		path.set ("styles/windows/sliders.css", "styles/windows/sliders.css");
		type.set ("styles/windows/sliders.css", AssetType.TEXT);
		path.set ("styles/windows/windows.css", "styles/windows/windows.css");
		type.set ("styles/windows/windows.css", AssetType.TEXT);
		path.set ("styles/windows/vscroll.png", "styles/windows/vscroll.png");
		type.set ("styles/windows/vscroll.png", AssetType.IMAGE);
		path.set ("styles/windows/calendar.css", "styles/windows/calendar.css");
		type.set ("styles/windows/calendar.css", AssetType.TEXT);
		path.set ("styles/windows/listview.min.css", "styles/windows/listview.min.css");
		type.set ("styles/windows/listview.min.css", AssetType.TEXT);
		path.set ("styles/windows/popups.css", "styles/windows/popups.css");
		type.set ("styles/windows/popups.css", AssetType.TEXT);
		path.set ("styles/windows/container.png", "styles/windows/container.png");
		type.set ("styles/windows/container.png", AssetType.IMAGE);
		path.set ("styles/windows/hscroll.png", "styles/windows/hscroll.png");
		type.set ("styles/windows/hscroll.png", AssetType.IMAGE);
		path.set ("styles/windows/listview.css", "styles/windows/listview.css");
		type.set ("styles/windows/listview.css", AssetType.TEXT);
		path.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", "styles/windows/glyphs/vscroll_thumb_gripper_up.png");
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", "styles/windows/glyphs/vscroll_thumb_gripper_down.png");
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", "styles/windows/glyphs/vscroll_thumb_gripper_over.png");
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/right_arrow.png", "styles/windows/glyphs/right_arrow.png");
		type.set ("styles/windows/glyphs/right_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", "styles/windows/glyphs/hscroll_thumb_gripper_down.png");
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/left_arrow.png", "styles/windows/glyphs/left_arrow.png");
		type.set ("styles/windows/glyphs/left_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", "styles/windows/glyphs/hscroll_thumb_gripper_up.png");
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/up_arrow.png", "styles/windows/glyphs/up_arrow.png");
		type.set ("styles/windows/glyphs/up_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/down_arrow.png", "styles/windows/glyphs/down_arrow.png");
		type.set ("styles/windows/glyphs/down_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", "styles/windows/glyphs/hscroll_thumb_gripper_over.png");
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", AssetType.IMAGE);
		path.set ("styles/windows/checkbox.png", "styles/windows/checkbox.png");
		type.set ("styles/windows/checkbox.png", AssetType.IMAGE);
		path.set ("styles/windows/tab.png", "styles/windows/tab.png");
		type.set ("styles/windows/tab.png", AssetType.IMAGE);
		path.set ("styles/windows/tabs.css", "styles/windows/tabs.css");
		type.set ("styles/windows/tabs.css", AssetType.TEXT);
		path.set ("styles/windows/scrolls.min.css", "styles/windows/scrolls.min.css");
		type.set ("styles/windows/scrolls.min.css", AssetType.TEXT);
		path.set ("styles/windows/scrolls.css", "styles/windows/scrolls.css");
		type.set ("styles/windows/scrolls.css", AssetType.TEXT);
		path.set ("styles/windows/rtf.css", "styles/windows/rtf.css");
		type.set ("styles/windows/rtf.css", AssetType.TEXT);
		path.set ("styles/gradient/circle_dark.png", "styles/gradient/circle_dark.png");
		type.set ("styles/gradient/circle_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_right2.png", "styles/gradient/arrow_right2.png");
		type.set ("styles/gradient/arrow_right2.png", AssetType.IMAGE);
		path.set ("styles/gradient/gripper_vertical_disabled.png", "styles/gradient/gripper_vertical_disabled.png");
		type.set ("styles/gradient/gripper_vertical_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_down_dark.png", "styles/gradient/arrow_down_dark.png");
		type.set ("styles/gradient/arrow_down_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_left.png", "styles/gradient/arrow_left.png");
		type.set ("styles/gradient/arrow_left.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_down_disabled.png", "styles/gradient/arrow_down_disabled.png");
		type.set ("styles/gradient/arrow_down_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_down.png", "styles/gradient/arrow_down.png");
		type.set ("styles/gradient/arrow_down.png", AssetType.IMAGE);
		path.set ("styles/gradient/gradient_mobile.min.css", "styles/gradient/gradient_mobile.min.css");
		type.set ("styles/gradient/gradient_mobile.min.css", AssetType.TEXT);
		path.set ("styles/gradient/arrow_right_dark.png", "styles/gradient/arrow_right_dark.png");
		type.set ("styles/gradient/arrow_right_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/cross_light_small.png", "styles/gradient/cross_light_small.png");
		type.set ("styles/gradient/cross_light_small.png", AssetType.IMAGE);
		path.set ("styles/gradient/gripper_horizontal.png", "styles/gradient/gripper_horizontal.png");
		type.set ("styles/gradient/gripper_horizontal.png", AssetType.IMAGE);
		path.set ("styles/gradient/gradient.css", "styles/gradient/gradient.css");
		type.set ("styles/gradient/gradient.css", AssetType.TEXT);
		path.set ("styles/gradient/cross_dark_disabled.png", "styles/gradient/cross_dark_disabled.png");
		type.set ("styles/gradient/cross_dark_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/gradient.min.css", "styles/gradient/gradient.min.css");
		type.set ("styles/gradient/gradient.min.css", AssetType.TEXT);
		path.set ("styles/gradient/gripper_vertical.png", "styles/gradient/gripper_vertical.png");
		type.set ("styles/gradient/gripper_vertical.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_left_disabled.png", "styles/gradient/arrow_left_disabled.png");
		type.set ("styles/gradient/arrow_left_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/gripper_horizontal_disabled.png", "styles/gradient/gripper_horizontal_disabled.png");
		type.set ("styles/gradient/gripper_horizontal_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_right.png", "styles/gradient/arrow_right.png");
		type.set ("styles/gradient/arrow_right.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_right_disabled.png", "styles/gradient/arrow_right_disabled.png");
		type.set ("styles/gradient/arrow_right_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/cross_dark.png", "styles/gradient/cross_dark.png");
		type.set ("styles/gradient/cross_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/hsplitter_gripper.png", "styles/gradient/hsplitter_gripper.png");
		type.set ("styles/gradient/hsplitter_gripper.png", AssetType.IMAGE);
		path.set ("styles/gradient/gradient_mobile.css", "styles/gradient/gradient_mobile.css");
		type.set ("styles/gradient/gradient_mobile.css", AssetType.TEXT);
		path.set ("styles/gradient/arrow_up_disabled.png", "styles/gradient/arrow_up_disabled.png");
		type.set ("styles/gradient/arrow_up_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/vsplitter_gripper.png", "styles/gradient/vsplitter_gripper.png");
		type.set ("styles/gradient/vsplitter_gripper.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_up.png", "styles/gradient/arrow_up.png");
		type.set ("styles/gradient/arrow_up.png", AssetType.IMAGE);
		path.set ("styles/default/circle.png", "styles/default/circle.png");
		type.set ("styles/default/circle.png", AssetType.IMAGE);
		path.set ("styles/default/up_down.png", "styles/default/up_down.png");
		type.set ("styles/default/up_down.png", AssetType.IMAGE);
		path.set ("styles/default/collapse.png", "styles/default/collapse.png");
		type.set ("styles/default/collapse.png", AssetType.IMAGE);
		path.set ("styles/default/cross.png", "styles/default/cross.png");
		type.set ("styles/default/cross.png", AssetType.IMAGE);
		path.set ("styles/default/expand.png", "styles/default/expand.png");
		type.set ("styles/default/expand.png", AssetType.IMAGE);
		path.set ("fonts/Oxygen.eot", "fonts/Oxygen.eot");
		type.set ("fonts/Oxygen.eot", AssetType.BINARY);
		path.set ("fonts/Oxygen-Bold.woff", "fonts/Oxygen-Bold.woff");
		type.set ("fonts/Oxygen-Bold.woff", AssetType.BINARY);
		path.set ("fonts/Oxygen-Bold.eot", "fonts/Oxygen-Bold.eot");
		type.set ("fonts/Oxygen-Bold.eot", AssetType.BINARY);
		path.set ("fonts/Oxygen.svg", "fonts/Oxygen.svg");
		type.set ("fonts/Oxygen.svg", AssetType.TEXT);
		path.set ("fonts/Oxygen-Bold.woff2", "fonts/Oxygen-Bold.woff2");
		type.set ("fonts/Oxygen-Bold.woff2", AssetType.BINARY);
		path.set ("fonts/Oxygen-Bold.svg", "fonts/Oxygen-Bold.svg");
		type.set ("fonts/Oxygen-Bold.svg", AssetType.TEXT);
		path.set ("fonts/Oxygen.ttf", "fonts/Oxygen.ttf");
		type.set ("fonts/Oxygen.ttf", AssetType.FONT);
		path.set ("fonts/Oxygen-Bold.ttf", "fonts/Oxygen-Bold.ttf");
		type.set ("fonts/Oxygen-Bold.ttf", AssetType.FONT);
		path.set ("fonts/Oxygen.woff2", "fonts/Oxygen.woff2");
		type.set ("fonts/Oxygen.woff2", AssetType.BINARY);
		path.set ("fonts/Oxygen.woff", "fonts/Oxygen.woff");
		type.set ("fonts/Oxygen.woff", AssetType.BINARY);
		path.set ("assets/ui/demo.xml", "assets/ui/demo.xml");
		type.set ("assets/ui/demo.xml", AssetType.TEXT);
		path.set ("assets/ui/example.xml", "assets/ui/example.xml");
		type.set ("assets/ui/example.xml", AssetType.TEXT);
		path.set ("assets/ui/example.txt", "assets/ui/example.txt");
		type.set ("assets/ui/example.txt", AssetType.TEXT);
		path.set ("assets/ui/example.hx", "assets/ui/example.hx");
		type.set ("assets/ui/example.hx", AssetType.TEXT);
		path.set ("assets/img/rtfview/edit-italic.png", "assets/img/rtfview/edit-italic.png");
		type.set ("assets/img/rtfview/edit-italic.png", AssetType.IMAGE);
		path.set ("assets/img/rtfview/edit-alignment-center.png", "assets/img/rtfview/edit-alignment-center.png");
		type.set ("assets/img/rtfview/edit-alignment-center.png", AssetType.IMAGE);
		path.set ("assets/img/rtfview/edit-bold.png", "assets/img/rtfview/edit-bold.png");
		type.set ("assets/img/rtfview/edit-bold.png", AssetType.IMAGE);
		path.set ("assets/img/rtfview/edit-alignment-right.png", "assets/img/rtfview/edit-alignment-right.png");
		type.set ("assets/img/rtfview/edit-alignment-right.png", AssetType.IMAGE);
		path.set ("assets/img/rtfview/edit-underline.png", "assets/img/rtfview/edit-underline.png");
		type.set ("assets/img/rtfview/edit-underline.png", AssetType.IMAGE);
		path.set ("assets/img/rtfview/edit-alignment-left.png", "assets/img/rtfview/edit-alignment-left.png");
		type.set ("assets/img/rtfview/edit-alignment-left.png", AssetType.IMAGE);
		path.set ("assets/img/rtfview/edit-alignment-justify.png", "assets/img/rtfview/edit-alignment-justify.png");
		type.set ("assets/img/rtfview/edit-alignment-justify.png", AssetType.IMAGE);
		path.set ("assets/img/rtfview/edit-list.png", "assets/img/rtfview/edit-list.png");
		type.set ("assets/img/rtfview/edit-list.png", AssetType.IMAGE);
		path.set ("assets/css/code.min.css", "assets/css/code.min.css");
		type.set ("assets/css/code.min.css", AssetType.TEXT);
		path.set ("assets/css/rtf.min.css", "assets/css/rtf.min.css");
		type.set ("assets/css/rtf.min.css", AssetType.TEXT);
		path.set ("assets/css/code.css", "assets/css/code.css");
		type.set ("assets/css/code.css", AssetType.TEXT);
		path.set ("assets/css/rtf.css", "assets/css/rtf.css");
		type.set ("assets/css/rtf.css", AssetType.TEXT);
		path.set ("assets/openfl.svg", "assets/openfl.svg");
		type.set ("assets/openfl.svg", AssetType.TEXT);
		path.set ("img/rtfview/edit-italic.png", "img/rtfview/edit-italic.png");
		type.set ("img/rtfview/edit-italic.png", AssetType.IMAGE);
		path.set ("img/rtfview/edit-alignment-center.png", "img/rtfview/edit-alignment-center.png");
		type.set ("img/rtfview/edit-alignment-center.png", AssetType.IMAGE);
		path.set ("img/rtfview/edit-bold.png", "img/rtfview/edit-bold.png");
		type.set ("img/rtfview/edit-bold.png", AssetType.IMAGE);
		path.set ("img/rtfview/edit-alignment-right.png", "img/rtfview/edit-alignment-right.png");
		type.set ("img/rtfview/edit-alignment-right.png", AssetType.IMAGE);
		path.set ("img/rtfview/edit-underline.png", "img/rtfview/edit-underline.png");
		type.set ("img/rtfview/edit-underline.png", AssetType.IMAGE);
		path.set ("img/rtfview/edit-alignment-left.png", "img/rtfview/edit-alignment-left.png");
		type.set ("img/rtfview/edit-alignment-left.png", AssetType.IMAGE);
		path.set ("img/rtfview/edit-alignment-justify.png", "img/rtfview/edit-alignment-justify.png");
		type.set ("img/rtfview/edit-alignment-justify.png", AssetType.IMAGE);
		path.set ("img/rtfview/edit-list.png", "img/rtfview/edit-list.png");
		type.set ("img/rtfview/edit-list.png", AssetType.IMAGE);
		path.set ("css/code.min.css", "css/code.min.css");
		type.set ("css/code.min.css", AssetType.TEXT);
		path.set ("css/rtf.min.css", "css/rtf.min.css");
		type.set ("css/rtf.min.css", AssetType.TEXT);
		path.set ("css/code.css", "css/code.css");
		type.set ("css/code.css", AssetType.TEXT);
		path.set ("css/rtf.css", "css/rtf.css");
		type.set ("css/rtf.css", AssetType.TEXT);
		path.set ("assets/Layout/UIPopupAddObjectMuseum.xml", "assets/Layout/UIPopupAddObjectMuseum.xml");
		type.set ("assets/Layout/UIPopupAddObjectMuseum.xml", AssetType.TEXT);
		path.set ("assets/Layout/UIPopupEditObjectMuseum.xml", "assets/Layout/UIPopupEditObjectMuseum.xml");
		type.set ("assets/Layout/UIPopupEditObjectMuseum.xml", AssetType.TEXT);
		path.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", "assets/Layout/UIPopupRemoveObjectMuseum.xml");
		type.set ("assets/Layout/UIPopupRemoveObjectMuseum.xml", AssetType.TEXT);
		path.set ("assets/Layout/UIMain.xml", "assets/Layout/UIMain.xml");
		type.set ("assets/Layout/UIMain.xml", AssetType.TEXT);
		path.set ("layout/UIPopupAddObjectMuseum.xml", "layout/UIPopupAddObjectMuseum.xml");
		type.set ("layout/UIPopupAddObjectMuseum.xml", AssetType.TEXT);
		path.set ("layout/UIPopupEditObjectMuseum.xml", "layout/UIPopupEditObjectMuseum.xml");
		type.set ("layout/UIPopupEditObjectMuseum.xml", AssetType.TEXT);
		path.set ("layout/UIPopupRemoveObjectMuseum.xml", "layout/UIPopupRemoveObjectMuseum.xml");
		type.set ("layout/UIPopupRemoveObjectMuseum.xml", AssetType.TEXT);
		path.set ("layout/UIMain.xml", "layout/UIMain.xml");
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
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "fonts/Oxygen-Bold.ttf";
		path.set (id, id);
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
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("fonts/Oxygen.ttf", __ASSET__fonts_oxygen_ttf);
		type.set ("fonts/Oxygen.ttf", AssetType.FONT);
		
		className.set ("fonts/Oxygen-Bold.ttf", __ASSET__fonts_oxygen_bold_ttf);
		type.set ("fonts/Oxygen-Bold.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
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
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
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
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
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
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
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
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
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
			image.src = path.get (id);
			
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
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
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
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash





















































































































#elseif html5










































































@:keep #if display private #end class __ASSET__fonts_oxygen_ttf extends lime.text.Font { public function new () { super (); name = "Oxygen Regular"; } } 
@:keep #if display private #end class __ASSET__fonts_oxygen_bold_ttf extends lime.text.Font { public function new () { super (); name = "Oxygen Bold"; } } 









































#else

@:keep #if display private #end class __ASSET__fonts_oxygen_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "fonts/Oxygen.ttf"; name = "Oxygen Regular"; super (); }}
@:keep #if display private #end class __ASSET__fonts_oxygen_bold_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "fonts/Oxygen-Bold.ttf"; name = "Oxygen Bold"; super (); }}


#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__fonts_oxygen_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "fonts/Oxygen.ttf"; name = "Oxygen Regular"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__fonts_oxygen_bold_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "fonts/Oxygen-Bold.ttf"; name = "Oxygen Bold"; super (); }}

#end

#end


#end