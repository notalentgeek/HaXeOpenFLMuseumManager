#include <hxcpp.h>

#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif
#ifndef INCLUDED_EnumMuseumMode
#include <EnumMuseumMode.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_CollectionTagGeneral
#include <CollectionTagGeneral.h>
#endif
#ifndef INCLUDED_CollectionPremadeTag
#include <CollectionPremadeTag.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectGeneratorSentence
#include <ObjectGeneratorSentence.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_CollectionPremade
#include <CollectionPremade.h>
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
::EnumTagType_obj::__register();
::EnumTagFeelType_obj::__register();
::EnumMuseumMode_obj::__register();
::EnumMuseumType_obj::__register();
::haxe::Log_obj::__register();
::ObjectTag_obj::__register();
::CollectionTagGeneral_obj::__register();
::CollectionPremadeTag_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::ObjectVisitor_obj::__register();
::ObjectMuseum_obj::__register();
::ObjectGeneratorSentence_obj::__register();
::Main_obj::__register();
::CollectionPremade_obj::__register();
::CollectionGlobal_obj::__register();
::CollectionFunction_obj::__register();
::EnumTagType_obj::__boot();
::EnumTagFeelType_obj::__boot();
::EnumMuseumMode_obj::__boot();
::EnumMuseumType_obj::__boot();
::haxe::Log_obj::__boot();
::CollectionPremadeTag_obj::__boot();
::CollectionTagGeneral_obj::__boot();
::ObjectTag_obj::__boot();
}

