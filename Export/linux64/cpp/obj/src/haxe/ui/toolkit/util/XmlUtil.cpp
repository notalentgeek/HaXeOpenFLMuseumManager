#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_XmlUtil
#include <haxe/ui/toolkit/util/XmlUtil.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void XmlUtil_obj::__construct()
{
	return null();
}

//XmlUtil_obj::~XmlUtil_obj() { }

Dynamic XmlUtil_obj::__CreateEmpty() { return  new XmlUtil_obj; }
hx::ObjectPtr< XmlUtil_obj > XmlUtil_obj::__new()
{  hx::ObjectPtr< XmlUtil_obj > _result_ = new XmlUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic XmlUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XmlUtil_obj > _result_ = new XmlUtil_obj();
	_result_->__construct();
	return _result_;}

Array< ::String > XmlUtil_obj::getPathValues( ::Xml xml,::String path){
	HX_STACK_FRAME("haxe.ui.toolkit.util.XmlUtil","getPathValues",0x710a2d9e,"haxe.ui.toolkit.util.XmlUtil.getPathValues","haxe/ui/toolkit/util/XmlUtil.hx",4,0xfd0d912f)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(5)
	Array< ::String > values = Array_obj< ::String >::__new();		HX_STACK_VAR(values,"values");
	HX_STACK_LINE(6)
	Array< ::String > parts = path.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(7)
	{
		HX_STACK_LINE(7)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(7)
		while((true)){
			HX_STACK_LINE(7)
			bool tmp = (_g < parts->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7)
			if ((tmp1)){
				HX_STACK_LINE(7)
				break;
			}
			HX_STACK_LINE(7)
			::String tmp2 = parts->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7)
			::String p = tmp2;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(7)
			++(_g);
			HX_STACK_LINE(8)
			bool tmp3 = (p.length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8)
			if ((tmp3)){
				HX_STACK_LINE(9)
				::String tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(9)
				parts->remove(tmp4);
			}
		}
	}
	HX_STACK_LINE(13)
	::String tmp = parts->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::String matchToFind = tmp;		HX_STACK_VAR(matchToFind,"matchToFind");
	HX_STACK_LINE(14)
	::String tmp1 = matchToFind;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	parts->remove(tmp1);
	HX_STACK_LINE(15)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int tmp3 = xml->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		int tmp4 = ::Xml_obj::Element;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		if ((tmp5)){
			HX_STACK_LINE(15)
			::String tmp6 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + xml->nodeType);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(15)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(15)
		tmp2 = xml->nodeName;
	}
	HX_STACK_LINE(15)
	::String tmp3 = matchToFind;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	if ((tmp4)){
		HX_STACK_LINE(16)
		bool tmp5 = (parts->length > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		if ((tmp5)){
			HX_STACK_LINE(17)
			Dynamic tmp6 = xml->elements();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(17)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp6);  __it->hasNext(); ){
				::Xml child = __it->next();
				{
					HX_STACK_LINE(18)
					::Xml tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(18)
					::String tmp8 = parts->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(18)
					values = values->concat(::haxe::ui::toolkit::util::XmlUtil_obj::getPathValues(tmp7,tmp8));
				}
;
			}
		}
		else{
			HX_STACK_LINE(21)
			::String tmp6 = parts->pop();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			matchToFind = tmp6;
			HX_STACK_LINE(22)
			::String tmp7 = matchToFind;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(22)
			bool tmp8 = ::StringTools_obj::startsWith(tmp7,HX_HCSTRING("@","\x40","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(22)
			if ((tmp8)){
				HX_STACK_LINE(23)
				int tmp9 = matchToFind.length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(23)
				::String tmp10 = matchToFind.substr((int)1,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(23)
				::String attrName = tmp10;		HX_STACK_VAR(attrName,"attrName");
				HX_STACK_LINE(24)
				::String tmp11 = attrName;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(24)
				::String tmp12 = xml->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(24)
				::String attrValue = tmp12;		HX_STACK_VAR(attrValue,"attrValue");
				HX_STACK_LINE(25)
				bool tmp13 = (attrValue != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(25)
				if ((tmp13)){
					HX_STACK_LINE(26)
					::String tmp14 = attrValue;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(26)
					values->push(tmp14);
				}
			}
			else{
				HX_STACK_LINE(28)
				bool tmp9 = (matchToFind == HX_HCSTRING("text()","\xee","\x34","\x88","\xd8"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(28)
				if ((tmp9)){
					HX_STACK_LINE(29)
					::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(29)
					{
						HX_STACK_LINE(29)
						::Xml tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(29)
						{
							HX_STACK_LINE(29)
							{
								HX_STACK_LINE(29)
								int tmp12 = xml->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(29)
								int tmp13 = ::Xml_obj::Document;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(29)
								bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(29)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(29)
								if ((tmp14)){
									HX_STACK_LINE(29)
									int tmp16 = xml->nodeType;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(29)
									int tmp17 = ::Xml_obj::Element;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(29)
									int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(29)
									tmp15 = (tmp16 != tmp18);
								}
								else{
									HX_STACK_LINE(29)
									tmp15 = false;
								}
								HX_STACK_LINE(29)
								if ((tmp15)){
									HX_STACK_LINE(29)
									::String tmp16 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + xml->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(29)
									HX_STACK_DO_THROW(tmp16);
								}
							}
							HX_STACK_LINE(29)
							tmp11 = xml->children->__get((int)0).StaticCast< ::Xml >();
						}
						HX_STACK_LINE(29)
						::Xml _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(29)
						int tmp12 = _this->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(29)
						int tmp13 = ::Xml_obj::Document;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(29)
						bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(29)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(29)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(29)
						if ((tmp15)){
							HX_STACK_LINE(29)
							int tmp17 = _this->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(29)
							int tmp18 = ::Xml_obj::Element;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(29)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(29)
							tmp16 = (tmp17 == tmp19);
						}
						else{
							HX_STACK_LINE(29)
							tmp16 = true;
						}
						HX_STACK_LINE(29)
						if ((tmp16)){
							HX_STACK_LINE(29)
							::String tmp17 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + _this->nodeType);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(29)
							HX_STACK_DO_THROW(tmp17);
						}
						HX_STACK_LINE(29)
						tmp10 = _this->nodeValue;
					}
					HX_STACK_LINE(29)
					::String nodeValue = tmp10;		HX_STACK_VAR(nodeValue,"nodeValue");
					HX_STACK_LINE(30)
					bool tmp11 = (nodeValue != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(30)
					if ((tmp11)){
						HX_STACK_LINE(31)
						::String tmp12 = nodeValue;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(31)
						values->push(tmp12);
					}
				}
			}
		}
	}
	HX_STACK_LINE(36)
	return values;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XmlUtil_obj,getPathValues,return )


XmlUtil_obj::XmlUtil_obj()
{
}

bool XmlUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"getPathValues") ) { outValue = getPathValues_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XmlUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XmlUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class XmlUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getPathValues","\x9d","\x03","\x5f","\xbe"),
	::String(null()) };

void XmlUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.XmlUtil","\xaf","\x7a","\xe2","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &XmlUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< XmlUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
