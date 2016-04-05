class Global_Object{





    /*==================================================
    PENDING: At this moment I have no idea yet on how/where to put deleted floor museum object.
    PENDING: Change every deleted exhibition object into archive room object array.
    PENDING: Change every deleted room object into archive floor object array.
    PENDING: Change every finished and deleted visitor into archive exhibition object array.
    PENDING: Change this class name from Global_Object.hx into Global_Object.hx*/
    /*Absolute layout object for all object museum buttons and all visitor object buttons.*/
    private var _Absolute(null, null):Absolute = null;
    /*Main user interface when the program first starts.*/
    private var _IDisplayObject(null, null):IDisplayObject = null;
    /*Specific tag object array.*/
    private var _Tag_Object_Array(null, null):Array<Tag_Object> = new Array<Tag_Object>();
    /*A array to hold all visitor.*/
    private var _Visitor_Object_Array(null, null):Array<Visitor_Object> = new Array<Visitor_Object>();4
    /*A pseudo museum object archive exhibition object for storing deleted or finished visitor.*/
    private var archiveExhibition_Museum_Object(null, null):Museum_Object = null;
    /*A pseudo museum object archive floor object for storing deleted room museum object.*/
    private var archiveFloor_Museum_Object(null, null):Museum_Object = null;
    /*A pseudo museum object archive room object for storing deleted exhibition museum object.*/
    private var archiveRoom_Museum_Object(null, null):Museum_Object = null;
    /*An array to hold all the exhibition objects.*/
    private var exhibition_Museum_Object_Array(null, null):Array<Museum_Object> = new Array<Museum_Object>();
    /*An array to hold all the floor objects.*/
    private var floor_Museum_Object_Array(null, null):Array<Museum_Object> = new Array<Museum_Object>();
    /*Amount of visitor necessary so that a museum object can be defined as full capacity.*/
    private var fullThreshold_Int(null, null):Int = 0;
    /*This array contains common words that often to be put as tag in museum object.*/
    private var general_Tag_Object_Array(null, null):Array<Tag_Object> = new Array<Tag_Object>();
    /*Visitor index, this variable will increment one for everytime a visitor is added to the scene.*/
    private var indexGlobalVisitor_Int(null, null):Int = 0;
    /*Another pseudo museum object that holds visitor before they visit their first exhibition.*/
    private var lobby_Museum_Object(null, null):Museum_Object = null;
    /*Variable to define offset on museum buttons.*/
    private var museumUIOffset_Int(null, null):Int = 5;
    /*An array to hold all the room objects.*/
    private var room_Museum_Object_Array(null, null):Array<Museum_Object> = new Array<Museum_Object>();
    /*==================================================*/





    /*==================================================
    Constructor.*/
    public function new():Void{

        /*In this constructor I only put on to initialize the pseudo museum objects.
        PENDING - DONE: Please add archive for floor and room object museum.*/
        archiveExhibition_Museum_Object     = new Museum_Object(this, ["No explanation."], "EXH_ARC", "Exhibition Archive", "ROM_ARC", new Array<Tag_Object>(), EXH);
        archiveFloor_Museum_Object          = new Museum_Object(this, ["No explanation."], "FLR_ARC", "Floor Archive", "XXX_XXX", new Array<Tag_Object>(), FLR);
        archiveRoom_Museum_Object           = new Museum_Object(this, ["No explanation."], "ROM_ARC", "Room Archive", "FLR_ARC", new Array<Tag_Object>(), ROM);

    }
    /*==================================================*/





    /*==================================================
    A function to determine what number makes a museum object is full.*/
    public function DetermineFullThreshold_Int():Int{

        /*This can be done by comparing the amount of exhibition that visitor can visit and total amount of visitor.
        PENDING: Change so that this does not make count to the visitors that have finished visiting the museum.*/
        if(exhibition_Museum_Object_Array.length >= _Visitor_Object_Array.length){

            fullThreshold_Int =
                Math.ceil(exhibition_Museum_Object_Array.length/_Visitor_Object_Array.length);

        }
        else if(exhibition_Museum_Object_Array.length < _Visitor_Object_Array.length){

            fullThreshold_Int =
                Math.ceil(_Visitor_Object_Array.length/exhibition_Museum_Object_Array.length);

        }





        return fullThreshold_Int;

    }
    /*==================================================*/





    /*==================================================
    A function to increament the the global visitor index.*/
    public function IncrementIndexGlobalVisitor_Int():Int{

        /*I got a problem here of which I need to return a value then increment the value.
        The solution is to copy the integer variable, incremenet the global index value, 
            and then return the copied value.*/
        var tempIndexGlobalVisitorInt:Int = indexGlobalVisitor_Int;
        indexGlobalVisitor_Int ++;





        return tempIndexGlobalVisitorInt;

    }
    /*==================================================*/





}