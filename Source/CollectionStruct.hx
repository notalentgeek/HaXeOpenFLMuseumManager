import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.Absolute;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.containers.Grid;
import haxe.ui.toolkit.containers.HBox;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.controls.popups.CustomPopupContent;
import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.controls.selection.ListSelector;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.controls.TextInput;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.data.DataSource;
import haxe.ui.toolkit.events.UIEvent;

typedef StructChild = { 
    childMuseumObjectArray          :Array<ObjectMuseum>,
    childVisitorObjectArray         :Array<ObjectVisitor>
};
typedef StructListSelectorTag = {
    listSelectorObject              :ListSelector,
    textObject                      :Text
};
typedef StructName = { 
    nameAltString                   :String,
    nameFullString                  :String
};
typedef StructTagCounter = { 
    tagObject                       :ObjectTag,
    tagCounterInt                   :Int
};
typedef StructVisitorVisitExhibition = { 
    currentExhibitionTimeInt        :Int,
    exhibitionNameAltString         :String
};
/*PENDING:This thing have not yet done to be processed in the player class.*/
typedef StructVisitorVisitMuseum = {
    currentVisitTimeInt             :Int,
    visitorVisitExhibitionStruct    :Array<StructVisitorVisitExhibition>,
    visitInt                        :Int
};