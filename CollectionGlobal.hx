import  CollectionFunction;
import  CollectionStruct;
class   CollectionGlobal{
    private var archiveExhibitionObject         :ObjectMuseum           = null;
    private var exhibitionFullThresholdInt      :Int                    = 0;
    private var exhibitionObjectArray           :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var floorObjectArray                :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var indexGlobalVisitorInt           :Int                    = 0;
    private var roomObjectArray                 :Array<ObjectMuseum>    = new Array<ObjectMuseum>       ();
    private var selectedMuseumObject            :ObjectMuseum           = null; 
    private var selectedTagStruct               :StructTag              = null; 
    private var selectedVisitorObject           :ObjectVisitor          = null; 
    private var tagStructArray                  :Array<StructTag>       = new Array<StructTag>          ();
    private var visitorObjectArray              :Array<ObjectVisitor>   = new Array<ObjectVisitor>      ();
    public      function new                                            (){
        archiveExhibitionObject = new ObjectMuseum(this, "EXH_000", "EXH_000", "XXX_XXX", EXH, new Array<StructTag>());
    }
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
    public      function GetSelectedTagStruct                           ()                                                          { return                                        selectedTagStruct                   ; }
    public      function GetSelectedVisitorObject                       ()                                                          { return                                        selectedVisitorObject               ; }
    public      function GetTagStructArray                              ()                                                          { return                                        tagStructArray                      ; }
    public      function GetVisitorObjectArray                          ()                                                          { return                                        visitorObjectArray                  ; }
    public      function PutIndexGlobalVisitorInt                       ()                                                          {
        var tempIndexGlobalVisitorInt:Int = indexGlobalVisitorInt;
        indexGlobalVisitorInt ++;
        return tempIndexGlobalVisitorInt;
    }
    public      function SetExhibitionFullThresholdInt                  (_exhibitionFullThresholdInt    :Int                    )   { exhibitionFullThresholdInt                    = _exhibitionFullThresholdInt       ; }
    public      function SetExhibitionObjectArrayVoid                   (_exhibitionObjectArray         :Array<ObjectMuseum>    )   { exhibitionObjectArray                         = _exhibitionObjectArray            ; }
    public      function SetFloorObjectArrayVoid                        (_floorObjectArray              :Array<ObjectMuseum>    )   { floorObjectArray                              = _floorObjectArray                 ; }
    public      function SetRoomObjectArrayVoid                         (_roomObjectArray               :Array<ObjectMuseum>    )   { roomObjectArray                               = _roomObjectArray                  ; }
    public      function SetSelectedMuseumObjectVoid                    (_selectedMuseumObject          :ObjectMuseum           )   { selectedMuseumObject                          = _selectedMuseumObject             ; }
    public      function SetSelectedTagStructVoid                       (_selectedTagStruct             :StructTag              )   { selectedTagStruct                             = _selectedTagStruct                ; }
    public      function SetSelectedVisitorObjectVoid                   (_selectedVisitorObject         :ObjectVisitor          )   { selectedVisitorObject                         = _selectedVisitorObject            ; }
    public      function SetTagStructArrayVoid                          (_tagStructArray                :Array<StructTag>       )   { tagStructArray                                = _tagStructArray                   ; }
    public      function SetVisitorObjectArrayVoid                      (_visitorObjectArray            :Array<ObjectVisitor>   )   { visitorObjectArray                            = _visitorObjectArray               ; }
}