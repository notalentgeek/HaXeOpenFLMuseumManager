/*This is obsolete now.
Use the tag struct instead.*/
/*
import      CollectionEnum;
import      CollectionStruct;
    private var feelEnum            :EnumTagFeelType = NEUTRAL;
    private var nameStruct          :StructName = {nameAltString:"", nameFullString:""};
    private var tagStructArray      :Array<StructTag> = new Array<StructTag>();
    private var typeEnum            :EnumTagType = null;
class       ObjectTag                                       {
    public  function new                                    (
        _feelEnum                   :EnumTagFeelType,
        _nameAltString              :String,
        _nameFullString             :String,
        _tagStructArray             :Array<StructTag>,
        _typeEnum                   :EnumTagType

    ){
        SetFeelEnumVoid                                     (_feelEnum          );
        SetNameAltStringVoid                                (_nameAltString     );
        SetNameFullStringVoid                               (_nameFullString    );
        SetTagStringArrayVoid                               (_tagStructArray    );
        SetTypeEnumVoid                                     (_typeEnum          );
    }
    public      function GetFeelEnum                        ()                                                      { return feelEnum; }
    public      function GetNameStruct                      ()                                                      { return nameStruct; }
    public      function GetTagStructArray                  ()                                                      { return tagStructArray; }
    public      function GetTypeEnum                        ()                                                      { return typeEnum; }
    public      function SetFeelEnumVoid                    (_feelEnum                  :EnumTagFeelType        )   { feelEnum = _feelEnum ; }
    public      function SetNameAltStringVoid               (_nameAltString             :String                 )   { nameStruct.nameAltString  = _nameAltString ; }
    public      function SetNameFullStringVoid              (_nameFullString            :String                 )   { nameStruct.nameFullString = _nameFullString ; }
    public      function SetTagStructArrayVoid              (_tagStructArray            :Array<StructTag>       )   { tagStructArray = _tagStructArray ; }
    public      function SetTypeEnumVoid                    (_typeEnum                  :EnumTagType            )   { typeEnum = _typeEnum ; }
}
*/