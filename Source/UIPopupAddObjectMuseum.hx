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



class UIPopupAddObjectMuseum{



    private var buttonObject                :Button                         = null;                                 /*The main button to activate this popup.*/
    private var collectionGlobalObject      :CollectionGlobal               = null;                                 /*Referece variable to collecrionGlobalObject that stores most of global variables.*/
    private var gridObject                  :Grid                           = null;                                 /*Grid layout.*/
    private var listSelectorParentObject    :ListSelector                   = null;                                 /*List selector for parent object.*/
    private var listSelectorTagStructArray  :Array<StructListSelectorTag>   = new Array<StructListSelectorTag>();   /*Array of list selector to choose multiple tags.*/
    /*An index to determine which set of parent object can be choose.
    PENDING: Instead of using int I can use listSelectorObject.text instead and then compare the String.*/
    private var listSelectorTypeInt         :Int                            = -1;
    private var listSelectorTypeObject      :ListSelector                   = null;                                 /*List selector to select museum type.*/
    private var listSelectorTypePrevInt     :Int                            = -1;                                   /*Another int to detect change in type value from list selector of museum type.*/
    private var nameAltTextInputObject      :TextInput                      = null;
    private var nameFullTextInputObject     :TextInput                      = null;
    private var popupObject                 :Popup                          = null;                                 /*Main popup object.*/



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
                if(_button == PopupButton.OK){
                    var nameAltString:String = nameFullTextInputObject.text;
                    var nameFullString:String = nameAltTextInputObject.text;
                    var parentNameAltString:String = listSelectorParentObject.text;
                    var tagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
                    var typeEnum:EnumMuseumType = null;
                    if(listSelectorTypeObject.text == "Exhibition"){ typeEnum = EXH; }
                    else if(listSelectorTypeObject.text == "Floor"){ typeEnum = FLR; }
                    else if(listSelectorTypeObject.text == "Room"){ typeEnum = ROM; }

                    if(typeEnum == FLR){ parentNameAltString = "XXX_XXX"; }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < listSelectorTagStructArray.length){
                        var tagNameString:String = listSelectorTagStructArray[loopCounter1Int].listSelectorObject.text;
                        var tagObject:ObjectTag = CollectionFunction.FindTagObject(collectionGlobalObject, tagNameString);
                        if(tagObject != null){ tagObjectArray.push(tagObject); }
                        loopCounter1Int ++;
                    }

                    var museumObject:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, nameAltString, nameFullString, parentNameAltString, tagObjectArray, typeEnum);
                }

            });

            nameFullTextInputObject = popupObject.content.findChild("UIPopupAddObjectMuseum_InputFullName", TextInput, true);
            nameAltTextInputObject = popupObject.content.findChild("UIPopupAddObjectMuseum_InputAltName", TextInput, true);
            gridObject = popupObject.content.findChild("UIPopupAddObjectMuseum_Grid", Grid, true);
            listSelectorParentObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectParentObject", ListSelector, true);
            listSelectorParentObject.selectedIndex = -1;
            listSelectorTypeObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectType", ListSelector, true);

            CollectionFunction.ClearArray(listSelectorTagStructArray);
            var listSelectorTagObject:ListSelector = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_1", ListSelector, true);
            var listSelectorTagTextObject:Text = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTagText_1", Text, true);
            var listSelectorTagStruct = {
                listSelectorObject  :listSelectorTagObject,
                textObject          :listSelectorTagTextObject
            };
            listSelectorTagStructArray.push(listSelectorTagStruct);

            listSelectorTagObject.dataSource.createFromString("Remove");
            var loopCounter1Int:Int = 0;

            while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                listSelectorTagObject.dataSource.createFromString(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
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

                if(listSelectorTypeInt != -1 && listSelectorTypeInt != 1){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        listSelectorParentObject.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString);
                        loopCounter1Int ++;
                    }
                }

                listSelectorTypePrevInt = listSelectorTypeInt;
            }

        }

		if(popupObject != null && listSelectorTagStructArray.length > 0){

            /*For when the ListSelector struct array is having lenght equal to 1 and loopCounter1Int is not having index equal to the ListSelector array length minus 1,
                reset the value of the of the following ListSelector.
            If the condition other than those, remove the ListSelector from the ListSelector struct array and from the grid layout.*/
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < listSelectorTagStructArray.length){

                if(listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex == 0 && listSelectorTagStructArray.length > 1){
                    if(loopCounter1Int == listSelectorTagStructArray.length - 1){
                        listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                    }
                    else{
                        gridObject.removeChild(listSelectorTagStructArray[loopCounter1Int].listSelectorObject);
                        gridObject.removeChild(listSelectorTagStructArray[loopCounter1Int].textObject);
                        listSelectorTagStructArray.remove(listSelectorTagStructArray[loopCounter1Int]);
                    }
                }
                else if(listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex == 0 && listSelectorTagStructArray.length == 1){
                    listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                }
                loopCounter1Int ++;

            }

            if(listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != -1 && listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != 0){

                var listSelectorTagTextObject:Text = new Text();
                var listSelectorTagObject:ListSelector = new ListSelector();
                var listSelectorTagStruct = {
                    listSelectorObject  :listSelectorTagObject,
                    textObject          :listSelectorTagTextObject
                };
                listSelectorTagStructArray.push(listSelectorTagStruct);


                listSelectorTagTextObject = new Text();
                listSelectorTagTextObject.text = "Tags";
                listSelectorTagTextObject.id = "UIPopupAddObjectMuseum_SelectTagText_" + listSelectorTagStructArray.length;
                gridObject.addChild(listSelectorTagTextObject);

                listSelectorTagObject.dataSource.createFromString("Remove");

                var tempUsedTagStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                    tempUsedTagStringArray.push(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                    loopCounter1Int ++;
                }
                loopCounter1Int = 1;
                while(loopCounter1Int < listSelectorTagStructArray.length){

                    var tempListSelectorTagObject:ListSelector = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_" + loopCounter1Int, ListSelector, true);
                    tempUsedTagStringArray.remove(tempListSelectorTagObject.text);
                    loopCounter1Int ++;

                }
                loopCounter1Int = 0;
                while(loopCounter1Int < tempUsedTagStringArray.length){

                    listSelectorTagObject.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                    loopCounter1Int ++;

                }

                listSelectorTagObject.id = "UIPopupAddObjectMuseum_SelectTag_" + listSelectorTagStructArray.length;
                listSelectorTagObject.percentWidth = 100;
                listSelectorTagObject.text = " ";
                gridObject.addChild(listSelectorTagObject);

            }

        }

	}
    
    public function GetPopupObject(){ return popupObject; }
}