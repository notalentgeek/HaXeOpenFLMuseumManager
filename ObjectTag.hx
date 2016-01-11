import CollectionEnum;
class ObjectTag{
    private static var collectionGlobalObject:CollectionGlobal = null;
    private static var adjectiveString:String = "";
    private static var adverbString:String = "";
    private static var feelEnum:EnumTagFeelType = null;
    private static var generalTagBool:Bool = true;
    private static var nameString:String = "";
    private static var nounPosString:String = "";
    private static var nounSPosString:String = "";
    private static var nounSString:String = "";
    private static var nounString:String = "";
    private static var typeEnum:EnumTagType = null;
    private static var verb1String:String = "";
    private static var verb2String:String = "";
    private static var verb3String:String = "";
    private static var verbIngString:String = "";
    private static var verbSString:String = "";
    public function new(
        _collectionGlobalObject:CollectionGlobal,
        _feelEnum:EnumTagFeelType,
        _generalTagBool:Bool,
        _nameString:String,
        _typeEnum:EnumTagType
    ){
        collectionGlobalObject = _collectionGlobalObject;
        feelEnum = _feelEnum;
        generalTagBool = _generalTagBool;
        typeEnum = _typeEnum;
        nameString = _nameString + Std.string(typeEnum); /*The most basic word from this tag plus additional suffix from typeEnum.*/
        AddToArrayVoid();
    }
    private function AddToArrayVoid(){
        if(generalTagBool == true){
            collectionGlobalObject.GetTagGeneralObjectArray().push(this);
            collectionGlobalObject.GetTagObjectArray().remove(this);
        }
        else if(generalTagBool == false){
            collectionGlobalObject.GetTagGeneralObjectArray().remove(this);
            collectionGlobalObject.GetTagObjectArray().push(this);
        }
    }
    public static function GetAdjectiveString(){ return adjectiveString; }
    public static function GetAdverbString(){ return adverbString; }
    public function GetFeelEnum(){ return feelEnum; }
    public static function GetGeneralTagBool(){ return generalTagBool; }
    public function GetNameString(){ return nameString; }
    public static function GetNounPosString(){ return nounPosString; }
    public static function GetNounSPosString(){ return nounSPosString; }
    public static function GetNounSString(){ return nounSString; }
    public static function GetNounString(){ return nounString; }
    public function GetTypeEnum(){ return typeEnum; }
    public static function GetVerb1String(){ return verb1String; }
    public static function GetVerb2String(){ return verb2String; }
    public static function GetVerb3String(){ return verb3String; }
    public static function GetVerbIngString(){ return verbIngString; }
    public static function GetVerbSString(){ return verbSString; }
    public function SetAdjectiveStringVoid(_adjectiveString:String){ adjectiveString = _adjectiveString; }
    public function SetAdverbStringVoid(_adverbString:String){ adverbString = _adverbString; }
    public function SetFeelEnumVoid(_feelEnum:EnumTagFeelType){ feelEnum = _feelEnum; }
    public function SetGeneralTagBoolVoid(_generalTagBool:Bool){
        generalTagBool = _generalTagBool;
        AddToArrayVoid();
    }
    public function SetNameStringObject(_nameString:String){ nameString = _nameString; return this; }
    public function SetNounPosStringObject(_nounPosString:String){ nounPosString = _nounPosString; return this; }
    public function SetNounSPosStringObject(_nounSPosString:String){ nounSPosString = _nounSPosString; return this; }
    public function SetNounSStringObject(_nounSString:String){ nounSString = _nounSString; return this; }
    public function SetNounStringObject(_nounString:String){ nounString = _nounString; return this; }
    public function SetTypeEnumVoid(_typeEnum:EnumTagType){ typeEnum = _typeEnum; }
    public function SetVerb1StringObject(_verb1String:String){ verb1String = _verb1String; return this; }
    public function SetVerb2StringObject(_verb2String:String){ verb2String = _verb2String; return this; }
    public function SetVerb3StringObject(_verb3String:String){ verb3String = _verb3String; return this; }
    public function SetVerbIngStringObject(_verbIngString:String){ verbIngString = _verbIngString; return this; }
    public function SetVerbSStringObject(_verbSString:String){ verbSString = _verbSString; return this; }
}