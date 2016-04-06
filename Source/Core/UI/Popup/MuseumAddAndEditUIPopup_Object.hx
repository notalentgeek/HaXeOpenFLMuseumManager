class MuseumAddAndEditUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var _Museum_Object                  (null, null)    :Museum_Object      = null;
    private var _MuseumType_Enum                (null, null)    :MuseumType_Enum    = null;
    private var _Tag_Object_Array               (null, null)    :Array<Tag_Object>  = new Array<Tag_Object>();
    private var explanation_String_Array        (null, null)    :Array<String>      = new Array<String>();
    private var nameAlt_String                  (null, null)    :String             = nameAlt_TextInput.text;
    private var nameFull_String                 (null, null)    :String             = nameFull_TextInput.text;
    private var parent_Museum_Object            (null, null)    :Museum_Object      = null;
    private var parentNameAlt_String            (null, null)    :String             = parent_ListSelector.text;
    /*==================================================*/





    /*==================================================*/
    public class new(
        __Global_Object         :Global_Object,
        __Root                  :Root,
        _assign_Function        :Function,
        _button_Function        :Function,
        _buttonName_String      :String,
        _init_Function          :Function,
        _layoutPath_String      :String,
        _title_String           :String
    ):Void{

        super(
            __Global_Object,
            __Root,
            _assign_Function,
            _button_Function,
            _buttonName_String,
            _init_Function,
            _layoutPath_String,
            _title_String
        );

    }
    /*==================================================*/





    /*==================================================*/
    private function Assign_Void():Void{ super.Assign_Void(); }
    /*==================================================*/





    /*==================================================*/
    private function Button_Void(_addAndEdit_Function:Function):Void{

        super.Button_Void();





        if(type_ListSelector.text != null){

            if(type_ListSelector.text == "Exhibition")  { _MuseumType_Enum = EXH; }
            else if(type_ListSelector.text == "Floor")  { _MuseumType_Enum = FLR; }
            else if(type_ListSelector.text == "Room")   { _MuseumType_Enum = ROM; }

        }





        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < tag_ListSelector_Struct_Array.length){

            var tagName_String:String =
                tag_ListSelector_Struct_Array[loopCounter1_Int]._ListSelector.text;
            var _Tag_Object:Tag_Object =
                StaticFunction_Collection.Find_Tag_Object(
                    _Global_Object,
                    false,
                    tagName_String
                );





            /*If the previously searched tag is returned false, then search from the general tag object.*/
            if(_Tag_Object == null){

                _Tag_Object = StaticFunction_Collection.Find_Tag_Object(
                    _Global_Object,
                    true,
                    tagName_String
                );

            }





            /*If the tag object is not null then I can enter it into the temporary tag array.*/
            if(_Tag_Object != null){ _Tag_Object_Array.push(_Tag_Object); }





            loopCounter1_Int ++;

        }





        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < explanation_TextInput_Struct_Array.length){

            if(
                explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input.text   != ""       &&
                explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input.text   != " "      &&
                explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input        != null
            ){
                explanation_String_Array.push
                    (explanation_TextInput_Struct_Array[loopCounter1_Int]._Text_Input.text);
            }





            loopCounter1_Int ++;

        }





        if(type_ListSelector.text != null){

            if(_MuseumType_Enum == FLR){

                parent_Museum_Object = null;
                parentNameAlt_String = "XXX_XXX";

            }
            else{

                parent_Museum_Object = StaticFunction_Collection.Find_Museum_Object(
                    _Global_Object,
                    _MuseumType_Enum,
                    parentNameAlt_String
                );

            }

        }





        if(
            _MuseumType_Enum != null                                                                        &&
            _Tag_Object_Array.length > 0                                                                    &&
            explanation_String_Array.length > 0                                                             &&
            (nameAlt_String != "" && nameAlt_String != " " && nameAlt_String != null)                       &&
            (nameFull_String != "" && nameFull_String != " " && nameFull_String != null )                   &&
            (parent_Museum_Object != null)                                                                  &&
            (parentNameAlt_String != "" && parentNameAlt_String != " " && parentNameAlt_String != null)
        ){ _addAndEdit_Function(); }

    }
    /*==================================================*/





    /*==================================================*/
    private function Init_Void():Void{ super.Init_Void(); }
    /*==================================================*/





    /*==================================================*/
    private function Update_Void():Void{ super.Update_Void(); }
    /*==================================================*/





}