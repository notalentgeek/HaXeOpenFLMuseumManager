import  CollectionFunction;
import  CollectionStruct;
class   ObjectVisitor{
    private     var collectionGlobalObject                  :CollectionGlobal                   = null;
    private     var exhibitionCurrentObject                 :ObjectMuseum                       = null;
    private     var exhibitionTargetObjectArray             :Array<ObjectMuseum>                = new Array<ObjectMuseum>();
    private     var exhibitionVisitedObjectArray            :Array<ObjectMuseum>                = new Array<ObjectMuseum>();
    private     var explanationStringArray                  :Array<String>                      = new Array<String>();
    private     var finishedBool                            :Bool                               = false;
    private     var indexGlobalInt                          :Int                                = -1;
    private     var indexLocalInt                           :Int                                = -1;
    private     var nameString                              :String                             = "";
    private     var scoreInt                                :Int                                = 0;
    private     var sentenceStringArray                     :Array<String>                      = new Array<String>();
    private     var tagCounterStructArray                   :Array<StructTagCounter>            = new Array<StructTagCounter>();
    private     var tagObjectMap                            :Map<ObjectTag, Bool>               = new Map<ObjectTag, Bool>();
    private     var timeExhibitionInt                       :Int                                = 0;
    private     var timeMuseumInt                           :Int                                = 0;
    private     var visitedCorrectExhibitionBool            :Bool                               = false;
    private     var visitStructArray                        :Array<StructVisitorVisitMuseum>    = new Array<StructVisitorVisitMuseum>();
    public  function new                                    (
        _collectionGlobalObject                             :CollectionGlobal   ,
        _exhibitionCurrentNameAltString                     :String             ,
        _indexGlobalInt                                     :Int                ,
        _nameString                                         :String
    ){
        collectionGlobalObject                              = _collectionGlobalObject;
        exhibitionCurrentObject                             = CollectionFunction.FindMuseumObject(collectionGlobalObject, EXH, _exhibitionCurrentNameAltString);
        indexGlobalInt                                      = _indexGlobalInt;
        nameString                                          = _nameString;
    }
    private function AddRemoveVisitorFromExhibitionVoid     (_isAdd:Bool){
             if(_isAdd == true ){ exhibitionCurrentObject.GetChildStruct().childVisitorObjectArray.push     (this); }
        else if(_isAdd == false){ exhibitionCurrentObject.GetChildStruct().childVisitorObjectArray.remove   (this); }
    }
    private function AddTagCounterVoid                      (){
        tagObjectMap                                        = new Map<ObjectTag, Bool>();
        var   loopCounterInt            :Int                = 0;
        if(exhibitionVisitedObjectArray.length >= 2){
            while(loopCounterInt < exhibitionVisitedObjectArray[exhibitionVisitedObjectArray.length - 2].GetTagObjectArray().length){
                tagObjectMap.set                            (exhibitionVisitedObjectArray[exhibitionVisitedObjectArray.length - 2].GetTagObjectArray()[loopCounterInt], true);
                loopCounterInt                              ++;
            }
        }
        loopCounterInt                                      = 0;
        while(loopCounterInt < exhibitionCurrentObject.GetTagObjectArray().length){
            var newTagBool              :Bool               = true;
            var tagCounterNameAltString :String             = "";
            var tagCounterStruct        :StructTagCounter   = {
                tagObject                                   :null,
                tagCounterInt                               :1
            };
            var tagIndexInt             :Int                = 0;
            tagCounterStruct.tagObject                      = exhibitionCurrentObject       .GetTagObjectArray()[loopCounterInt];
            tagCounterNameAltString                         = tagCounterStruct.tagObject    .GetNameStruct().nameAltString;
            while(tagIndexInt < tagCounterStructArray.length){
                if(tagCounterNameAltString                  == tagCounterStructArray[tagIndexInt].tagObject.GetNameStruct().nameAltString){ newTagBool = false; break; }
                tagIndexInt                                 ++;
            }

                 if(newTagBool == true ){
                tagCounterStructArray.push(tagCounterStruct);
            }
            else if(newTagBool == false){
                tagCounterStructArray[tagIndexInt].tagCounterInt ++;
            }
            loopCounterInt                                  ++;
            tagObjectMap.set                                (tagCounterStruct.tagObject, true);
        }
        SortTagCounterVoid                                  ();
    }
    private function ChangeExhibitionCurrentVoid            (_exhibitionTargetObject:ObjectMuseum){
        var roomCurrentObject   :ObjectMuseum               = exhibitionCurrentObject   .GetParentObject();
        var floorCurrentObject  :ObjectMuseum               = roomCurrentObject         .GetParentObject();
        if(exhibitionCurrentObject == null){
            AddRemoveVisitorFromExhibitionVoid              (false);
            exhibitionCurrentObject .SetVisitorCurrentInt   (exhibitionCurrentObject    .GetVisitorCurrentInt() - 1);
            roomCurrentObject       .SetVisitorCurrentInt   (roomCurrentObject          .GetVisitorCurrentInt() - 1);
            floorCurrentObject      .SetVisitorCurrentInt   (floorCurrentObject         .GetVisitorCurrentInt() - 1);
        }
        exhibitionCurrentObject                             = _exhibitionTargetObject;
        exhibitionVisitedObjectArray.push                   (exhibitionCurrentObject);
        AddTagCounterVoid                                   ();
        var indexIntArray       :Array<Int>                 = new Array<Int>();
        var loopCounterInt      :Int                        = 0;
        while(loopCounterInt < exhibitionCurrentObject.GetExplanationStringArray().length){
            indexIntArray.push                              (loopCounterInt);
            loopCounterInt                                  ++;
        }
        var indexRandomInt      :Int                        = indexIntArray[Math.round(Math.random()*(indexIntArray.length - 1))];
        indexIntArray.remove                                (indexRandomInt);
        var explanationString   :String                     = exhibitionCurrentObject.GetExplanationStringArray()[indexRandomInt];
        loopCounterInt                                      = 0;
        while(
            (CollectionFunction.IsExistInArrayBool(explanationStringArray, explanationString) == true)                      &&
            (loopCounterInt                                  < exhibitionCurrentObject.GetExplanationStringArray().length)
        ){
            indexRandomInt                                  = indexIntArray[Math.round(Math.random()*(indexIntArray.length - 1))];
            indexIntArray.remove                            (indexRandomInt);
            explanationString                               = exhibitionCurrentObject.GetExplanationStringArray()[indexRandomInt];
            loopCounterInt                                  ++;
        }
        explanationStringArray.push                         (explanationString);
        visitedCorrectExhibitionBool                        = false;
        loopCounterInt                                      = 0;
        while(loopCounterInt < exhibitionTargetObjectArray.length){
            if(exhibitionCurrentObject.GetNameStruct().nameAltString == exhibitionTargetObjectArray[loopCounterInt].GetNameStruct().nameAltString){ visitedCorrectExhibitionBool = true; break; }
            loopCounterInt                                  ++;
        }
             if(visitedCorrectExhibitionBool == true )      { scoreInt ++; }
        else if(visitedCorrectExhibitionBool == false)      { scoreInt --; }
        roomCurrentObject                                   = exhibitionCurrentObject   .GetParentObject();
        floorCurrentObject                                  = roomCurrentObject         .GetParentObject();
        exhibitionCurrentObject     .SetVisitorCurrentInt   (exhibitionCurrentObject    .GetVisitorCurrentInt()     + 1);
        exhibitionCurrentObject     .SetVisitorTotalInt     (exhibitionCurrentObject    .GetVisitorTotalInt()       + 1);
        floorCurrentObject          .SetVisitorCurrentInt   (roomCurrentObject          .GetVisitorCurrentInt()     + 1);
        floorCurrentObject          .SetVisitorTotalInt     (roomCurrentObject          .GetVisitorTotalInt()       + 1);
        roomCurrentObject           .SetVisitorCurrentInt   (floorCurrentObject         .GetVisitorCurrentInt()     + 1);
        roomCurrentObject           .SetVisitorTotalInt     (floorCurrentObject         .GetVisitorTotalInt()       + 1);
        loopCounterInt                                      = 0;
        while(loopCounterInt < collectionGlobalObject.GetVisitorObjectArray().length){
            collectionGlobalObject.GetVisitorObjectArray()[loopCounterInt].DetermineIndexLocalVoid();
            collectionGlobalObject.GetVisitorObjectArray()[loopCounterInt].GenerateExhibitionTargetVoid();
            loopCounterInt                                  ++;
        }
        if(exhibitionVisitedObjectArray.length > 1){
            var threeSentenceString :String                 = GenerateSentenceVoid(3);
            sentenceStringArray.push                        (threeSentenceString);
        }
    }
    private function DetermineIndexLocalVoid                (){
        indexLocalInt                                       = exhibitionCurrentObject.GetChildStruct().childVisitorObjectArray.indexOf(this);
    }
    private function GenerateExhibitionTargetVoid           (){
    }
    private function GenerateSentenceVoid                   (_amount:Int){ return ""; }
    private function SortTagCounterVoid                     (){
        tagCounterStructArray.sort(function(_a:StructTagCounter, _b:StructTagCounter){ return _a.tagCounterInt - _b.tagCounterInt; });
    }
    public  function GetExhibitionCurrentObject             (){ return exhibitionCurrentObject  ; }
    public  function GetNameString                          (){ return nameString               ; }
}