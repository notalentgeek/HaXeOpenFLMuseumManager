import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.*;
import flash.events.*;
import haxe.ui.toolkit.containers.*;
import haxe.ui.toolkit.controls.*;
import haxe.ui.toolkit.controls.popups.*;
import haxe.ui.toolkit.controls.selection.*;
import haxe.ui.toolkit.core.*;
import haxe.ui.toolkit.core.interfaces.*;
import haxe.ui.toolkit.data.*;
import haxe.ui.toolkit.events.*;





/*==================================================
Struct that hold array for museum object.
If the museum object is a exhibition object then the child childMuseumObjectArray is empty,
    while childVisitorObjectArray is filled by visitor object.
If the museum object is other than exhibition object than the reverse applied.*/
typedef StructChild = {
    childMuseumObjectArray      :Array<ObjectMuseum>,
    childVisitorObjectArray     :Array<ObjectVisitor>
};
/*==================================================*/





/*==================================================
This struct is for combination of ListSelector object and its Text object descriptor/title.*/
typedef StructListSelectorTag = {
    listSelectorObject  :ListSelector,
    textObject          :Text
};
/*==================================================*/





/*==================================================
This struct is for any museum object.
The name alt string is made to make easier String parsing.
The name full string is made to make easier to user to understand the program.*/
typedef StructName = { 
    nameAltString                   :String,
    nameFullString                  :String
};
/*==================================================*/





/*==================================================
Struct for count how many times a visitor received the same tag object.*/
typedef StructTagCounter = { 
    tagObject                       :ObjectTag,
    tagCounterInt                   :Int
};
/*==================================================*/





/*==================================================*/
typedef StructVisitorVisitExhibition = { 
    currentExhibitionTimeInt        :Int,
    exhibitionNameAltString         :String
};
/*==================================================*/





/*==================================================
Struct for holding a combination of TextInput object and its Text object descriptor/title.*/
typedef StructTextInputTag = {
    textInputObject                 :TextInput,
    textObject                      :Text
};
/*==================================================*/





/*==================================================
This is not yet done.
The purpose is to collect data on how many times same visitor visit the same museum.
PENDING:This thing have not yet done to be processed in the player class.*/
typedef StructVisitorVisitMuseum = {
    currentVisitTimeInt             :Int,
    visitorVisitExhibitionStruct    :Array<StructVisitorVisitExhibition>,
    visitInt                        :Int
};
/*==================================================*/