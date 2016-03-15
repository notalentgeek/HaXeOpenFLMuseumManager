class MuseumAgnostic_Object extends MuseumAndVisitorAgnostic_Object{

    private var _Name_Struct                        (null, null)        :Name_Struct                = {

        alt_String      : "",
        full_String     : ""

    };
    private var _VisitorCount_Struct                (null, null)        :VisitorCount_Struct        = {

        current_Int     : -1,
        total_Int       : -1

    };
    private var full_Bool                           (null, null)        :Bool                       = false;
    private var museumMode_String                   (null, null)        :String                     = "";
    private var museumType_String                   (null, null)        :String                     = "";

    private var childMuseumNameAlt_String_Array     (null, null)        :Array<String>              = new Array<String>();
    private var childVisitorName_StringArray        (null, null)        :Array<String>              = new Array<String>();
    private var explanation_String_Array            (null, null)        :Array<String>              = new Array<String>();
    private var siblingMuseumNameAlt_String_Array   (null, null)        :Array<String>              = new Array<String>();
    private var tagName_String_Array                (null, null)        :Array<String>              = new Array<String>();

    public function new(){}

    public function Reset_MuseumAgnostic_Object(){

    	super.Reset_MuseumAndVisitorAgnostic_Object();

    	_VisitorCount_Struct.current_Int 	= 0;
    	_VisitorCount_Struct.total_Int 		= 0;
		full_Bool 							= false;

    }

}