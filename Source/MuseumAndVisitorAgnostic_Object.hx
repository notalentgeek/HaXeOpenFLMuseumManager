class MuseumAndVisitorAgnostic_Object{
	




    private var _Index_Struct                                                   (null, null)        :Index_Struct   = {

        global_Int  : -1;
        local_Int   : -1;

    };
    private var explanation_String_Array                                        (null, null)        :Array<String>  = null;
    private var tagName_String_Array                                            (null, null)        :Array<String>  = null;





	public function new(){}





	private function Reset_MuseumAndVisitorAgnostic_Object():MuseumAndVisitor_Object{

        _Index_Struct.global_Int                    = -1;
        _Index_Struct.local_Int                     = -1;
        explanation_String_Array                    = CollectionStaticFunction_Object.Clear_T_Array(explanation_String_Array);

        return this;

    }





}