class MuseumUI_Object extends MuseumAndVisitorUI_Object{

    /*PENDING: Comment on user interface class.*/

    private var _MuseumTypeEnum(null, null):MuseumType_Enum = null;

    public function new(
        __CollectionGlobal_Object:CollectionGlobal_Object,
        __MuseumAndVisitor_Object:MuseumAndVisitor_Object
    ):Void{

        super(__CollectionGlobal_Object, __MuseumAndVisitor_Object);

        _MuseumTypeEnum = _MuseumAndVisitor_Object._MuseumType_Enum;

    }

    private function Draw_MuseumUI_Object(){

        if(_MuseumTypeEnum == FLR){

            super.Draw_MuseumAndVisitorUI_Object(

                height_Int,                                                             /*Height.*/
                "Button*" + _MuseumAndVisitor_Object._Name_Struct.alt_String,           /*ID.*/
                _MuseumAndVisitor_Object._Name_Struct.nameFullString,                   /*Text.*/
                Math.round(((_widthMaxInt - Lib.current.stage.stageWidth/4) - 5)/2),    /*Width.*/
                (_Button.width*_MuseumAndVisitor_Object._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int) + (_MuseumAndVisitor_Object._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int*5), /*X.*/
                0                                                                       /*Y.*/

            );

        }
        else if(_MuseumTypeEnum == EXH || _MuseumTypeEnum == ROM){

            super.Draw_MuseumAndVisitorUI_Object(

                height_Int,                                                             /*Height.*/
                "Button*" + _MuseumAndVisitor_Object._Name_Struct.alt_String,           /*ID.*/
                _MuseumAndVisitor_Object._Name_Struct.nameFullString,                   /*Text.*/
                Math.round(((_MuseumAndVisitor_Object.parentMuseum_Object._MuseumAndVisitorUI_Object._Button.width) - ((_MuseumAndVisitor_Object.GetSiblingObjectArray().length - 1)*5))/_MuseumAndVisitor_Object.GetSiblingObjectArray().length), /*Width.*/
                _MuseumAndVisitor_Object.parentMuseum_Object._MuseumAndVisitorUI_Object._Button.x + (_MuseumAndVisitor_Object._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int*_Button.width) + (_MuseumAndVisitor_Object._MuseumAndVisitorAgnostic_Object._Index_Struct.local_Int*5), /*X.*/
                _MuseumAndVisitor_Object.parentMuseum_Object._MuseumAndVisitorUI_Object._Button.y + _MuseumAndVisitor_Object.parentMuseum_Object._MuseumAndVisitorUI_Object._Button.height + 5 /*Y.*/

            );

        }

    }

}