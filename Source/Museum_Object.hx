class Museum_Object extends MuseumAndVisitor_Object{



    private var _Child_Struct                       (null, null)        :Child_Struct               = {

        museum_Object_Array    : new Array<Museum_Object>(),
        visitor_Object_Array   : new Array<Visitor_Object>()

    };
    private var _CollectionGlobal_Object            (null, null)        :CollectionGlobal_Object    = null;
    private var _Index_Struct                       (null, null)        :Index_Struct               = { /*PENDING: Put this in super class.*/

        global_Int  : -1,
        local_Int   : -1

    };
    private var _MuseumMode_Enum                    (null, null)        :MuseumMode_Enum            = null;
    private var _MuseumType_Enum                    (null, null)        :MuseumType_Enum            = null;
    private var _Name_Struct                        (null, null)        :Name_Struct                = {

        alt_String      : "",
        full_String     : ""

    };
    private var _VisitorCount_Struct                (null, null)        :VisitorCount_Struct        = {

        current_Int     : -1,
        total_Int       : -1

    };
    private var parent_Museum_Object                (null, null)        :Museum_Object              = null;



    private var _Tag_Object_Array                   (null, null)        :Array<Tag_Object>          = new Array<Tag_Object>(); /*PENDING: Move this to super class.*/
    private var sibling_Museum_Object_Array         (null, null)        :Array<Museum_Object>       = new Array<Museum_Object>();



    /*These are agnostic variables.*/
    private var full_Bool                           (null, null)        :Bool                       = false;
    private var indexGlobal_Int                     (null, null)        :Int                        = -1; /*PENDING: Move this to super class.*/
    private var indexLocal_Int                      (null, null)        :Int                        = -1; /*PENDING: Move this to super class.*/
    private var museumMode_String                   (null, null)        :String                     = "";
    private var museumType_String                   (null, null)        :String                     = "";
    private var nameAlt_String                      (null, null)        :String                     = "";
    private var nameFull_Strnig                     (null, null)        :String                     = "";
    private var visitorCountCurrent_Int             (null, null)        :Int                        = -1;
    private var visitorCountTotalInt_Int            (null, null)        :Int                        = -1;

    private var childMuseumNameAlt_String_Array     (null, null)        :Array<String>              = new Array<String>();
    private var childVisitorName_StringArray        (null, null)        :Array<String>              = new Array<String>();
    private var explanation_String_Array            (null, null)        :Array<String>              = new Array<String>(); /*PENDING: Move this into super class.*/
    private var siblingMuseumNameAlt_String_Array   (null, null)        :Array<String>              = new Array<String>();
    private var tagName_String_Array                (null, null)        :Array<String>              = new Array<String>(); /*PENDING: Move this into super class.*/



}