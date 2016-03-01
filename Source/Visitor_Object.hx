class Visitor_Object{





    private var _AgnosticVisitor_Object                             :AgnosticVisitor_Object             = null;



    private var _CollectionGlobal_Object                            :CollectionGlobal_Object            = null;
    private var _GeneratorSentence_Object                           :GeneratorSentence_Object           = null;
    private var _VisitorMode_Enum                       (null, set) :VisitorMode_Enum                   = null;
    private var exhibitionCurrent_Museum_Object                     :Museum_Object                      = null;
    private var floorCurrent_Museum_Object                          :Museum_Object                      = null;
    private var roomCurrent_Museum_Object                           :Museum_Object                      = null;



    private var _TagCounter_Struct_Array                            :Array<TagCounter_Struct>           = new Array<TagCounter_Struct>();
    private var _VisitorVisitMuseum_Struct_Array                    :Array<VisitorVisitMuseum_Struct>   = new Array<VisitorVisitMuseum_Struct>();
    private var exhibitionTarget_Museum_Object_Array                :Array<Museum_Object>               = new Array<Museum_Object>();
    private var exhibitionVisited_Museum_Object_Array               :Array<Museum_Object>               = new Array<Museum_Object>();





    public function new:Void(
        __CollectionGlobal_Object   :CollectionGlobal_Object,
        _indexGlobal_Int            :Int,
        _name_String                :String
    ){

        /*Instantiate the agnostic object.*/
        _AgnosticVisitor_Object                     = new AgnosticVisitor_Object();

        /*Assign all parameters.*/
        _CollectionGlobal_Object                    = __CollectionGlobal_Object;
        _AgnosticVisitor_Object.indexGlobal_Int     = _indexGlobal_Int;
        _AgnosticVisitor_Object.name_String         = _name_String;

        /*Set default visitor mode.*/
        _VisitorMode_Enum                           = SOFTWARE_AUTO;



        /*Put this object into main visitor array.*/
        _CollectionGlobal_Object._Visitor_Object_Array.push(this);
        /*Determine exhibition full threshild for everytime there is a new visitor goes to museum.*/
        _CollectionGlobal_Object.DetermineExhibitionFullThreshold_Void();
        GenerateExhibitionTarget_Void();

    }





    private set_VisitorMode(__VisitorMode_Enum:VisitorMode_Enum):VisitorMode_Enum{

        _AgnosticVisitor_Object.visitorMode_String = Std.string(__VisitorMode_Enum);
        return _VisitorMode_Enum = __VisitorMode_Enum;

    }





}