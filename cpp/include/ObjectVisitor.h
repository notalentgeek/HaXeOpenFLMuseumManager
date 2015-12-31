#ifndef INCLUDED_ObjectVisitor
#define INCLUDED_ObjectVisitor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ObjectVisitor)


class HXCPP_CLASS_ATTRIBUTES  ObjectVisitor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectVisitor_obj OBJ_;
		ObjectVisitor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ObjectVisitor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectVisitor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectVisitor_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"); }

};


#endif /* INCLUDED_ObjectVisitor */ 
