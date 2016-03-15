class VisitorAgnostic_Object extends MuseumAndVisitorAgnostic_Object{










    private var aiNextChanceChangeExhibition_Float                              (null, null)        :Float          = 0.0;
    private var amountOfPreviousVisitedExhibitionCheck_Int                      (null, null)        :Int            = null;
    private var amountTargetExhibition_Int                                      (null, null)        :Int            = null;
    private var explanationCurrent_String                                       (null, null)        :String         = null;
    private var explanationCurrentIndex_Int                                     (null, null)        :Int            = null;
    private var finished_Bool                                                   (null, null)        :Bool           = false;
    private var name_String                                                     (null, null)        :String         = null;
    private var score_Int                                                       (null, null)        :Int            = 0;
    private var sentenceCurrent_String                                          (null, null)        :String         = null;
    private var timeCurrentExhibition_Int                                       (null, null)        :Int            = 0;
    private var timeCurrentMuseumVisit_Int                                      (null, null)        :Int            = 0;
    private var visitedCorrectExhibition_Bool                                   (null, null)        :Bool           = null;



    private var sentence_String_Array                                           (null, null)        :Array<String>  = null;



    private var exhibitionCurrentNameAlt_String                                 (null, null)        :String         = "EXH_LOB";
    private var floorCurrentNameAlt_String                                      (null, null)        :String         = null;
    private var roomCurrentNameAlt_String                                       (null, null)        :String         = null;
    private var visitorMode_String                                              (null, null)        :String         = "SOFTWARE_MANUAL";



    private var exhibitionTargetNameAlt_String_Array                            (null, null)        :Array<String>  = null;
    private var exhibitionVisitedNameAlt_String_Array                           (null, null)        :Array<String>  = null;
    private var tagCounter_Int_Array                                            (null, null)        :Array<Int>     = null;
    private var tagCounterTagName_String_Array                                  (null, null)        :Array<String>  = null;
    private var visitorVisitExhibitionNameAlt_String_Array                      (null, null)        :Array<String>  = null;
    private var visitorVisitExhibitionTime_Int_Array                            (null, null)        :Array<Int>     = null;
    private var visitorVisitMuseumTime_Int_Array                                (null, null)        :Array<Int>     = null;
    private var visitorVisitMuseumVisit_Int_Array                               (null, null)        :Array<Int>     = null;










    public function new(
        _amountOfPreviousVisitedExhibitionCheck_Int :Int,
        _amountTargetExhibition_Int                 :Int
    ):Void{

        super();

        amountOfPreviousVisitedExhibitionCheck_Int  = _amountOfPreviousVisitedExhibitionCheck_Int;
        amountTargetExhibition_Int                  = _amountTargetExhibition_Int;

    }










    /*This class has these variables.
    aiNextChanceChangeExhibition_Float              CHANGE  to 0.0.
    amountOfPreviousVisitedExhibitionCheck_Int      NO      need to change.
    amountTargetExhibition_Int                      NO      need to change.
    exhibitionCurrentNameAlt_String                 CHANGE  to "EXH_LOB".
    exhibitionTargetNameAlt_String_Array            CHANGE  empty array.
    exhibitionVisitedNameAlt_String_Array           CHANGE  empty array.
    explanationCurrent_String                       CHANGE  to null.
    explanationCurrentIndex_Int                     CHANGE  to null.
    finished_Bool                                   CHANGE  to false.
    floorCurrentNameAlt_String                      CHANGE  to null.
    name_String                                     NO      need to change.
    roomCurrentNameAlt_String                       CHANGE  to null.
    score_Int                                       CHANGE  to 0.
    sentence_String_Array                           CHANGE  empty array.
    sentenceCurrent_String                          CHANGE  to null.
    tagCounter_Int_Array                            CHANGE  empty array.
    tagCounterTagName_String_Array                  CHANGE  empty array.
    timeCurrentExhibition_Int                       CHANGE  to 0.
    timeCurrentMuseumVisit_Int                      CHANGE  to 0.
    visitedCorrectExhibition_Bool                   CHANGE  to null.
    visitorMode_String                              CHANGE  to "SOFTWARE_MANUAL".
    visitorVisitExhibitionNameAlt_String_Array      CHANGE  empty array.
    visitorVisitExhibitionTime_Int_Array            CHANGE  empty array.
    visitorVisitMuseumTime_Int_Array                CHANGE  empty array.
    visitorVisitMuseumVisit_Int_Array               CHANGE  empty array.
    PENDING: Check what will happened if an object is null to String agnostic variable.*/
    private function Reset_VisitorAgnostic_Object():Visitor_Object{

        super.Reset_MuseumAndVisitor_Object();



        aiNextChanceChangeExhibition_Float          = 0.0;
        exhibitionCurrentNameAlt_String             = "EXH_LOB";
        exhibitionTargetNameAlt_String_Array        = CollectionStaticFunction_Object.Clear_T_Array(exhibitionTargetNameAlt_String_Array);
        exhibitionVisitedNameAlt_String_Array       = CollectionStaticFunction_Object.Clear_T_Array(exhibitionVisitedNameAlt_String_Array);
        explanationCurrent_String                   = null;
        explanationCurrentIndex_Int                 = null;
        finished_Bool                               = false;
        floorCurrentNameAlt_String                  = null;
        roomCurrentNameAlt_String                   = null;
        score_Int                                   = 0;
        sentence_String_Array                       = CollectionStaticFunction_Object.Clear_T_Array(sentence_String_Array);
        sentenceCurrent_String                      = null;
        tagCounter_Int_Array                        = CollectionStaticFunction_Object.Clear_T_Array(tagCounter_Int_Array);
        tagCounterTagName_String_Array              = CollectionStaticFunction_Object.Clear_T_Array(tagCounterTagName_String_Array);
        timeCurrentExhibition_Int                   = 0;
        timeCurrentMuseumVisit_Int                  = 0.
        visitedCorrectExhibition_Bool               = null;
        visitorMode_String                          = "SOFTWARE_MANUAL"
        visitorVisitExhibitionNameAlt_String_Array  = CollectionStaticFunction_Object.Clear_T_Array(visitorVisitExhibitionNameAlt_String_Array);
        visitorVisitExhibitionTime_Int_Array        = CollectionStaticFunction_Object.Clear_T_Array(visitorVisitExhibitionTime_Int_Array);
        visitorVisitMuseumTime_Int_Array            = CollectionStaticFunction_Object.Clear_T_Array(visitorVisitMuseumTime_Int_Array);
        visitorVisitMuseumVisit_Int_Array           = CollectionStaticFunction_Object.Clear_T_Array(visitorVisitMuseumVisit_Int_Array);



        return this;

    }









}