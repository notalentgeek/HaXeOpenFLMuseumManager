import CollectionFunction;
class CollectionUIFunctionObjectMuseum{
	public  		function new(){}
	public static 	function AddObject(){}
	public static 	function EditObject(){}
	public static 	function RemoveObject(){
		/*Show confirmation box here.
		Actually, I need to show confirmation box for evrytime I would like to delete an object.*/
		_collectionGlobalObject.SetMarkForDeleteBool(true);
	}
	public static 	function ResetObject(_collectionGlobalObject:CollectionGlobal){
		_collectionGlobalObject.GetSelectedMuseumObject().Reset();
	}
	public static  	function SelectObject(_collectionGlobalObject:CollectionGlobal, _objectMuseum:ObjectMuseum){
		_collectionGlobalObject.SetSelectedMuseumObjectVoid(CollectionFunction.FindMuseumObject(_collectionGlobalObject, _objectMuseum.GetTypeEnum(), _objectMuseum.GetNameStruct().nameAltString));
	}
}