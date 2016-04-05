class VisitorRemoveUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var selected_Visitor_Object     (null, null)        :Visitor_Object     = null;
    private var selectedVisitorName_String  (null, null)        :String             = null;
    private var visitor_ListSelector        (null, null)        :ListSelector       = null;
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
            "VisitorRemoveUIPopup_Button",
            Init_Void,
            "layout/VisitorRemoveUIPopup_Object.xml",
            "Add Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();




        visitor_ListSelector = _Popup.content.findChild(
            "VisitorRemoveUIPopup_Object_visitor_ListSelector",
            ListSelector,
            true
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){

        super.Button_Void();





        selected_Visitor_Object =
            StaticFunction_Collection.Find_Visitor_Object(
                _Global_Object,
                selectedVisitorName_String
            );
        _Global_Object._Visitor_Object_Array.remove(selected_Visitor_Object);
        selected_Visitor_Object.exhibitionCurrent_Museum_Object =
            _Global_Object.archiveExhibition_Museum_Object;

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();





        /*Fill all object in the popup object.
        And assign the default value.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){

            visitor_ListSelector
                .dataSource
                .createFromString(
                    _Global_Object
                        ._Visitor_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorAgnostic_Object
                        .name_String
                );





            loopCounter1_Int ++;

        }
        visitor_ListSelector.method             = "default";
        visitor_ListSelector.selectedIndex      = -1;

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();




        /*Make sure that the popup and the list visitor object is exist.*/
        if(_Popup != null && visitor_ListSelector != null)
            { selectedVisitorName_String = visitor_ListSelector.text; }

    }
    /*==================================================*/





}