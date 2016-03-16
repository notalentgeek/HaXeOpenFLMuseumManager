/*This class is basically just a Button class from HaXeUI.
I add some control methods and some variables.*/
class MuseumUI_Object extends MuseumAndVisitorUI_Object{





    /*PENDING - DONE: Give comments on user interface class.*/



    /*The only variable necessary here is what kind of museum object that this
        user interface object attached into.*/
    private var _MuseumTypeEnum(null, null):MuseumType_Enum = null;





    /*The constructor of this class.*/
    public function new(
        __CollectionGlobal_Object:CollectionGlobal_Object,
        __MuseumAndVisitor_Object:MuseumAndVisitor_Object
    ):Void{

        /*Refer the collection global object and this object museum or visitor object
            to the super class.*/
        super(__CollectionGlobal_Object, __MuseumAndVisitor_Object);
        /*Assign museum object.*/
        _MuseumTypeEnum = _MuseumAndVisitor_Object._MuseumType_Enum;

    }





    /*Draw the button on the screen with automatic field specifications.
    This function will executed for every possible museum object except imaginary museum objects.
    Imaginary museum objects are only the exhibition lobby and the exhibition archive.
    This draw function will be eecuted everytime a museum object is moved regardless the parent
        object.
    PENDING: Instead of executing this function for all museum object I need so that only the museum ui
        object from the previous parent and the destined parent that have this function executed.*/
    private function Draw_MuseumUI_Object(){

        /*If this is the floor object then the y - axis position will be fixed.
        Since floor object will always be the highest from exhibition or room museum object.
        The width also be dependent with the absolute layout and the screen size.*/
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
        /*This is for the exhibition and the room object.
        The y - axis position will be dependent on its parent y position.
        The x - axis position will depends on the parent initial position and its sibling objects..
        The width will be the width of this object parent divided by the amount of children its
            parent has.*/
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