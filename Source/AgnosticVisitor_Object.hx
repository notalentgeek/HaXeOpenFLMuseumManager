class AgnosticVisitor{

    private var explanationCurrent_String                                                           :String         = "";
    private var explanationCurrentIndex_Int                                                         :Int            = -1;
    private var finish_Bool                                                                         :Bool           = null;
    private var indexLocal_Int                                                                      :Int            = -1;
    private var score_Int                                                                           :Int            = -1;
    private var sentenceAmount_Int                                                                  :Int            = -1;
    private var timeAIAutoExhibitionChange_Float                                                    :Float          = -1.0;
    private var timeCurrentExhibition_Int                                                           :Int            = -1;
    private var timeCurrentMuseumVisit_Int                                                          :Int            = -1;
    public  var indexGlobal_Int                                                 (null, default)     :Int            = -1;
    public  var name_String                                                     (null, default)     :String         = "";



    private var explanation_String_Array                                                            :Array<String>  = null;
    private var sentence_String_Array                                                               :Array<String>  = null;



    private var exhibitionCurrentNameAlt_String                                                     :String         = "";
    private var floorCurrentNameAlt_String                                                          :String         = "";
    private var roomCurrentNameAlt_String                                                           :String         = "";
    public  var visitorMode_String                                              (null, default)     :String         = "";



    private var exhibitionTargetNameAlt_String_Array                                                :Array<String>  = null;
    private var exhibitionVisitedNameAlt_String_Array                                               :Array<String>  = null;
    private var tagCounter_Int_Array                                                                :Array<Int>     = null;
    private var tagCounterName_String_Array                                                         :Array<String>  = null;
    private var tagName_String_Array                                                                :Array<String>  = null;
    private var visitorVisitMuseum_VisitorVisitExhibitionNameAlt_String_Array                       :Array<String>  = null;
    private var visitorVisitMuseum_VisitorVisitExhibitionTime_Int_Array                             :Array<Int>     = null;
    private var visitorVisitMuseumTime_Int_Array                                                    :Array<Int>     = null;
    private var visitorVisitMuseumVisit_Int_Array                                                   :Array<Int>     = null;





    public function new(){}





}