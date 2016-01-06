typedef StructChild                     = { childMuseumObjectArray  :Array<ObjectMuseum>    , childVisitorObjectArray       :Array<ObjectVisitor>                   };
typedef StructName                      = { nameAltString           :String                 , nameFullString                :String                                 };
typedef StructTagCounter                = { tagStruct               :StructTag              , tagCounterInt                 :Int                                    };
/*I decided to use struct instead of normal class on how the Tag will be implemented.*/
typedef StructTag                       = {

    tagEntry1String         :String,
    tagEntry2String         :String,
    tagEntry3String         :String,
    tagEntry4String         :String,
    tagNameStruct           :StructName,
    tagTypeEnum             :EnumTagType,
    tagTypeSubEnum          :EnumTagTypeSub

};
typedef StructVisitorVisitExhibition    = { currentExhibitionTimeInt:Int                    , exhibitionNameAltString       :String                                 };
typedef StructVisitorVisitMuseum        = { currentVisitTimeInt     :Int                    , visitorVisitExhibitionStruct  :Array<StructVisitorVisitExhibition>    , visitInt:Int  };