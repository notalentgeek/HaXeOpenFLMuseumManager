import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
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
    private var displayPopularTagButtonObject                   :Button                     = null;
    private var displayPopularTagPopupObject                    :Popup                      = null;
    private var displayPreviousVisitorTextObject                :Text                       = null;
    private var displaySentenceButtonObject                     :Button                     = null;
    private var displaySentencePopupObject                      :Popup                      = null;
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
            displayPopularTagButtonObject                       = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonDisplayPopularTag"  , Button      , true);
            displayPreviousVisitorTextObject                    = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayPreviousVisitor"   , Text          , true);
            displaySentenceButtonObject                         = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonDisplaySentence"    , Button        , true);
            displayTargetExhibitionTextObject                   = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayTargetExhibition"  , Text          , true);
            displayVisitorIndexTextObject                       = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayVisitorIndex"      , Text          , true);
            gridObject                                          = popupObject.content.findChild("UIPopupEditObjectVisitor_Grid"                     , Grid          , true);
            inputNameTextInputObject                            = popupObject.content.findChild("UIPopupEditObjectVisitor_InputName"                , TextInput     , true);
            resetButtonObject                                   = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonReset"              , Button        , true);
            selectCurrentExhibitionListSelectorObject           = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectCurrentExhibition"  , ListSelector  , true);
            selectModeListSelectorObject                        = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectMode"               , ListSelector  , true);
            selectVisitorListSelectorObject                     = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectVisitor"            , ListSelector  , true);

            selectCurrentExhibitionListSelectorObject.method    = "default";
            selectModeListSelectorObject.method                 = "default";
            selectVisitorListSelectorObject.method              = "default";

            displayPopularTagButtonObject.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                var displayStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < selectedVisitorObject.GetTagCounterStructArray().length){

                    var displayString:String = selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt +
                        " " +
                        selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString();
                    displayStringArray.push(displayString);
                    loopCounter1Int ++;

                }

                displayPopularTagPopupObject = PopupManager.instance.showList(displayStringArray, "Display Popular Tag", buttonControlInt, function(_button){});
                Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                displayPopularTagPopupObject.y = popupObject.y;

            }
            displaySentenceButtonObject.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                displaySentencePopupObject = PopupManager.instance.showList(selectedVisitorObject.GetSentenceStringArray(), "Display Sentence", buttonControlInt, function(_button){});
                Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                displaySentencePopupObject.y = popupObject.y;

            }

            ResetDisplayExplanationTextObjectVoid();
            ResetDisplayPopularTagListSelectorObjectVoid();
            ResetDisplaySentenceListViewObjectVoid();

            ResetSelectVisitorListSelectorObjectVoid();

        }

    }

    public function UpdateVoid(){

        if(popupObject != null){
            //trace(popupObject.y);

            selectVisitorListSelectorString = selectVisitorListSelectorObject.text;
            if(selectVisitorListSelectorString != selectVisitorListSelectorPrevString){

                ResetDisplayExplanationTextObjectVoid();
                ResetDisplayPopularTagListSelectorObjectVoid();
                ResetDisplaySentenceListViewObjectVoid();

                ResetSelectVisitorListSelectorObjectVoid();

                selectedVisitorObject = CollectionFunction.FindVisitorObject(collectionGlobalObject, selectVisitorListSelectorString);
                selectVisitorListSelectorPrevString = selectVisitorListSelectorString;

            }

            if(selectedVisitorObject != null){

                displayExplanationTextObject.disabled = false;
                displayPopularTagButtonObject.disabled = false;
                displayPopularTagButtonObject.disabled = false;
                displayPreviousVisitorTextObject.disabled = false;
                displaySentenceButtonObject.disabled = false;
                displaySentenceButtonObject.disabled = false;
                displayTargetExhibitionTextObject.disabled = false;
                displayVisitorIndexTextObject.disabled = false;
                inputNameTextInputObject.disabled = false;
                resetButtonObject.disabled = false;
                selectCurrentExhibitionListSelectorObject.disabled = false;
                selectModeListSelectorObject.disabled = false;

                UpdateDisplayExplanationTextObjectVoid();
                UpdateDisplayPopularTagListSelectorObjectVoid();
                UpdateDisplaySentenceListViewObjectVoid();

                

            }

            if(selectVisitorListSelectorObject.selectedIndex == -1){

                displayExplanationTextObject.disabled = true;
                displayPopularTagButtonObject.disabled = true;
                displayPopularTagButtonObject.disabled = true;
                displayPreviousVisitorTextObject.disabled = true;
                displaySentenceButtonObject.disabled = true;
                displaySentenceButtonObject.disabled = true;
                displayTargetExhibitionTextObject.disabled = true;
                displayVisitorIndexTextObject.disabled = true;
                inputNameTextInputObject.disabled = true;
                resetButtonObject.disabled = true;
                selectCurrentExhibitionListSelectorObject.disabled = true;
                selectModeListSelectorObject.disabled = true;

            }

        }

    }

    private function ResetDisplayExplanationTextObjectVoid(){
        if(displayExplanationTextObject != null){
            displayExplanationTextObject.text = "";
        }
    }
    private function ResetDisplayPopularTagListSelectorObjectVoid(){
        if(displayPopularTagPopupObject != null){
            Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }
    private function ResetDisplaySentenceListViewObjectVoid(){
        if(displaySentencePopupObject != null){
            Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }

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
        if(displayPopularTagPopupObject != null){
            Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            displayPopularTagPopupObject.y = popupObject.y;
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
                Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < selectedVisitorObject.GetTagCounterStructArray().length){

                    selectedVisitorPopularTagCountIntArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt);
                    selectedVisitorPopularTagObjectStringArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString());

                    Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(
                        selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt +
                        " " +
                        selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString()
                    );
                    loopCounter1Int ++;
                }
            }
        }
    }

    private function UpdateDisplaySentenceListViewObjectVoid(){
        if(displaySentencePopupObject != null){
            Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            displaySentencePopupObject.y = popupObject.y;
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
                Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < selectedVisitorObject.GetSentenceStringArray().length){
                    selectedVisitorSentenceStringArray.push(selectedVisitorObject.GetSentenceStringArray()[loopCounter1Int]);
                    Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(selectedVisitorObject.GetSentenceStringArray()[loopCounter1Int]);
                    loopCounter1Int ++;
                }
            }
        }
    }

}