import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.*;
import flash.events.*;
import haxe.ui.toolkit.containers.*;
import haxe.ui.toolkit.core.*;
import haxe.ui.toolkit.core.interfaces.*;
import haxe.ui.toolkit.events.*;





class CollectionGlobal{





    /*==================================================
    Private variables.
    PENDING: Change all of these into static "global" variables.
    Archive exhibition is a reserve exhibition to put every player that has removed.
    PENDING (OBSELETE): Make archive object for floor and room to contain all deleted
        exhibitions, rooms, and floors.
    PENDING: Change the name this variable from archiveExhibitionObject into
        archiveVisitorObject.
    PENDING: Create object array for each deleted exhibitions, floors, and rooms. Let say
        name it archiveExhibitionObjectArrray, archiveFloorObjectArray, and
        archiveRoomObjectArray.
    PENDING: Make so that a visitor that has finished to visit the museum to change current
        exhibition archive visitor object.*/
    private var archiveExhibitionObject             :ObjectMuseum                           = null;
    /*Amount of visitor necessary so that a museum object can be defined as full capacity.*/
    private var exhibitionFullThresholdInt          :Int                                    = 0;
    /*An array to hold all the exhibition objects.*/
    private var exhibitionObjectArray               :Array              <ObjectMuseum>      = new Array<ObjectMuseum>();
    /*An array to hold all the floor objects.*/
    private var floorObjectArray                    :Array              <ObjectMuseum>      = new Array<ObjectMuseum>();
    /*Visitor index, this variable will increment one for everytime a visitor is added to the scene.*/
    private var indexGlobalVisitorInt               :Int                                    = 0;
    /*Variable to define offset on museum buttons.
    PENDING: Change this into more UI centric variable, probably changed into uiMuseumOffsetInt.*/
    private var museumUIOffsetInt                   :Int                                    = 5;
    /*An array to hold all the room objects.*/
    private var roomObjectArray                     :Array              <ObjectMuseum>      = new Array<ObjectMuseum>();
    /*This array contains common words that often to be put as tag in museum object.*/
    private var tagGeneralObjectArray               :Array              <ObjectTag>         = new Array<ObjectTag>();
    /*More specific tag object array.*/
    private var tagObjectArray                      :Array              <ObjectTag>         = new Array<ObjectTag>();
    /*Main user interface when the program first starts.*/
    private var uiMainObject                        :IDisplayObject                         = null;
    /*Absolute layout object for all object museum buttons and all visitor object buttons.*/
    private var uiMuseumAbsoluteObject              :Absolute                               = null;
    /*A array to hold all visitor.
    PENDING: Probably add a support to database in the future.*/
    private var visitorObjectArray                  :Array              <ObjectVisitor>     = new Array<ObjectVisitor>();
    /*==================================================*/





    /*==================================================
    Constructor.*/
    public function new(){
        /*In this constructor I only put on to initialize the archive exhibition object.
        PENDING: Please add archive for floor and room object museum.*/
        archiveExhibitionObject = new ObjectMuseum(this, ["No explanation."], "EXH_ARC", "Exhibition Archive", "XXX_XXX", new Array<ObjectTag>(), EXH);
    }
    /*==================================================*/





    /*==================================================
    A function to determine what number makes a museum object is full.*/
    public function DetermineExhibitionFullThresholdVoid(){
        /*This can be done by comparing the amount of exhibition that visitor can visit and total
            amount of visitor.
        PENDING: Change so that this does not make count to the visitors that have finished visiting
            the museum.*/
        if(exhibitionObjectArray.length >= visitorObjectArray.length){
            exhibitionFullThresholdInt =
                Math.ceil(exhibitionObjectArray.length/visitorObjectArray.length);
        }
        else if(exhibitionObjectArray.length < visitorObjectArray.length){
            exhibitionFullThresholdInt =
                Math.ceil(visitorObjectArray.length/exhibitionObjectArray.length);
        }
    }
    /*==================================================*/





    /*==================================================
    A function to increament the the global visitor index.*/
    public function PutIndexGlobalVisitorInt(){
        /*I got a problem here of which I need to return a value then increment the value.
        The solution is to copy the integer variable, incremenet the global index value, 
            and then return the copied value.*/
        var tempIndexGlobalVisitorInt:Int = indexGlobalVisitorInt;
        indexGlobalVisitorInt ++;
        return tempIndexGlobalVisitorInt;
    }
    /*==================================================*/





    /*==================================================
    Basic getter and setter functions.*/
    public function GetUIMuseumAbsoluteObject           (){ return uiMuseumAbsoluteObject;      }
    public function GetArchiveExhibitionObject          (){ return archiveExhibitionObject;     }
    public function GetExhibitionFullThresholdInt       (){ return exhibitionFullThresholdInt;  }
    public function GetExhibitionObjectArray            (){ return exhibitionObjectArray;       }
    public function GetFloorObjectArray                 (){ return floorObjectArray;            }
    public function GetIndexGlobalVisitorInt            (){ return indexGlobalVisitorInt;       }
    public function GetMuseumUIOffsetInt                (){ return museumUIOffsetInt;           }
    public function GetRoomObjectArray                  (){ return roomObjectArray;             }
    public function GetTagGeneralObjectArray            (){ return tagGeneralObjectArray;       }
    public function GetTagObjectArray                   (){ return tagObjectArray;              }
    public function GetUIMainObject                     (){ return uiMainObject;                }
    public function GetVisitorObjectArray               (){ return visitorObjectArray;          }
    public function SetUIMuseumAbsoluteObjectVoid       (_absoluteObject                :Absolute                           ){ uiMuseumAbsoluteObject       = _absoluteObject;                  }
    public function SetUIMainObjectVoid                 (_iDisplayObject                :IDisplayObject                     ){ uiMainObject                 = _iDisplayObject;                  }
    public function SetExhibitionFullThresholdInt       (_exhibitionFullThresholdInt    :Int                                ){ exhibitionFullThresholdInt   = _exhibitionFullThresholdInt;      }
    public function SetExhibitionObjectArrayVoid        (_exhibitionObjectArray         :Array              <ObjectMuseum>  ){ exhibitionObjectArray        = _exhibitionObjectArray;           }
    public function SetFloorObjectArrayVoid             (_floorObjectArray              :Array              <ObjectMuseum>  ){ floorObjectArray             = _floorObjectArray;                }
    public function SetRoomObjectArrayVoid              (_roomObjectArray               :Array              <ObjectMuseum>  ){ roomObjectArray              = _roomObjectArray;                 }
    public function SetTagObjectArrayVoid               (_tagObjectArray                :Array              <ObjectTag>     ){ tagObjectArray               = _tagObjectArray;                  }
    public function SetVisitorObjectArrayVoid           (_visitorObjectArray            :Array              <ObjectVisitor> ){ visitorObjectArray           = _visitorObjectArray;              }
    /*==================================================*/





}