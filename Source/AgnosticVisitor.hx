class AgnosticVisitor{

	private var explanation_String_Array 										:Array<String> 	= null;
	private var explanationCurrent_String 										:String 		= "";
	private var explanationCurrentIndex_Int 									:Int 			= -1;
	private var finish_Bool 													:Bool 			= null;
	private var indexGlobal_Int 												:Int 			= -1;
	private var indexLocal_Int 													:Int 			= -1;
	private var name_String 													:String 		= "";
	private var score_Int 														:Int 			= -1;
	private var sentence_String_Array 											:Array<String> 	= null;
	private var target_Int 														:Int 			= -1;
	private var timeAIAutoExhibitionChange_Float 								:Float 			= -1.0
	private var timeCurrentExhibition_Int 										:Int 			= -1; 		/*PENDING.*/
	private var timeCurrentMuseumVisit_Int 										:Int 			= -1; 		/*PENDING.*/

	private var exhibitionCurrentNameAlt_String 								:String  		= "";
	private var exhibitionTargetNameAlt_String_Array							:Array<String> 	= null;
	private var exhibitionVisitedNameAlt_String_Array							:Array<String> 	= null;
	private var floorCurrentNameAlt_String 										:String  		= "";
	private var roomCurrentNameAlt_String 										:String  		= "";
	private var tagCounter_Int_Array 											:Array<Int> 	= null;
	private var tagCounterName_String_Array 									:Array<String> 	= null;
	private var tagName_String_Array											:Array<String> 	= null;
	private var visitorVisitExhibitionTime_Int_Array 							:Array<Int> 	= null;
	private var visitorVisitExhivitionExhibitionNameAlt_String_Array 			:Array<String> 	= null;
	private var visitorVisitMuseumTime_Int_Array 								:Array<Int> 	= null;
	private var visitorVisitMuseumVisit_Int_Array 								:Array<Int> 	= null;
	private var visitorVisitMuseumVisitorVisitExhibitionNameAlt_String_Array 	:Array<String> 	= null;
	private var visitorVisitMuseumVisitorVisitExhibitionTime_Int_Array 			:Array<Int> 	= null;
	private var visitorMode_String 												:String 		= "";

}