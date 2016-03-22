class MuseumAgnostic_Object extends MuseumAndVisitorAgnostic_Object{





    private var _Name_Struct                        (null, null)        :Name_Struct                = {

        alt_String      : "",
        full_String     : ""

    };
    private var _VisitorCount_Struct                (null, null)        :VisitorCount_Struct        = {

        current_Int     : 0,
        total_Int       : 0

    };
    private var full_Bool                           (null, null)        :Bool                       = false;
    private var museumMode_String                   (null, null)        :String                     = null;
    private var museumType_String                   (null, null)        :String                     = null;
    private var parentMuseumNameAlt_String          (null, null)        :String                     = null;

    private var childMuseumNameAlt_String_Array     (null, null)        :Array<String>              = new Array<String>();
    private var childVisitorNameAlt_StringArray        (null, null)        :Array<String>              = new Array<String>();
    private var explanation_String_Array            (null, null)        :Array<String>              = new Array<String>();
    private var siblingMuseumNameAlt_String_Array   (null, null)        :Array<String>              = new Array<String>();
    private var tagName_String_Array                (null, null)        :Array<String>              = new Array<String>();





    public function new(){}





    /*This class has these variables.
    _Name_Struct                        NO      need to change.
    _VisitorCount_Struct                CHANGE  to 0 for each of its elements.
    childMuseumNameAlt_String_Array     NO      need to change.
    childVisitorName_StringArray        NO      need to change.
    explanation_String_Array            NO      need to change.
    full_Bool                           CHANGE  to false.
    museumMode_String                   CHANGE  to null.
    museumType_String                   NO      need to change.
    parentMuseumNameAlt_String          NO      need to change.
    siblingMuseumNameAlt_String_Array   NO      need to change.
    tagName_String_Array                NO      need to change.*/
    public function Reset_MuseumAgnostic_Object(){

        super.Reset_MuseumAndVisitorAgnostic_Object();

        _VisitorCount_Struct.current_Int    = 0;
        _VisitorCount_Struct.total_Int      = 0;
        full_Bool                           = false;
        museumMode_String                   = "";

    }





}