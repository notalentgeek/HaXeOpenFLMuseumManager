import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.*;
import haxe.ui.toolkit.controls.*;
import haxe.ui.toolkit.controls.popups.*;
import haxe.ui.toolkit.controls.selection.*;
import haxe.ui.toolkit.core.*;
import haxe.ui.toolkit.core.interfaces.*;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.data.*;
import haxe.ui.toolkit.events.*;



class UIPopupEditObjectVisitor{



    private var collectionGlobalObject                          :CollectionGlobal           = null;
    private var displayExplanationTextObject                    :Text                       = null;
    private var displayPopularTagListSelectorObject             :ListSelector               = null;
    private var displayPreviousVisitorTextObject                :Text                       = null;
    private var displaySentenceTextObject                       :Text                       = null;
    private var displayTargetExhibitionTextObject               :Text                       = null;
    private var displayVisitorIndexTextObject                   :Text                       = null;
    private var gridObject                                      :Grid                       = null;
    private var inputNameTextInputObject                        :TextInput                  = null;
    private var mainButtonObject                                :Button                     = null;
    private var popupObject                                     :Popup                      = null;
    private var resetButtonObject                               :Button                     = null;
    private var selectCurrentExhibitionListSelectorObject       :ListSelector               = null;
    private var selectedVisitorExplanationPrevStringArray       :Array<String>              = null;
    private var selectedVisitorExplanationStringArray           :Array<String>              = null;
    private var selectedVisitorObject                           :ObjectVisitor              = null;
    private var selectedVisitorPopularTagCountIntArray          :Array<Int>                 = new Array<Int>();
    private var selectedVisitorPopularTagCountPrevIntArray      :Array<Int>                 = new Array<Int>();
    private var selectedVisitorPopularTagObjectPrevStringArray  :Array<String>              = new Array<String>();
    private var selectedVisitorPopularTagObjectStringArray      :Array<String>              = new Array<String>();
    private var selectModeListSelectorObject                    :ListSelector               = null;
    private var selectVisitorListSelectorObject                 :ListSelector               = null;
    private var selectVisitorListSelectorPrevString             :String                     = "";
    private var selectVisitorListSelectorString                 :String                     = "";

    public function new(
        _collectionGlobalObject     :CollectionGlobal,
        _root                       :Root
    ){

        collectionGlobalObject      = _collectionGlobalObject;
        mainButtonObject            = _root.findChild("UIPopupEditVisitorObjectButton", Button, true);
        mainButtonObject.onClick    = function(_e){

            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditObjectVisitor.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Edit Visitor", buttonControlInt, function(_button){



            });

            displayExplanationTextObject                        = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayExplanation"       , Text          , true);
            displayPopularTagListSelectorObject                 = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayPopularTag"        , ListSelector      , true);
            displayPreviousVisitorTextObject                    = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayPreviousVisitor"   , Text          , true);
            displaySentenceTextObject                           = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplaySentence"          , Text          , true);
            displayTargetExhibitionTextObject                   = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayTargetExhibition"  , Text          , true);
            displayVisitorIndexTextObject                       = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayVisitorIndex"      , Text          , true);
            gridObject                                          = popupObject.content.findChild("UIPopupEditObjectVisitor_Grid"                     , Grid          , true);
            inputNameTextInputObject                            = popupObject.content.findChild("UIPopupEditObjectVisitor_InputName"                , TextInput     , true);
            resetButtonObject                                   = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonReset"              , Button        , true);
            selectCurrentExhibitionListSelectorObject           = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectCurrentExhibition"  , ListSelector  , true);
            selectModeListSelectorObject                        = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectMode"               , ListSelector  , true);
            selectVisitorListSelectorObject                     = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectVisitor"            , ListSelector  , true);

            displayPopularTagListSelectorObject.method          = "default";
            selectCurrentExhibitionListSelectorObject.method    = "default";
            selectModeListSelectorObject.method                 = "default";
            selectVisitorListSelectorObject.method              = "default";

            ResetDisplayPopularTagListSelectorObject();
            ResetSelectVisitorListSelectorObjectVoid();

        }

    }

    public function UpdateVoid(){

        if(popupObject != null){

            selectVisitorListSelectorString = selectVisitorListSelectorObject.text;
            if(selectVisitorListSelectorString != selectVisitorListSelectorPrevString){

                ResetDisplayPopularTagListSelectorObject();
                ResetSelectVisitorListSelectorObjectVoid();
                selectedVisitorObject = CollectionFunction.FindVisitorObject(collectionGlobalObject, selectVisitorListSelectorString);

                selectVisitorListSelectorPrevString = selectVisitorListSelectorString;

            }

            if(selectedVisitorObject != null){

                selectedVisitorExplanationStringArray = selectedVisitorObject.GetExplanationStringArray();
                if(selectedVisitorExplanationStringArray != selectedVisitorExplanationPrevStringArray){

                    var displayExplanationString:String = "";
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < selectedVisitorObject.GetExplanationStringArray().length){
                        displayExplanationString = displayExplanationString + selectedVisitorObject.GetExplanationStringArray()[loopCounter1Int] + "\n";
                        loopCounter1Int ++;
                    }
                    displayExplanationTextObject.text = displayExplanationString;
                    selectedVisitorExplanationPrevStringArray = selectedVisitorExplanationStringArray;

                }

                displayPopularTagListSelectorObject.selectedIndex = -1;
                displayPopularTagListSelectorObject.text = "Popular Tag";

                var updateTagBool:Bool = false;
                var loopCounter1Int:Int = 0;
                if(
                    selectedVisitorPopularTagCountIntArray.length       != selectedVisitorObject.GetTagCounterStructArray().length ||
                    selectedVisitorPopularTagObjectStringArray.length   != selectedVisitorObject.GetTagCounterStructArray().length
                ){ updateTagBool = true; }
                while(loopCounter1Int < selectedVisitorObject.GetTagCounterStructArray().length){

                    if(updateTagBool == true){ break; }

                    trace(selectedVisitorPopularTagCountIntArray.length);
                    trace(selectedVisitorObject.GetTagCounterStructArray().length + " " + loopCounter1Int);
                    trace(selectedVisitorPopularTagCountIntArray[loopCounter1Int]);
                    trace(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int]);
                    if(selectedVisitorPopularTagCountIntArray[loopCounter1Int] != selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt){ updateTagBool = true; break; }
                    if(selectedVisitorPopularTagObjectStringArray[loopCounter1Int] != selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString()){ updateTagBool = true; break; }
                    loopCounter1Int ++;

                }

                if(updateTagBool == true){

                    trace("ASD.");
                    CollectionFunction.ClearArray(selectedVisitorPopularTagCountIntArray);
                    trace("ASD.");
                    CollectionFunction.ClearArray(selectedVisitorPopularTagObjectStringArray);
                    displayPopularTagListSelectorObject.dataSource.removeAll();
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < selectedVisitorObject.GetTagCounterStructArray().length){

                        trace("QWER." + loopCounter1Int + " " + selectedVisitorObject.GetTagCounterStructArray().length);
                        selectedVisitorPopularTagCountIntArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt);
                        trace("QWER." + loopCounter1Int + " " + selectedVisitorObject.GetTagCounterStructArray().length);
                        selectedVisitorPopularTagObjectStringArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString());

                        trace(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt);
                        trace(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString());
                        displayPopularTagListSelectorObject.dataSource.createFromString(
                            selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt +
                            " " +
                            selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString()
                        );
                        loopCounter1Int ++;
                        trace("HELLO.");

                    }

                }

            }

        }

    }

    private function ResetDisplayPopularTagListSelectorObject(){ displayPopularTagListSelectorObject.dataSource.removeAll(); }

    private function ResetSelectVisitorListSelectorObjectVoid(){

        selectVisitorListSelectorObject.dataSource.removeAll();
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){

            selectVisitorListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
            loopCounter1Int ++;

        }

    }



}