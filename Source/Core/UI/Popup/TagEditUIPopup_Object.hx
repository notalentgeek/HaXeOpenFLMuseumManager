class TagEditUIPopup_Object extends TagAddAndEditUIPopup_Object{





    /*==================================================*/
    private var selected_Tag_Object         (null, null)        :Tag_Object                 = null;
    private var tag_ListSelector            (null, null)        :ListSelector               = null;
    private var tagName_TextInput           (null, null)        :TextInput                  = null;
    private var tagNamePrev_String          (null, null)        :String                     = null;
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
            "TagEditUIPopup_Button",
            Init_Void,
            "layout/TagEditUIPopup_Object.xml",
            "Add Tag Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    private function Assign_Void():Void(){

        super.Assign_Void();





        tag_ListSelector = _Popup.content.findChild("UIPopupEditTag_Object_SelectTag", ListSelector, true);

    }
    /*==================================================*/





    /*==================================================*/
    private function Button_Void():Void(){ super.Button_Void(Edit_Void); }
    /*==================================================*/





    /*==================================================*/
    private function Edit_Void():Void{

        /*The difference between add and edit tag object is that in the edit tag object there is
            no need to update the tag type.*/

        selected_Tag_Object._Tag_Feel_Enum                      = _Tag_Feel_Enum;
        selected_Tag_Object._TagAgnostic_Object.general_Bool    = general_Bool;
        selected_Tag_Object._TagAgnostic_Object.name_String     = tagName_TextInput.text;

    }
    /*==================================================*/





    /*==================================================*/
    private function Init_Void():Void(){

        super.Init_Void();




        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

            tag_ListSelector.dataSource.createFromString(_Global_Object._Tag_Object_Array[loopCounter1_Int]._TagAgnostic_Object.name_String);





            loopCounter1_Int ++;

        }





        tag_ListSelector.method = "default";

    }
    /*==================================================*/





    /*==================================================*/
    private function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/





    private function UpdateVoid(){



        if(_Popup != null){

            if(
                general_ListSelector.text            == ""   ||
                general_ListSelector.text            == " "  ||
                general_ListSelector.selectedIndex   == -1
            ){
                tag_ListSelector.disabled            = true;
                tag_ListSelector.selectedIndex       = -1;
                tag_ListSelector.text                = " ";
            }
            else{ tag_ListSelector.disabled          = false; }
            if(
                tag_ListSelector.text                == ""   ||
                tag_ListSelector.text                == " "  ||
                tag_ListSelector.selectedIndex       == -1
            ){
                tagName_TextInput.disabled            = true;
                tagFeel_ListSelector.disabled           = true;
                tagType_ListSelector.disabled        = true;
            }
            else{
                tagName_TextInput.disabled            = false;
                tagFeel_ListSelector.disabled           = false;
                tagType_ListSelector.disabled        = false;
            }

            tagName_String = tag_ListSelector.text;
            if(tagName_String != tagNamePrev_String){

                selected_Tag_Object = CollectionFunction.FindTagObject(_Global_Object, false, tagName_String);

                if(selected_Tag_Object != null){

                    tagName_TextInput.text = selected_Tag_Object.GetNameString();
                    tagFeel_ListSelector.text = Std.string(selected_Tag_Object.GetFeelEnum());
                    if     (selected_Tag_Object.GetGeneralTagBool() == true ){ general_ListSelector.text = "Yes"; }
                    else if(selected_Tag_Object.GetGeneralTagBool() == false){ general_ListSelector.text = "No" ; }
                    tagType_ListSelector.text = Std.string(selected_Tag_Object.GetTypeEnum());

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _TextInput_Struct_Array.length){

                        _Grid.removeChild(_TextInput_Struct_Array[loopCounter1_Int].textObject);
                        _Grid.removeChild(_TextInput_Struct_Array[loopCounter1_Int].textInputObject);
                        loopCounter1_Int ++;

                    }
                    CollectionFunction.ClearArray(_TextInput_Struct_Array);
                    Init_Void();

                    if(tagType_ListSelector.text == "ADJ"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :adjective_Text,
                            textInputObject :adjective_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        adjective_TextInput.text = selected_Tag_Object.GetAdjectiveString();
                        _Grid.addChild(adjective_Text);
                        _Grid.addChild(adjective_TextInput);
                    }
                    else if(tagType_ListSelector.text == "ADV"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :adverb_Text,
                            textInputObject :adverb_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        adverb_TextInput.text = selected_Tag_Object.GetAdverbString();
                        _Grid.addChild(adverb_Text);
                        _Grid.addChild(adverb_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_ALIVE_ABSTRACT"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounPos_Text,
                            textInputObject :nounPos_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounS_Text,
                            textInputObject :nounS_TextInput,
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounSPos_Text,
                            textInputObject :nounSPos_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounPos_TextInput.text = selected_Tag_Object.GetNounPosString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        nounSPos_TextInput.text = selected_Tag_Object.GetNounSPosString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounPos_Text);
                        _Grid.addChild(nounPos_TextInput);
                        _Grid.addChild(nounS_Text);
                        _Grid.addChild(nounS_TextInput);
                        _Grid.addChild(nounSPos_Text);
                        _Grid.addChild(nounSPos_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_ALIVE_CONCRETE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounPos_Text,
                            textInputObject :nounPos_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounPos_TextInput.text = selected_Tag_Object.GetNounPosString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounPos_Text);
                        _Grid.addChild(nounPos_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounS_Text,
                            textInputObject :nounS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounS_Text);
                        _Grid.addChild(nounS_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounS_Text,
                            textInputObject :nounS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounS_Text);
                        _Grid.addChild(nounS_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounS_Text,
                            textInputObject :nounS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounS_Text);
                        _Grid.addChild(nounS_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounS_Text,
                            textInputObject :nounS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounS_Text);
                        _Grid.addChild(nounS_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_TITLE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput,
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounS_Text,
                            textInputObject :nounS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounS_Text);
                        _Grid.addChild(nounS_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :nounS_Text,
                            textInputObject :nounS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                        _Grid.addChild(nounS_Text);
                        _Grid.addChild(nounS_TextInput);
                    }
                    else if(tagType_ListSelector.text == "VERB_INTRANSITIVE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verb1_Text,
                            textInputObject :verb1_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verb2_Text,
                            textInputObject :verb2_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verb3_Text,
                            textInputObject :verb3_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verbIng_Text,
                            textInputObject :verbIng_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verbS_Text,
                            textInputObject :verbS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        verb1_TextInput.text = selected_Tag_Object.GetVerb1String();
                        verb2_TextInput.text = selected_Tag_Object.GetVerb2String();
                        verb3_TextInput.text = selected_Tag_Object.GetVerb3String();
                        verbIng_TextInput.text = selected_Tag_Object.GetVerbIngString();
                        verbS_TextInput.text = selected_Tag_Object.GetVerbSString();
                        _Grid.addChild(verb1_Text);
                        _Grid.addChild(verb1_TextInput);
                        _Grid.addChild(verb2_Text);
                        _Grid.addChild(verb2_TextInput);
                        _Grid.addChild(verb3_Text);
                        _Grid.addChild(verb3_TextInput);
                        _Grid.addChild(verbIng_Text);
                        _Grid.addChild(verbIng_TextInput);
                        _Grid.addChild(verbS_Text);
                        _Grid.addChild(verbS_TextInput);
                    }
                    else if(tagType_ListSelector.text == "VERB_TRANSITIVE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verb1_Text,
                            textInputObject :verb1_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verb2_Text,
                            textInputObject :verb2_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verb3_Text,
                            textInputObject :verb3_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verbIng_Text,
                            textInputObject :verbIng_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        var textInputStruct:TextInput_Struct = {
                            textObject      :verbS_Text,
                            textInputObject :verbS_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        verb1_TextInput.text = selected_Tag_Object.GetVerb1String();
                        verb2_TextInput.text = selected_Tag_Object.GetVerb2String();
                        verb3_TextInput.text = selected_Tag_Object.GetVerb3String();
                        verbIng_TextInput.text = selected_Tag_Object.GetVerbIngString();
                        verbS_TextInput.text = selected_Tag_Object.GetVerbSString();
                        _Grid.addChild(verb1_Text);
                        _Grid.addChild(verb1_TextInput);
                        _Grid.addChild(verb2_Text);
                        _Grid.addChild(verb2_TextInput);
                        _Grid.addChild(verb3_Text);
                        _Grid.addChild(verb3_TextInput);
                        _Grid.addChild(verbIng_Text);
                        _Grid.addChild(verbIng_TextInput);
                        _Grid.addChild(verbS_Text);
                        _Grid.addChild(verbS_TextInput);
                    }

                    tagNamePrev_String = tagName_String;

                }

            }

        }



    }





}