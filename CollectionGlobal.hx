import  CollectionFunction;
class   CollectionGlobal{   
    private var visitorObjectArray              :Array<ObjectVisitor>   = new Array<ObjectVisitor>      ();
    private var exhibitionObjectArray           :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var floorObjectArray                :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var roomObjectArray                 :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var tagObjectArray                  :Array<ObjectTag>       = new Array<ObjectTag>          ();
    public      function new                                            (){}
    public      function AddExhibitionObjectArrayVoid                   (_exhibitionObject              :ObjectMuseum           )   { exhibitionObjectArray     .push               (_exhibitionObject)                 ; }
    public      function AddFloorObjectArrayVoid                        (_floorObject                   :ObjectMuseum           )   { floorObjectArray          .push               (_floorObject)                      ; }
    public      function AddRoomObjectArrayVoid                         (_roomObject                    :ObjectMuseum           )   { roomObjectArray           .push               (_roomObject)                       ; }
    public      function AddTagObjectArrayVoid                          (_tagObject                     :ObjectTag              )   { tagObjectArray            .push               (_tagObject)                        ; }
    public      function AddVisitorObjectArrayVoid                      (_visitorObject                 :ObjectVisitor          )   { visitorObjectArray        .push               (_visitorObject)                    ; }
    public      function GetExhibitionObjectArray                       ()                                                          { return                                        exhibitionObjectArray               ; }
    public      function GetFloorObjectArray                            ()                                                          { return                                        floorObjectArray                    ; }
    public      function GetRoomObjectArray                             ()                                                          { return                                        roomObjectArray                     ; }
    public      function GetTagObjectArray                              ()                                                          { return                                        tagObjectArray                      ; }
    public      function GetVisitorObjectArray                          ()                                                          { return                                        visitorObjectArray                  ; }
    public      function SetExhibitionObjectArrayVoid                   (_exhibitionObjectArray         :Array<ObjectMuseum>    )   { exhibitionObjectArray                         = _exhibitionObjectArray            ; }
    public      function SetFloorObjectArrayVoid                        (_floorObjectArray              :Array<ObjectMuseum>    )   { floorObjectArray                              = _floorObjectArray                 ; }
    public      function SetRoomObjectArrayVoid                         (_roomObjectArray               :Array<ObjectMuseum>    )   { roomObjectArray                               = _roomObjectArray                  ; }
    public      function SetTagObjectArrayVoid                          (_tagObjectArray                :Array<ObjectTag>       )   { tagObjectArray                                = _tagObjectArray                   ; }
    public      function SetVisitorObjectArrayVoid                      (_visitorObjectArray            :Array<ObjectVisitor>   )   { visitorObjectArray                            = _visitorObjectArray               ; }
}