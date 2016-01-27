import CollectionEnum;
class ObjectTag{
    private var collectionGlobalObject:CollectionGlobal = null;
    private var adjectiveString:String = "";
    private var adverbString:String = "";
    private var feelEnum:EnumTagFeelType = null;
    private var generalTagBool:Bool = true;
    private var nameString:String = "";
    private var nounPosString:String = "";
    private var nounSPosString:String = "";
    private var nounSString:String = "";
    private var nounString:String = "";
    private var typeEnum:EnumTagType = null;
    private var verb1String:String = "";
    private var verb2String:String = "";
    private var verb3String:String = "";
    private var verbIngString:String = "";
    private var verbSString:String = "";
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
        nameString = _nameString + "_" + Std.string(typeEnum); /*The most basic word from this tag plus additional suffix from typeEnum.*/
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
    public function GetAdjectiveString(){ return adjectiveString; }
    public function GetAdverbString(){ return adverbString; }
    public function GetFeelEnum(){ return feelEnum; }
    public function GetGeneralTagBool(){ return generalTagBool; }
    public function GetNameString(){ return nameString; }
    public function GetNounPosString(){ return nounPosString; }
    public function GetNounSPosString(){ return nounSPosString; }
    public function GetNounSString(){ return nounSString; }
    public function GetNounString(){ return nounString; }
    public function GetTypeEnum(){ return typeEnum; }
    public function GetVerb1String(){ return verb1String; }
    public function GetVerb2String(){ return verb2String; }
    public function GetVerb3String(){ return verb3String; }
    public function GetVerbIngString(){ return verbIngString; }
    public function GetVerbSString(){ return verbSString; }
    public function RemoveFromArray(){

        if     (generalTagBool == true ){ trace("LOL");collectionGlobalObject.GetTagGeneralObjectArray()     .remove(this); }
        else if(generalTagBool == false){ trace("LOL1");collectionGlobalObject.GetTagObjectArray()            .remove(this); }

        
    }
    public function SetAdjectiveStringObject(_adjectiveString:String){ adjectiveString = _adjectiveString; return this; }
    public function SetAdverbStringObject(_adverbString:String){ adverbString = _adverbString; return this; }
    public function SetFeelEnumObject(_feelEnum:EnumTagFeelType){ feelEnum = _feelEnum; return this; }
    public function SetGeneralTagBoolObject(_generalTagBool:Bool){
        generalTagBool = _generalTagBool;
        AddToArrayVoid();
        return this;
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