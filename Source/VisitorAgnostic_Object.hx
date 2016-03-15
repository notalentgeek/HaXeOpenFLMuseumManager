class VisitorAgnostic_Object extends MuseumAndVisitorAgnostic_Object{










    private var aiNextChanceChangeExhibition_Float                              (null, null)        :Float          = -1.0;
    private var amountOfPreviousVisitedExhibitionCheck_Int                      (null, null)        :Int            = -1;
    private var amountTargetExhibition_Int                                      (null, null)        :Int            = -1;
    private var explanationCurrent_String                                       (null, null)        :String         = "";
    private var explanationCurrentIndex_Int                                     (null, null)        :Int            = -1;
    private var finished_Bool                                                   (null, null)        :Bool           = null;
    private var name_String                                                     (null, null)        :String         = "";
    private var score_Int                                                       (null, null)        :Int            = -1;
    private var sentenceCurrent_String                                          (null, null)        :String         = "";
    private var timeCurrentExhibition_Int                                       (null, null)        :Int            = -1;
    private var timeCurrentMuseumVisit_Int                                      (null, null)        :Int            = -1;
    private var visitedCorrectExhibition_Bool                                   (null, null)        :Bool           = null;



    private var sentence_String_Array                                           (null, null)        :Array<String>  = null;



    private var exhibitionCurrentNameAlt_String                                 (null, null)        :String         = "";
    private var floorCurrentNameAlt_String                                      (null, null)        :String         = "";
    private var roomCurrentNameAlt_String                                       (null, null)        :String         = "";
    private var visitorMode_String                                              (null, null)        :String         = "";



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





    private function Reset_VisitorAgnostic_Object():Visitor_Object{

        super.Reset_MuseumAndVisitor_Object();

        explanationCurrent_String                   = "";
        explanationCurrentIndex_Int                 = -1;
        finished_Bool                               = null;
        score_Int                                   = 0;
        sentenceCurrent_String                      = "";
        timeAIAutoExhibitionChange_Float            = 0.0;
        timeCurrentExhibition_Int                   = 0;
        timeCurrentMuseumVisit_Int                  = 0;
        visitedCorrectExhibition_Bool               = null; 

        sentence_String_Array                       = CollectionStaticFunction_Object.Clear_T_Array(sentence_String_Array);

        return this;

    }





}