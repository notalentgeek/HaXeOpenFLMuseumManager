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



    private var collectionGlobalObject                      :CollectionGlobal   = null;
    private var displayExplanationTextObject                :Text               = null;
    private var displayPopularTagTextObject                 :Text               = null;
    private var displayPreviousVisitorTextObject            :Text               = null;
    private var displaySentenceTextObject                   :Text               = null;
    private var displayTargetExhibitionTextObject           :Text               = null;
    private var displayVisitorIndexTextObject               :Text               = null;
    private var gridObject                                  :Grid               = null;
    private var inputNameTextInputObject                    :TextInput          = null;
    private var mainButtonObject                            :Button             = null;
    private var popupObject                                 :Popup              = null;
    private var resetButtonObject                           :Button             = null;
    private var selectCurrentExhibitionListSelectorObject   :ListSelector       = null;
    private var selectModeListSelectorObject                :ListSelector       = null;
    private var selectVisitorListSelectorObject             :ListSelector       = null;
    
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

            displayExplanationTextObject                        = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayExplanation"       , Text            , true);
            displayPopularTagTextObject                         = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayPopularTag"        , Text            , true);
            displayPreviousVisitorTextObject                    = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayPreviousVisitor"   , Text            , true);
            displaySentenceTextObject                           = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplaySentence"          , Text            , true);
            displayTargetExhibitionTextObject                   = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayTargetExhibition"  , Text            , true);
            displayVisitorIndexTextObject                       = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayVisitorIndex"      , Text            , true);
            gridObject                                          = popupObject.content.findChild("UIPopupEditObjectVisitor_Grid"                     , Grid            , true);
            inputNameTextInputObject                            = popupObject.content.findChild("UIPopupEditObjectVisitor_InputName"                , TextInput       , true);
            resetButtonObject                                   = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonReset"              , Button          , true);
            selectCurrentExhibitionListSelectorObject           = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectCurrentExhibition"  , ListSelector    , true);
            selectModeListSelectorObject                        = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectMode"               , ListSelector    , true);
            selectVisitorListSelectorObject                     = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectVisitor"            , ListSelector    , true);

            selectCurrentExhibitionListSelectorObject.method    = "default";
            selectModeListSelectorObject.method                 = "default";
            selectVisitorListSelectorObject.method              = "default";

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){

                selectVisitorListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;

            }

        }

    }

    public function UpdateVoid(){

        if(popupObject != null){



        }

    }



}