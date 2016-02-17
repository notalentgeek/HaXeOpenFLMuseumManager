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



class UIPopupRemoveObjectMuseum{

    var buttonObject:Button = null;
    var collectionGlobalObject:CollectionGlobal = null;
    var popupObject:Popup = null;
    var selectObjectMuseumListSelectorObject:ListSelector = null;
    var selectTypeListSelectorObject:ListSelector = null;
    var selectTypeListSelectorTextString:String = "";
    var selectTypeListSelectorTextPrevString:String = "";

    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

        /*Find the main button to actovate the popup in the main screen.*/
        buttonObject = _root.findChild("UIPopupRemoveMuseumObjectButton", Button, true);
        /*Adding a callback function of when the button is pressed.*/
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupRemoveObjectMuseum.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Remove Museum Object", buttonControlInt, function(_button){

                if(_button == PopupButton.OK){

                    var typeEnum:EnumMuseumType = null;
                    if(selectTypeListSelectorObject.text == "Exhibition"){ typeEnum = EXH; }
                    else if(selectTypeListSelectorObject.text == "Floor"){ typeEnum = FLR; }
                    else if(selectTypeListSelectorObject.text == "Room"){ typeEnum = ROM; }
                    var museumObject:ObjectMuseum = CollectionFunction.FindMuseumObject(_collectionGlobalObject, typeEnum, selectObjectMuseumListSelectorObject.text);
                    museumObject.SetMuseumModeEnumVoid(MRK_DEL);

                }

            });
            
            selectObjectMuseumListSelectorObject = popupObject.content.findChild("UIPopupRemoveObjectMuseum_SelectObjectMuseum", ListSelector, true);
            selectTypeListSelectorObject = popupObject.content.findChild("UIPopupRemoveObjectMuseum_SelectType", ListSelector, true);
            selectObjectMuseumListSelectorObject.method = "default";
            selectTypeListSelectorObject.method = "default";

        }

    }
    public function UpdateVoid(){

        if(popupObject != null && selectTypeListSelectorObject != null && selectObjectMuseumListSelectorObject != null){

            if(
                selectTypeListSelectorObject.selectedIndex          == -1   ||
                selectTypeListSelectorObject.text                   == " "  ||
                selectTypeListSelectorObject.text                   == ""
            ){
                selectObjectMuseumListSelectorObject.disabled       = true;
                selectObjectMuseumListSelectorObject.selectedIndex  = -1;
                selectObjectMuseumListSelectorObject.text           = " ";
            }
            else{ selectObjectMuseumListSelectorObject.disabled     = false; }

            selectTypeListSelectorTextString = selectTypeListSelectorObject.text;
            if(selectTypeListSelectorTextString != selectTypeListSelectorTextPrevString){
                selectObjectMuseumListSelectorObject.selectedIndex = -1;
                selectObjectMuseumListSelectorObject.dataSource.removeAll();

                var tempMuseumObjectArray:Array<ObjectMuseum> = null;
                if(selectTypeListSelectorTextString == "Exhibition"){ tempMuseumObjectArray = collectionGlobalObject.GetExhibitionObjectArray(); }
                else if(selectTypeListSelectorTextString == "Floor"){ tempMuseumObjectArray = collectionGlobalObject.GetFloorObjectArray(); }
                else if(selectTypeListSelectorTextString == "Room"){ tempMuseumObjectArray = collectionGlobalObject.GetRoomObjectArray(); }

                if(selectTypeListSelectorTextString == "Exhibition" || selectTypeListSelectorTextString == "Floor" || selectTypeListSelectorTextString == "Room"){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempMuseumObjectArray.length){
                        selectObjectMuseumListSelectorObject.dataSource.createFromString(tempMuseumObjectArray[loopCounter1Int].GetNameStruct().nameAltString);
                        loopCounter1Int ++;
                    }
                }

                selectTypeListSelectorTextPrevString = selectTypeListSelectorTextString;
            }
        }

    }

}