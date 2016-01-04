import  CollectionFunction;
import  CollectionStruct;
class   ObjectVisitor{
    private     var collectionGlobalObject                  :CollectionGlobal                       = null;
    private     var exhibitionCurrentObject                 :ObjectMuseum                           = null;
    private     var exhibitionTargetObjectArray             :Array<ObjectMuseum>                    = new Array<ObjectMuseum>();
    private     var exhibitionVisitedObjectArray            :Array<ObjectMuseum>                    = new Array<ObjectMuseum>();
    private     var explanationStringArray                  :Array<String>                          = new Array<String>();
    private     var finishedBool                            :Bool                                   = false;
    private     var floorCurrentObject                      :ObjectMuseum                           = null;
    private     var indexGlobalInt                          :Int                                    = -1;
    private     var indexLocalInt                           :Int                                    = -1;
    private     var nameString                              :String                                 = "";
    private     var roomCurrentObject                       :ObjectMuseum                           = null;
    private     var scoreInt                                :Int                                    = 0;
    private     var sentenceStringArray                     :Array<String>                          = new Array<String>();
    private     var tagCounterStructArray                   :Array<StructTagCounter>                = new Array<StructTagCounter>();
    private     var tagObjectMap                            :Map<ObjectTag, Bool>                   = new Map<ObjectTag, Bool>();
    private     var targetInt                               :Int                                    = 3;
    private     var timeAIAutoExhibitionChangeFloat         :Float                                  = 0;
    private     var timeExhibitionInt                       :Int                                    = 0;
    private     var timeMuseumInt                           :Int                                    = 0;
    private     var visitedCorrectExhibitionBool            :Bool                                   = false;
    private     var visitExhibitionStructArray              :Array<StructVisitorVisitExhibition>    = new Array<StructVisitorVisitExhibition>();
    private     var visitMuseumStructArray                  :Array<StructVisitorVisitMuseum>        = new Array<StructVisitorVisitMuseum>();
    public  function new                                    (
        _collectionGlobalObject                             :CollectionGlobal   ,
        _exhibitionCurrentObject                            :ObjectMuseum       ,
        _indexGlobalInt                                     :Int                ,
        _nameString                                         :String
    ){
        collectionGlobalObject                              = _collectionGlobalObject;
        indexGlobalInt                                      = _indexGlobalInt;
        ChangeExhibitionCurrentVoid                         (_exhibitionCurrentObject);
        nameString                                          = _nameString;
        collectionGlobalObject.GetVisitorObjectArray().push (this);
        //trace("exhibitionTargetObjectArray.length = " + exhibitionTargetObjectArray.length);
    }
    private function AddRemoveVisitorFromExhibitionVoid     (_isAdd:Bool){
             if(_isAdd == true ){ exhibitionCurrentObject.GetChildStruct().childVisitorObjectArray.push     (this); }
        else if(_isAdd == false){ exhibitionCurrentObject.GetChildStruct().childVisitorObjectArray.remove   (this); }
    }
    private function AddTagCounterVoid                      (){
        tagObjectMap                                        = new Map<ObjectTag, Bool>();
        var   loopCounter1Int           :Int                = 0;
        if(exhibitionVisitedObjectArray.length >= 2){
            while(loopCounter1Int < exhibitionVisitedObjectArray[exhibitionVisitedObjectArray.length - 2].GetTagObjectArray().length){
                tagObjectMap.set                            (exhibitionVisitedObjectArray[exhibitionVisitedObjectArray.length - 2].GetTagObjectArray()[loopCounter1Int], true);
                loopCounter1Int                             ++;
            }
        }
        loopCounter1Int                                     = 0;
        while(loopCounter1Int < exhibitionCurrentObject.GetTagObjectArray().length){
            var newTagBool              :Bool               = true;
            var tagCounterNameAltString :String             = "";
            var tagCounterStruct        :StructTagCounter   = {
                tagObject                                   :null,
                tagCounterInt                               :1
            };
            var tagIndexInt             :Int                = 0;
            tagCounterStruct.tagObject                      = exhibitionCurrentObject       .GetTagObjectArray()[loopCounter1Int];
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
            loopCounter1Int                                 ++;
            tagObjectMap.set                                (tagCounterStruct.tagObject, true);
        }
        SortTagCounterVoid                                  ();
    }
    private function ChangeExhibitionCurrentVoid            (_exhibitionTargetObject:ObjectMuseum){
        if(exhibitionCurrentObject != null){
            roomCurrentObject                               = exhibitionCurrentObject   .GetParentObject();
            floorCurrentObject                              = roomCurrentObject         .GetParentObject();
            AddRemoveVisitorFromExhibitionVoid              (false);
            exhibitionCurrentObject .SetVisitorCurrentInt   (exhibitionCurrentObject    .GetVisitorCurrentInt() - 1);
            roomCurrentObject       .SetVisitorCurrentInt   (roomCurrentObject          .GetVisitorCurrentInt() - 1);
            floorCurrentObject      .SetVisitorCurrentInt   (floorCurrentObject         .GetVisitorCurrentInt() - 1);
        }
        exhibitionCurrentObject                             = _exhibitionTargetObject;
        roomCurrentObject                                   = exhibitionCurrentObject   .GetParentObject();
        floorCurrentObject                                  = roomCurrentObject         .GetParentObject();
        exhibitionVisitedObjectArray.push                   (exhibitionCurrentObject);
        AddTagCounterVoid                                   ();
        GenerateExhibitionTargetVoid                        (targetInt);
        var indexIntArray       :Array<Int>                 = new Array<Int>();
        var loopCounter1Int     :Int                        = 0;
        while(loopCounter1Int < exhibitionCurrentObject.GetExplanationStringArray().length){
            indexIntArray.push                              (loopCounter1Int);
            loopCounter1Int                                 ++;
        }
        var indexRandomInt      :Int                        = indexIntArray[Math.round(Math.random()*(indexIntArray.length - 1))];
        indexIntArray.remove                                (indexRandomInt);
        var explanationString   :String                     = exhibitionCurrentObject.GetExplanationStringArray()[indexRandomInt];
        loopCounter1Int                                     = 0;
        while(
            (CollectionFunction.IsExistInArrayBool(explanationStringArray, explanationString) == true)                      &&
            (loopCounter1Int                                < exhibitionCurrentObject.GetExplanationStringArray().length)
        ){
            indexRandomInt                                  = indexIntArray[Math.round(Math.random()*(indexIntArray.length - 1))];
            indexIntArray.remove                            (indexRandomInt);
            explanationString                               = exhibitionCurrentObject.GetExplanationStringArray()[indexRandomInt];
            loopCounter1Int                                 ++;
        }
        explanationStringArray.push                         (explanationString);
        visitedCorrectExhibitionBool                        = false;
        loopCounter1Int                                     = 0;
        while(loopCounter1Int < exhibitionTargetObjectArray.length){
            if(exhibitionCurrentObject.GetNameStruct().nameAltString == exhibitionTargetObjectArray[loopCounter1Int].GetNameStruct().nameAltString){ visitedCorrectExhibitionBool = true; break; }
            loopCounter1Int                                 ++;
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
        loopCounter1Int                                     = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].DetermineIndexLocalVoid();
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GenerateExhibitionTargetVoid(targetInt);
            loopCounter1Int                                 ++;
        }
        var visitorVisitExhibitionStruct    :StructVisitorVisitExhibition = {
            currentExhibitionTimeInt        :0,
            exhibitionNameAltString         :""
        };
        visitorVisitExhibitionStruct.currentExhibitionTimeInt   = timeExhibitionInt;
        visitorVisitExhibitionStruct.exhibitionNameAltString    = exhibitionCurrentObject.GetNameStruct().nameAltString;
        visitExhibitionStructArray.push                         (visitorVisitExhibitionStruct);
        if(exhibitionVisitedObjectArray.length > 1){
            var threeSentenceString :String                 = GenerateSentenceVoid(3);
            sentenceStringArray.push                        (threeSentenceString);
        }
        if(exhibitionVisitedObjectArray.length >= collectionGlobalObject.GetExhibitionObjectArray().length){
            finishedBool                                    = true;
        }
        timeExhibitionInt                                   = 0;
        /*
        trace(
            "indexGlobalInt = "                                             + indexGlobalInt                                            + " " +
            "exhibitionCurrentObject.GetNameStruct().nameAltString = "      + exhibitionCurrentObject.GetNameStruct().nameAltString     + " " +
            "exhibitionVisitedObjectArray.length = "                        + exhibitionVisitedObjectArray.length                       + " " +
            "collectionGlobalObject.GetExhibitionObjectArray().length = "   + collectionGlobalObject.GetExhibitionObjectArray().length
        );
        */
    }
    private function DetermineIndexLocalVoid                (){
        indexLocalInt                                       = exhibitionCurrentObject.GetChildStruct().childVisitorObjectArray.indexOf(this);
    }
    private function GenerateExhibitionTargetVoid           (_targetInt:Int){
        var   loopCounter1Int               :Int            = 0;
        /*Sort level 1.*/
        //trace("collectionGlobalObject.GetExhibitionObjectArray().length = " + collectionGlobalObject.GetExhibitionObjectArray().length);
        while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
            if(exhibitionCurrentObject.GetNameStruct().nameAltString != collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetNameStruct().nameAltString){
                exhibitionTargetObjectArray.push(collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int]);
            }
            //trace("exhibitionTargetObjectArray.length = " + exhibitionTargetObjectArray.length);
            loopCounter1Int                                 ++;
        }
        /*Sort level 2.*/
        loopCounter1Int                                     = 0;
        while(loopCounter1Int < exhibitionTargetObjectArray.length){
            if( exhibitionTargetObjectArray[loopCounter1Int].GetFullBool() == true){
                exhibitionTargetObjectArray.remove          (exhibitionTargetObjectArray[loopCounter1Int]);
            }
            if(exhibitionTargetObjectArray.length <= _targetInt){ break; }
            loopCounter1Int                                 ++;
        }
        /*Sort level 3.*/
        loopCounter1Int                                     = 0;
        while(loopCounter1Int < exhibitionTargetObjectArray.length){
            var   loopCounter2Int           :Int            = 0;
            while(loopCounter2Int < exhibitionVisitedObjectArray.length){
                if(Math.random() > 0.9){
                    exhibitionTargetObjectArray.remove(exhibitionVisitedObjectArray[loopCounter2Int]);
                }
                loopCounter2Int                             ++;
            }
            if(exhibitionTargetObjectArray.length <= _targetInt){ break; }
            loopCounter1Int                                 ++;
        }
        /*Sort level 4.*/
        loopCounter1Int                                     = 0;
        while(loopCounter1Int < exhibitionTargetObjectArray.length){
            var   accumPercentageFloat      :Float          = 0;
            var   basePercentageFloat       :Float          = 0.1;
            var   loopCounter2Int           :Int            = 0;
            var   tagSameCounterInt         :Int            = 0;
            while(loopCounter2Int <    exhibitionTargetObjectArray[loopCounter1Int].GetTagObjectArray().length){
                if(tagObjectMap.exists(exhibitionTargetObjectArray[loopCounter1Int].GetTagObjectArray()[loopCounter2Int])){
                    tagSameCounterInt                       ++;
                }
                loopCounter2Int                             ++;
            }
            accumPercentageFloat                            = basePercentageFloat + (tagSameCounterInt/10);
            if(accumPercentageFloat >= 1.0 )                { accumPercentageFloat = 1.0; }
            if(Math.random() > accumPercentageFloat)        { exhibitionTargetObjectArray.remove(exhibitionTargetObjectArray[loopCounter1Int]); }
            if(exhibitionTargetObjectArray.length <= _targetInt){ break; }
            loopCounter1Int                                 ++;
        }
        /*Sort level 5.*/
        loopCounter1Int                                     = 0;
        while(loopCounter1Int < exhibitionTargetObjectArray.length){
            var   sameCounterInt            :Int            = 0;
            var   roomTargetObject          :ObjectMuseum   = exhibitionTargetObjectArray[loopCounter1Int]   .GetParentObject();
            var   floorTargetObject         :ObjectMuseum   = roomTargetObject                              .GetParentObject();
                 if(roomTargetObject    == roomCurrentObject ){ sameCounterInt ++; }
                 if(floorTargetObject   == floorCurrentObject){ sameCounterInt ++; }
                 if(sameCounterInt      == 1)               { if(Math.random() > 0.50){ exhibitionTargetObjectArray.remove(exhibitionTargetObjectArray[loopCounter1Int]); } }
            else if(sameCounterInt      == 2)               { if(Math.random() > 0.25){ exhibitionTargetObjectArray.remove(exhibitionTargetObjectArray[loopCounter1Int]); } }
            if(exhibitionTargetObjectArray.length <= _targetInt){ break; }
            loopCounter1Int                                 ++;
        }
        while(exhibitionTargetObjectArray.length > _targetInt){ exhibitionTargetObjectArray.pop(); }
    }
    private function GenerateSentenceVoid                   (_amount:Int){ return ""; }
    private function SortTagCounterVoid                     (){
        tagCounterStructArray.sort(function(_a:StructTagCounter, _b:StructTagCounter){ return _a.tagCounterInt - _b.tagCounterInt; });
    }
    public  function AIAutoExhibitionChangeVoid             (){
        if(finishedBool == false){
            var randomFloat         :Float                  = Math.random();
            timeAIAutoExhibitionChangeFloat                 += 0.01;
            /*
            trace(
                "randomFloat = "                                                + randomFloat                                               + " " +
                "(1.0 - timeAIAutoExhibitionChangeFloat) = "                    + (1.0 - timeAIAutoExhibitionChangeFloat)                   + " " +
                "(randomFloat > (1.0 - timeAIAutoExhibitionChangeFloat)) = "    + (randomFloat > (1.0 - timeAIAutoExhibitionChangeFloat))
            );
            */
            if(randomFloat > (1.0 - timeAIAutoExhibitionChangeFloat)){
                //trace("exhibitionTargetObjectArray.length = " + exhibitionTargetObjectArray.length);
                var randomInt       :Int                    = Math.round(Math.random()*(exhibitionTargetObjectArray.length - 1));
                ChangeExhibitionCurrentVoid                 (exhibitionTargetObjectArray[randomInt]);
                timeAIAutoExhibitionChangeFloat             = 0;
            }
        }
    }
    public  function GetExhibitionCurrentObject             (){ return exhibitionCurrentObject  ; }
}