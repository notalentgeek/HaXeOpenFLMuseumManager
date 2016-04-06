class MuseumEditPopupUI_Object extends MuseumAddAndEditUIPopup_Object{





    /*==================================================*/
    private var explanation_TextInput_Struct_Array      (null, null)        :Array<TextInput_Struct>        = new Array<TextInput_Struct>();
    private var explanationIndex_Int                    (null, null)        :Int                            = null;
    private var full_Text                               (null, null)        :Text                           = null;
    private var museum_Button_Array                     (null, null)        :Array<Button>                  = new Array<Button>();
    private var museum_ListSelector                     (null, null)        :ListSelector                   = null;
    private var nameAlt_TextInput                       (null, null)        :TextInput                      = null;
    private var nameFull_TextInput                      (null, null)        :TextInput                      = null;
    private var parentNameFull_ListSelector             (null, null)        :ListSelector                   = null;
    private var selected_Museum_Object                  (null, null)        :Museum_Object                  = null;
    private var selectedPrev_Museum_Object              (null, null)        :Museum_Object                  = null;
    private var tag_ListSelector_Struct_Array           (null, null)        :Array<ListSelector_Struct>     = new Array<ListSelector_Struct>();
    private var type_ListSelector                       (null, null)        :ListSelector                   = null;
    private var museumType_String                       (null, null)        :String                         = null;
    private var museumTypePrev_String                   (null, null)        :String                         = null;
    private var visitorCurrent_Text                     (null, null)        :Text                           = null;
    private var visitorTotal_Text                       (null, null)        :Text                           = null;
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
            "MuseumEditUIPopup_Button",
            Init_Void,
            "layout/MuseumEditUIPopup_Object.xml",
            "Edit Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();





        _Grid                           = _Popup.content.findChild("MuseumEditUIPopup_Object__Grid"                         , Grid              , true);
        full_Text                       = _Popup.content.findChild("MuseumEditUIPopup_Object_full_Text"                     , Text              , true);
        museum_ListSelector             = _Popup.content.findChild("MuseumEditUIPopup_Object_museum_ListSelector"           , ListSelector      , true);
        nameAlt_TextInput               = _Popup.content.findChild("MuseumEditUIPopup_Object_nameAlt_TextInput"             , TextInput         , true);
        nameFull_TextInput              = _Popup.content.findChild("MuseumEditUIPopup_Object_nameFull_TextInput"            , TextInput         , true);
        parentNameFull_ListSelector     = _Popup.content.findChild("MuseumEditUIPopup_Object_parentNameFull_ListSelector"   , ListSelector      , true);
        type_ListSelector               = _Popup.content.findChild("MuseumEditUIPopup_Object_type_ListSelector"             , ListSelector      , true);
        visitorCurrent_Text             = _Popup.content.findChild("MuseumEditUIPopup_Object_visitorCurrent_Text"           , Text              , true);
        visitorTotal_Text               = _Popup.content.findChild("MuseumEditUIPopup_Object_visitorTotal_Text"             , Text              , true);

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){ super.Button_Void(Edit_Void); }
    /*==================================================*/





    /*==================================================
    This is a function so that I can call a museum button with different kind of characteristic by
        filling in a dynamic typed userData.
    For example when I click the Exhibition XXX button this pop up will appears with the value from
         the Exhibition XXX.*/
    private function CallbackEachMuseum_Void():Void{

        /*Adding callback for the museum specific button.
        Here inject a String into _Event.component.userData from the button object.
        It is like a build in field that can be put with any type data.*/
        if(_Event.component.userData != null){

            var full_String                 :String             = null;
            var museumTypeFull_String       :String             = null;
            var userData_String             :String             = "" + _Event.component.userData;
            var userData_String_Array       :Array<String>      = userData_String.split("*");
            var nameAlt_String              :String             = userData_String_Array[1];
            var nameAlt_String_Array        :Array<String>      = nameAlt_String.split("_");
            var museumType_String           :String             = nameAlt_String_Array[0];
            var _MuseumType_Enum            :MuseumType_Enum    = Type.createEnum(MuseumType_Enum, museumType_String);
            var _Museum_Object              :Museum_Object      = StaticFunction_Collection.Find_Museum_Object(_Global_Object, _MuseumType_Enum, nameAlt_String);





            if(_Museum_Object != null){

                /*Set the selected museum object.
                This function only happen when the user select the object directly from the main user interface.*/
                selected_Museum_Object = _Museum_Object;
                /*Set the full String.
                In these if statement I need to translate boolean value into String value.*/
                if(selected_Museum_Object._MuseumAndVisitorAgnostic_Object.full_Bool        == true)    { full_String = "True"; }
                else if(selected_Museum_Object._MuseumAndVisitorAgnostic_Object.full_Bool   == false)   { full_String = "False"; }
                /*Convert museum type into String.
                The museum type is an enumeration.
                However, since the user interface element cannot comprehend enumeration I need to convert
                    the enumerations into String.*/
                if(museumType_String        == "EXH"){ museumTypeFull_String = "Exhibition";}
                else if(museumType_String   == "FLR"){ museumTypeFull_String = "Floor";}
                else if(museumType_String   == "ROM"){ museumTypeFull_String = "Room";}





                /*Initiate basic setup for elements in the pop up object based on the selected museum object.*/
                full_Text.text                      = full_String;
                museum_ListSelector.disabled        = false;
                museum_ListSelector.selectedIndex   = 0;
                nameAlt_TextInput.disabled          = false;
                nameAlt_TextInput.text              = selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String;
                nameFull_TextInput.disabled         = false;
                nameFull_TextInput.text             = selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String;
                type_ListSelector.disabled          = false;
                type_ListSelector.text              = museumTypeFull_String;
                visitorCurrent_Text.text            = "" + selected_Museum_Object._MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.current_Int;
                visitorTotal_Text.text              = "" + selected_Museum_Object._MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.total_Int;
                /*Set the main array based on the selected museum object.
                For example if the selected object is an exhibition object, the main array will be
                    exhibition_Museum_Object_Array for the whole operations.
                This is for adding all museum object based on the selected museum type into
                    list selector.*/
                var main_Museum_Object_Array:Array<Museum_Object> = new Array<Museum_Object>();
                if(museumType_String        == "Exhibition")    { main_Museum_Object_Array = _Global_Object.exhibition_Museum_Object_Array; }
                else if(museumType_String   == "Floor")         { main_Museum_Object_Array = _Global_Object.floor_Museum_Object_Array; }
                else if(museumType_String   == "Room")          { main_Museum_Object_Array = _Global_Object.room_Museum_Object_Array; }
                var loopCounter1_Int:Int = 0;
                while(loopCounter1_Int < main_Museum_Object_Array.length){

                    museum_ListSelector
                        .dataSource
                        .createFromString(
                            main_Museum_Object_Array[loopCounter1_Int]
                                ._MuseumAndVisitorAgnostic_Object
                                ._Name_Struct
                                .full_String
                        );





                    loopCounter1_Int ++;

                }
                /*If the selected museum object is not a floor object.*/
                if(
                    selected_Museum_Object._MuseumType_Enum         != FLR  &&
                    selected_Museum_Object.parent_Museum_Object     != null
                ){

                    parentNameFull_ListSelector.disabled    = false;
                    parentNameFull_ListSelector.text        =
                        selected_Museum_Object.parent_Museum_Object
                            ._MuseumAndVisitorAgnostic_Object
                            ._Name_Struct
                            .full_String;

                }
                /*After other pop up elements are initiated before I setup these elements..*/
                museum_ListSelector.text            = nameFull_TextInput.text;
                /*Setting up previous String to detect change.
                Because I need to reset the list selector if there is change in the museum type.*/
                museumTypePrev_String               = type_ListSelector.text;

            }

        }

    }
    /*==================================================*/





    /*==================================================
    A function to check if there is necessary to update the museum buttons or not.
    This function executed when there is a new museum object added into the main array
        and displayed in the absolute layout.*/
    private function CheckMuseumButton_Bool():Bool{

            if(
                museum_Button_Array.length != (
                    _Global_Object.exhibition_Museum_Object_Array   .length +
                    _Global_Object.floor_Museum_Object_Array        .length +
                    _Global_Object.room_Museum_Object_Array         .length
                )
            ){ return true; }





            /*For each exhibition museum object I check whether the button user interface is the same
                if it is not then update the button objects.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _Global_Object.exhibition_Museum_Object_Array.length){

                if(
                    museum_Button_Array[loopCounter1_Int] !=
                        _Global_Object
                            .exhibition_Museum_Object_Array[loopCounter1_Int]
                            ._MuseumAndVisitorUI_Object
                            ._Button
                ){ return true; }





                loopCounter1_Int ++;

            }





            /*For each floor museum object I check whether the button user interface is the same
                if it is not then update the button objects.*/
            loopCounter1_Int = 0;
            while(loopCounter1_Int < _Global_Object.floor_Museum_Object_Array.length){

                if(
                    museum_Button_Array[loopCounter1_Int +
                        _Global_Object.exhibition_Museum_Object_Array.length] !=
                    _Global_Object
                        .floor_Museum_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorUI_Object
                        ._Button
                ){ return true; }





                loopCounter1_Int ++;

            }





            /*For each room museum object I check whether the button user interface is the same
                if it is not then update the button objects.*/
            loopCounter1_Int = 0;
            while(loopCounter1_Int < _Global_Object.room_Museum_Object_Array.length){

                if(
                    museum_Button_Array[loopCounter1_Int +
                        _Global_Object.exhibition_Museum_Object_Array.length +
                        _Global_Object.floor_Museum_Object_Array.length] !=
                    _Global_Object
                        .room_Museum_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorUI_Object
                        ._Button
                ){ return true; }





                loopCounter1_Int ++;

            }





        return false;

    }
    /*==================================================*/





    /*==================================================*/
    private function Edit_Void(){

        selected_Museum_Object._MuseumAndVisitorAgnostic_Object._explanation_String_Array   = explanation_String_Array;
        selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String     = nameAlt_String;
        selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String    = nameFull_String;
        selected_Museum_Object._Tag_Object_Array                                            = _Tag_Object_Array;
        selected_Museum_Object.parent_Museum_Object                                         = parent_Museum_Object;

    }
    /*==================================================*/





    /*==================================================
    Function to fill the explanation text input with the explanation from the
        newly selected museum object.*/
    public function FillExplanation_MuseumEditPopupUI_Object():MuseumEditPopupUI_Object{

        /*This while loop is used to populate back the explanation string
            into the text input.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < explanationAmount_Int){

            var _Text:Text = new Text();
            var _TextInput:TextInput = new TextInput();
            var textInputExplanationStruct:TextInput_Struct = {

                _TextInput     :_TextInput,
                _Text          :_Text

            };





            explanation_TextInput_Struct_Array.push(textInputExplanationStruct);
            _Text.id = "UIPopupEditMuseum_Object_InputExplanationText_" + explanation_TextInput_Struct_Array.length;
            _Text.text = "Explanation";
            _Grid.addChildAt(_Text, explanationIndex_Int);
            explanationIndex_Int =
                _Grid
                    .indexOfChild(
                        explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1]
                            ._Text
                    ) + 1;





            _TextInput.disabled = false;
            _TextInput.id = "UIPopupEditMuseum_Object_InputExplanation_" + explanation_TextInput_Struct_Array.length;
            _TextInput.percentWidth = 100;
            _TextInput.text =
                selected_Museum_Object
                    ._MuseumAndVisitorAgnostic_Object
                    .explanation_String_Array[loopCounter1_Int];
            _Grid.addChildAt(_TextInput, explanationIndex_Int);
            explanationIndex_Int =
                _Grid
                    .indexOfChild(
                        explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1]
                            ._TextInput
                    ) + 1;





            loopCounter1_Int ++;

        }





        return this;

    }
    /*==================================================*/





    /*==================================================
    Function to fill tag list selector with the tag that is not previously selected.*/
    private function FillTag_MuseumEditUIPopup_Object():MuseumEditUIPopup_Object{

        /*Adding multiple tag list selectors.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

            var match_Bool:Bool = false;
            var loopCounter3_Int:Int = 0;
            while(loopCounter3_Int < tag_ListSelector_Struct_Array.length){

                if(
                    _Global_Object
                        ._Tag_Object_Array[loopCounter1_Int]
                        ._TagAgnostic_Object
                        .name_String ==
                    tag_ListSelector_Struct_Array[loopCounter3_Int]
                        ._ListSelector
                        .text
                ){ match_Bool = true; }





                loopCounter2_Int ++;

            }






            if(match_Bool == false){

                _ListSelector
                    .dataSource
                    .createFromString(
                        _Global_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .name_String
                    );

            }





            loopCounter1_Int ++;

        }




        loopCounter1_Int = 0;
        while(loopCounter1_Int < _Global_Object.general_Tag_Object_Array.length){

            var match_Bool:Bool = false;
            var loopCounter3_Int:Int = 0;
            while(loopCounter3_Int < tag_ListSelector_Struct_Array.length){

                if(
                    _Global_Object
                        .general_Tag_Object_Array[loopCounter1_Int]
                        ._TagAgnostic_Object
                        .name_String ==
                    tag_ListSelector_Struct_Array[loopCounter3_Int]
                        ._ListSelector
                        .text
                ){ match_Bool = true; }





                loopCounter3_Int ++;

            }






            if(match_Bool == false){

                _ListSelector
                    .dataSource
                    .createFromString(
                        _Global_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .name_String
                    );

            }





            loopCounter1_Int ++;

        }





        return this;

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();




        StaticFunction_Collection.Clear_T_Array(explanation_TextInput_Struct_Array);
        StaticFunction_Collection.Clear_T_Array(tag_ListSelector_Struct_Array);





        museumType_String               = "";
        museumTypePrev_String           = "";





        explanation_Text.text                   = "Explanation";
        explanation_TextInput.disabled          = true;
        explanation_TextInput.percentWidth      = 100;
        museum_ListSelector.disabled            = true;
        museum_ListSelector.method              = "default";
        nameAlt_TextInput.disabled              = true;
        nameFull_TextInput.disabled             = true;
        parentNameFull_ListSelector.disabled    = true;
        parentNameFull_ListSelector.method      = "default";
        type_ListSelector.method                = "default";





        /*Adding the first explanation box.*/
        var explanation_Text        :Text               = new Text();
        var explanation_TextInput   :TextInput          = new TextInput();
        var _TextInput_Struct       :TextInput_Struct   = {

            _Text                   :explanation_Text,
            _TextInput              :explanation_TextInput

        };
        _Grid.addChild(explanation_Text);
        _Grid.addChild(explanation_TextInput);
        explanation_TextInput_Struct_Array.push(_TextInput_Struct);
        explanation_Text.id         ="MuseumEditUIPopup_Object_explanation_Text_"          + explanation_TextInput_Struct_Array.length;
        explanation_TextInput.id    ="MuseumEditUIPopup_Object_explanation_TextInput_"     + explanation_TextInput_Struct_Array.length;
        explanationIndex_Int    = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].explanation_TextInput) + 1;





        /*Adding the first tag selection box.*/
        var tag_Text:Text = new Text();
        var tag_ListSelector:ListSelector = new ListSelector();
        var _ListSelector_Struct   :ListSelector_Struct = {
            _ListSelector   :tag_ListSelector,
            _Text           :tag_Text
        };
        _Grid.addChild(tag_Text);
        _Grid.addChild(tag_ListSelector);
        tag_ListSelector_Struct_Array.push(_ListSelector_Struct);
        tag_ListSelector.disabled           = true;
        tag_ListSelector.id                 = "MuseumEditUIPopup_Object_tag_ListSelector_" + tag_ListSelector_Struct_Array.length;
        tag_ListSelector.method             = "default";
        tag_ListSelector.percentWidth       = 100;
        tag_ListSelector.selectedIndex      = -1;
        tag_ListSelector.text               = "";
        tag_Text.id                         = "MuseumEditUIPopup_Object_tag_Text_" + tag_ListSelector_Struct_Array.length;
        tag_Text.text                       = "Tags";






        CallbackEachMuseum_Void();

    }
    /*==================================================*/





    /*==================================================
    Function to remove all explanation user interface from the pop up object.
    This function is executed right after there is new museum object selected.*/
    private function RemoveAllExplanation_MuseumEditPopupUI_Object():MuseumEditPopupUI_Object{

        /*Clear the explanation text input.*/
        loopCounter1_Int = 1;
        while(loopCounter1_Int <= explanation_TextInput_Struct_Array.length){

            /*Search for the object.*/
            var _Text:Text =
                _Popup
                    .content
                    .findChild(
                        "UIPopupEditMuseum_Object_InputExplanationText_" + loopCounter1_Int,
                        Text,
                        true
                    );
            var _TextInput:TextInput =
                _Popup
                    .content
                    .findChild(
                        "UIPopupEditMuseum_Object_InputExplanation_" + loopCounter1_Int,
                        TextInput,
                        true
                    );
            /*Remove the user interface from the parent user interface object.*/
            _Grid.removeChild(_Text);
            _Grid.removeChild(_TextInput);





            loopCounter1_Int ++;

        }
        /*Clear the text input array.*/
        StaticFunction_Collection.Clear_T_Array(explanation_TextInput_Struct_Array);





        return this;

    }
    /*==================================================*/





    /*==================================================
    Function to remove all tag user interface from the pop up object.
    This function is executed right after there is new museum object selected.*/
    private function RemoveAllTag_MuseumEditPopupUI_Object():MuseumEditPopupUI_Object{

        /*This specific loop is for removing all tag list selector.*/
        var loopCounter1_Int:Int = 1;
        while(loopCounter1_Int <= tag_ListSelector_Struct_Array.length){

            /*Search all list selector of tag and the text list selector.*/
            var _Text:Text =
                _Popup
                    .content
                    .findChild(
                        "UIPopupEditMuseum_Object_SelectTagText_" + loopCounter1_Int,
                        Text,
                        true
                    );
            var _ListSelector:ListSelector =
                _Popup
                    .content
                    .findChild(
                        "UIPopupEditMuseum_Object_SelectTag_" + loopCounter1_Int,
                        ListSelector,
                        true
                    );
            /*After searching then I need to remove the object from the layout parent.*/
            _Grid.removeChild(_Text);
            _Grid.removeChild(_ListSelector);





            loopCounter1_Int ++;

        }
        /*Clear the struct tag list selector array.*/
        StaticFunction_Collection.Clear_T_Array(tag_ListSelector_Struct_Array);





        return this;

    }
    /*==================================================*/





    /*==================================================
    Function to reset parent name list selector based on the selected museum object.*/
    private function ResetParentNameFull_MuseumEditPopupUI_Object():MuseumEditPopupUI_Object{

        /*Setting parent museum object list selector if the selected museum
            object is not floor.*/
        if(museumType_String != "Floor"){

            parentNameFull_ListSelector.text =
                selected_Museum_Object
                    .parent_Museum_Object
                    ._MuseumAndVisitorAgnostic_Object
                    ._Name_Struct
                    .full_String;





            var main_Museum_Object_Array:Array<Museum_Object> = null;
            if(museumType_String == "Exhibition"){ main_Museum_Object_Array = _Global_Object.room_Museum_Object_Array; }
            else if(museumType_String == "Room"){ main_Museum_Object_Array = _Global_Object.floor_Museum_Object_Array; }


            parentNameFull_ListSelector
                .dataSource
                .removeAll();


            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < main_Museum_Object_Array.length){

                parentNameFull_ListSelector
                    .dataSource
                    .createFromString(
                        main_Museum_Object_Array[loopCounter1_Int]
                            ._MuseumAndVisitorAgnostic_Object
                            ._Name_Struct
                            .full_String
                        );





                loopCounter1_Int ++;

            }

        }
        /*If the selected object is a floor museum object then I need to disable the parent
            list selector user interface element.*/
        else if(museumType_String == "Floor"){ parentNameFull_ListSelector.disabled = true; }





        return this;

    }
    /*==================================================*/





    /*==================================================
    Function to reset and re initiate the tag list selector when there
        is a new selected museum object.*/
    private function ResetTag_MuseumEditPopupUI_Object():MuseumEditPopupUI_Object{

        /*Get the amount tag that this museum object has.*/
        var tagAmount_Int:Int = 0;
        tagAmount_Int = selected_Museum_Object._Tag_Object_Array.length;





        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < tagAmount_Int){

            var _Text:Text = new Text();
            var _ListSelector:ListSelector = new ListSelector();
            var listSelectorTagStruct = {

                _ListSelector  :_ListSelector,
                _Text          :_Text

            }





            tag_ListSelector_Struct_Array.push(listSelectorTagStruct);
            _Text.id = "UIPopupEditMuseum_Object_SelectTagText_" + tag_ListSelector_Struct_Array.length;
            _Text.text = "Tags";
            _Grid.addChild(_Text);
            _ListSelector.disabled = false;
            _ListSelector.id = "UIPopupEditMuseum_Object_SelectTag_" + tag_ListSelector_Struct_Array.length;
            _ListSelector.percentWidth = 100;
            /*CAUTION: I mask the index so the text is actually what it is from the selected_Museum_Object but the selected index
                is the index after Remove entry.*/
            _ListSelector.selectedIndex = 1;
            _ListSelector.text =  selected_Museum_Object._Tag_Object_Array[loopCounter1_Int]._TagAgnostic_Object.name_String;
            _ListSelector.dataSource.createFromString("Remove");











            _Grid.addChild(_ListSelector);
            _ListSelector.method = "default";





            loopCounter1_Int ++;

        }




        return this;

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void(){

        super.Update_Void();





        /*If the amount of the museum button array is not the same as the amount
            of all museum object combined (exhibition, room, floor) then the museum buttons
            need to be updated.*/
        var updateMuseum_Bool:Bool = CheckMuseumButton_Bool();
        UpdateMuseumButton_MuseumEditPopupUI_Object(updateMuseum_Bool);





        /*Update based on change of the museum type and the selected museum
            list selector.*/
        if(_Popup != null){

            /*Update controller based on the availability of the type list selector.*/
            if(
                type_ListSelector.selectedIndex     == -1       ||
                type_ListSelector.text              == " "      ||
                type_ListSelector.text              == ""
            ){
                museum_ListSelector.disabled        = true;
                museum_ListSelector.selectedIndex   = -1;
                museum_ListSelector.text            = " ";
            }
            else{ museum_ListSelector.disabled = false; }





            /*Update controller based on the availability of the museum list selector.*/
            if(
                museum_ListSelector.selectedIndex       == -1   ||
                museum_ListSelector.text                == " "  ||
                museum_ListSelector.text                == ""
            ){
                nameAlt_TextInput.disabled              = true;
                nameFull_TextInput.disabled             = true;
                parentNameFull_ListSelector.disabled    = true;
            }
            else{
                nameAlt_TextInput.disabled              = false;
                nameFull_TextInput.disabled             = false;
                parentNameFull_ListSelector.disabled    = false;
            }





            /*This if statement is for filling in the museum object list selector based
                on the museum type.*/
            if(
                type_ListSelector.selectedIndex     == -1       ||
                type_ListSelector.text              == " "      ||
                type_ListSelector.text              == ""
            ){

                museumType_String = type_ListSelector.text;





                if(museumType_String != museumTypePrev_String){

                    museum_ListSelector.dataSource.removeAll();





                    museum_ListSelector.disabled                = false;
                    museum_ListSelector.selectedIndex           = -1;
                    nameAlt_TextInput.disabled                  = false;
                    nameAlt_TextInput.text                      = " ";
                    nameFull_TextInput.disabled                 = false;
                    nameFull_TextInput.text                     = " ";
                    parentNameFull_ListSelector.disabled        = false;
                    parentNameFull_ListSelector.selectedIndex   = -1;





                    var main_Museum_Object_Array:Array<Museum_Object> = new Array<Museum_Object>();
                    if(museumType_String == "Exhibition")   { main_Museum_Object_Array = _Global_Object.exhibition_Museum_Object_Array; }
                    else if(museumType_String == "Floor")   { main_Museum_Object_Array = _Global_Object.floor_Museum_Object_Array; }
                    else if(museumType_String == "Room")    { main_Museum_Object_Array = _Global_Object.room_Museum_Object_Array; }





                    /*This loop is specifically fill the museum list selector
                        according to the museum type.*/
                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < main_Museum_Object_Array.length){

                        museum_ListSelector.dataSource.createFromString(
                            main_Museum_Object_Array[loopCounter1_Int]
                                ._MuseumAndVisitorAgnostic_Object
                                ._Name_Struct
                                .full_String
                        );




                        loopCounter1_Int ++;

                    }





                    /*Make these variables to be equal to prevent
                        unnecessary loop.*/
                    museumTypePrev_String = museumType_String;

                }

            }





            /*This a specific handler if the museum object selected is the floor
                museum object.
            If the museum type selected is the floor object, the parent museum object list selector
                will be disabled.*/
            if(type_ListSelector.text == "Floor"){ parentNameFull_ListSelector.disabled = true; }
            else if(
                type_ListSelector.text == "Exhibition" ||
                type_ListSelector.text == "Room"
            ){ parentNameFull_ListSelector.disabled = false; }





            /*Check which object museum is selected.*/
            if(museum_ListSelector.selectedIndex != -1){

                var _MuseumType_Enum:MuseumType_Enum = null;
                if(museumType_String == "Exhibition")   { _MuseumType_Enum = EXH; }
                else if(museumType_String == "Floor")   { _MuseumType_Enum = FLR; }
                else if(museumType_String == "Room")    { _MuseumType_Enum = ROM; }





                /*These codes is for specifically search for selected exhibitions.*/
                selected_Museum_Object = StaticFunction_Collection.Find_Museum_Object(
                    _Global_Object,
                    _MuseumType_Enum,
                    museum_ListSelector.text
                );





                /*If the museum object selected is different than the previously selected museum object
                    then repopulate the tag list selector and the explanation text input.*/
                if(selected_Museum_Object != selectedPrev_Museum_Object){

                    this
                        .RemoveAllExplanation_MuseumEditPopupUI_Object()
                        .RemoveAllTag_MuseumEditPopupUI_Object();





                    /*Fill in the text that indicates whether the selected museum
                        object is full or not.*/
                    var booleanFull_String:String = "";
                    if(selected_Museum_Object._MuseumAndVisitorAgnostic_Object.full_Bool        == true)    { booleanFull_String = "True"; }
                    else if(selected_Museum_Object._MuseumAndVisitorAgnostic_Object.full_Bool   == false)   { booleanFull_String = "False"; }





                    /*Basic user interface setting for the newly selected museum object.*/
                    full_Text.text                              = booleanFull_String;
                    nameAlt_TextInput.disabled                  = false;
                    nameAlt_TextInput.text                      = selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String
                    nameFull_TextInput.disabled                 = false;
                    nameFull_TextInput.text                     = selected_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String;
                    parentNameFull_ListSelector.disabled        = false;
                    parentNameFull_ListSelector.selectedIndex   = -1;
                    visitorCurrent_Text.text                    =
                        "" + selected_Museum_Object._VisitorAgnostic_Object._Visitor_Struct.current_Int;
                    visitorTotal_Text.text                      =
                        "" + selected_Museum_Object._VisitorAgnostic_Object._Visitor_Struct.total_Int;





                    /*Set the total amount of explanation the newly selected  museum object has.*/
                    var explanationAmount_Int:Int = 0;
                    explanationAmount_Int =
                        selected_Museum_Object
                            ._MuseumAndVisitorAgnostic_Object
                            .explanation_String_Array
                            .length;





                    /*Set the first explanation index after visitor total index text.*/
                    explanationIndex_Int = _Grid.indexOfChild(visitorTotal_Text) + 1;





                    /*Reset functions always first.*/
                    this
                        .ResetParentNameFull_MuseumEditPopupUI_Object()
                        .ResetTag_MuseumEditPopupUI_Object()
                        .FillExplanation_MuseumEditPopupUI_Object()
                        .FillTag_MuseumEditUIPopup_Object();





                    /*Make sure to make same both selected previous museum object and the current museum object so
                        that it is not necessary to do this operation again.*/
                    selectedPrev_Museum_Object = selected_Museum_Object;

                }

            }

        }





    this
        .UpdateTag_MuseumEditUIPopup_Object()
        .UpdateExplanation_MuseumEditUIPopup_Object();





    }
    /*==================================================*/





    /*==================================================
    Function to update explanation text input.
    So when there is an explanation at least a String that is not empty (" ")
        in the latest explanation text input this function automatically
        add text input.
    When there is explanation that is empty or has empty String this functions
        removes that text input and re - adjust the the id name
        of all explanation text input.*/
    private function UpdateExplanation_MuseumEditUIPopup_Object():MuseumEditUIPopup_Object{

        if(_Popup != null && explanation_TextInput_Struct_Array.length > 0){

            /*For explanation I need to make sure to remove all list selector
                hat is not in the last index of the text input struct and also not the first.
            If the struct is either in the first position or in the last position then
                just do nothing about it.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < explanation_TextInput_Struct_Array.length){

                /*If there is nothing written in the text input or just a space
                    and the length of the struct is larger than 1 then delete the user interface element.*/
                if(
                    (
                        explanation_TextInput_Struct_Array[loopCounter1_Int].textInputObject.text == "" ||
                        explanation_TextInput_Struct_Array[loopCounter1_Int].textInputObject.text == " "
                    ) &&
                    explanation_TextInput_Struct_Array.length > 1
                ){

                    /*If the explanation text input is the latest in the array, then I simply need to
                        reset the value and it is not necessary to delete it.
                    Because if it is the latest text input in the array if I delete it it will just created
                        a new one because the new latest index is filled with a valid value.
                    So this if statement is made to prevent unnecessary loop.*/
                    if(loopCounter1_Int != explanation_TextInput_Struct_Array.length - 1){

                        _Grid.removeChild
                            (explanation_TextInput_Struct_Array[loopCounter1_Int].textInputObject);
                        _Grid.removeChild
                            (explanation_TextInput_Struct_Array[loopCounter1_Int].textObject);
                        explanation_TextInput_Struct_Array.remove
                            (explanation_TextInput_Struct_Array[loopCounter1_Int]);





                        /*Re - adjust all explanation text input id.*/
                        var loopCounter2_Int:Int = 1;
                        while(loopCounter2_Int <= explanation_TextInput_Struct_Array.length){

                            explanation_TextInput_Struct_Array[loopCounter2_Int - 1]
                                .textInputObject.id =
                                    "UIPopupEditMuseum_Object_InputExplanation_" + loopCounter2_Int;
                            explanation_TextInput_Struct_Array[loopCounter2_Int - 1]
                                .textObject.id =
                                    "UIPopupEditMuseum_Object_InputExplanationText_" + loopCounter2_Int;





                            loopCounter2_Int ++;

                        }

                    }

                }





                explanationIndex_Int = _Grid.indexOfChild(explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject) + 1;
                loopCounter1_Int ++;

            }





            /*This if statement is to insert a new element into into the pop up user interface.
            Check the latest index of the struct array.*/
            if(
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject.text != "" &&
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1].textInputObject.text != " "
            ){

                /*Create a temporary struct to hold the user interface object.*/
                var explanation_Text        :Text       = new Text();
                var explanation_TextInput   :TextInput  = new TextInput();
                var _TextInput_Struct = {

                    textInputObject     : explanation_TextInput,
                    textObject          : explanation_Text

                };
                /*Push the struct into the struct user interface array.*/
                explanation_TextInput_Struct_Array.push(_TextInput_Struct);





                /*The first user interface element.*/
                explanation_Text.id =
                    "UIPopupEditMuseum_Object_InputExplanationText_" +
                    explanation_TextInput_Struct_Array.length;
                explanation_Text.text = "Explanation";
                _Grid.addChildAt(explanation_Text, explanationIndex_Int);
                /*CAUTION: Do not forget to always set the latest index.
                CAUTION: So that any new user interface element will be added after this index.*/
                explanationIndex_Int = _Grid.indexOfChild(explanation_Text) + 1;





                /*The second user interface element.*/
                explanation_TextInput.id =
                    "UIPopupEditMuseum_Object_InputExplanation_" +
                    explanation_TextInput_Struct_Array.length;
                explanation_TextInput.percentWidth = 100;
                _Grid.addChildAt(explanation_TextInput, explanationIndex_Int);
                /*CAUTION: Do not forget to always set the latest index.
                CAUTION: So that any new user interface element will be added after this index.*/
                explanationIndex_Int = _Grid.indexOfChild(explanation_TextInput) + 1;

            }

        }




        return this;

    }
    /*==================================================*/





    /*==================================================
    A function to give handler to specific museum button in the absolute layout interface.*/
    private function UpdateMuseumButton_MuseumEditPopupUI_Object(_updateMuseum_Bool:Bool):MuseumEditPopupUI_Object{

        /*If there is a change in the museum object amount or the button object
            then update the button.*/
        if(_updateMuseum_Bool == true){

            /*Empty the button array.*/
            StaticFunction_Collection.Clear_T_Array(museum_Button_Array);





            /*Fill in the button array back from the exhibition main array object.
            What basically I did here is to assign museum button object userData with its button id.
            So the user data will be assigned with the id of the museum object itself.
            Then the museum object button will be assigned on click function from this object.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _Global_Object.exhibition_Museum_Object_Array.length){

                _Global_Object
                    .exhibition_Museum_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorUI_Object
                    ._Button
                    .userData =
                        _Global_Object
                            .exhibition_Museum_Object_Array[loopCounter1_Int]
                            ._MuseumAndVisitorUI_Object
                            ._Button
                            .id;
                museum_Button_Array.push(
                    _Global_Object
                        .exhibition_Museum_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorUI_Object
                        ._Button
                );
                _Global_Object
                    .exhibition_Museum_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorUI_Object
                    ._Button
                    .onClick = _Button.onClick;





                loopCounter1_Int ++;

            }





            /*Fill in the button array back from the floor main array object.
            What basically I did here is to assign museum button object userData with its button id.
            So the user data will be assigned with the id of the museum object itself.
            Then the museum object button will be assigned on click function from this object.*/
            loopCounter1_Int = 0;
            while(loopCounter1_Int < _Global_Object.floor_Museum_Object_Array.length){

                _Global_Object
                    .floor_Museum_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorUI_Object
                    ._Button
                    .userData =
                        _Global_Object
                            .floor_Museum_Object_Array[loopCounter1_Int]
                            ._MuseumAndVisitorUI_Object
                            ._Button
                            .id;
                museum_Button_Array.push(
                    _Global_Object
                        .floor_Museum_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorUI_Object
                        ._Button
                );
                _Global_Object
                    .floor_Museum_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorUI_Object
                    ._Button
                    .onClick = _Button.onClick;





                loopCounter1_Int ++;

            }





            /*Fill in the button array back from the room main array object.
            What basically I did here is to assign museum button object userData with its button id.
            So the user data will be assigned with the id of the museum object itself.
            Then the museum object button will be assigned on click function from this object.*/
            loopCounter1_Int = 0;
            while(loopCounter1_Int < _Global_Object.room_Museum_Object_Array.length){

                _Global_Object
                    .room_Museum_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorUI_Object
                    ._Button
                    .userData =
                        _Global_Object
                            .room_Museum_Object_Array[loopCounter1_Int]
                            ._MuseumAndVisitorUI_Object
                            ._Button
                            .id;
                museum_Button_Array.push(
                    _Global_Object
                        .room_Museum_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorUI_Object
                        ._Button
                );
                _Global_Object
                    .room_Museum_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorUI_Object
                    ._Button
                    .onClick = _Button.onClick;





                loopCounter1_Int ++;

            }

        }

    }
    /*==================================================*/





    /*==================================================
    Function to update tag list selector.
    So when there is a tag selected in the latest tag selector
        this function automatically add new list selector.
    When there is tag that is chosen to be removed this function
        remove that list selector and re - adjust the the id name
        of all tag list selector.*/
    private function UpdateTag_MuseumEditUIPopup_Object():MuseumEditUIPopup_Object{

        /*This code is to populate the tag list selector dynamically so that when there is tag
            inputed or removed the form adjust accordingly.*/
        if(_Popup != null && tag_ListSelector_Struct_Array.length > 0){

            /*For when the ListSelector struct array is having length equal to 1 and loopCounter1_Int is
                not having index equal to the ListSelector array length minus 1, reset the value of the of
                the following ListSelector.
            If the condition other than those, remove the ListSelector from the ListSelector struct
                array and from the grid layout.
            This codes below affects when user deleting tags.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < tag_ListSelector_Struct_Array.length){

                if(
                    tag_ListSelector_Struct_Array.length >  1 &&
                    tag_ListSelector_Struct_Array[loopCounter1_Int]._ListSelector.selectedIndex == 0
                ){

                    if(loopCounter1_Int == tag_ListSelector_Struct_Array.length - 1){
                        tag_ListSelector_Struct_Array[loopCounter1_Int]._ListSelector.selectedIndex = -1;
                    }
                    else{
                        _Grid.removeChild(tag_ListSelector_Struct_Array[loopCounter1_Int]._ListSelector);
                        _Grid.removeChild(tag_ListSelector_Struct_Array[loopCounter1_Int]._Text);
                        tag_ListSelector_Struct_Array.remove(tag_ListSelector_Struct_Array[loopCounter1_Int]);

                        /*Re - adjust the list selector id.*/
                        var loopCounter2_Int:Int = 1;
                        while(loopCounter2_Int <= tag_ListSelector_Struct_Array.length){

                            tag_ListSelector_Struct_Array[loopCounter2_Int - 1]._ListSelector.id =
                                "UIPopupEditMuseum_Object_SelectTag_" + loopCounter2_Int;
                            tag_ListSelector_Struct_Array[loopCounter2_Int - 1]._Text.id =
                                "UIPopupEditMuseum_Object_SelectTagText_" + loopCounter2_Int;





                            loopCounter2_Int ++;

                        }

                    }

                }
                /*If there is only one tag list selector left then I just need to reset the selected index value.*/
                else if(
                    tag_ListSelector_Struct_Array[loopCounter1_Int]._ListSelector.selectedIndex == 0 &&
                    tag_ListSelector_Struct_Array.length == 1
                ){ tag_ListSelector_Struct_Array[loopCounter1_Int]._ListSelector.selectedIndex = -1; }





                loopCounter1_Int ++;

            }





            if(tag_ListSelector_Struct_Array[tag_ListSelector_Struct_Array.length - 1]._ListSelector.selectedIndex != -1 && tag_ListSelector_Struct_Array[tag_ListSelector_Struct_Array.length - 1]._ListSelector.selectedIndex != 0){

                var tag_ListSelector            :ListSelector   = new ListSelector();
                var tagListSelector_Text        :Text           = new Text();
                var listSelectorTagStruct = {

                    _ListSelector  :tag_ListSelector,
                    _Text          :tagListSelector_Text

                };
                tag_ListSelector_Struct_Array.push(listSelectorTagStruct);





                tagListSelector_Text        = new Text();
                tagListSelector_Text.text   = "Tags";
                tagListSelector_Text.id     = "UIPopupEditMuseum_Object_SelectTagText_" + tag_ListSelector_Struct_Array.length;
                _Grid.addChild(tagListSelector_Text);





                tag_ListSelector.dataSource.createFromString("Remove");





                tag_ListSelector.id             = "UIPopupEditMuseum_Object_SelectTag_" + tag_ListSelector_Struct_Array.length;
                tag_ListSelector.percentWidth   = 100;
                tag_ListSelector.text           = " ";
                _Grid.addChild(tag_ListSelector);






                var tempTagName_String_Array:Array<String> = new Array<String>();
                /*This loop is for adding every possible tags into the list selector.*/
                var loopCounter1_Int:Int = 0;
                while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

                    tempTagName_String_Array.push(
                        _Global_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .name_String
                    );





                    loopCounter1_Int ++;

                }





                /*This loop is for removing tag that is inputted in previous list selector.*/
                loopCounter1_Int = 1;
                while(loopCounter1_Int <= tag_ListSelector_Struct_Array.length){

                    var tempTag_ListSelector:ListSelector =
                        _Popup
                            .content
                            .findChild(
                                "UIPopupEditMuseum_Object_SelectTag_" + loopCounter1_Int,
                                ListSelector,
                                true
                            );
                    tempTagName_String_Array.remove(tempTag_ListSelector.text);





                    loopCounter1_Int ++;

                }





                /*Add every tag that is not yet added within the museum object into the list selector.*/
                loopCounter1_Int = 0;
                while(loopCounter1_Int < tempTagName_String_Array.length){

                    tag_ListSelector.dataSource.createFromString(tempTagName_String_Array[loopCounter1_Int]);





                    loopCounter1_Int ++;

                }





                /*For some reason you need this to be configured after the object is initialized in the screen.*/
                tag_ListSelector.method = "default";

            }

        }




        return this;

    }
    /*==================================================*/





}
