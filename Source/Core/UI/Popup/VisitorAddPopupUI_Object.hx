class UIPopupAddObjectVisitor{

    private var buttonObject                                :Button             = null;
    private var collectionGlobalObject                      :CollectionGlobal   = null;
    private var gridObject                                  :Grid               = null;
    private var inputNameTextInputObject                    :TextInput          = null;
    private var popupObject                                 :Popup              = null;
    private var selectPreviousVisitorListSelectorObject     :ListSelector       = null;

    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

        /*Find the main button to actovate the popup in the main screen.*/
        buttonObject = _root.findChild("UIPopupAddVisitorObjectButton", Button, true);
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectVisitor.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Add Visitor", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    var visitorObject:ObjectVisitor = new ObjectVisitor(collectionGlobalObject, collectionGlobalObject.PutIndexGlobalVisitorInt(), inputNameTextInputObject.text);

                }

            });

            gridObject                              = popupObject.content.findChild("UIPopupAddObjectVisitor_Grid"                  , Grid            , true);
            inputNameTextInputObject                = popupObject.content.findChild("UIPopupAddObjectVisitor_InputName"             , TextInput       , true);
            selectPreviousVisitorListSelectorObject = popupObject.content.findChild("UIPopupAddObjectVisitor_SelectPreviousVisitor" , ListSelector    , true);

            selectPreviousVisitorListSelectorObject.method = "default";

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                selectPreviousVisitorListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;
            }

        };

    }
    public function UpdateVoid(){}

}