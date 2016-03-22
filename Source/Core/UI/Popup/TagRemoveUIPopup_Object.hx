class UIPopupRemoveTag_Object{





    var _Button                 :Button         = null;
    var _Global_Object          :Global_Object  = null;
    var _Popup                  :Popup          = null;
    var _Tag_Object             :Tag_Object     = null;
    var general_ListSelector    :ListSelector   = null;
    var general_String          :String         = null;
    var generalPrev_String      :String         = null;
    var tag_ListSelector        :ListSelector   = null;
    var tagName_String          :String         = null;





    /*==================================================*/
    public function new(__Global_Object:Global_Object, _root:Root){

        /*Assign the parameters.*/
        _Global_Object = __Global_Object;





        /*Button object click function.*/
        _Button = _root.findChild("UIPopupRemoveTagObjectButton", Button, true);
        _Button.onClick = function(_e){

            /*Button control.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;




            /*Popup control.
            If button clicked this popup appears.*/
            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/TagRemoveUIPopup.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Remove Tag", buttonControlInt, function(_button){

                if(_button == PopupButton.OK){

                    if(general_String == "Yes"){
                        _Tag_Object = CollectionFunction.FindTagObject(_Global_Object, true, tagName_String);
                        _Tag_Object.RemoveFromArray();
                    }
                    else if(general_String == "No"){
                        _Tag_Object = CollectionFunction.FindTagObject(_Global_Object, false, tagName_String);
                        _Tag_Object.RemoveFromArray();
                    }

                }

            });





            /*Find all object in the popup object.*/
            general_ListSelector    = _Popup.content.findChild("TagRemoveUIPopup_GeneralListSelector", ListSelector, true);
            tag_ListSelector        = _Popup.content.findChild("TagRemoveUIPopup_TagListSelector", ListSelector, true);





            /*Fill all object in the popup object.
            And assign the default value.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

                tag_ListSelector.dataSource.createFromString(_Global_Object._Tag_Object_Array[loopCounter1_Int]._TagAgnostic_Object.name_String);
                loopCounter1_Int ++;

            }
            tag_ListSelector    .method         = "default";
            tag_ListSelector    .selectedIndex  = -1;





            general_ListSelector    .method         = "default";
            general_ListSelector    .selectedIndex  = -1;

        }

    }
    /*==================================================*/





    /*==================================================
    PENDING: Comment this section later.*/
    public function UpdateVoid(){

        if(_Popup != null && tag_ListSelector != null && general_ListSelector != null){

            if(
                general_ListSelector.text           == ""   ||
                general_ListSelector.text           == " "  ||
                general_ListSelector.selectedIndex  == -1
            ){

                tag_ListSelector.disabled           = true;
                tag_ListSelector.selectedIndex      = -1;
                tag_ListSelector.text               = " ";

            }
            else{ tag_ListSelector.disabled         = false; }





            general_String = general_ListSelector.text;
            if(general_String != generalPrev_String){

                tag_ListSelector.dataSource.removeAll();
                tag_ListSelector.selectedIndex = -1;

                if(general_String == "Yes"){

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _Global_Object.general_Tag_Object_Array.length){

                        tag_ListSelector.dataSource.createFromString(_Global_Object.general_Tag_Object_Array[loopCounter1_Int]._TagAgnostic_Object.name_String);
                        loopCounter1_Int ++;

                    }

                }
                else if(general_String == "No"){

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _Global_Object._Tag_Object_Array.length){

                        tag_ListSelector.dataSource.createFromString(_Global_Object._Tag_Object_Array[loopCounter1_Int]._TagAgnostic_Object.name_String);
                        loopCounter1_Int ++;

                    }

                }

                generalPrev_String = general_String;

            }

            tagName_String = tag_ListSelector.text;

        }

    }
    /*==================================================*/





}