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

#define DELEGATE_haxe_ui_toolkit_data_IDataSource \
virtual ::String get_id( ) { return mDelegate->get_id();}  \
virtual Dynamic get_id_dyn() { return mDelegate->get_id_dyn();}  \
virtual ::String set_id( ::String value) { return mDelegate->set_id(value);}  \
virtual Dynamic set_id_dyn() { return mDelegate->set_id_dyn();}  \
virtual bool get_allowEvents( ) { return mDelegate->get_allowEvents();}  \
virtual Dynamic get_allowEvents_dyn() { return mDelegate->get_allowEvents_dyn();}  \
virtual bool set_allowEvents( bool value) { return mDelegate->set_allowEvents(value);}  \
virtual Dynamic set_allowEvents_dyn() { return mDelegate->set_allowEvents_dyn();}  \
virtual Void create( ::Xml config) { return mDelegate->create(config);}  \
virtual Dynamic create_dyn() { return mDelegate->create_dyn();}  \
virtual Void createFromString( ::String data,Dynamic config) { return mDelegate->createFromString(data,config);}  \
virtual Dynamic createFromString_dyn() { return mDelegate->createFromString_dyn();}  \
virtual Void createFromResource( ::String resourceId,Dynamic config) { return mDelegate->createFromResource(resourceId,config);}  \
virtual Dynamic createFromResource_dyn() { return mDelegate->createFromResource_dyn();}  \
virtual bool open( ) { return mDelegate->open();}  \
virtual Dynamic open_dyn() { return mDelegate->open_dyn();}  \
virtual bool close( ) { return mDelegate->close();}  \
virtual Dynamic close_dyn() { return mDelegate->close_dyn();}  \
virtual bool moveFirst( ) { return mDelegate->moveFirst();}  \
virtual Dynamic moveFirst_dyn() { return mDelegate->moveFirst_dyn();}  \
virtual bool moveNext( ) { return mDelegate->moveNext();}  \
virtual Dynamic moveNext_dyn() { return mDelegate->moveNext_dyn();}  \
virtual Dynamic get( ) { return mDelegate->get();}  \
virtual Dynamic get_dyn() { return mDelegate->get_dyn();}  \
virtual bool add( Dynamic o) { return mDelegate->add(o);}  \
virtual Dynamic add_dyn() { return mDelegate->add_dyn();}  \
virtual bool update( Dynamic o) { return mDelegate->update(o);}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual bool remove( ) { return mDelegate->remove();}  \
virtual Dynamic remove_dyn() { return mDelegate->remove_dyn();}  \
virtual Void removeAll( ) { return mDelegate->removeAll();}  \
virtual Dynamic removeAll_dyn() { return mDelegate->removeAll_dyn();}  \
virtual ::String hash( ) { return mDelegate->hash();}  \
virtual Dynamic hash_dyn() { return mDelegate->hash_dyn();}  \
virtual int size( ) { return mDelegate->size();}  \
virtual Dynamic size_dyn() { return mDelegate->size_dyn();}  \


template<typename IMPL>
class IDataSource_delegate_ : public IDataSource_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataSource_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_data_IDataSource
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_IDataSource */ 
