class MuseumAddUIPopup_Object extends MuseumAddAndEditUIPopup_Object{





    /*==================================================*/
    private var explanation_TextInput                   (null, null)        :TextInput                      = null;
    private var explanation_TextInput_Struct_Array      (null, null)        :Array<TextInput_Struct>        = new Array<TextInput_Struct>();
    private var explanationIndex_Int                    (null, null)        :Int                            = null;
    private var explanationTextInput_Text               (null, null)        :Text                           = null;
    private var nameAlt_TextInput                       (null, null)        :TextInput                      = null;
    private var nameFull_TextInput                      (null, null)        :TextInput                      = null;
    private var parent_ListSelector                     (null, null)        :ListSelector                   = null;
    private var tag_ListSelector                        (null, null)        :ListSelector                   = null;
    private var tag_ListSelector_Struct_Array           (null, null)        :Array<ListSelector_Struct>     = new Array<ListSelector_Struct>();
    private var tagIndex_Int                            (null, null)        :Int                            = null;
    private var tagListSelector_Text                    (null, null)        :Text                           = null;
    private var type_Int                                (null, null)        :Int                            = null;
    private var type_ListSelector                       (null, null)        :ListSelector                   = null;
    private var typePrev_Int                            (null, null)        :Int                            = null;
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
            "MuseumAddUIPopup_Button",
            Init_Void,
            "layout/MuseumAddUIPopup_Object.xml",
            "Add Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    private function Add_Void():Void{

        _Museum_Object:Museum_Object = new Museum_Object(
            _Global_Object,
            _MuseumType_Enum,
            _Tag_Object_Array,
            explanation_String_Array,
            nameAlt_String,
            nameFull_String,
            parent_Museum_Object
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();




        _Grid                       = _Popup.content.findChild("MuseumAddUIPopup_Object__Grid"                          , Grid          , true);
        explanation_TextInput       = _Popup.content.findChild("MuseumAddUIPopup_Object_explanation_TextInput_1"        , TextInput     , true);
        explanationTextInput_Text   = _Popup.content.findChild("MuseumAddUIPopup_Object_explanationTextInput_Text_1"    , Text          , true);
        nameAlt_TextInput           = _Popup.content.findChild("MuseumAddUIPopup_Object_nameAlt_TextInput"              , TextInput     , true);
        nameFull_TextInput          = _Popup.content.findChild("MuseumAddUIPopup_Object_nameFull_TextInput"             , TextInput     , true);
        parent_ListSelector         = _Popup.content.findChild("MuseumAddUIPopup_Object_parent_ListSelector"            , ListSelector  , true);
        tag_ListSelector            = _Popup.content.findChild("MuseumAddUIPopup_Object_tag_ListSelector_1"             , ListSelector  , true);
        tagListSelector_Text        = _Popup.content.findChild("MuseumAddUIPopup_Object_tagListSelector_Text_1"         , Text          , true);
        type_ListSelector           = _Popup.content.findChild("MuseumAddUIPopup_Object_type_ListSelector"              , ListSelector  , true);

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){ super.Button_Void(Add_Void); }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();





        StaticFunction_Collection.Clear_T_Array(explanation_TextInput_Struct_Array);
        StaticFunction_Collection.Clear_T_Array(tag_ListSelector_Struct_Array);





        var _ListSelector_Struct    :ListSelector_Struct = {
            _ListSelector           :tag_ListSelector,
            _Text                   :tagListSelector_Text
        };
        var _TextInput_Struct       :TextInput_Struct = {
            _TextInput              :explanation_TextInput,
            _Text                   :explanationTextInput_Text
        }





        parent_ListSelector.method          = "default";
        parent_ListSelector.selectedIndex   = -1;
        tag_ListSelector.method             = "default";
        type_ListSelector.method            = "default";





        o/*Push the first element of the explanation into explanation_TextInput_Struct_Array*/
        explanation_TextInput_Struct_Array.push(_TextInput_Struct);
        /*Set the next index an explanation would be added into the form.*/
        explanationIndex_Int =
            _Grid.indexOfChild(
                explanation_TextInput_Struct_Array[explanation_TextInput_Struct_Array.length - 1]
                    ._TextInput
            ) + 1;





        /*Push the first element into the tag_ListSelector_Struct_Array.*/
        tag_ListSelector_Struct_Array.push(_ListSelector_Struct);
        /*Then create the first element of the list selector.*/
        tag_ListSelector.dataSource.createFromString("Remove");
        /*I have put the first element in the tag_ListSelector.
        Next thing to do is to put all possible array into the tag_ListSelector
            so that user can choose which tag they want for the newly created
            museum object.
        First I need to add the non general tag.*/
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
        /*Then I need to add the general tag array.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < _Global_Object.general_Tag_Object_Array.length){

            tag_ListSelector.dataSource.createFromString(
                _Global_Object
                    .general_Tag_Object_Array[loopCounter1_Int]
                    ._TagAgnostic_Object
                    .name_String
            );
            loopCounter1_Int ++;

        }

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();





        this
            .UpdateExplanation_MuseumAddUIPopup_Object()
            .UpdateTag_MuseumAddUIPopup_Object()
            .UpdateType_MuseumAddUIPopup_Object();

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
    private function UpdateExplanation_MuseumAddUIPopup_Object():MuseumAddUIPopup_Object{

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
                                    "UIPopupAddMuseum_Object_InputExplanation_" + loopCounter2_Int;
                            explanation_TextInput_Struct_Array[loopCounter2_Int - 1]
                                .textObject.id =
                                    "UIPopupAddMuseum_Object_InputExplanationText_" + loopCounter2_Int;





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
                    "UIPopupAddMuseum_Object_InputExplanationText_" +
                    explanation_TextInput_Struct_Array.length;
                explanation_Text.text = "Explanation";
                _Grid.addChildAt(explanation_Text, explanationIndex_Int);
                /*CAUTION: Do not forget to always set the latest index.
                CAUTION: So that any new user interface element will be added after this index.*/
                explanationIndex_Int = _Grid.indexOfChild(explanation_Text) + 1;





                /*The second user interface element.*/
                explanation_TextInput.id =
                    "UIPopupAddMuseum_Object_InputExplanation_" +
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
    Function to update tag list selector.
    So when there is a tag selected in the latest tag selector
        this function automatically add new list selector.
    When there is tag that is chosen to be removed this function
        remove that list selector and re - adjust the the id name
        of all tag list selector.*/
    private function UpdateTag_MuseumAddUIPopup_Object():MuseumAddUIPopup_Object{

        if(_Popup != null && tag_ListSelector_Struct_Array.length > 0){

            /*For when the ListSelector struct array is having length equal to 1 and
                loopCounter1_Int is not having an index equal to the ListSelector
                array length minus 1 (last index), reset the value of the of the
                following ListSelector.
            If the condition other than those, remove the ListSelector from the
                ListSelector struct array and from the grid layout.
            CAUTION: With this in mind the length of tag_ListSelector_Struct_Array
                should always be 1.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < tag_ListSelector_Struct_Array.length){

                /*Loop through all list selector for choosing tag.
                If the index is 0 means it will delete the current tag list selector object.
                But I need to make sure that there is at least one list selector in the array.
                If there is no problem, then delete the list selector object.*/
                if(
                    tag_ListSelector_Struct_Array[loopCounter1_Int].listSelectorObject.selectedIndex == 0 &&
                    tag_ListSelector_Struct_Array.length > 1
                ){

                    /*If the tag list selector is the latest in the array, then I simply need to
                        reset the value and it is not necessary to delete it.
                    Because it is the latest list selector in the array if I delete it it will just created
                        a new one because the new latest index is filled with a valid value.
                    So this if statement is made to prevent unnecessary loop.*/
                    if(loopCounter1_Int == tag_ListSelector_Struct_Array.length - 1){

                        tag_ListSelector_Struct_Array[loopCounter1_Int]
                            .listSelectorObject
                            .selectedIndex = -1;

                    }
                    else{

                        /*Remove the list selector object.*/
                        _Grid.removeChild(
                            tag_ListSelector_Struct_Array[loopCounter1_Int]
                                .listSelectorObject
                        );
                        /*Remove the text object.*/
                        _Grid.removeChild(
                            tag_ListSelector_Struct_Array[loopCounter1_Int]
                                .textObject
                        );
                        /*Remove the the corresponding list selector struct from the array.*/
                        tag_ListSelector_Struct_Array.remove(tag_ListSelector_Struct_Array[loopCounter1_Int]);





                        /*Re - adjust all tag list selector id.*/
                        var loopCounter2_Int:Int = 1;
                        while(loopCounter2_Int <= tag_ListSelector_Struct_Array.length){

                            tag_ListSelector_Struct_Array[loopCounter2_Int - 1]
                                .listSelectorObject.id =
                                    "UIPopupEditMuseum_Object_SelectTag_" + loopCounter2_Int;
                            tag_ListSelector_Struct_Array[loopCounter2_Int - 1]
                                .textObject.id =
                                    "UIPopupEditMuseum_Object_SelectTagText_" + loopCounter2_Int;





                            loopCounter2_Int ++;

                        }

                    }

                }
                /*If the length of the the tag list selector struct array is equal to 1 then just
                    reset the list selector.*/
                else if(
                    tag_ListSelector_Struct_Array[loopCounter1_Int].listSelectorObject.selectedIndex == 0 &&
                    tag_ListSelector_Struct_Array.length == 1
                ){

                    tag_ListSelector_Struct_Array[loopCounter1_Int]
                        .listSelectorObject
                        .selectedIndex = -1;

                }





                tagIndexInt = _Grid.indexOfChild(tag_ListSelector_Struct_Array[tag_ListSelector_Struct_Array.length - 1]._ListSelector) + 1;
                loopCounter1_Int ++;

            }





            /*This if statement is to insert a new element into into the pop up user interface.
            Check the latest index of this */
            if(
                tag_ListSelector_Struct_Array[tag_ListSelector_Struct_Array.length - 1].listSelectorObject.selectedIndex != -1 &&
                tag_ListSelector_Struct_Array[tag_ListSelector_Struct_Array.length - 1].listSelectorObject.selectedIndex != 0
            ){

                /*Create a temporary struct to hold the user interface object.*/
                var tag_ListSelector    :ListSelector   = new ListSelector();
                var tag_Text            :Text           = new Text();
                var _ListSelector_Struct = {

                    listSelectorObject  :tag_ListSelector,
                    textObject          :tag_Text

                };
                /*Push the struct into the struct user interface array.*/
                tag_ListSelector_Struct_Array.push(_ListSelector_Struct);





                /*The first user interface element.*/
                tag_Text.id =
                    "UIPopupAddMuseum_Object_SelectTagText_" + tag_ListSelector_Struct_Array.length;
                tag_Text.text = "Tags";
                _Grid.addChildAt(tag_Text, tagIndex_Int);
                /*CAUTION: Do not forget to always set the latest index.
                CAUTION: So that any new user interface element will be added after this index.*/
                tagIndex_Int = _Grid.indexOfChild(tag_Text) + 1;






                /*The second user interface element.*/
                tag_ListSelector.dataSource.createFromString("Remove");
                tag_ListSelector.id =
                    "UIPopupAddMuseum_Object_SelectTag_" + tag_ListSelector_Struct_Array.length;
                tag_ListSelector.percentWidth = 100;
                tag_ListSelector.text = " ";
                _Grid.addChildAt(tag_ListSelector, tagIndex_Int);
                /*CAUTION: Do not forget to always set the latest index.
                CAUTION: So that any new user interface element will be added after this index.*/
                tagIndex_Int = _Grid.indexOfChild(tag_ListSelector) + 1;






                /*Here I need to put every array from both general and non general array into
                    my temporary array for tag object.
                This below is for non general tag.*/
                var temp_Tag_Object_Array:Array<String> = new Array<String>();
                var loopCounter1_Int:Int = 0;
                while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

                    temp_Tag_Object_Array.push(
                        _Global_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .name_String
                    );





                    loopCounter1_Int ++;

                }
                /*This below is for general tag.*/
                loopCounter1_Int = 0;
                while(loopCounter1_Int < _Global_Object.general_Tag_Object_Array.length){

                    temp_Tag_Object_Array.push(
                        _Global_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .name_String
                    );





                    loopCounter1_Int ++;

                }






                /*This loop is to remove all tags those have been choose before so that it
                    will not appeared again.*/
                loopCounter1_Int = 1;
                while(loopCounter1_Int <= tag_ListSelector_Struct_Array.length){

                    var tempTag_ListSelector:ListSelector =
                        _Popup.content.findChild(
                            "UIPopupAddMuseum_Object_SelectTag_" + loopCounter1_Int,
                            ListSelector,
                            true
                        );
                    temp_Tag_Object_Array.remove(tempTag_ListSelector.text);





                    loopCounter1_Int ++;

                }





                /*Finally push all temporary tag into the list selector.*/
                loopCounter1_Int = 0;
                while(loopCounter1_Int < temp_Tag_Object_Array.length){

                    tag_ListSelector
                        .dataSource
                        .createFromString(temp_Tag_Object_Array[loopCounter1_Int]);





                    loopCounter1_Int ++;

                }





                /*For some reason you need this to be configured after the object is initialized in
                    the screen.*/
                tag_ListSelector.method = "default";

            }

        }





        return this;

    }
    /*==================================================*/





    /*==================================================
    A function to update the pop up user interface when a new museum type is chosen.
    So that I can re - generate the parent museum object list selector.*/
    private function UpdateType_MuseumAddUIPopup_Object():MuseumAddUIPopup_Object{

        /*Check if the requirements.
        Check for null pointer references.*/
        if(
            _Popup                  != null &&  /*The main pop up object.*/
            parent_ListSelector     != null &&  /*List selector object to select parent object*/
            type_ListSelector       != null     /*List selector object to select type of museum object that will be added.*/
        ){

            /*If the type is not yet chosen, it will either,
                has selectedIndex of -1,
                has text of an empty String, or
                has text of a String with only a space.*/
            if(
                type_ListSelector.selectedIndex     == -1   ||
                type_ListSelector.text              == " "  ||
                type_ListSelector.text              == ""
            ){

                /*If the type is not yet chosen I need to disable some of these components.
                PENDING: Re - check if these components are the really necessary components
                    to be disabled.*/
                explanation_TextInput.disabled      = true;
                nameAlt_TextInput.disabled          = true;
                nameFull_TextInput.disabled         = true;
                parent_ListSelector.disabled        = true;
                tag_ListSelector.disabled           = true;

            }
            /*This else statement is happened when the type of the museum object is chosen.
            If so enabled some of necessary user interface elements.*/
            else{

                explanation_TextInput.disabled      = false;
                nameAlt_TextInput.disabled          = false;
                nameFull_TextInput.disabled         = false;
                tag_ListSelector.disabled           = false;

            }





            /*Specifically if the type selected is floor then disable the
                list selector object for choosing parent object.
            Because floor object has no parent.*/
            if(type_ListSelector.text != "Floor")
                { parent_ListSelector.disabled = false; }





            /*Assign the type selector integer number.
            This variable is exists so that I can detect change.
            Because if there is change there are some user interface elements
                should be re - set back.*/
            type_Int = type_ListSelector.selectedIndex;
            if(type_Int == -1){ parent_ListSelector.disabled = true; }





            /*If there is a change in type integer number.*/
            if(type_Int != typePrev_Int){

                /*Remove all entry in the list selector for parent museum object.*/
                parent_ListSelector.dataSource.removeAll();
                /*Reset the index back to -1.*/
                parent_ListSelector.selectedIndex = -1;





                /*Determine from which array the parent object list selector should be
                    filled.*/
                var main_Museum_Object_Array:Array<Museum_Object> = null;
                /*For exhibition and room object re - enable parent_ListSelector.
                Type integer number 0 is an exhibition museum type object, hence
                    the parent object should be taken from room museum object array*/
                if(type_Int == 0){

                    parent_ListSelector.disabled = false;
                    main_Museum_Object_Array = _Global_Object.room_Museum_Object_Array;

                }
                /*Keep disable parent_ListSelector if type_Int refers to floor museum object.*/
                else if(type_Int == 1){ parent_ListSelector.disabled = true; }
                /*Type integer 2 is for room object.
                Hence, I need to take floor object array as the contents of the parent list
                    selector object.*/
                else if(type_Int == 2){

                    parent_ListSelector.disabled = false;
                    main_Museum_Object_Array = _Global_Object.floor_Museum_Object_Array;

                }





                /*If the museum type is not floor object and is not the default -1
                    then populate the parent_ListSelector with the object museum object.*/
                if(
                    main_Museum_Object_Array    != null     &&
                    type_Int                    != -1       &&
                    type_Int                    != 1
                ){

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < main_Museum_Object_Array.length){

                        parent_ListSelector.dataSource.createFromString(
                            main_Museum_Object_Array[loopCounter1_Int]
                                ._MuseumAndVisitorAgnostic_Object
                                ._Name_Struct
                                .alt_String
                        );





                        loopCounter1_Int ++;

                    }

                }





                /*Make sure to have the type for both now and previous type integer the
                    same again so that it can detect change.*/
                typePrev_Int = type_Int;

            }

        }





        return this;

    }
    /*==================================================*/





}