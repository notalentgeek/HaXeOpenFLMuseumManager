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



class UIPopupAddObjectVisitor{

    private var buttonObject                                :Button             = null;
    private var collectionGlobalObject                      :CollectionGlobal   = null;
    private var gridObject                                  :Grid               = null;
    private var inputNameTextInputObject                    :TextInput          = null;
    private var popupObject                                 :Popup              = null;
    private var selectExhibitionStartListSelectorObject     :ListSelector       = null;
    private var selectPreviousVisitorListSelectorObject     :ListSelector       = null;

    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

        /*Find the main button to actovate the popup in the main screen.*/
        buttonObject = _root.findChild("UIPopupAddVisitorObjectButton", Button, true);
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectVisitor.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Add Visitor", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    var exhibitionObject:ObjectMuseum = CollectionFunction.FindMuseumObject(collectionGlobalObject, EXH, selectExhibitionStartListSelectorObject.text);
                    var visitorObject:ObjectVisitor = new ObjectVisitor(collectionGlobalObject, exhibitionObject, collectionGlobalObject.PutIndexGlobalVisitorInt(), inputNameTextInputObject.text);

                }

            });

            gridObject                              = popupObject.content.findChild("UIPopupAddObjectVisitor_Grid"                  , Grid            , true);
            inputNameTextInputObject                = popupObject.content.findChild("UIPopupAddObjectVisitor_InputName"             , TextInput       , true);
            selectExhibitionStartListSelectorObject = popupObject.content.findChild("UIPopupAddObjectVisitor_SelectStartExhibition" , ListSelector    , true);
            selectPreviousVisitorListSelectorObject = popupObject.content.findChild("UIPopupAddObjectVisitor_SelectPreviousVisitor" , ListSelector    , true);

            selectExhibitionStartListSelectorObject.method = "default";
            selectPreviousVisitorListSelectorObject.method = "default";

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                selectExhibitionStartListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetNameStruct().nameFullString);
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                selectPreviousVisitorListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;
            }

        };

    }
    public function UpdateVoid(){}

}