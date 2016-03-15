class Museum_Object extends MuseumAndVisitor_Object{





    /*PENDING - DONE: Check in visitor class for the remnants of nameAlt_String.*/
    /*PENDING - DONE: Fix a function to reset museum object (create a simple comments documentation, etc).*/
    /*PENDING - DONE: Make a function to determine whether an exhibition is full.*/
    /*PENDING - DONE: Make a function to update the museum class.*/
    /*PENDING - DONE: Setter for museum mode.*/
    /*PENDING - DONE: Setter for museum type.*/
    /*PENDING - DONE: Sync array for _Child_Struct.*/
    /*PENDING: Make a function to determine child.*/
    /*PENDING: Make a function to update full museum class (an update heavy function).*/





    private var _Child_Struct                       (null, null)        :Child_Struct               = {

        _Museum_Object_Array    : new Array<Museum_Object>(),
        _Visitor_Object_Array   : new Array<Visitor_Object>()

    };
    private var _MuseumMode_Enum                    (null, null)        :MuseumMode_Enum            = null;
    private var _MuseumType_Enum                    (null, null)        :MuseumType_Enum            = null;
    private var parent_Museum_Object                (null, set)         :Museum_Object              = null;





    public function new(
        __CollectionGlobal_Object   :CollectionGlobal_Object,
        __MuseumType_Enum           :MuseumType_Enum,
        __Tag_Object_Array          :Array<Tag_Object>,
        _explanation_String_Array   :Array<String>,
        _nameAlt_String             :String,
        _nameFull_String            :String,
        _parent_Museum_Object       :Museum_Object
    ):Void{

        /*Instantiate agnostic object.*/
        _MuseumAndVisitorAgnostic_Object = new MuseumAgnostic_Object();

        super(__CollectionGlobal_Object);

        /*Assign all parameter.*/
        _MuseumType_Enum        = __MuseumType_Enum;
        _Tag_Object_Array       = __Tag_Object_Array;
        parent_Museum_Object    = _parent_Museum_Object;

        /*Assign variables to agnostic object.*/
        _MuseumAndVisitorAgnostic_Object.explanation_String_Array   = _explanation_String_Array;
        _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    = _nameAlt_String;
        _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   = _nameFull_String;

        /*Put this object into main array.*/
        if(
            _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    != "EXH_ARC" &&
            _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   != "Exhibition Archive"
        ){ AddOrRemoveThisFromMain_MuseumAndVisitor_Object(true); }

    }





    /*A function to determine whether this museum object is full or not.*/
    private function DetermineFull_Museum_Object(){

        if(_MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.current_Int        >= _CollectionGlobal_Object.fullThreshold_Int){ full_Bool = true ; }
        else if(_MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.current_Int   <  _CollectionGlobal_Object.fullThreshold_Int){ full_Bool = false; }

        return this;

    }





    /*Mini function to remove floor or room object.*/
    private function FloorAndRoomRemoveHandler_Museum_Object(_main_Museum_Object_Array:Array<Museum_Object>):Museum_Object{

        /*Check if this object still has a children museum object.*/
        if(_Child_Struct._Museum_Object_Array.length != 0){

            /*Loop through main array to check if which object is this object's children.
            PENDING: Use child object array instead from child Struct.
            PENDING: Actually make it automatically so that every museum object that is marked for deletion has its children
                requested to change parent object. If an object's parent is no longer mark for deletion then change the 
                museum mode enum to null.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _main_Museum_Object_Array.length){

                if(nameStruct.alt_String == _main_Museum_Object_Array[loopCounter1_Int].parent_Museum_Object._Name_Struct.alt_String){

                    /*Change the children object to request to change parent.*/
                    _main_Museum_Object_Array[loopCounter1_Int]._MuseumMode_Enum = REQ_CH_PARENT;
                    UpdateWhole_Museum_Object();

                }

                loopCounter1_Int ++;

            }

        }
        else if(_Child_Struct._Museum_Object_Array.length == 0){ RemoveUI_Museum_Object(); }

    }





    /*Function to remove this object from main array.*/
    private function RemoveUI_Museum_Object():Museum_Object{

        /*PENDING: To fix the hierarchy of UI object into the top of object.*/
        //_CollectionGlobal_Object._Absolute.removeChild(_MuseumUI_Object._Button);
        _CollectionGlobal_Object.exhibition_Museum_Object_Array.remove(this);
        //_MuseumUI_Object = null;
        UpdateWhole_Museum_Object();
        return this;

    }





    /*This class has these variables.
    _Child_Struct           NO      need to change.
    _MuseumMode_Enum        CHANGE  to null.
    _MuseumType_Enum        NO      need to change.
    parent_Museum_Object    NO      need to change.*/
    private function Reset_Museum_Object(){

        super.Reset_MuseumAndVisitorObject();

        _MuseumMode_Enum = null

    }





    private function set__MuseumMode_Enum(__MuseumMode_Enum:MuseumMode_Enum):MuseumMode_Enum{

        _MuseumMode_Enum = __MuseumMode_Enum
        _MuseumAndVisitorAgnostic_Object.museumMode_String = Std.string(_MuseumMode_Enum);

        return _MuseumMode_Enum;

    }





    private function set__MuseumType_Enum(__MuseumType_Enum:MuseumType_Enum):MuseumType_Enum{

        _MuseumType_Enum = __MuseumType_Enum;
        _MuseumAndVisitorAgnostic_Object.museumType_String = Std.string(_MuseumType_Enum);

        return _MuseumType_Enum;

    }





    private function set_parent_Museum_Object(_parent_Museum_Object:Museum_Object):Museum_Object{

        /*Remove this object from the previous current parent object child.*/
        if(parent_Museum_Object != null){

            CollectionStaticFunction_Object.SyncRemove_T_Array(
                this,
                parent_Museum_Object._Child_Struct._Museum_Object_Array,
                _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                parent_Museum_Object._MuseumAndVisitorAgnostic_Object.childMuseumNameAlt_String_Array
            );

        }

        /*When changing the museum object parent do not forget to adjust the agnostic object as well.*/
        if(_MuseumType_Enum == FLR){

            parent_Museum_Object = null;
            _MuseumAndVisitorAgnostic_Object.parentMuseumNameAlt_String = "";

        }
        else if(_MuseumType_Enum != FLR){

            parent_Museum_Object = _parent_Museum_Object;
            _MuseumAndVisitorAgnostic_Object.parentMuseumNameAlt_String =
                parent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String;

        }

        return parent_Museum_Object;

    }





    /*This function is to check whether or not user is requesting to delete this particular object.
    If so I need to check whether this object still has children attached to it.*/
    private function Update_Museum_Object():Museum_Object{

        /*If the museum marked for deletion.*/
        if(_MuseumMode_Enum == MRK_DEL){

            /*So here the museum object is already tagged to be deleted.
            I need to do another checking whether the object has any children or not.*/
            if(_MuseumType_Enum == EXH){

                if(_Child_Struct._Visitor_Object_Array.length != 0){

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _Child_Struct._Visitor_Object_Array.length){

                        if(_Child_Struct._Visitor_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object.finished_Bool == true){

                            _Child_Struct._Visitor_Object_Array[loopCounter1_Int].exhibitionCurrent_Museum_Object = _CollectionGlobal_Object.exhibitionArchive_Museum_Object;
                            UpdateWhole_Museum_Object();

                        }

                        loopCounter1_Int ++;

                    }

                }
                else if(_Child_Struct._Visitor_Object_Array.length == 0){ RemoveUI_Museum_Object(); }

            }
            else if(_MuseumType_Enum == FLR){

                var main_Museum_Object_Array:Array<Museum_Object> = __CollectionGlobal_Object.floor_Museum_Object_Array;
                FloorAndRoomRemoveHandler_Museum_Object(main_Museum_Object_Array);

            }
            else if(_MuseumType_Enum == ROM){

                var main_Museum_Object_Array:Array<Museum_Object> = __CollectionGlobal_Object.exhibition_Museum_Object_Array;
                FloorAndRoomRemoveHandler_Museum_Object(main_Museum_Object_Array);

            }

        }



        return this;

    }





    private function UpdateWhole_Museum_Object():Museum_Object{

        return this;

    }


}