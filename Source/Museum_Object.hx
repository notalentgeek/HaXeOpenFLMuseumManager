class Museum_Object extends MuseumAndVisitor_Object{





    private var _Child_Struct                       (null, null)        :Child_Struct               = {

        museum_Object_Array    : new Array<Museum_Object>(),
        visitor_Object_Array   : new Array<Visitor_Object>()

    };
    private var _CollectionGlobal_Object            (null, null)        :CollectionGlobal_Object    = null;
    private var _MuseumMode_Enum                    (null, null)        :MuseumMode_Enum            = null;
    private var _MuseumType_Enum                    (null, null)        :MuseumType_Enum            = null;
    private var parent_Museum_Object                (null, null)        :Museum_Object              = null;



    private var sibling_Museum_Object_Array         (null, null)        :Array<Museum_Object>       = new Array<Museum_Object>();





    public function new(
        __CollectionGlobal_Object   :CollectionGlobal_Object,
        __MuseumType_Enum           :MuseumType_Enum,
        __Tag_Object_Array          :Array<Tag_Object>,
        _explanation_String_Array   :Array<String>,
        _nameAlt_String             :String,
        _nameFull_String            :String,
        _parent_Museum_Object       :Museum_Object
    ):Void{

        super(__CollectionGlobal_Object);

        /*Assign all parameter.*/
        _MuseumType_Enum        = __MuseumType_Enum;
        _Tag_Object_Array       = __Tag_Object_Array;
        parent_Museum_Object    = _parent_Museum_Object;

        /*Instantiate agnostic object.*/
        _MuseumAndVisitorAgnostic_Object = new MuseumAgnostic_Object();

        /*Assign variables to agnostic object.*/
        _MuseumAndVisitorAgnostic_Object.explanation_String_Array   = _explanation_String_Array;
        _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    = _nameAlt_String;
        _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   = _nameFull_String;

        /*Put this object into main array.*/
        if(
            _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    != "EXH_ARC" &&
            _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   != "Exhibition Archive"
        ){ AddOrRemoveThisFromMain_MuseumAndVisitor_Object(true); }

        /*PENDING: Change parent object.*/

    }


    private function Reset_Museum_Object(){ super.Reset_MuseumAndVisitorObject(); }

    /*PENDING:.*/
    private function DetermineFull_Museum_Object(){ return this; }
    /*PENDING: Create sibling object array for both museum and visitor object.*/
    /*PENDING: UpdateHeavy().*/


}