import Enum_Collection;





/*==================================================
Struct that hold array for museum object.
If the museum object is a exhibition object then the child child_Museum_Object_Array is empty,
    while child_Visitor_Object_Array is filled by visitor object.
If the museum object is other than exhibition object than the reverse applied.*/
typedef Child_Struct = {

    child_Museum_Object_Array   :Array<Museum_Object>,
    child_Visitor_Object_Array  :Array<Visitor_Object>

};
/*==================================================*/





/*==================================================
This struct is for storing data of company words taken from Wordnik API.*/
typedef CompanyWord_Struct = {

    _CompanyWord_Enum       :CompanyWord_Enum,
    _TagFeel_Enum           :TagFeel_Enum,
    companyWord_String      :String,
    nameOriginal_String     :String

};
/*==================================================*/





/*==================================================
This struct is for combination of ListSelector object and its Text object descriptor/title.*/
typedef ListSelector_Struct = {

    _ListSelector   :ListSelector,
    _Text           :Text

};
/*==================================================*/





/*==================================================
This struct is for any museum object.
The name alt string is made to make easier String parsing.
The name full string is made to make easier to user to understand the program.*/
typedef Name_Struct = {
    alt_String      :String,
    full_String     :String
};
/*==================================================*/





/*==================================================
Struct for count how many times a visitor received the same tag object.*/
typedef TagCounter_Struct = {
    _Tag_Object     :ObjectTag,
    tagCounter_Int  :Int
};
/*==================================================*/





/*==================================================
Struct for holding a combination of TextInput object and its Text object descriptor/title.*/
typedef TextInput_Struct = {
    _Text_Input     :TextInput,
    _Text           :Text
};
/*==================================================*/





/*==================================================*/
typedef VisitorVisitExhibition_Struct = {
    currentExhibitionTime_Int   :Int,
    exhibitionNameAlt_String    :String
};
/*==================================================*/





/*==================================================
This is not yet done.
The purpose is to collect data on how many times same visitor visit the same museum.
PENDING:This thing have not yet done to be processed in the player class.*/
typedef VisitorVisitMuseum_Struct = {
    _VisitorVisitExhibition_Struct_Array    :Array<VisitorVisitExhibition_Struct>,
    currentMuseumTime_Int                   :Int,
    museumVisitCount_Int                    :Int
};
/*==================================================*/
