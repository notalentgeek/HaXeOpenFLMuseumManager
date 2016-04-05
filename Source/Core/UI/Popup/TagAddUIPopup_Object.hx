class TagAddUIPopup_Object extends TagAddAndEditUIPopup_Object{





    /*==================================================*/
    private var tagType_String          (null, null)        :String                     = null;
    private var tagTypePrev_String      (null, null)        :String                     = null;
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
            "TagAddUIPopup_Button",
            Init_Void,
            "layout/TagAddUIPopup_Object.xml",
            "Add Tag Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    private function Add_Void():Void{

        _Tag_Object:Tag_Object = new Tag_Object(
            _Global_Object,
            _TagFeel_Enum,
            Type.createEnum(
                TagType_Enum,
                tagType_ListSelector.text
            ),
            general_Bool,
            tagName_TextInput.text
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){ super.Assign_Void(); }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){ super.Button_Void(Add_Void); }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){ super.Init_Void(); }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/





    public function UpdateVoid(){

        if(_Popup != null){

            tagType_String = tagType_ListSelector.text;
            if(tagType_String != tagTypePrev_String){

                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _TextInput_Struct_Array.length){

                    _Grid.removeChild(_TextInput_Struct_Array[loopCounter1Int].textObject);
                    _Grid.removeChild(_TextInput_Struct_Array[loopCounter1Int].textInputObject);
                    loopCounter1Int ++;

                }
                CollectionFunction.ClearArray(_TextInput_Struct_Array);
                Init_Void();

                if(tagType_ListSelector.text == "ADJ"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :adjective_Text,
                        textInputObject :adjective_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(adjective_Text);
                    _Grid.addChild(adjective_TextInput);
                }
                else if(tagType_ListSelector.text == "ADV"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :adverb_Text,
                        textInputObject :adverb_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
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
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
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

                tagTypePrev_String = tagType_String;

            }

        }



    }





}