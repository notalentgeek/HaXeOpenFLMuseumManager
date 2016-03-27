#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#define INCLUDED_haxe_ui_toolkit_data_IDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  IDataSource_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDataSource_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String get_id( )=0;
virtual Dynamic get_id_dyn()=0;
		virtual ::String set_id( ::String value)=0;
virtual Dynamic set_id_dyn()=0;
		virtual bool get_allowEvents( )=0;
virtual Dynamic get_allowEvents_dyn()=0;
		virtual bool set_allowEvents( bool value)=0;
virtual Dynamic set_allowEvents_dyn()=0;
		virtual Void create( ::Xml config)=0;
virtual Dynamic create_dyn()=0;
		virtual Void createFromString( ::String data,Dynamic config)=0;
virtual Dynamic createFromString_dyn()=0;
		virtual Void createFromResource( ::String resourceId,Dynamic config)=0;
virtual Dynamic createFromResource_dyn()=0;
		virtual bool open( )=0;
virtual Dynamic open_dyn()=0;
		virtual bool close( )=0;
virtual Dynamic close_dyn()=0;
		virtual bool moveFirst( )=0;
virtual Dynamic moveFirst_dyn()=0;
		virtual bool moveNext( )=0;
virtual Dynamic moveNext_dyn()=0;
		virtual Dynamic get( )=0;
virtual Dynamic get_dyn()=0;
		virtual bool add( Dynamic o)=0;
virtual Dynamic add_dyn()=0;
		virtual bool update( Dynamic o)=0;
virtual Dynamic update_dyn()=0;
		virtual bool remove( )=0;
virtual Dynamic remove_dyn()=0;
		virtual Void removeAll( )=0;
virtual Dynamic removeAll_dyn()=0;
		virtual ::String hash( )=0;
virtual Dynamic hash_dyn()=0;
		virtual int size( )=0;
virtual Dynamic size_dyn()=0;
};



template<typename IMPL>
class IDataSource_delegate_ : public IDataSource_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataSource_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::String get_id( ) { return mDelegate->get_id();}
		Dynamic get_id_dyn() { return mDelegate->get_id_dyn();}
		::String set_id( ::String value) { return mDelegate->set_id(value);}
		Dynamic set_id_dyn() { return mDelegate->set_id_dyn();}
		bool get_allowEvents( ) { return mDelegate->get_allowEvents();}
		Dynamic get_allowEvents_dyn() { return mDelegate->get_allowEvents_dyn();}
		bool set_allowEvents( bool value) { return mDelegate->set_allowEvents(value);}
		Dynamic set_allowEvents_dyn() { return mDelegate->set_allowEvents_dyn();}
		Void create( ::Xml config) { return mDelegate->create(config);}
		Dynamic create_dyn() { return mDelegate->create_dyn();}
		Void createFromString( ::String data,Dynamic config) { return mDelegate->createFromString(data,config);}
		Dynamic createFromString_dyn() { return mDelegate->createFromString_dyn();}
		Void createFromResource( ::String resourceId,Dynamic config) { return mDelegate->createFromResource(resourceId,config);}
		Dynamic createFromResource_dyn() { return mDelegate->createFromResource_dyn();}
		bool open( ) { return mDelegate->open();}
		Dynamic open_dyn() { return mDelegate->open_dyn();}
		bool close( ) { return mDelegate->close();}
		Dynamic close_dyn() { return mDelegate->close_dyn();}
		bool moveFirst( ) { return mDelegate->moveFirst();}
		Dynamic moveFirst_dyn() { return mDelegate->moveFirst_dyn();}
		bool moveNext( ) { return mDelegate->moveNext();}
		Dynamic moveNext_dyn() { return mDelegate->moveNext_dyn();}
		Dynamic get( ) { return mDelegate->get();}
		Dynamic get_dyn() { return mDelegate->get_dyn();}
		bool add( Dynamic o) { return mDelegate->add(o);}
		Dynamic add_dyn() { return mDelegate->add_dyn();}
		bool update( Dynamic o) { return mDelegate->update(o);}
		Dynamic update_dyn() { return mDelegate->update_dyn();}
		bool remove( ) { return mDelegate->remove();}
		Dynamic remove_dyn() { return mDelegate->remove_dyn();}
		Void removeAll( ) { return mDelegate->removeAll();}
		Dynamic removeAll_dyn() { return mDelegate->removeAll_dyn();}
		::String hash( ) { return mDelegate->hash();}
		Dynamic hash_dyn() { return mDelegate->hash_dyn();}
		int size( ) { return mDelegate->size();}
		Dynamic size_dyn() { return mDelegate->size_dyn();}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_IDataSource */ 
