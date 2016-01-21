import CollectionEnum;
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
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.data.DataSource;
import haxe.ui.toolkit.events.UIEvent;

class UIPopupAddObjectMuseum{



    private var buttonObject                :Button                 = null;
    private var collectionGlobalObject      :CollectionGlobal       = null;
    private var gridObject                  :Grid                   = null;
    private var listSelectorParentObject    :ListSelector           = null;
    private var listSelectorTagCurrentInt   :Int                    = 1;
    private var listSelectorTagObject       :ListSelector           = null;
    private var listSelectorTypeInt         :Int                    = -1;
    private var listSelectorTypeObject      :ListSelector           = null;
    private var listSelectorTypePrevInt     :Int                    = -1;
    private var popupObject                 :Popup                  = null;
    private var textObject                  :Text                   = null;



	public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

		buttonObject = _root.findChild("UIPopupAddMuseumObjectButton", Button, true);
        buttonObject.onClick = function(_e){

            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;
            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectMuseum.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Add Museum Object", buttonControlInt, function(_button){
                
                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK || _button == PopupButton.CANCEL){
                    listSelectorTagCurrentInt = 1;
                }

            });

            gridObject = popupObject.content.findChild("UIPopupAddObjectMuseum_Grid", Grid, true);
            listSelectorParentObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectParentObject", ListSelector, true);
            listSelectorTagObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_1", ListSelector, true);
            listSelectorTypeObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectType", ListSelector, true);

            var tempUsedTagStringArray:Array<String> = new Array<String>();
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                tempUsedTagStringArray.push(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                listSelectorTagObject.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                loopCounter1Int ++;
            }

        }

	}



	public function UpdateVoid(){

        if(popupObject != null && listSelectorParentObject != null && listSelectorTypeObject != null){

            listSelectorTypeInt = listSelectorTypeObject.selectedIndex;
            if(listSelectorTypeInt == -1){ listSelectorParentObject.disabled = true; }

            if(listSelectorTypeInt != listSelectorTypePrevInt){
                listSelectorParentObject.dataSource.removeAll();
                listSelectorParentObject.selectedIndex = -1;

                var tempObjectArray:Array<ObjectMuseum> = null;
                if(listSelectorTypeInt == 0){ listSelectorParentObject.disabled = false; tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }
                else if(listSelectorTypeInt == 1){ listSelectorParentObject.disabled = true; }
                else if(listSelectorTypeInt == 2){ listSelectorParentObject.disabled = false; tempObjectArray = collectionGlobalObject.GetFloorObjectArray(); }

                if(listSelectorTypeInt != 1){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        listSelectorParentObject.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString);
                        loopCounter1Int ++;
                    }
                }

                listSelectorTypePrevInt = listSelectorTypeInt;
            }

        }

		if(popupObject != null && listSelectorTagObject != null){

            if(listSelectorTagObject.selectedIndex != -1 && listSelectorTagObject.selectedIndex != 0){

                trace(listSelectorTagObject.text);
                listSelectorTagCurrentInt ++;

                textObject = new Text();
                textObject.text = "Tags";
                textObject.id = "UIPopupAddObjectMuseum_SelectTagText_" + listSelectorTagCurrentInt;
                gridObject.addChild(textObject);

                listSelectorTagObject.disabled = true;
                listSelectorTagObject = new ListSelector();
                listSelectorTagObject.dataSource.createFromString("None");

                var tempUsedTagStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                    tempUsedTagStringArray.push(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                    loopCounter1Int ++;
                }
                loopCounter1Int = listSelectorTagCurrentInt - 1;
                while(loopCounter1Int > 0){

                    var tempListSelectorTagObject:ListSelector = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_" + loopCounter1Int, ListSelector, true);
                    tempUsedTagStringArray.remove(tempListSelectorTagObject.text);
                    loopCounter1Int --;

                }
                loopCounter1Int = 0;
                while(loopCounter1Int < tempUsedTagStringArray.length){

                    listSelectorTagObject.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                    loopCounter1Int ++;

                }

                listSelectorTagObject.id = "UIPopupAddObjectMuseum_SelectTag_" + listSelectorTagCurrentInt;
                listSelectorTagObject.percentWidth = 100;
                listSelectorTagObject.text = " ";
                gridObject.addChild(listSelectorTagObject);

            }
            else if(listSelectorTagObject.selectedIndex != -1 && listSelectorTagObject.selectedIndex == 0){

                listSelectorTagCurrentInt --;
                gridObject.removeChild(textObject);
                gridObject.removeChild(listSelectorTagObject);
                textObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTagText_" + listSelectorTagCurrentInt, Text, true);
                listSelectorTagObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_" + listSelectorTagCurrentInt, ListSelector, true);
                listSelectorTagObject.disabled = false;
                listSelectorTagObject.selectedIndex = -1;
                listSelectorTagObject.dataSource.removeAll();
                var tempUsedTagStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                    tempUsedTagStringArray.push(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                    loopCounter1Int ++;
                }
                loopCounter1Int = listSelectorTagCurrentInt - 1;
                while(loopCounter1Int > 0){

                    var tempListSelectorTagObject:ListSelector = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_" + loopCounter1Int, ListSelector, true);
                    tempUsedTagStringArray.remove(tempListSelectorTagObject.text);
                    loopCounter1Int --;

                }
                loopCounter1Int = 0;
                while(loopCounter1Int < tempUsedTagStringArray.length){

                    listSelectorTagObject.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                    loopCounter1Int ++;

                }

            }

        }

	}
    
    public function GetPopupObject(){ return popupObject; }
}