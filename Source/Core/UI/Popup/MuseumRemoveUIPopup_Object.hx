class MuseumRemoveUIPopup_Object{





    /*==================================================*/
    private var _Button                     (null, null)        :Button             = null;
    private var _Global_Object              (null, null)        :Global_Object      = null;
    private var _Popup                      (null, null)        :Popup              = null;
    private var museum_ListSelector         (null, null)        :ListSelector       = null;
    private var museumType_ListSelector     (null, null)        :ListSelector       = null;
    private var museumType_String           (null, null)        :String             = null;
    private var museumTypePrev_String       (null, null)        :String             = null;
    /*==================================================*/





    public function new(__Global_Object:Global_Object, _root:Root){

        _Global_Object = __Global_Object;

        /*Find the main button to actovate the popup in the main screen.*/
        _Button = _root.findChild("UIPopupRemoveMuseumObjectButton", Button, true);
        /*Adding a callback function of when the button is pressed.*/
        _Button.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/MuseumRemoveUIPopup_Object.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Remove Museum Object", buttonControlInt, function(_button){

                if(_button == PopupButton.OK){

                    var typeEnum:EnumMuseumType = null;
                    if(museumType_ListSelector.text == "Exhibition"){ typeEnum = EXH; }
                    else if(museumType_ListSelector.text == "Floor"){ typeEnum = FLR; }
                    else if(museumType_ListSelector.text == "Room"){ typeEnum = ROM; }
                    var museumObject:ObjectMuseum = CollectionFunction.FindMuseumObject(__Global_Object, typeEnum, museum_ListSelector.text);
                    museumObject.SetMuseumModeEnumVoid(MRK_DEL);

                }

            });
            
            museum_ListSelector = _Popup.content.findChild("MuseumRemoveUIPopup_Object_SelectObjectMuseum", ListSelector, true);
            museumType_ListSelector = _Popup.content.findChild("MuseumRemoveUIPopup_Object_SelectType", ListSelector, true);
            museum_ListSelector.method = "default";
            museumType_ListSelector.method = "default";

        }

    }
    public function UpdateVoid(){

        if(_Popup != null && museumType_ListSelector != null && museum_ListSelector != null){

            if(
                museumType_ListSelector.selectedIndex          == -1   ||
                museumType_ListSelector.text                   == " "  ||
                museumType_ListSelector.text                   == ""
            ){
                museum_ListSelector.disabled       = true;
                museum_ListSelector.selectedIndex  = -1;
                museum_ListSelector.text           = " ";
            }
            else{ museum_ListSelector.disabled     = false; }

            museumType_String = museumType_ListSelector.text;
            if(museumType_String != museumTypePrev_String){
                museum_ListSelector.selectedIndex = -1;
                museum_ListSelector.dataSource.removeAll();

                var tempMuseumObjectArray:Array<ObjectMuseum> = null;
                if(museumType_String == "Exhibition"){ tempMuseumObjectArray = _Global_Object.GetExhibitionObjectArray(); }
                else if(museumType_String == "Floor"){ tempMuseumObjectArray = _Global_Object.GetFloorObjectArray(); }
                else if(museumType_String == "Room"){ tempMuseumObjectArray = _Global_Object.GetRoomObjectArray(); }

                if(museumType_String == "Exhibition" || museumType_String == "Floor" || museumType_String == "Room"){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempMuseumObjectArray.length){
                        museum_ListSelector.dataSource.createFromString(tempMuseumObjectArray[loopCounter1Int].GetNameStruct().nameAltString);
                        loopCounter1Int ++;
                    }
                }

                museumTypePrev_String = museumType_String;
            }
        }

    }

}