import  CollectionFunction;
class   CollectionGlobal{
    private var archiveExhibitionObject         :MuseumObject           = new ObjectMuseum(this, "EXH_000", "EXH_000", "XXX_XXX", EXH);
    private var exhibitionFullThresholdInt      :Int                    = 0;
    private var exhibitionObjectArray           :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var floorObjectArray                :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var indexGlobalVisitorInt           :Int                    = 0;
    private var roomObjectArray                 :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var selectedMuseumObject            :ObjectMuseum           = null; 
    private var selectedTagObject               :ObjectTag              = null; 
    private var selectedVisitorObject           :ObjectVisitor          = null; 
    private var tagObjectArray                  :Array<ObjectTag>       = new Array<ObjectTag>          ();
    private var visitorObjectArray              :Array<ObjectVisitor>   = new Array<ObjectVisitor>      ();
    public      function new                                            (){}
    public      function DetermineExhibitionFullThresholdInt            ()                                                          {
             if(exhibitionObjectArray.length >= visitorObjectArray.length){ exhibitionFullThresholdInt = Math.ceil(exhibitionObjectArray    .length/visitorObjectArray      .length); }
        else if(exhibitionObjectArray.length <  visitorObjectArray.length){ exhibitionFullThresholdInt = Math.ceil(visitorObjectArray       .length/exhibitionObjectArray   .length); }
    }
    public      function GetArchiveExhibitionObject                     ()                                                          { return                                        archiveExhibitionObject             ; }
    public      function GetExhibitionFullThresholdInt                  ()                                                          { return                                        exhibitionFullThresholdInt          ; }
    public      function GetExhibitionObjectArray                       ()                                                          { return                                        exhibitionObjectArray               ; }
    public      function GetFloorObjectArray                            ()                                                          { return                                        floorObjectArray                    ; }
    public      function GetRoomObjectArray                             ()                                                          { return                                        roomObjectArray                     ; }
    public      function GetSelectedMuseumObject                        ()                                                          { return                                        selectedMuseumObject                ; }
    public      function GetSelectedTagObject                           ()                                                          { return                                        selectedVisitorObject               ; }
    public      function GetSelectedVisitorObject                       ()                                                          { return                                        selectedTagObject                   ; }
    public      function GetTagObjectArray                              ()                                                          { return                                        tagObjectArray                      ; }
    public      function GetVisitorObjectArray                          ()                                                          { return                                        visitorObjectArray                  ; }
    public      function PutIndexGlobalVisitorInt                       ()                                                          {
        var tempIndexGlobalVisitorInt           :Int                    = indexGlobalVisitorInt;
        indexGlobalVisitorInt                                           ++;
        return tempIndexGlobalVisitorInt;
    }
    public      function SetExhibitionFullThresholdInt                  (_exhibitionFullThresholdInt    :Int                    )   { exhibitionFullThresholdInt                    = _exhibitionFullThresholdInt       ; }
    public      function SetExhibitionObjectArrayVoid                   (_exhibitionObjectArray         :Array<ObjectMuseum>    )   { exhibitionObjectArray                         = _exhibitionObjectArray            ; }
    public      function SetFloorObjectArrayVoid                        (_floorObjectArray              :Array<ObjectMuseum>    )   { floorObjectArray                              = _floorObjectArray                 ; }
    public      function SetRoomObjectArrayVoid                         (_roomObjectArray               :Array<ObjectMuseum>    )   { roomObjectArray                               = _roomObjectArray                  ; }
    public      function SetSelectedMuseumObjectVoid                    (_selectedMuseumObject          :ObjectMuseum           )   { selectedMuseumObject                          = _selectedMuseumObject             ; }
    public      function SetSelectedTagObjectVoid                       (_selectedTagObject             :ObjectTag              )   { selectedTagObject                             = _selectedTagObject                ; }
    public      function SetSelectedVisitorObjectVoid                   (_selectedVisitorObject         :ObjectVisitor          )   { selectedVisitorObject                         = _selectedVisitorObject            ; }
    public      function SetTagObjectArrayVoid                          (_tagObjectArray                :Array<ObjectTag>       )   { tagObjectArray                                = _tagObjectArray                   ; }
    public      function SetVisitorObjectArrayVoid                      (_visitorObjectArray            :Array<ObjectVisitor>   )   { visitorObjectArray                            = _visitorObjectArray               ; }
}