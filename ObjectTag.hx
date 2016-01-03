import      CollectionStruct;
class       ObjectTag                                       {
    private var nameStruct          :StructName             = {nameAltString:"", nameFullString:""};
    private var tagStringArray      :Array<String>          = new Array<String>();
    private var typeString          :String                 = "";
    public  function new                                    (
        _nameAltString              :String                 ,
        _nameFullString             :String                 ,
        _tagStringArray             :Array<String>          ,
        _typeString                 :String
    ){
        SetNameAltStringVoid                                (_nameAltString     );
        SetNameFullStringVoid                               (_nameFullString    );
        SetTagStringArrayVoid                               (_tagStringArray    );
        SetTypeStringVoid                                   (_typeString        );
    }
    public      function GetNameStruct                      ()                                                      { return                    nameStruct                  ; }
    public      function GetTagStringArray                  ()                                                      { return                    tagStringArray              ; }
    public      function GetTypeString                      ()                                                      { return                    typeString                  ; }
    public      function SetNameAltStringVoid               (_nameAltString             :String                 )   { nameStruct.nameAltString  = _nameAltString            ; }
    public      function SetNameFullStringVoid              (_nameFullString            :String                 )   { nameStruct.nameFullString = _nameFullString           ; }
    public      function SetTagStringArrayVoid              (_tagStringArray            :Array<String>          )   { tagStringArray            = _tagStringArray           ; }
    public      function SetTypeStringVoid                  (_typeString                :String                 )   { typeString                = _typeString               ; }
}