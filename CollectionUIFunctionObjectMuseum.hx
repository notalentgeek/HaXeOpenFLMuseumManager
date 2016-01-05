import CollectionFunction;
class CollectionUIFunctionObjectMuseum{
	public  		function new(){}
	public static 	function AddObject(){}
	public static 	function EditObject(){}
	public static 	function RemoveObject(){}
	public static 	function ResetObject(_collectionGlobalObject:CollectionGlobal){
		_collectionGlobalObject.GetSelectedMuseumObject().Reset();
	}
	public static  	function SelectObject(_collectionGlobalObject:CollectionGlobal, _objectMuseum:ObjectMuseum){
		_collectionGlobalObject.SetSelectedMuseumObjectVoid(CollectionFunction.FindMuseumObject(_collectionGlobalObject, _objectMuseum.GetTypeEnum(), _objectMuseum.GetNameStruct().nameAltString));
	}
}