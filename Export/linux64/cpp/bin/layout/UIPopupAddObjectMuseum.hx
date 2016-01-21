class UIPopupAddMuseumObjectMuseum{



    private var buttonObject                :Button                 = null;
    private var gridObject                  :Grid                   = null;
    private var listSelectorCurrentInt      :Int                    = 1;
    private var listSelectorObject          :ListSelector           = null;
    private var popupObject                 :Popup                  = null;
    private var textObject                  :Text                   = null;



	public function new(){
		buttonObject = root.findChild("UIPopupAddMuseumObjectButton", Button, true);
        buttonObject.onClick = function(_e){

            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;
            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectMuseum.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Add Museum Object", buttonControlInt, function(_button){
                if(_button == PopupButton.OK || _button == PopupButton.CANCEL){
                    listSelectorCurrentInt = 1;
                }
            });

            gridObject = popupObject.content.findChild("UIPopupAddObjectMuseum_Grid", Grid, true);
            listSelectorObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_1", ListSelector, true);

        }
	}



	public function UpdateVoid(){

		if(listSelectorObject != null){

            if(listSelectorObject.selectedIndex != -1 && listSelectorObject.selectedIndex != 0){

                listSelectorCurrentInt ++;

                textObject = new Text();
                textObject.text = "Tags";
                textObject.id="UIPopupAddObjectMuseum_SelectTagText_" + listSelectorCurrentInt;
                gridObject.addChild(textObject);

                listSelectorObject = new ListSelector();
                listSelectorObject.text = "Select Tags";
                listSelectorObject.dataSource.createFromString("Select Tags");
                listSelectorObject.dataSource.createFromString("ROFL");
                listSelectorObject.dataSource.createFromString("LMAO");
                listSelectorObject.percentWidth = 100;
                listSelectorObject.id = "UIPopupAddObjectMuseum_SelectTag_" + listSelectorCurrentInt;
                gridObject.addChild(listSelectorObject);
                trace(listSelectorCurrentInt);

            }

        }
		
	}
}