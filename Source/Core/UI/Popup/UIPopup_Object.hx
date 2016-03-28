2public class UIPopup{





    /*==================================================*/
    private var _Button         (null, null)        :Button             = null;
    private var _Event          (null, null)        :Event              = null;
    private var _Global_Object  (null, null)        :CollectionGlobal   = null;
    private var _Grid           (null, null)        :Grid               = null;
    private var _Popup          (null, null)        :Popup              = null;
    /*==================================================*/





    /*==================================================*/
    public function new(
        __Global_Object         :Global_Object,
        __Root                  :Root,
        _assign_Function        :Function,
        _button_Function        :Function,
        _buttonName_String      :String,
        _init_Function          :Function,
        _layoutPath_String      :String,
        _title_String           :String
    ):Void{

        /*Assign the parameters.*/
        _Global_Object = __Global_Object;





        /*Find the button object that need to be clicked to show popup object.*/
        _Button = __Root.findChild(
            _buttonName_String,
            Button,
            true
        );





        /*Button on click callback function.*/
        _Button.onClick = function(__Event){

            /*Assign the event so that this can be used for the sub class.*/
            _Event = __Event;





            /*Button control.
            Usually I only need okay and cancel button.*/
            var buttonControl_Int:Int = 0;
            buttonControl_Int |= PopupButton.CANCEL;
            buttonControl_Int |= PopupButton.OK;




            /*Load the popup layout here.
            PENDING: I can move the entire constructor here and pass
                the parameter of Toolkit.processXmlResource() from the
                super class' constructor*/
            var _IDisplayObject:IDisplayObject =
                Toolkit.processXmlResource
                    (_layoutPath_String);





            /*Assign the popup layout into the popup variable.*/
            _Popup = PopupManager.instance.showCustom(
                _IDisplayObject,
                _title_String,
                buttonControl_Int,
                function(__Button){

                    if(__Button == PopupButton.OK){

                        /*Here are what happened when you clicked
                            okay button*/
                        _button_Function();

                    }

                }
            );





            /*Here is a function that will assign variable into object under the
                popup user interface elements.*/
            _assign_Function();





            /*Here is a function that will initiate all value and settings of
                all popup user interface elements.*/
            _init_Function();

        }

    }
    /*==================================================*/




    /*==================================================*/
    private function Assign_Void():Void{}
    /*==================================================*/





    /*==================================================*/
    private function Button_Void():Void{}
    /*==================================================*/





    /*==================================================*/
    private function Init_Void():Void{}
    /*==================================================*/





    /*==================================================*/
    private function Update_Void():Void{}
    /*==================================================*/





}