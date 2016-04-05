class Tag_Object{





    /*PENDING - DONE: Create function to remove this tag object from main array. Name it RemoveThisFromMain_Tag_Object
    PENDING - DONE: Create function to add this object into main array.
    PENDING - DONE: Create function to generate company words.
    PENDING - DONE: Create the constructor.*/




    /*==================================================*/
    private var _TagAgnostic_Object         (null, null)    :TagAgnostic_Object         = null;





    private var _Global_Object              (null, null)    :Global_Object              = null;
    private var _TagFeel_Enum               (null, null)    :TagFeel_Enum               = NEUTRAL;                          /*PENDING: Create setter function to tied this variable wit its agnostic couterpart.*/
    private var _TagType_Enum               (null, null)    :TagType_Enum               = null;                             /*PENDING: Create setter function to tied this variable wit its agnostic couterpart.*/





    private var _CompanyWord_Struct_Array   (null, null)    :Array<CompanyWord_Struct>  = new Array<CompanyWord_Struct>();  /*PENDING: Create setter function to tied this variable wit its agnostic couterpart.*/
    /*==================================================*/





    /*==================================================*/
    public function new(
        __Global_Object             :Global_Object,
        __TagFeel_Enum              :TagFeel_Enum,
        __TagType_String            :TagType_Enum,
        _generalTagBool             :Bool,
        _nameOriginal_String        :String
    ):Void{

        /*Assign all paremeters.*/
        _Global_Object    = __Global_Object;
        _TagFeel_Enum               = __TagFeel_Enum;
        _TagType_Enum               = __TagType_Enum;





        /*Create this tag agnostic object.*/
        _TagAgnostic_Object = new TagAgnostic_Object();





        /*Assign parameters to agnostic object*/
        _TagAgnostic_Object.general_Bool            = _general_Bool;
        _TagAgnostic_Object._nameOriginal_String    = _nameOriginal_String;





        /*Adjust this tag object name.*/
        _TagAgnostic_Object.name_String =
            _TagAgnostic_Object._nameOriginal_String + "_" + Std.string(_TagType_Enum);




        /*Add this object into main array.*/
        AddOrRemoveThisFromMain_Tag_Object(true);

    }
    /*==================================================*/





    /*==================================================
    This is a function to add or remove this tag object from its main array.
    There are two main arrays for tag in this program.
    One array is for general tag, an array that is filled with tag with common words.
    One other array is for normal tag, an array that is filled with specific tag of exhibitions.*/
    private function AddOrRemoveThisFromMain_Tag_Object(_add_Bool:Bool):Tag_Object{

        var main_Tag_Object_Array:Array<Tag_Object> = null;
        if(_TagAgnostic_Object.general_Bool == true)
                { main_Tag_Object_Array = _Global_Object.general_Tag_Object_Array; }
        else if(_TagAgnostic_Object.general_Bool == false)
                { main_Tag_Object_Array = _Global_Object._Tag_Object_Array; }





        if(_add_Bool == true){

            if(main_MuseumAndVisitor_Object_Array.indefOf(this) == -1)
                { main_Tag_Object_Array.push(this); }

        }
        else if(_add_Bool == false)
                { main_Tag_Object_Array.remove(this); }





        return this;

    }
    /*==================================================*/





    /*==================================================
    At this moment this GenerateCompanyWord_Void() function will be executed in the main class.
    PENDING: Make this function directly executed when a tag object is made.*/
    private function GenerateCompanyWord_Void():Void{

        #if (cpp || neko || php)

            if(
                _TagType_Enum != ADJ                                        &&
                _TagType_Enum != ADV                                        &&
                _TagType_Enum != NOUN_ALIVE_CONCRETE                        &&
                _TagType_Enum != NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER
            ){

                /*PENDING: Add operating system checking, because the command for Linux, Mac, and Windows are each different.*/





                var part1_String:String     = "python3 WordnikGetPhrase.py '";              /*The main Python3 command.*/
                var part2_String:String     = _TagAgnostic_Object.nameOriginal_String;      /*The argument for running thr Python script.*/
                var part3_String:String     = "' > Phrase.txt";                             /*This terminal command is for generating .txt file that later will be processed by this program.*/
                var all_String  :String     = part1_String + part2_String + part3_String;   /*All fully funtional terminal command.*/
                /*Execute the terminal command.*/
                Sys.command(all_String);





                /*Read the .txt file.*/
                var _FileInput:FileInput = sys.io.File.read("./Phrase.txt", false);
                /*In this while loop below I am trying to read the line one by one.
                So each tag will generate like ten company words.
                Company words are the best word to accompany the tag.
                The .txt file generated before will have like ten lines.
                Which each lines is a company word that appears either in the end or in the beginning
                    of the tag word.*/
                try{

                    /*Keep reading line until there is no line to read.
                    If this while loop is returning an error than the loop is ended automatically.*/
                    while(true){

                        var received_String         :String             = _FileInput.readLine();
                        var received_String_Array   :Array<String>      = received_String.split("_");
                        var _CompanyWord_Enum       :CompanyWord_Enum   = Type.createEnum(CompanyWord_Enum, received_String_Array[0]);
                        var companyWord_String      :String             = received_String_Array[1];





                        var _CompanyWord_Struct:CompanyWord_Struct = {

                            _CompanyWord_Enum       :_CompanyWord_Enum,
                            _TagFeel_Enum           :_TagFeel_Enum,
                            companyWord_String      :companyWord_String,
                            nameOriginal_String     :_TagAgnostic_Object.nameOriginal_String

                        };





                        _CompanyWord_Struct_Array.push(_CompanyWord_Struct);

                    }

                }





                catch(_exception:EoF){}





                _FileInput.close();

            }

        #end

    }
    /*==================================================*/





    /*==================================================*/
    private function set__Feel_Enum(__Feel_Enum:TagFeel_Enum):TagFeel_Enum{

        _TagFeel_Enum = __Feel_Enum;
        _TagAgnostic_Object.feel_String = Std.string(_TagFeel_Enum);
        return _TagFeel_Enum;

    }
    /*==================================================*/





    /*==================================================*/
    private function set__Type_Enum(__Type_Enum):Type_Enum{

        _Tag_Enum = __Tag_Enum;
        _TagAgnostic_Object.type_String = Std.string(_Tag_Enum);
        return _Type_Enum;

    }
    /*==================================================*/





}