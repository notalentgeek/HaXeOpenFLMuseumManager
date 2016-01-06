import CollectionFunction;
class CollectionUIFunctionObjectMuseum{
	public  		function new(){}
	/*A function to add museum object into its corresponding array.
	Still need to edit this function to add some tag.
	So that is mean that I need to add tagging in ObjectMuseum constructor.*/
	public static 	function AddObject(
		_collectionGlobalObject:CollectionGlobal,
		_nameAltString:String,
		_nameFullString:String,
		_parentNameAltString:String,
		_typeEnum:EnumMuseumType
	){
		var tempMuseumObject = new ObjectMuseum(_collectionGlobalObject, _nameAltString, _nameFullString, _parentNameAltString, _typeEnum);
		if(_typeEnum == EXH){
			_collectionGlobalObject.GetExhibitionObjectArray().push(tempMuseumObject);
			_collectionGlobalObject.DetermineExhibitionFullThresholdInt();
		}
		else if(_typeEnum == FLR){
			_collectionGlobalObject.GetExhibitionObjectArray().push(tempMuseumObject);
			_collectionGlobalObject.DetermineExhibitionFullThresholdInt();
		}
		else if(_typeEnum == ROM){
			_collectionGlobalObject.GetExhibitionObjectArray().push(tempMuseumObject);
			_collectionGlobalObject.DetermineExhibitionFullThresholdInt();
		}
	}
	/*This is a function to edit informations from an museum object.
	I need to add a function to edit tag.*/
	public static 	function EditObject(
		_nameAltString:String,
		_nameFullString:String,
		_parentNameAltString:String
	){
		_collectionGlobalObject.GetSelectedMuseumObject().SetNameAltStringVoid(_nameAltString);
		_collectionGlobalObject.GetSelectedMuseumObject().SetNameFullStringVoid(_nameFullString);
		if(_collectionGlobalObject.GetSelectedMuseumObject().GetTypeEnum() == EXH){ _collectionGlobalObject.GetSelectedMuseumObject().SetParentObjectVoid(CollectionFunction.FindMuseumObject(_collectionGlobalObject, EXH, _parentNameAltString)); }
		else if(_collectionGlobalObject.GetSelectedMuseumObject().GetTypeEnum() == FLR){ _collectionGlobalObject.GetSelectedMuseumObject().SetParentObjectVoid(CollectionFunction.FindMuseumObject(_collectionGlobalObject, FLR, _parentNameAltString)); }
		else if(_collectionGlobalObject.GetSelectedMuseumObject().GetTypeEnum() == ROM){ _collectionGlobalObject.GetSelectedMuseumObject().SetParentObjectVoid(CollectionFunction.FindMuseumObject(_collectionGlobalObject, ROM, _parentNameAltString)); }
	}
	public static 	function RemoveObject(_collectionGlobalObject:CollectionGlobal){
		/*Show confirmation box here.
		Actually, I need to show confirmation box for evrytime I would like to delete an object.*/
		_collectionGlobalObject.GetSelectedMuseumObject().SetMuseumModeEnumVoid(MRK_DEL);
	}
	public static 	function ResetObject(_collectionGlobalObject:CollectionGlobal){
		_collectionGlobalObject.GetSelectedMuseumObject().Reset();
	}
	public static  	function SelectObject(_collectionGlobalObject:CollectionGlobal, _museumObject:ObjectMuseum){
		_collectionGlobalObject.SetSelectedMuseumObjectVoid(CollectionFunction.FindMuseumObject(_collectionGlobalObject, _museumObject.GetTypeEnum(), _museumObject.GetNameStruct().nameAltString));
	}
}