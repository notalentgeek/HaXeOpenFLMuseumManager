class MuseumAndVisitorAgnostic_Object{
    




    private var _Index_Struct                                                   (null, null)        :Index_Struct   = {

        global_Int  : null;
        local_Int   : null;

    };
    private var explanation_String_Array                                        (null, null)        :Array<String>  = null;
    private var tagName_String_Array                                            (null, null)        :Array<String>  = null;





    public function new(){}





    /*This class has these variables.
    _Index_Struct               NO      need to change.
    explanation_String_Array    CHANGE  empty array         IF  this object is visitor object.
    tagName_String_Array        CHANGE  empty array         IF  this object is visitor object.*/
    private function Reset_MuseumAndVisitorAgnostic_Object():MuseumAndVisitor_Object{

        if(Std.is(this, VisitorAgnostic_Object)){
            
            explanation_String_Array    = CollectionStaticFunction_Object.Clear_T_Array(explanation_String_Array);
            tagName_String_Array        = CollectionStaticFunction_Object.Clear_T_Array(tagName_String_Array);
        
        }

        return this;

    }





}