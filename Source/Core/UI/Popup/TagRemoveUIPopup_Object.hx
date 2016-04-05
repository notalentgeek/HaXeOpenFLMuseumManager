class TagRemoveUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var _Tag_Object             (null, null)        :Tag_Object     = null;
    private var general_ListSelector    (null, null)        :ListSelector   = null;
    private var general_String          (null, null)        :String         = null;
    private var generalPrev_String      (null, null)        :String         = null;
    private var tag_ListSelector        (null, null)        :ListSelector   = null;
    private var tagName_String          (null, null)        :String         = null;
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
            "TagRemoveUIPopup_Button",
            Init_Void,
            "layout/TagRemoveUIPopup_Object.xml",
            "Add Tag Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();




        general_ListSelector    = _Popup.content.findChild("TagRemoveUIPopup_Object_general_ListSelector"   , ListSelector, true);
        tag_ListSelector        = _Popup.content.findChild("TagRemoveUIPopup_Object_tag_ListSelector"       , ListSelector, true);

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){

        super.Button_Void();




        if(general_String == "Yes"){

            _Tag_Object = StaticFunction_Collection.Find_Tag_Object(_Global_Object, true, tagName_String);
            _Tag_Object.AddOrRemoveThisFromMain_Tag_Object(false);

        }
        else if(general_String == "No"){

            _Tag_Object = StaticFunction_Collection.Find_Tag_Object(_Global_Object, false, tagName_String);
            _Tag_Object.AddOrRemoveThisFromMain_Tag_Object(false);

        }

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();




        /*Fill in tag objec into the list selector.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

            tag_ListSelector.dataSource.createFromString(
                _Global_Object
                    ._Tag_Object_Array[loopCounter1_Int]
                    ._TagAgnostic_Object
                    .name_String
            );





            loopCounter1_Int ++;

        }
        /*Assign other basic properties.*/
        general_ListSelector    .method             = "default";
        general_ListSelector    .selectedIndex      = -1;
        tag_ListSelector        .method             = "default";
        tag_ListSelector        .selectedIndex      = -1;

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/





    /*==================================================
    PENDING: Comment this section later.*/
    public function UpdateVoid(){

        if(_Popup != null && tag_ListSelector != null && general_ListSelector != null){

            if(
                general_ListSelector.text           == ""   ||
                general_ListSelector.text           == " "  ||
                general_ListSelector.selectedIndex  == -1
            ){

                tag_ListSelector.disabled           = true;
                tag_ListSelector.selectedIndex      = -1;
                tag_ListSelector.text               = " ";

            }
            else{ tag_ListSelector.disabled         = false; }





            general_String = general_ListSelector.text;
            if(general_String != generalPrev_String){

                tag_ListSelector.dataSource.removeAll();
                tag_ListSelector.selectedIndex = -1;

                if(general_String == "Yes"){

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _Global_Object.general_Tag_Object_Array.length){

                        tag_ListSelector.dataSource.createFromString(_Global_Object.general_Tag_Object_Array[loopCounter1_Int]._TagAgnostic_Object.name_String);
                        loopCounter1_Int ++;

                    }

                }
                else if(general_String == "No"){

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

                        tag_ListSelector.dataSource.createFromString(_Global_Object._Tag_Object_Array[loopCounter1_Int]._TagAgnostic_Object.name_String);
                        loopCounter1_Int ++;

                    }

                }

                generalPrev_String = general_String;

            }

            tagName_String = tag_ListSelector.text;

        }

    }
    /*==================================================*/





}