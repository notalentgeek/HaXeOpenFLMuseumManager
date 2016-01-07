import CollectionEnum;
typedef StructChild                     = { childMuseumObjectArray  :Array<ObjectMuseum>    , childVisitorObjectArray       :Array<ObjectVisitor>                   };
typedef StructName                      = { nameAltString           :String                 , nameFullString                :String                                 };
typedef StructTagCounter                = { tagStruct               :StructTag              , tagCounterInt                 :Int                                    };
typedef StructTagEntry                  = { tagTypeSubEnum          :EnumTagTypeSub         , tagString                     :String                                 };
/*I decided to use struct instead of normal class on how the Tag will be implemented.*/
typedef StructTag                       = {

    tagEntry1Struct         :StructTagEntry,
    ?tagEntry2Struct        :StructTagEntry,
    ?tagEntry3Struct        :StructTagEntry,
    ?tagEntry4Struct        :StructTagEntry,
    ?tagEntry5Struct        :StructTagEntry,
    tagTypeEnum             :EnumTagType

};
typedef StructVisitorVisitExhibition    = { currentExhibitionTimeInt:Int                    , exhibitionNameAltString       :String                                 };
typedef StructVisitorVisitMuseum        = { currentVisitTimeInt     :Int                    , visitorVisitExhibitionStruct  :Array<StructVisitorVisitExhibition>    , visitInt:Int  };