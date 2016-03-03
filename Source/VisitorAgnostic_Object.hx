class VisitorAgnostic_Object extends MuseumAndVisitorAgnostic_Object{





    private var aiNextChanceChangeExhibition_Float                              (null, null)        :Float          = -1.0;
    private var amountOfPreviousVisitedExhibition_Int                           (null, null)        :Int            = -1;
    private var amountTargetExhibition_Int                                      (null, null)        :Int            = -1;
    private var explanationCurrent_String                                       (null, null)        :String         = "";
    private var explanationCurrentIndex_Int                                     (null, null)        :Int            = -1;
    private var finished_Bool                                                   (null, null)        :Bool           = null;
    private var indexGlobal_Int                                                 (null, null)        :Int            = -1;
    private var indexLocal_Int                                                  (null, null)        :Int            = -1;
    private var name_String                                                     (null, null)        :String         = "";
    private var score_Int                                                       (null, null)        :Int            = -1;
    private var sentenceCurrent_String                                          (null, null)        :String         = "";
    private var timeCurrentExhibition_Int                                       (null, null)        :Int            = -1;
    private var timeCurrentMuseumVisit_Int                                      (null, null)        :Int            = -1;
    private var visitedCorrectExhibition_Bool                                   (null, null)        :Bool           = null;



    private var explanation_String_Array                                        (null, null)        :Array<String>  = null; /*PENDING: Put this in super class.*/
    private var sentence_String_Array                                           (null, null)        :Array<String>  = null;



    private var exhibitionCurrentNameAlt_String                                 (null, null)        :String         = "";
    private var floorCurrentNameAlt_String                                      (null, null)        :String         = "";
    private var roomCurrentNameAlt_String                                       (null, null)        :String         = "";
    private var visitorMode_String                                              (null, null)        :String         = "";



    private var exhibitionTargetNameAlt_String_Array                            (null, null)        :Array<String>  = null;
    private var exhibitionVisitedNameAlt_String_Array                           (null, null)        :Array<String>  = null;
    private var tagCounter_Int_Array                                            (null, null)        :Array<Int>     = null;
    private var tagCounterTagName_String_Array                                  (null, null)        :Array<String>  = null;
    private var tagName_String_Array                                            (null, null)        :Array<String>  = null; /*PENDING: Put this in super class.*/
    private var visitorVisitExhibitionNameAlt_String_Array                      (null, null)        :Array<String>  = null;
    private var visitorVisitExhibitionTime_Int_Array                            (null, null)        :Array<Int>     = null;
    private var visitorVisitMuseumTime_Int_Array                                (null, null)        :Array<Int>     = null;
    private var visitorVisitMuseumVisit_Int_Array                               (null, null)        :Array<Int>     = null;





    /*PENDING: Put this function in the super class.*/
    private function Reset_MuseumAndVisitor_Object():MuseumAndVisitor_Object{

        amountOfPreviousVisitedExhibition_Int   = -1;
        amountTargetExhibition_Int              = -1;
        explanationCurrent_String               = "";
        explanationCurrentIndex_Int             = -1;
        finished_Bool                           = null;
        indexGlobal_Int                         = -1;
        indexLocal_Int                          = -1;
        name_String                             = "";
        score_Int                               = -1;
        sentenceCurrent_String                  = "";
        timeAIAutoExhibitionChange_Float        = -1.0;
        timeCurrentExhibition_Int               = -1;
        timeCurrentMuseumVisit_Int              = -1;
        visitedCorrectExhibition_Bool           = null; 

        explanation_String_Array                = CollectionStaticFunction_Object.Clear_T_Array(explanation_String_Array);
        sentence_String_Array                   = CollectionStaticFunction_Object.Clear_T_Array(sentence_String_Array);

        return this;

    }





    public function new(
        _amountOfPreviousVisitedExhibition_Int  :Int,
        _amountTargetExhibition_Int             :Int
    ):Void{

        amountOfPreviousVisitedExhibition_Int   = _amountOfPreviousVisitedExhibition_Int;
        amountTargetExhibition_Int              = _amountTargetExhibition_Int;

    }





}