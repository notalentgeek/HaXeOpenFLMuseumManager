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



    //private var displaySentenceTextObject                     :Text                       = null;
    private var collectionGlobalObject                          :CollectionGlobal           = null;
    private var displayExplanationTextObject                    :Text                       = null;
    private var displayPopularTagListSelectorObject             :ListSelector               = null;
    private var displayPreviousVisitorTextObject                :Text                       = null;
    private var displaySentenceButtonObject                     :Button                     = null;
    private var displaySentencePopupObject                      :Popup                      = null;
    private var displaySentenceTextObject                       :Text                       = null;
    private var displayTargetExhibitionTextObject               :Text                       = null;
    private var displayVisitorIndexTextObject                   :Text                       = null;
    private var gridObject                                      :Grid                       = null;
    private var inputNameTextInputObject                        :TextInput                  = null;
    private var mainButtonObject                                :Button                     = null;
    private var popupObject                                     :Popup                      = null;
    private var resetButtonObject                               :Button                     = null;
    private var selectCurrentExhibitionListSelectorObject       :ListSelector               = null;
    private var selectedVisitorExplanationStringArray           :Array<String>              = new Array<String>();
    private var selectedVisitorObject                           :ObjectVisitor              = null;
    private var selectedVisitorPopularTagCountIntArray          :Array<Int>                 = new Array<Int>();
    private var selectedVisitorPopularTagObjectStringArray      :Array<String>              = new Array<String>();
    private var selectedVisitorSentenceStringArray              :Array<String>              = new Array<String>();
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
            //displaySentenceTextObject                         = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplaySentence"          , Text          , true);
            displaySentenceButtonObject                         = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonDisplaySentence"    , Button        , true);
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

            displaySentenceButtonObject.onClick                 = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupDisplaySentence.xml");
                displaySentencePopupObject = PopupManager.instance.showCustom(iDisplayObject, "Edit Visitor", buttonControlInt, function(_button){});
                displaySentenceTextObject = displaySentencePopupObject.content.findChild("UIPopupDisplaySentence_DisplaySentence" , Text , true);


            }

            ResetDisplayExplanationTextObjectVoid();
            ResetDisplayPopularTagListSelectorObjectVoid();
            ResetDisplaySentenceTextObjectVoid();

            ResetSelectVisitorListSelectorObjectVoid();

        }

    }

    public function UpdateVoid(){

        if(popupObject != null){

            selectVisitorListSelectorString = selectVisitorListSelectorObject.text;
            if(selectVisitorListSelectorString != selectVisitorListSelectorPrevString){

                ResetDisplayExplanationTextObjectVoid();
                ResetDisplayPopularTagListSelectorObjectVoid();
                ResetDisplaySentenceTextObjectVoid();

                ResetSelectVisitorListSelectorObjectVoid();

                selectedVisitorObject = CollectionFunction.FindVisitorObject(collectionGlobalObject, selectVisitorListSelectorString);
                selectVisitorListSelectorPrevString = selectVisitorListSelectorString;

            }

            if(selectedVisitorObject != null){

                UpdateDisplayExplanationTextObjectVoid();
                UpdateDisplayPopularTagListSelectorObjectVoid();

                if(displaySentencePopupObject != null){
                    var updateSentenceBool:Bool = false;
                    var loopCounter1Int:Int = 0;
                    if(selectedVisitorSentenceStringArray.length != selectedVisitorObject.GetSentenceStringArray().length){ updateSentenceBool = true; }
                    while(loopCounter1Int < selectedVisitorObject.GetSentenceStringArray().length){
                        if(updateSentenceBool == true){ break; }
                        if(selectedVisitorSentenceStringArray[loopCounter1Int] != selectedVisitorObject.GetSentenceStringArray()[loopCounter1Int]){
                            updateSentenceBool = true;
                            break;
                        }
                        loopCounter1Int ++;
                    }
                    if(updateSentenceBool == true){
                        CollectionFunction.ClearArray(selectedVisitorSentenceStringArray);
                        if(displaySentenceTextObject != null){
                            displaySentenceTextObject.text = "";
                            var displaySentenceString:String = "";
                            var loopCounter1Int:Int = 0;
                            while(loopCounter1Int < selectedVisitorObject.GetSentenceStringArray().length){
                                displaySentenceString = displaySentenceString + selectedVisitorObject.GetSentenceStringArray()[loopCounter1Int];
                                loopCounter1Int ++;
                            }
                            displaySentenceTextObject.text = displaySentenceString;
                        }
                    }
                }

            }

        }

    }

    private function ResetDisplayExplanationTextObjectVoid(){ displayExplanationTextObject.text = ""; }
    private function ResetDisplayPopularTagListSelectorObjectVoid(){ displayPopularTagListSelectorObject.dataSource.removeAll(); }
    private function ResetDisplaySentenceTextObjectVoid(){ if(displaySentenceTextObject != null){ displaySentenceTextObject.text = ""; } }

    private function ResetSelectVisitorListSelectorObjectVoid(){

        selectVisitorListSelectorObject.dataSource.removeAll();
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){

            selectVisitorListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
            loopCounter1Int ++;

        }

    }

    private function UpdateDisplayExplanationTextObjectVoid(){
        var updateExplanationBool:Bool = false;
        var loopCounter1Int:Int = 0;
        if(selectedVisitorExplanationStringArray.length != selectedVisitorObject.GetExplanationStringArray().length){ updateExplanationBool = true; }
        while(loopCounter1Int < selectedVisitorObject.GetExplanationStringArray().length){
            if(updateExplanationBool == true){ break; }
            if(selectedVisitorExplanationStringArray[loopCounter1Int] != selectedVisitorObject.GetExplanationStringArray()[loopCounter1Int]){
                updateExplanationBool = true;
                break;
            }
            loopCounter1Int ++;
        }
        if(updateExplanationBool == true){
            CollectionFunction.ClearArray(selectedVisitorExplanationStringArray);
            displayExplanationTextObject.text = "";
            var displayExplanationString:String = "";
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < selectedVisitorObject.GetExplanationStringArray().length){
                displayExplanationString = displayExplanationString + selectedVisitorObject.GetExplanationStringArray()[loopCounter1Int] + "\n";
                loopCounter1Int ++;
            }
            displayExplanationTextObject.text = displayExplanationString;
        }
    }

    private function UpdateDisplayPopularTagListSelectorObjectVoid(){
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
            if(selectedVisitorPopularTagCountIntArray[loopCounter1Int] != selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt){ updateTagBool = true; break; }
            if(selectedVisitorPopularTagObjectStringArray[loopCounter1Int] != selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString()){ updateTagBool = true; break; }
            loopCounter1Int ++;
        }
        if(updateTagBool == true){
            CollectionFunction.ClearArray(selectedVisitorPopularTagCountIntArray);
            CollectionFunction.ClearArray(selectedVisitorPopularTagObjectStringArray);
            displayPopularTagListSelectorObject.dataSource.removeAll();
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < selectedVisitorObject.GetTagCounterStructArray().length){

                selectedVisitorPopularTagCountIntArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt);
                selectedVisitorPopularTagObjectStringArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString());

                displayPopularTagListSelectorObject.dataSource.createFromString(
                    selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt +
                    " " +
                    selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString()
                );
                loopCounter1Int ++;
            }
        }
    }



}