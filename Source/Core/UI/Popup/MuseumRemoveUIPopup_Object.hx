class MuseumRemoveUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var museum_ListSelector         (null, null)        :ListSelector       = null;
    private var museumType_ListSelector     (null, null)        :ListSelector       = null;
    private var museumType_String           (null, null)        :String             = null;
    private var museumTypePrev_String       (null, null)        :String             = null;
    /*==================================================*/





    /*==================================================*/
    public function new(
        __Global_Object     :Global_Object,
        __Root              :Root
    ):Void{

        super(
            __Global_Object,
            __Root,
            Assign_Void,
            Button_Void,
            "MuseumRemoveUIPopup_Button",
            Init_Void,
            "layout/MuseumRemoveUIPopup_Object.xml",
            "Remove Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();




        museum_ListSelector                 = _Popup.content.findChild("MuseumRemoveUIPopup_Object_museum_ListSelector"             , ListSelector, true);
        museumType_ListSelector             = _Popup.content.findChild("MuseumRemoveUIPopup_Object_museumType_ListSelector"         , ListSelector, true);

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){

        super.Button_Void();





        var _Museum_Object      :Museum_Object      = null;
        var _MuseumType_Enum    :MuseumType_Enum    = null;





        if(museumType_ListSelector != null){

            if(museumType_ListSelector.text == "Exhibition")    { _MuseumType_Enum = EXH; }
            else if(museumType_ListSelector.text == "Floor")    { _MuseumType_Enum = FLR; }
            else if(museumType_ListSelector.text == "Room")     { _MuseumType_Enum = ROM; }

        }





        _Museum_Object = StaticFunction_Collection.Find_Museum_Object(
            _Global_Object,
            _MuseumType_Enum,
            museum_ListSelector.text
        );





        if(_Museum_Object != null){ _Museum_Object._MuseumMode_Enum = MRK_DEL; }

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();




        museum_ListSelector.method          = "default";
        museumType_ListSelector.method      = "default";

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/





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