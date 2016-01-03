#include <hxcpp.h>

#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::EnumMuseumType_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::IMap_obj::__register();
::Std_obj::__register();
::ObjectVisitor_obj::__register();
::ObjectTag_obj::__register();
::ObjectMuseum_obj::__register();
::Main_obj::__register();
::CollectionGlobal_obj::__register();
::CollectionFunction_obj::__register();
::EnumMuseumType_obj::__boot();
}

