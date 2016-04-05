class MuseumAndVisitorUI_Object{

    private var _CollectionGlobal_Object    (null, null):CollectionGlobal_Object    = null;
    private var _Button                     (null, null):Button                     = null;
    private var _MuseumAndVisitor_Object    (null, null):MuseumAndVisitor_Object    = null;
    private var height_Int                  (null, null):Int                        = 43;
    private var widthMax_Int                (null, null):Int                        = null;

    public function new(
        __CollectionGlobal_Object   :CollectionGlobal_Object,
        __MuseumAndVisitor_Object   :MuseumAndVisitor_Object
    ){

        _CollectionGlobal_Object = __CollectionGlobal_Object;
        _MuseumAndVisitor_Object = __MuseumAndVisitor_Object;

        _Button = new Button();
        /*Add this user interface object into the main absolute layout.*/
        _CollectionGlobal_Object._Absolute.addChild(_Button);

        /*I do not need to run Create_MuseumAndVisitorUI_Object() function here
            because regardless this function will be executed as the _MuseumAndVisitor_Object
            change parent.*/

    }

    private function Draw_MuseumAndVisitorUI_Object(
        _buttonHeight_Int   :Int,
        _buttonID_String    :String,
        _buttonText_String  :String,
        _buttonWidth_Int    :Int,
        _buttonX_Int        :Int,
        _buttonY_Int        :Int
    ):MuseumAndVisitorUI_Object{

        _Button.autoSize    = false;
        _Button.height      = _buttonHeight_Int;
        _Button.id          = _buttonID_String;
        _Button.text        = _buttonText_String;
        _Button.width       = _buttonWidth_Int;
        _Button.x           = _buttonX_Int;
        _Button.y           = _buttonY_Int;

        return this;

    }

}