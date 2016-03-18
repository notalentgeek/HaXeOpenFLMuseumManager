class Tag_Object{





    /*PENDING - DONE: Create function to remove this tag object from main array. Name it RemoveThisFromMain_Tag_Object
    PENDING - DONE: Create function to add this object into main array.*/





    private var _TagAgnostic_Object         (null, null)    :TagAgnostic_Object         = null;





    private var _CollectionGlobal_Object    (null, null)    :CollectionGlobal_Object    = null;
    private var _Feel_Enum                  (null, null)    :Feel_Enum                  = NEUTRAL;                          /*PENDING: Create setter function to tied this variable wit its agnostic couterpart.*/
    private var _TagType_Enum               (null, null)    :TagType_Enum               = null;                             /*PENDING: Create setter function to tied this variable wit its agnostic couterpart.*/





    private var _CompanyWord_Struct_Array   (null, null)    :Array<CompanyWord_Struct>  = new Array<CompanyWord_Struct>();  /*PENDING: Create setter function to tied this variable wit its agnostic couterpart.*/





    public function new():Void{ _TagAgnostic_Object = new TagAgnostic_Object(); }





    /*This is a function to add or remove this tag object from its main array.
    There are two main arrays for tag in this program.
    One array is for general tag, an array that is filled with tag with common words.
    One other array is for normal tag, an array that is filled with specific tag of exhibitions.*/
    private function AddOrRemoveThisFromMain_Tag_Object(_add_Bool:Bool, _general_Bool:Bool):Tag_Object{

        var main_Tag_Object_Array:Array<Tag_Object> = null;
        if(_general_Bool == true){

            main_Tag_Object_Array = _CollectionGlobal_Object.general_Tag_Object_Array;

        }
        else if(_general_Bool == false){

            main_Tag_Object_Array = _CollectionGlobal_Object._Tag_Object_Array;

        }





        if(_add_Bool == true){

            if(main_MuseumAndVisitor_Object_Array.indefOf(this) == -1){

                main_Tag_Object_Array.push(this);

            }

        }
        else if(_add_Bool == false){

            main_Tag_Object_Array.remove(this);

        }





        return this;

    }





    private function set__Feel_Enum(__Feel_Enum:Feel_Enum):Feel_Enum{

        _Feel_Enum = __Feel_Enum;
        _TagAgnostic_Object.feel_String = Std.string(_Feel_Enum);
        return _Feel_Enum;

    }
    




    private function set__Type_Enum(__Type_Enum):Type_Enum{

        _Tag_Enum = __Tag_Enum;
        _TagAgnostic_Object.type_String = Std.string(_Tag_Enum);
        return _Type_Enum;

    }





}