class VisitorAddUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var name_TextInput                  (null, null)        :TextInput          = null;
    private var previousVisitor_ListSelector    (null, null)        :ListSelector       = null;
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
            "VisitorAddUIPopup_Button",
            Init_Void,
            "layout/VisitorAddUIPopup_Object.xml",
            "Add Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();




        _Grid                           = _Popup.content.findChild("VisitorAddPopupUI_Object__Grid"                             , Grid          , true);
        name_TextInput                  = _Popup.content.findChild("VisitorAddPopupUI_Object_name_TextInput"                    , TextInput     , true);
        previousVisitor_ListSelector    = _Popup.content.findChild("VisitorAddPopupUI_Object_previousVisitor_ListSelector"      , ListSelector  , true);

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){

        super.Button_Void();





        var _Visitor_Object:Visitor_Object = new Visitor_Object(
            _Global_Object,
            _Global_Object.IncrementIndexGlobalVisitor_Int(),
            name_TextInput.text
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();




        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){

            previousVisitor_ListSelector.dataSource.createFromString(
                _Global_Object
                    ._Visitor_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorAgnostic_Object
                    .name_String
            );





            loopCounter1_Int ++;

        }
        previousVisitor_ListSelector.method = "default";

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){ super.Update_Void(); }
    /*==================================================*/

}