import CollectionEnum;
typedef StructChild = { 
    childMuseumObjectArray:Array<ObjectMuseum>,
    childVisitorObjectArray:Array<ObjectVisitor>
};
typedef StructName = { 
    nameAltString:String,
    nameFullString:String
};
typedef StructTagCounter = { 
    tagObject:ObjectTag,
    tagCounterInt:Int
};
typedef StructVisitorVisitExhibition = { 
    currentExhibitionTimeInt:Int,
    exhibitionNameAltString:String
};
typedef StructVisitorVisitMuseum = { /*PENDING:*/
    currentVisitTimeInt:Int,
    visitorVisitExhibitionStruct:Array<StructVisitorVisitExhibition>,
    visitInt:Int
};