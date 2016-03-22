class UIPopupAddObjectMuseum{



    private var buttonObject                        :Button                         = null;                                 /*The main button to activate this popup.*/
    private var collectionGlobalObject              :CollectionGlobal               = null;                                 /*Referece variable to collecrionGlobalObject that stores most of global variables.*/
    private var gridObject                          :Grid                           = null;                                 /*Grid layout.*/
    private var listSelectorParentObject            :ListSelector                   = null;                                 /*List selector for parent object.*/
    private var listSelectorTagStructArray          :Array<StructListSelector>      = new Array<StructListSelector>();      /*Array of list selector to choose multiple tags.*/
    private var listSelectorTagObject               :ListSelector                   = null;
    /*An index to determine which set of parent object can be choose.
    PENDING: Instead of using int I can use listSelectorObject.text instead and then compare the String.*/
    private var listSelectorTypeInt                 :Int                            = -1;
    private var listSelectorTypeObject              :ListSelector                   = null;                                 /*List selector to select museum type.*/
    private var listSelectorTypePrevInt             :Int                            = -1;                                   /*Another int to detect change in type value from list selector of museum type.*/
    private var nameAltTextInputObject              :TextInput                      = null;
    private var nameFullTextInputObject             :TextInput                      = null;
    private var popupObject                         :Popup                          = null;                                 /*Main popup object.*/
    private var textInputExplanationLastIndexInt    :Int                            = -1;
    private var textInputExplanationObject          :TextInput                      = null;
    private var textInputExplanationStructArray     :Array<StructTextInput>         = new Array<StructTextInput>();



    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

        /*Find the main button to actovate the popup in the main screen.*/
        buttonObject = _root.findChild("UIPopupAddMuseumObjectButton", Button, true);
        /*Adding a callback function of when the button is pressed.*/
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectMuseum.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Add Museum Object", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    /*If button OK is pressed then add a museum object according to the inputted value.
                    PENDING: Check whethe the data inputted valid.
                    PENDING: Check how to make disable OK button of this popup.*/
                    var nameAltString:String = nameAltTextInputObject.text;
                    var nameFullString:String = nameFullTextInputObject.text;
                    var parentNameAltString:String = listSelectorParentObject.text;
                    var explanationStringArray:Array<String> = new Array<String>();
                    var tagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
                    var typeEnum:EnumMuseumType = null;
                    if(listSelectorTypeObject.text == "Exhibition"){ typeEnum = EXH; }
                    else if(listSelectorTypeObject.text == "Floor"){ typeEnum = FLR; }
                    else if(listSelectorTypeObject.text == "Room"){ typeEnum = ROM; }

                    if(typeEnum == FLR){ parentNameAltString = "XXX_XXX"; }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < textInputExplanationStructArray.length){
                        if(
                            textInputExplanationStructArray[loopCounter1Int].textInputObject.text != "" &&
                            textInputExplanationStructArray[loopCounter1Int].textInputObject.text != " "
                        ){
                            explanationStringArray.push(textInputExplanationStructArray[loopCounter1Int].textInputObject.text);
                        }
                        loopCounter1Int ++;
                    }
                    loopCounter1Int = 0;
                    while(loopCounter1Int < listSelectorTagStructArray.length){
                        var tagNameString:String = listSelectorTagStructArray[loopCounter1Int].listSelectorObject.text;
                        var tagObject:ObjectTag = CollectionFunction.FindTagObject(collectionGlobalObject, false, tagNameString);
                        if(tagObject == null){ tagObject = CollectionFunction.FindTagObject(collectionGlobalObject, true, tagNameString); }
                        if(tagObject != null){ tagObjectArray.push(tagObject); }
                        loopCounter1Int ++;
                    }

                    /*PENDING: Adding notification if user is not properly input new museum object information.*/
                    if(
                        nameAltString                   != "" || nameAltString          != " " || nameAltString         != null ||
                        nameFullString                  != "" || nameFullString         != " " || nameFullString        != null ||
                        parentNameAltString             != "" || parentNameAltString    != " " || parentNameAltString   != null ||
                        explanationStringArray.length   != 0  || tagObjectArray.length  != 0
                    ){

                        /*Adding the museum object here.*/
                        var museumObject:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, explanationStringArray, nameAltString, nameFullString, parentNameAltString, tagObjectArray, typeEnum);

                    }

                }

            });

            nameFullTextInputObject = popupObject.content.findChild("UIPopupAddObjectMuseum_InputFullName", TextInput, true);
            nameAltTextInputObject = popupObject.content.findChild("UIPopupAddObjectMuseum_InputAltName", TextInput, true);
            gridObject = popupObject.content.findChild("UIPopupAddObjectMuseum_Grid", Grid, true);
            listSelectorParentObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectObjectParent", ListSelector, true);
            listSelectorParentObject.method = "default";
            listSelectorParentObject.selectedIndex = -1;
            listSelectorTypeObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectType", ListSelector, true);
            listSelectorTypeObject.method = "default";

            /*Adding dynamic tag list selector.*/
            CollectionFunction.ClearArray(listSelectorTagStructArray);
            listSelectorTagObject = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_1", ListSelector, true);
            listSelectorTagObject.method = "default";
            var listSelectorTagTextObject:Text = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTagText_1", Text, true);
            var listSelectorTagStruct   :StructListSelector = {
                listSelectorObject      :listSelectorTagObject,
                textObject              :listSelectorTagTextObject
            };
            listSelectorTagStructArray.push(listSelectorTagStruct);

            listSelectorTagObject.dataSource.createFromString("Remove");

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                listSelectorTagObject.dataSource.createFromString(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;
            }

            /*Adding dynamic explanation text input.*/
            CollectionFunction.ClearArray(textInputExplanationStructArray);
            textInputExplanationObject = popupObject.content.findChild("UIPopupAddObjectMuseum_InputExplanation_1", TextInput, true);
            var textInputExplanationTextObject:Text = popupObject.content.findChild("UIPopupAddObjectMuseum_InputExplanationText_1", Text, true);
            var textInputExplanationStruct  :StructTextInput = {
                textInputObject             :textInputExplanationObject,
                textObject                  :textInputExplanationTextObject
            }
            textInputExplanationStructArray.push(textInputExplanationStruct);
            textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject) + 1;

        }

    }



    public function UpdateVoid(){

        if(popupObject != null && listSelectorParentObject != null && listSelectorTypeObject != null){

            if(listSelectorTypeObject.selectedIndex == -1 || listSelectorTypeObject.text == "" || listSelectorTypeObject.text == " "){
                listSelectorParentObject.disabled = true;
                listSelectorTagObject.disabled = true;
                nameAltTextInputObject.disabled = true;
                nameFullTextInputObject.disabled = true;
                textInputExplanationObject.disabled = true;
            }
            else{
                listSelectorTagObject.disabled = false;
                nameAltTextInputObject.disabled = false;
                nameFullTextInputObject.disabled = false;
                textInputExplanationObject.disabled = false;
            }
            if(listSelectorTypeObject.text != "Floor"){
                listSelectorParentObject.disabled = false;
            }

            listSelectorTypeInt = listSelectorTypeObject.selectedIndex;
            if(listSelectorTypeInt == -1){ listSelectorParentObject.disabled = true; }

            if(listSelectorTypeInt != listSelectorTypePrevInt){
                listSelectorParentObject.dataSource.removeAll();
                listSelectorParentObject.selectedIndex = -1;

                var tempObjectArray:Array<ObjectMuseum> = null;
                if(listSelectorTypeInt == 0){ listSelectorParentObject.disabled = false; tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }
                else if(listSelectorTypeInt == 1){ listSelectorParentObject.disabled = true; }
                else if(listSelectorTypeInt == 2){ listSelectorParentObject.disabled = false; tempObjectArray = collectionGlobalObject.GetFloorObjectArray(); }

                if(listSelectorTypeInt != -1 && listSelectorTypeInt != 1){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        listSelectorParentObject.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString);
                        loopCounter1Int ++;
                    }
                }

                listSelectorTypePrevInt = listSelectorTypeInt;
            }

        }

        if(popupObject != null && listSelectorTagStructArray.length > 0){

            /*For when the ListSelector struct array is having lenght equal to 1 and loopCounter1Int is not having index equal to the ListSelector array length minus 1,
                reset the value of the of the following ListSelector.
            If the condition other than those, remove the ListSelector from the ListSelector struct array and from the grid layout.*/
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < listSelectorTagStructArray.length){

                if(listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex == 0 && listSelectorTagStructArray.length > 1){
                    if(loopCounter1Int == listSelectorTagStructArray.length - 1){
                        listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                    }
                    else{
                        gridObject.removeChild(listSelectorTagStructArray[loopCounter1Int].listSelectorObject);
                        gridObject.removeChild(listSelectorTagStructArray[loopCounter1Int].textObject);
                        listSelectorTagStructArray.remove(listSelectorTagStructArray[loopCounter1Int]);

                        /*Re - adjust the list selector id.*/
                        var loopCounter2Int:Int = 1;
                        while(loopCounter2Int <= listSelectorTagStructArray.length){

                            listSelectorTagStructArray[loopCounter2Int - 1].listSelectorObject.id = "UIPopupEditObjectMuseum_SelectTag_" + loopCounter2Int;
                            listSelectorTagStructArray[loopCounter2Int - 1].textObject.id = "UIPopupEditObjectMuseum_SelectTagText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                    }
                }
                else if(listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex == 0 && listSelectorTagStructArray.length == 1){
                    listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                }
                loopCounter1Int ++;

            }

            if(listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != -1 && listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != 0){

                var listSelectorTagTextObject:Text = new Text();
                var listSelectorTagObject:ListSelector = new ListSelector();
                var listSelectorTagStruct = {
                    listSelectorObject  :listSelectorTagObject,
                    textObject          :listSelectorTagTextObject
                };
                listSelectorTagStructArray.push(listSelectorTagStruct);

                listSelectorTagTextObject.text = "Tags";
                listSelectorTagTextObject.id = "UIPopupAddObjectMuseum_SelectTagText_" + listSelectorTagStructArray.length;
                gridObject.addChild(listSelectorTagTextObject);

                listSelectorTagObject.dataSource.createFromString("Remove");
                listSelectorTagObject.id = "UIPopupAddObjectMuseum_SelectTag_" + listSelectorTagStructArray.length;
                listSelectorTagObject.percentWidth = 100;
                listSelectorTagObject.text = " ";
                gridObject.addChild(listSelectorTagObject);

                var tempUsedTagStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                    tempUsedTagStringArray.push(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                    loopCounter1Int ++;
                }
                loopCounter1Int = 1;
                while(loopCounter1Int <= listSelectorTagStructArray.length){

                    var tempListSelectorTagObject:ListSelector = popupObject.content.findChild("UIPopupAddObjectMuseum_SelectTag_" + loopCounter1Int, ListSelector, true);
                    tempUsedTagStringArray.remove(tempListSelectorTagObject.text);
                    loopCounter1Int ++;

                }
                loopCounter1Int = 0;
                while(loopCounter1Int < tempUsedTagStringArray.length){

                    listSelectorTagObject.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                    loopCounter1Int ++;

                }

                /*For some reason you need this to be configured after the object is initialized in
                    the screen.*/
                listSelectorTagObject.method = "default";

            }

        }

        if(popupObject != null && textInputExplanationStructArray.length > 0){

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < textInputExplanationStructArray.length){

                if(
                    (
                        textInputExplanationStructArray[loopCounter1Int].textInputObject.text == "" ||
                        textInputExplanationStructArray[loopCounter1Int].textInputObject.text == " "
                    ) &&
                    textInputExplanationStructArray.length > 1
                ){

                    /*PENDING: Might need some checking here due to it it quite different than the original
                        codes.*/
                    if(loopCounter1Int != textInputExplanationStructArray.length - 1){

                        gridObject.removeChild(textInputExplanationStructArray[loopCounter1Int].textInputObject);
                        gridObject.removeChild(textInputExplanationStructArray[loopCounter1Int].textObject);
                        textInputExplanationStructArray.remove(textInputExplanationStructArray[loopCounter1Int]);

                        var loopCounter2Int:Int = 1;
                        while(loopCounter2Int <= textInputExplanationStructArray.length){

                            textInputExplanationStructArray[loopCounter2Int - 1].textInputObject.id = "UIPopupAddObjectMuseum_InputExplanation_" + loopCounter2Int;
                            textInputExplanationStructArray[loopCounter2Int - 1].textObject.id = "UIPopupAddObjectMuseum_InputExplanationText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                        textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject) + 1;

                    }

                }
                loopCounter1Int ++;

            }

            if(
                textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject.text != "" &&
                textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject.text != " "
            ){

                var textInputExplanationTextObject:Text = new Text();
                var textInputExplanationObject:TextInput = new TextInput();
                var textInputExplanationStruct = {
                    textInputObject     : textInputExplanationObject,
                    textObject          : textInputExplanationTextObject
                };
                textInputExplanationStructArray.push(textInputExplanationStruct);

                textInputExplanationTextObject.text = "Explanation";
                textInputExplanationTextObject.id = "UIPopupAddObjectMuseum_InputExplanationText_" + textInputExplanationStructArray.length;
                gridObject.addChildAt(textInputExplanationTextObject, textInputExplanationLastIndexInt);
                textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationTextObject) + 1;

                textInputExplanationObject.id = "UIPopupAddObjectMuseum_InputExplanation_" + textInputExplanationStructArray.length;
                textInputExplanationObject.percentWidth = 100;
                gridObject.addChildAt(textInputExplanationObject, textInputExplanationLastIndexInt);
                textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationObject) + 1;

            }

        }

    }

}
