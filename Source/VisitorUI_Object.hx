class VisitorUI_Object{



    public function new(
        __CollectionGlobal_Object:CollectionGlobal_Object,
        __MuseumAndVisitor_Object:MuseumAndVisitor_Object
    ):Void{ super(__CollectionGlobal_Object, __MuseumAndVisitor_Object); }




    private function Create_VisitorUI_Object():VisitorUI_Object{

        if(
            _MuseumAndVisitor_Object.exhibitionCurrent_Museum_Object                            != null                 &&
            _MuseumAndVisitor_Object.exhibitionCurrent_Museum_Object._Name_Struct.alt_String    != "EXH_ARC"            &&
            _MuseumAndVisitor_Object.exhibitionCurrent_Museum_Object._Name_Struct.alt_String    != "EXH_LOB"            &&
            _MuseumAndVisitor_Object.exhibitionCurrent_Museum_Object._Name_Struct.full_String   != "Exhibition Archive" &&
            _MuseumAndVisitor_Object.exhibitionCurrent_Museum_Object._Name_Struct.full_String   != "Exhibition Lobby"
        ){

            super.Draw_MuseumAndVisitorUI_Object(
                height_Int,                                                                                             /*Height.*/
                "Button*" + _MuseumAndVisitor_Object._MuseumAndVisitorAgnostic_Object.name_String,                      /*ID.*/
                _MuseumAndVisitor_Object._MuseumAndVisitorAgnostic_Object.name_String,                                  /*Text.*/
                Math.round(_MuseumAndVisitor_Object.exhibition_Museum_Object._MuseumAndVisitorUI_Object._Button.width), /*Width.*/
                _MuseumAndVisitor_Object.exhibition_Museum_Object._MuseumAndVisitorUI_Object._Button.x,                 /*X.*/
                _MuseumAndVisitor_Object.exhibition_Museum_Object._MuseumAndVisitorUI_Object._Button.y + _MuseumAndVisitor_Object.exhibition_Museum_Object._MuseumAndVisitorUI_Object._Button.height + (_MuseumAndVisitor_Object._MuseumAndVisitorUI_Object._Button.height*_MuseumAndVisitor_Object._Index_Struct.local_Int) + 5 + (_MuseumAndVisitor_Object._Index_Struct.local_Int*5) /*Y.*/
            );

        }



        return this;

    }




}