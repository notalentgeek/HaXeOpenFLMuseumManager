class VisitorAddUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var name_TextInput                  (null, null)        :TextInput          = null;
    private var previousVisitor_ListSelector    (null, null)        :ListSelector       = null;
    /*==================================================*/





    /*==================================================*/
    public function new(
        __Global_Object     :Global_Object,
        __Root              :Root
    ):Void{

        super(
            __Global_Object,
            __Root,
            Assign_Void,
            Button_Void,
            "VisitorAddUIPopup_Button",
            Init_Void,
            "layout/VisitorAddUIPopup_Object.xml",
            "Add Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){

        super.Button_Void();

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/





    public function new(__Global_Object:Global_Object, _root:Root){

        _Global_Object = __Global_Object;

        /*Find the main button to actovate the popup in the main screen.*/
        _Button = _root.findChild("UIPopupAddVisitorObjectButton", Button, true);
        _Button.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectVisitor.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Add Visitor", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    var visitorObject:ObjectVisitor = new ObjectVisitor(_Global_Object, _Global_Object.PutIndexGlobalVisitorInt(), name_TextInput.text);

                }

            });

            _Grid                              = _Popup.content.findChild("UIPopupAddObjectVisitor_Grid"                  , Grid            , true);
            name_TextInput                = _Popup.content.findChild("UIPopupAddObjectVisitor_InputName"             , TextInput       , true);
            previousVisitor_ListSelector = _Popup.content.findChild("UIPopupAddObjectVisitor_SelectPreviousVisitor" , ListSelector    , true);

            previousVisitor_ListSelector.method = "default";

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){
                previousVisitor_ListSelector.dataSource.createFromString(_Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;
            }

        };

    }
    public function UpdateVoid(){}

}