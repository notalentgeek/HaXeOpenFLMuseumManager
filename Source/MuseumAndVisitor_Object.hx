class MuseumAndVisitor_Object{










    private var _CollectionGlobal_Object                (null, null)        :CollectionGlobal_Object                = null;
    private var _MuseumAndVisitorAgnostic_Object        (null, null)        :MuseumAndVisitorAgnostic_Object        = null;
    private var _MuseumAndVisitorUI_Object              (null, null)        :MuseumAndVisitorUI_Object              = null;
    


    private var _Tag_Object_Array                       (null, set)         :Array<Tag_Object>                      = new Array<Tag_Object>();
    private var sibling_MuseumAndVisitor_Object_Array   (null, null)        :Array<Museum_Object>                   = new Array<Museum_Object>();










    public function new(__CollectionGlobal_Object:CollectionGlocal_Object){ _CollectionGlobal_Object = __CollectionGlobal_Object; }










    /*Function to add or remove this object from main object array.
    PENDING - DONE: Please put this function into super class.*/
    private function AddOrRemoveThisFromMain_MuseumAndVisitor_Object(_add_Bool:Bool){
        
        /*Create temporary array.*/
        var main_MuseumAndVisitor_Object_Array:Array<MuseumAndVisitor_Object_Array> = null;
        /*Assign proper array into the temporary array.*/
        if(Std.is(this, Museum_Object)){

            if(this._MuseumType_Enum == EXHIBITION)
                { main_MuseumAndVisitor_Object_Array = this._CollectionGlobal_Object.exhibition_Museum_Object_Array; }
            else if(this._MuseumType_Enum == FLOOR)
                { main_MuseumAndVisitor_Object_Array = this._CollectionGlobal_Object.floor_Museum_Object_Array; }
            else if(this._MuseumType_Enum == ROOM)
                { main_MuseumAndVisitor_Object_Array = this._CollectionGlobal_Object.room_Museum_Object_Array; }

        }
        else if(Std.is(this, Visitor_Object))
            { main_MuseumAndVisitor_Object_Array. = this._CollectionGlobal_Object._Visitor_Object_Array; }

        /*In this function I do not need to push and remove using the sync functions,
            because the CollectionGlobal_Object does not have an agnotic class.*/
        if(_add_Bool == true){

            if(main_MuseumAndVisitor_Object_Array.indefOf(this) == -1){

                /*If this object is not in the main visitor array then add it.*/
                main_MuseumAndVisitor_Object_Array.push(this);

            }

        }
        else if(_add_Bool == false)
            { main_MuseumAndVisitor_Object_Array.remove(this); }



        return this;

    }










    /*Simple function to either add or remove this object from parent object.*/
    private function AddOrRemoveThisFromParent_MuseumAndVisitor_Object(
        _add_Bool                                       :Bool,
        _parentChild_MuseumAndVisitor_Object_Array      :Array<MuseumAndVisitor_Object>,
        _parentChildMuseumOrVisitorName_String_Array    :Array<String>
    ):MuseumAndVisitor_Object{

        if(_add_Bool == true){

            CollectionStaticFunction_Object.SyncPush_T_Array(
                this,
                _parentChild_MuseumAndVisitor_Object_Array,
                this._MuseumAndVisitorAgnostic_Object.name_String,
                _parentChildMuseumOrVisitorName_String_Array
            );

        }
        else if (_add_Bool == false){

            CollectionStaticFunction_Object.SyncRemove_T_Array(
                this,
                _parentChild_MuseumAndVisitor_Object_Array,
                this._MuseumAndVisitorAgnostic_Object.name_String,
                _parentChildMuseumOrVisitorName_String_Array
            );

        }



        return this;

    }










    private function DetermineIndex_MuseumAndVisitor_Object():MuseumAndVisitor_Object{

        DetermineIndexGlobal_MuseumAndVisitor_Object();
        DetermineIndexLocal_MuseumAndVisitor_Object();



        return this;

    }










    private function DetermineIndexGlobal_MuseumAndVisitor_Object():MuseumAndVisitor_Object{


        /*Create temporary array.*/
        var main_MuseumAndVisitor_Object_Array:Array<MuseumAndVisitor_Object_Array> = null;
        /*Assign proper array into the temporary array.*/
        if(Std.is(this, Museum_Object)){

            if(this._MuseumType_Enum == EXHIBITION)
                { main_MuseumAndVisitor_Object_Array = this._CollectionGlobal_Object.exhibition_Museum_Object_Array; }
            else if(this._MuseumType_Enum == FLOOR)
                { main_MuseumAndVisitor_Object_Array = this._CollectionGlobal_Object.floor_Museum_Object_Array; }
            else if(this._MuseumType_Enum == ROOM)
                { main_MuseumAndVisitor_Object_Array = this._CollectionGlobal_Object.room_Museum_Object_Array; }

        }
        else if(Std.is(this, Visitor_Object))
            { main_MuseumAndVisitor_Object_Array. = this._CollectionGlobal_Object._Visitor_Object_Array; }
        }

        this._MuseumAndVisitorAgnostic_Object._Index_Struct.global_Int = 0;
        while(this._MuseumAndVisitorAgnostic_Object._Index_Struct.global_Int < _CollectionGlobal_Object.floor_Museum_Object_Array.length){

            if(
                this._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    == main_MuseumAndVisitor_Object_Array[this._MuseumAndVisitorAgnostic_Object._Index_Struct.global_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ||
                this._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   == main_MuseumAndVisitor_Object_Array[this._MuseumAndVisitorAgnostic_Object._Index_Struct.global_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
            ){ return this; }

            this._MuseumAndVisitorAgnostic_Object._Index_Struct.global_Int ++;

        }



        return this;

    }










    /*Function to determine index local.*/
    private function DetermineIndexLocal_MuseumAndVisitor_Object():MuseumAndVisitor_Object{

        if(Std.is(this, Museum_Object)){

            /*For the exhibition and room museum objects.*/
            if(this._MuseumType_Enum != FLOOR){

                this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int = 0;
                while(this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int < parent_Museum_Object._Child_Struct.childMuseum_Object_Array.length){

                    if(
                        this._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    == parent_Museum_Object._Child_Struct.childMuseum_Object_Array[this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ||
                        this._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   == parent_Museum_Object._Child_Struct.childMuseum_Object_Array[this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
                    ){ return this; }

                    this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int ++;

                }

            }
            /*If this is a floor museum object then the local index is the global index.*/
            else{ this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int = this._MuseumAndVisitorAgnostic_Object._Index_Struct.global_Int; }

        }
        else if(Std.is(this, Visitor_Object)){

            this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int = 0;
            while(this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int < this.exhibitionCurrent_Museum_Object._Child_Struct.childVisitor_Object_Array.length){

                if(this.name_String == exhibitionCurrent_Museum_Object._Child_Struct.childVisitor_Object_Array[this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int].name_String)
                    { return this; }

                this._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int ++;

            }

        }



        return this;

    }










    /*Create function to determine local sibling objects.
    CAUTION: This is actually not so necessary because I can just check everything from the object's parent.*/
    private function DetermineSibling_MuseumAndVisitor_Object():MuseumAndVisitor_Object{

        if(Std.is(this, Museum_Object)){

            /*If this object is a floor object then the sibling is the global floor object array.*/
            if(this._MuseumType_Enum == FLR){

                sibling_MuseumAndVisitor_Object_Array = this._CollectionGlobal_Object.floor_Museum_Object_Array;

            }
            else if(this._MuseumType_Enum != FLR){

                sibling_MuseumAndVisitor_Object_Array = this.parent_Museum_Object._Child_Struct._Museum_Object_Array;

            }

        }
        else if(Std.is(this, Visitor_Object)){

            sibling_MuseumAndVisitor_Object_Array = this.exhibitionCurrent_Museum_Object._Child_Struct._Visitor_Object_Array;

        }

        return this;

    }










    /*This class has these variables.
    _CollectionGlobal_Object                NO          need to change.
    _MuseumAndVisitorAgnostic_Object        NO          need to change.
    _Tag_Object_Array                       CHANGE      empty array         IF this object is visitor object.
    sibling_MuseumAndVisitor_Object_Array   NO          need to change.
    PENDING: Create a static function to sync remove.*/
    private function Reset_MuseumAndVisitor_Object():MuseumAndVisitor_Object{

        /*Check wether the current object is a museum or visitor object.*/
        if(Std.is(this, Museum_Object)){ this._MuseumAndVisitorAgnostic_Object.Reset_MuseumAgnostic_Object(); }
        else if(Std.is(this, Visitor_Object)){

            this._MuseumAndVisitorAgnostic_Object.Reset_VisitorAgnostic_Object();

            /*
            There are these object from the sub class variables that should not be reset back.
            The current exhibition, floor, and room is not reset back to the initial value when this
                function is ran, because the visitor object always need references on museum object.
            PENDING: Or add another pseudo exhibition called lobby.
            _CollectionGlobal_Object                    = null;
            _GeneratorSentence_Object                   = null;
            _MuseumAndVisitorAgnostic_Object            = null;
            exhibitionCurrent_Museum_Object             = null;
            floorCurrent_Museum_Object                  = null;
            roomCurrent_Museum_Object                   = null;
            */

            _Tag_Object_Array = CollectionStaticFunction_Object.Clear_T_Array(_Tag_Object_Array);

        }



        return this;

    }










    private function set__Tag_Object_Array(__Tag_Object_Array:Array<Tag_Object>):Array<Tag_Object>{

        _Tag_Object_Array = __Tag_Object_Array;



        /*When I set tag array in this visitor object,
            I need to clean the name tag array in the agnostic object.*/
        _MuseumAndVisitorAgnostic_Object.tagName_String_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.tagName_String_Array
            );



        /*After emptying the tag name array in the agnostic object,
            I fill it back with new tag array from this object.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Tag_Object_Array.length){

            _MuseumAndVisitorAgnostic_Object.tagName_String_Array.push(
                _Tag_Object_Array[loopCounter1_Int].name_String
            );
            loopCounter1_Int ++;

        }



        return _Tag_Object_Array;

    }










    /*An update function for both museum and visitor object.
    PENDING: Put this function in super class.*/
    private function Update_MuseumAndVisitor_Object(){

        /*Check wether the current object is a museum or visitor object.*/
        if(Std.is(this, Museum_Object)){}
        else if(Std.is(this, Visitor_Object)){

            if(
                this._MuseumAndVisitorAgnostic_Object.finished_Bool  == false
                this._VisitorMode_Enum                      == SOFTWARE_AUTO &&
            ){ this.AI_Visitor_Object(); }

        }

        return this;

    }









}