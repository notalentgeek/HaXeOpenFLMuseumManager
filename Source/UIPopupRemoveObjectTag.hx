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



class UIPopupRemoveObjectTag{

    var buttonObject                            :Button             = null;
    var collectionGlobalObject                  :CollectionGlobal   = null;
    var popupObject                             :Popup              = null;
    var selectGeneralOrNotListSelectorObject    :ListSelector       = null;
    var selectGeneralOrNotPrevString            :String             = "";
    var selectGeneralOrNotString                :String             = "";
    var selectTagListSelectorObject             :ListSelector       = null;
    var selectTagNameString                     :String             = null;
    var selectTagObject                         :ObjectTag          = null;

    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

        /*Find the main button to actovate the popup in the main screen.*/
        buttonObject = _root.findChild("UIPopupRemoveTagObjectButton", Button, true);
        /*Adding a callback function of when the button is pressed.*/
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupRemoveObjectTag.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Remove Tag", buttonControlInt, function(_button){

                if(_button == PopupButton.OK){

                    if(selectGeneralOrNotString == "Yes"){
                        selectTagObject = CollectionFunction.FindTagObject(collectionGlobalObject, true, selectTagNameString);
                        selectTagObject.RemoveFromArray();
                    }
                    else if(selectGeneralOrNotString == "No"){
                        selectTagObject = CollectionFunction.FindTagObject(collectionGlobalObject, false, selectTagNameString);
                        selectTagObject.RemoveFromArray();
                    }

                }

            });

            selectGeneralOrNotListSelectorObject = popupObject.content.findChild("UIPopupRemoveObjectTag_SelectGeneralOrNot", ListSelector, true);
            selectTagListSelectorObject = popupObject.content.findChild("UIPopupRemoveObjectTag_SelectObjectTag", ListSelector, true);

            /*Populate the list selector to let the user select the Tag object he/she wants to delete.*/
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){

                selectTagListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;

            }

            selectGeneralOrNotListSelectorObject    .method             = "default";
            selectGeneralOrNotListSelectorObject    .selectedIndex      = -1;
            selectTagListSelectorObject             .method             = "default";
            selectTagListSelectorObject             .selectedIndex      = -1;

        }

    }
    public function UpdateVoid(){

        if(popupObject != null && selectTagListSelectorObject != null && selectGeneralOrNotListSelectorObject != null){

            selectGeneralOrNotString = selectGeneralOrNotListSelectorObject.text;
            if(selectGeneralOrNotString != selectGeneralOrNotPrevString){

                selectTagListSelectorObject.dataSource.removeAll();
                selectTagListSelectorObject.selectedIndex = -1;

                if(selectGeneralOrNotString == "Yes"){

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetTagGeneralObjectArray().length){

                        selectTagListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetNameString());
                        loopCounter1Int ++;

                    }

                }
                else if(selectGeneralOrNotString == "No"){

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){

                        selectTagListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                        loopCounter1Int ++;

                    }

                }

                selectGeneralOrNotPrevString = selectGeneralOrNotString;

            }

            selectTagNameString = selectTagListSelectorObject.text;

        }

    }

}