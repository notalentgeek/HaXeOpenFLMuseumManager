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

class UIPopupEditObjectMuseum{

    private var buttonObject                            :Button                         = null;                                 /*The main button to activate this popup.*/
    private var collectionGlobalObject                  :CollectionGlobal               = null;                                 /*Referece variable to collecrionGlobalObject that stores most of global variables.*/
    private var gridObject                              :Grid                           = null;                                 /*Grid layout.*/
    private var listSelectorTagStructArray              :Array<StructListSelectorTag>   = new Array<StructListSelectorTag>();   /*Array of list selector to choose multiple tags.*/
    private var nameAltTextObject                       :TextInput                      = null;
    private var nameFullTextObject                      :TextInput                      = null;
    private var popupObject                             :Popup                          = null;
    private var selectedMuseumObject                    :ObjectMuseum                   = null;
    private var selectedMuseumPrevObject                :ObjectMuseum                   = null;
    private var selectObjectMuseumListSelectorObject    :ListSelector                   = null;
    private var selectParentNameFullListSelectorObject  :ListSelector                   = null;
    private var selectTypeListSelectorObject            :ListSelector                   = null;
    private var selectTypeListSelectorPrevString        :String                         = "";
    private var selectTypeListSelectorString            :String                         = "";
    private var tagAmountInt                            :Int                            = -1;

    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;
        buttonObject = _root.findChild("UIPopupEditMuseumObjectButton", Button, true);
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditObjectMuseum.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Add Museum Object", buttonControlInt, function(_button){});

            selectTypeListSelectorString = "";
            selectTypeListSelectorPrevString = "";

            gridObject = popupObject.content.findChild("UIPopupEditObjectMuseum_Grid", Grid, true);
            nameAltTextObject = popupObject.content.findChild("UIPopupEditObjectMuseum_InputAltName", TextInput, true);
            nameAltTextObject.disabled = true;
            nameFullTextObject = popupObject.content.findChild("UIPopupEditObjectMuseum_InputFullName", TextInput, true);
            nameFullTextObject.disabled = true;
            selectObjectMuseumListSelectorObject = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectObjectMuseum", ListSelector, true);
            selectObjectMuseumListSelectorObject.disabled = true;
            selectObjectMuseumListSelectorObject.method = "default";
            selectParentNameFullListSelectorObject = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectParentObject", ListSelector, true);
            selectParentNameFullListSelectorObject.disabled = true;
            selectParentNameFullListSelectorObject.method = "default";
            selectTypeListSelectorObject = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectType", ListSelector, true);
            selectTypeListSelectorObject.method = "default";

            CollectionFunction.ClearArray(listSelectorTagStructArray);
            var textObject:Text = new Text();
            var listSelectorObject:ListSelector = new ListSelector();
            var listSelectorTagStruct:StructListSelectorTag = {
                listSelectorObject  :listSelectorObject,
                textObject          :textObject
            };
            listSelectorTagStructArray.push(listSelectorTagStruct);
            textObject.id = "UIPopupEditObjectMuseum_SelectTagText_" + listSelectorTagStructArray.length;
            textObject.text = "Tags";
            gridObject.addChild(textObject);
            listSelectorObject.disabled = true;
            listSelectorObject.id = "UIPopupEditObjectMuseum_SelectTag_" + listSelectorTagStructArray.length;
            listSelectorObject.method = "default";
            listSelectorObject.percentWidth = 100;
            listSelectorObject.selectedIndex = -1;
            listSelectorObject.text = " ";
            gridObject.addChild(listSelectorObject);

        }

    }
    public function UpdateVoid(){

        if(popupObject != null){

            if(selectTypeListSelectorObject.selectedIndex != -1){

                selectTypeListSelectorString = selectTypeListSelectorObject.text;
                if(selectTypeListSelectorString != selectTypeListSelectorPrevString){

                    nameAltTextObject.disabled = false;
                    nameAltTextObject.text = " ";
                    nameFullTextObject.disabled = false;
                    nameFullTextObject.text = " ";
                    selectObjectMuseumListSelectorObject.dataSource.removeAll();
                    selectObjectMuseumListSelectorObject.disabled = false;
                    selectObjectMuseumListSelectorObject.selectedIndex = -1;
                    selectParentNameFullListSelectorObject.disabled = false;
                    selectParentNameFullListSelectorObject.selectedIndex = -1;

                    var tempObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
                    if(selectTypeListSelectorString == "Exhibition"){ tempObjectArray = collectionGlobalObject.GetExhibitionObjectArray(); }
                    else if(selectTypeListSelectorString == "Floor"){ tempObjectArray = collectionGlobalObject.GetFloorObjectArray(); }
                    else if(selectTypeListSelectorString == "Room"){ tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        selectObjectMuseumListSelectorObject.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                        loopCounter1Int ++;
                    }

                    selectTypeListSelectorPrevString = selectTypeListSelectorString;

                }

            }

            if(
                selectTypeListSelectorObject            .selectedIndex  == -1       ||
                selectTypeListSelectorObject            .text           == "Floor"  ||
                selectObjectMuseumListSelectorObject    .selectedIndex  == -1
            ){ selectParentNameFullListSelectorObject.disabled = true; }

            /*Check which object museum is selected.*/
            if(selectObjectMuseumListSelectorObject.selectedIndex != -1){

                var typeEnum:EnumMuseumType = null;
                if(selectTypeListSelectorString == "Exhibition"){ typeEnum = EXH; }
                else if(selectTypeListSelectorString == "Floor"){ typeEnum = FLR; }
                else if(selectTypeListSelectorString == "Room"){ typeEnum = ROM; }

                selectedMuseumObject = CollectionFunction.FindMuseumObject(collectionGlobalObject, typeEnum, selectObjectMuseumListSelectorObject.text);

                if(selectedMuseumObject != selectedMuseumPrevObject){

                    nameAltTextObject.disabled = false;
                    nameAltTextObject.text = " ";
                    nameFullTextObject.disabled = false;
                    nameFullTextObject.text = " ";
                    selectParentNameFullListSelectorObject.disabled = false;
                    selectParentNameFullListSelectorObject.selectedIndex = -1;

                    /*Set the GUI here.
                    So everytime the selected object change we reset the GUI so that it matched with information
                        received from the selectObjectMuseumListSelectorObject.*/
                    //listSelectorTagStructArray /*PENDING: Unfinished.*/
                    nameAltTextObject.text = selectedMuseumObject.GetNameStruct().nameAltString;
                    nameFullTextObject.text = selectedMuseumObject.GetNameStruct().nameFullString;
                    if(selectTypeListSelectorString != "Floor"){ selectParentNameFullListSelectorObject.text = selectedMuseumObject.GetParentObject().GetNameStruct().nameFullString; }
                    else if(selectTypeListSelectorString == "Floor"){ selectParentNameFullListSelectorObject.disabled = true; }

                    selectedMuseumPrevObject = selectedMuseumObject;

                }

            }

        }

    }
}