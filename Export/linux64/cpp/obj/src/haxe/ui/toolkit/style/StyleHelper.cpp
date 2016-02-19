#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_GradientType
#include <openfl/_legacy/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InterpolationMethod
#include <openfl/_legacy/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_SpreadMethod
#include <openfl/_legacy/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleHelper_obj::__construct()
{
	return null();
}

//StyleHelper_obj::~StyleHelper_obj() { }

Dynamic StyleHelper_obj::__CreateEmpty() { return  new StyleHelper_obj; }
hx::ObjectPtr< StyleHelper_obj > StyleHelper_obj::__new()
{  hx::ObjectPtr< StyleHelper_obj > _result_ = new StyleHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic StyleHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleHelper_obj > _result_ = new StyleHelper_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap StyleHelper_obj::sectionCache;

Void StyleHelper_obj::clearCache( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","clearCache",0xb8865983,"haxe.ui.toolkit.style.StyleHelper.clearCache","haxe/ui/toolkit/style/StyleHelper.hx",21,0xc4c90a00)
		HX_STACK_LINE(22)
		::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StyleHelper_obj,clearCache,(void))

Void StyleHelper_obj::paintStyle( ::openfl::_legacy::display::Graphics g,::haxe::ui::toolkit::style::Style style,::openfl::_legacy::geom::Rectangle rc){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintStyle",0x7d0f80c1,"haxe.ui.toolkit.style.StyleHelper.paintStyle","haxe/ui/toolkit/style/StyleHelper.hx",25,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(style,"style")
		HX_STACK_ARG(rc,"rc")
		HX_STACK_LINE(26)
		g->clear();
		HX_STACK_LINE(27)
		bool tmp = (style == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		if ((tmp2)){
			HX_STACK_LINE(27)
			tmp3 = (rc->width == (int)0);
		}
		else{
			HX_STACK_LINE(27)
			tmp3 = true;
		}
		HX_STACK_LINE(27)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		if ((tmp4)){
			HX_STACK_LINE(27)
			tmp5 = (rc->height == (int)0);
		}
		else{
			HX_STACK_LINE(27)
			tmp5 = true;
		}
		HX_STACK_LINE(27)
		if ((tmp5)){
			HX_STACK_LINE(28)
			return null();
		}
		HX_STACK_LINE(40)
		int tmp6 = style->get_backgroundColor();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		int tmp7 = (int)-1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		if ((tmp9)){
			HX_STACK_LINE(40)
			int tmp11 = style->get_borderColor();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(40)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(40)
			tmp10 = (tmp12 != (int)-1);
		}
		else{
			HX_STACK_LINE(40)
			tmp10 = true;
		}
		HX_STACK_LINE(40)
		if ((tmp10)){
			HX_STACK_LINE(41)
			int tmp11 = style->get_borderColor();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(41)
			bool tmp12 = (tmp11 != (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(41)
			if ((tmp12)){
				HX_STACK_LINE(42)
				int borderSize = (int)1;		HX_STACK_VAR(borderSize,"borderSize");
				HX_STACK_LINE(43)
				int tmp13 = style->get_borderSize();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(43)
				bool tmp14 = (tmp13 != (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(43)
				if ((tmp14)){
					HX_STACK_LINE(44)
					int tmp15 = style->get_borderSize();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(44)
					borderSize = tmp15;
				}
				HX_STACK_LINE(46)
				bool tmp15 = (borderSize > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(46)
				if ((tmp15)){
					HX_STACK_LINE(47)
					Float borderAlpha = (int)1;		HX_STACK_VAR(borderAlpha,"borderAlpha");
					HX_STACK_LINE(48)
					Float tmp16 = style->get_borderAlpha();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(48)
					bool tmp17 = (tmp16 != (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(48)
					if ((tmp17)){
						HX_STACK_LINE(49)
						Float tmp18 = style->get_borderAlpha();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(49)
						borderAlpha = tmp18;
					}
					HX_STACK_LINE(51)
					int tmp18 = borderSize;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(51)
					int tmp19 = style->get_borderColor();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(51)
					Float tmp20 = borderAlpha;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(51)
					g->lineStyle(tmp18,tmp19,tmp20,null(),null(),null(),null(),null());
					HX_STACK_LINE(52)
					Float tmp21 = (Float(borderSize) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(52)
					Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(52)
					Float tmp23 = (Float(borderSize) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(52)
					Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(52)
					rc->inflate(tmp22,tmp24);
				}
			}
			HX_STACK_LINE(56)
			int tmp13 = style->get_backgroundColor();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(56)
			bool tmp14 = (tmp13 != (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(56)
			if ((tmp14)){
				HX_STACK_LINE(57)
				Float backgroundAlpha = (int)1;		HX_STACK_VAR(backgroundAlpha,"backgroundAlpha");
				HX_STACK_LINE(58)
				Float tmp15 = style->get_backgroundAlpha();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(58)
				bool tmp16 = (tmp15 != (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(58)
				if ((tmp16)){
					HX_STACK_LINE(59)
					Float tmp17 = style->get_backgroundAlpha();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(59)
					backgroundAlpha = tmp17;
				}
				HX_STACK_LINE(62)
				int tmp17 = style->get_backgroundColorGradientEnd();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(62)
				bool tmp18 = (tmp17 != (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(62)
				if ((tmp18)){
					HX_STACK_LINE(63)
					Float tmp19 = rc->width;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(63)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(63)
					int w = tmp20;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(64)
					Float tmp21 = rc->height;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(64)
					int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(64)
					int h = tmp22;		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(65)
					int tmp23 = style->get_backgroundColor();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(65)
					int tmp24 = style->get_backgroundColorGradientEnd();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(65)
					Array< int > colors = Array_obj< int >::__new().Add(tmp23).Add(tmp24);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(66)
					Array< Float > alphas = Array_obj< Float >::__new().Add(backgroundAlpha).Add(backgroundAlpha);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(67)
					Array< int > ratios = Array_obj< int >::__new().Add((int)0).Add((int)255);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(68)
					::openfl::_legacy::geom::Matrix tmp25 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(68)
					::openfl::_legacy::geom::Matrix matrix = tmp25;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(70)
					::String gradientType = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");		HX_STACK_VAR(gradientType,"gradientType");
					HX_STACK_LINE(71)
					::String tmp26 = style->get_gradientType();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(71)
					bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(71)
					if ((tmp27)){
						HX_STACK_LINE(72)
						::String tmp28 = style->get_gradientType();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(72)
						gradientType = tmp28;
					}
					HX_STACK_LINE(75)
					bool tmp28 = (gradientType == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(75)
					if ((tmp28)){
						HX_STACK_LINE(76)
						int tmp29 = (w - (int)2);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(76)
						int tmp30 = (h - (int)2);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(76)
						Float tmp31 = ::Math_obj::PI;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(76)
						Float tmp32 = (Float(tmp31) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(76)
						matrix->createGradientBox(tmp29,tmp30,tmp32,(int)0,(int)0);
					}
					else{
						HX_STACK_LINE(77)
						bool tmp29 = (gradientType == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(77)
						if ((tmp29)){
							HX_STACK_LINE(78)
							int tmp30 = (w - (int)2);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(78)
							int tmp31 = (h - (int)2);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(78)
							matrix->createGradientBox(tmp30,tmp31,(int)0,(int)0,(int)0);
						}
					}
					HX_STACK_LINE(86)
					::openfl::_legacy::geom::Matrix tmp29 = matrix;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(82)
					g->beginGradientFill(::openfl::_legacy::display::GradientType_obj::LINEAR,colors,alphas,ratios,tmp29,::openfl::_legacy::display::SpreadMethod_obj::PAD,::openfl::_legacy::display::InterpolationMethod_obj::LINEAR_RGB,(int)0);
				}
				else{
					HX_STACK_LINE(101)
					int tmp19 = style->get_backgroundColor();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(101)
					Float tmp20 = backgroundAlpha;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(101)
					g->beginFill(tmp19,tmp20);
				}
			}
			HX_STACK_LINE(105)
			int tmp15 = style->get_cornerRadiusTopLeft();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(105)
			int tmp16 = (int)-1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(105)
			bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(105)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(105)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(105)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(105)
			if ((tmp19)){
				HX_STACK_LINE(105)
				int tmp21 = style->get_cornerRadiusTopRight();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(105)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(105)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(105)
				int tmp24 = (int)-1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(105)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(105)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(105)
				tmp20 = (tmp23 != tmp26);
			}
			else{
				HX_STACK_LINE(105)
				tmp20 = true;
			}
			HX_STACK_LINE(105)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(105)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(105)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(105)
			if ((tmp22)){
				HX_STACK_LINE(105)
				int tmp24 = style->get_cornerRadiusBottomLeft();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(105)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(105)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(105)
				int tmp27 = (int)-1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(105)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(105)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(105)
				tmp23 = (tmp26 != tmp29);
			}
			else{
				HX_STACK_LINE(105)
				tmp23 = true;
			}
			HX_STACK_LINE(105)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(105)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(105)
			if ((tmp24)){
				HX_STACK_LINE(105)
				int tmp26 = style->get_cornerRadiusBottomRight();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(105)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(105)
				tmp25 = (tmp27 != (int)-1);
			}
			else{
				HX_STACK_LINE(105)
				tmp25 = true;
			}
			HX_STACK_LINE(105)
			if ((tmp25)){
				HX_STACK_LINE(106)
				int tmp26 = style->get_cornerRadiusTopLeft();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(106)
				Float radiusTopLeft = tmp26;		HX_STACK_VAR(radiusTopLeft,"radiusTopLeft");
				HX_STACK_LINE(107)
				int tmp27 = style->get_cornerRadiusTopRight();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(107)
				Float radiusTopRight = tmp27;		HX_STACK_VAR(radiusTopRight,"radiusTopRight");
				HX_STACK_LINE(108)
				int tmp28 = style->get_cornerRadiusBottomLeft();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(108)
				Float radiusBottomLeft = tmp28;		HX_STACK_VAR(radiusBottomLeft,"radiusBottomLeft");
				HX_STACK_LINE(109)
				int tmp29 = style->get_cornerRadiusBottomRight();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(109)
				Float radiusBottomRight = tmp29;		HX_STACK_VAR(radiusBottomRight,"radiusBottomRight");
				HX_STACK_LINE(116)
				Float tmp30 = radiusTopLeft;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(116)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(116)
				Float tmp32 = radiusTopRight;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(116)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(116)
				int tmp34 = (int(tmp31) & int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(116)
				Float tmp35 = radiusBottomLeft;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(116)
				int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(116)
				int tmp37 = (int(tmp34) & int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(116)
				Float tmp38 = radiusBottomRight;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(116)
				int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(116)
				int tmp40 = (int(tmp37) & int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(116)
				Float tmp41 = radiusTopLeft;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(116)
				bool tmp42 = (tmp40 == tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(116)
				if ((tmp42)){
					HX_STACK_LINE(121)
					Float tmp43 = rc->get_left();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(121)
					Float tmp44 = rc->get_top();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(121)
					Float tmp45 = rc->width;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(121)
					Float tmp46 = rc->height;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(121)
					Float tmp47 = (radiusTopLeft + (int)2);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(121)
					Float tmp48 = (radiusTopLeft + (int)2);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(121)
					g->drawRoundRect(tmp43,tmp44,tmp45,tmp46,tmp47,tmp48);
				}
				else{
					HX_STACK_LINE(124)
					Float tmp43 = rc->get_left();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(124)
					Float tmp44 = rc->get_top();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(124)
					Float tmp45 = rc->width;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(124)
					Float tmp46 = rc->height;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(124)
					g->drawRect(tmp43,tmp44,tmp45,tmp46);
				}
			}
			else{
				HX_STACK_LINE(128)
				Float tmp26 = rc->get_left();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(128)
				Float tmp27 = rc->get_top();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(128)
				Float tmp28 = rc->width;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(128)
				Float tmp29 = rc->height;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(128)
				g->drawRect(tmp26,tmp27,tmp28,tmp29);
			}
			HX_STACK_LINE(131)
			g->endFill();
		}
		HX_STACK_LINE(134)
		::String tmp11 = style->get_backgroundImage();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(134)
		if ((tmp12)){
			HX_STACK_LINE(135)
			::openfl::_legacy::geom::Rectangle backgroundImageRect = null();		HX_STACK_VAR(backgroundImageRect,"backgroundImageRect");
			HX_STACK_LINE(136)
			::openfl::_legacy::geom::Rectangle tmp13 = style->get_backgroundImageRect();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(136)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(136)
			if ((tmp14)){
				HX_STACK_LINE(137)
				::openfl::_legacy::geom::Rectangle tmp15 = style->get_backgroundImageRect();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(137)
				backgroundImageRect = tmp15;
			}
			HX_STACK_LINE(139)
			::String tmp15 = style->get_backgroundImage();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(139)
			::String tmp16 = tmp15.substr((int)-3,null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(139)
			::String tmp17 = tmp16.toLowerCase();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(139)
			bool tmp18 = (tmp17 != HX_HCSTRING("svg","\x64","\xaa","\x57","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(139)
			if ((tmp18)){
				HX_STACK_LINE(141)
				::openfl::_legacy::geom::Rectangle tmp19 = style->get_backgroundImageScale9();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(141)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(141)
				if ((tmp20)){
					HX_STACK_LINE(142)
					::openfl::_legacy::display::Graphics tmp21 = g;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(142)
					::String tmp22 = style->get_backgroundImage();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(142)
					::openfl::_legacy::geom::Rectangle tmp23 = backgroundImageRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(142)
					::openfl::_legacy::geom::Rectangle tmp24 = style->get_backgroundImageScale9();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(142)
					::openfl::_legacy::geom::Rectangle tmp25 = rc;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(142)
					::haxe::ui::toolkit::style::StyleHelper_obj::paintScale9(tmp21,tmp22,tmp23,tmp24,tmp25);
				}
				else{
					HX_STACK_LINE(144)
					::haxe::ds::StringMap tmp21 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(144)
					::haxe::ds::StringMap rects = tmp21;		HX_STACK_VAR(rects,"rects");
					HX_STACK_LINE(145)
					::String tmp22 = style->get_backgroundImage();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(145)
					::openfl::_legacy::geom::Rectangle tmp23 = backgroundImageRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(145)
					::openfl::_legacy::display::BitmapData tmp24 = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(145)
					::openfl::_legacy::display::BitmapData bitmapData = tmp24;		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(146)
					bool tmp25 = (bitmapData != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(146)
					if ((tmp25)){
						HX_STACK_LINE(147)
						int tmp26 = bitmapData->get_width();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(147)
						int tmp27 = bitmapData->get_height();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(147)
						::openfl::_legacy::geom::Rectangle tmp28 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(147)
						rects->set(HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c"),tmp28);
						HX_STACK_LINE(148)
						::openfl::_legacy::display::Graphics tmp29 = g;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(148)
						::String tmp30 = style->get_backgroundImage();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(148)
						::openfl::_legacy::geom::Rectangle tmp31 = backgroundImageRect;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(148)
						::haxe::ds::StringMap tmp32 = rects;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(148)
						::openfl::_legacy::geom::Rectangle tmp33 = rc;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(148)
						::haxe::ui::toolkit::style::StyleHelper_obj::paintCompoundBitmap(tmp29,tmp30,tmp31,tmp32,tmp33);
					}
				}
			}
			else{
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StyleHelper_obj,paintStyle,(void))

Void StyleHelper_obj::paintScale9( ::openfl::_legacy::display::Graphics g,::String resourceId,::openfl::_legacy::geom::Rectangle resourceRect,::openfl::_legacy::geom::Rectangle scale9,::openfl::_legacy::geom::Rectangle rc){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintScale9",0x16d42cdf,"haxe.ui.toolkit.style.StyleHelper.paintScale9","haxe/ui/toolkit/style/StyleHelper.hx",161,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(scale9,"scale9")
		HX_STACK_ARG(rc,"rc")
		HX_STACK_LINE(162)
		bool tmp = (scale9 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		if ((tmp)){
			HX_STACK_LINE(163)
			::String tmp1 = resourceId;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			::openfl::_legacy::geom::Rectangle tmp2 = resourceRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			::openfl::_legacy::display::BitmapData tmp3 = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			::openfl::_legacy::display::BitmapData resource = tmp3;		HX_STACK_VAR(resource,"resource");
			HX_STACK_LINE(164)
			bool tmp4 = (resource == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			if ((tmp4)){
				HX_STACK_LINE(165)
				return null();
			}
			HX_STACK_LINE(168)
			int tmp5 = resource->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			int w = tmp5;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(169)
			int tmp6 = resource->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			int h = tmp6;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(170)
			Float tmp7 = scale9->get_left();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			int x1 = tmp8;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(171)
			Float tmp9 = scale9->get_top();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(171)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(171)
			int y1 = tmp10;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(172)
			Float tmp11 = scale9->get_right();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(172)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(172)
			int x2 = tmp12;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(173)
			Float tmp13 = scale9->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(173)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(173)
			int y2 = tmp14;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(175)
			::haxe::ds::StringMap tmp15 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(175)
			::haxe::ds::StringMap rects = tmp15;		HX_STACK_VAR(rects,"rects");
			HX_STACK_LINE(177)
			::openfl::_legacy::geom::Rectangle tmp16 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,x1,y1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(177)
			rects->set(HX_HCSTRING("top.left","\x80","\x54","\xc1","\x7e"),tmp16);
			HX_STACK_LINE(178)
			int tmp17 = x1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(178)
			int tmp18 = (x2 - x1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(178)
			int tmp19 = y1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(178)
			::openfl::_legacy::geom::Rectangle tmp20 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp17,(int)0,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(178)
			rects->set(HX_HCSTRING("top","\x95","\x66","\x58","\x00"),tmp20);
			HX_STACK_LINE(179)
			int tmp21 = x2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(179)
			int tmp22 = (w - x2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(179)
			int tmp23 = y1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(179)
			::openfl::_legacy::geom::Rectangle tmp24 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp21,(int)0,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(179)
			rects->set(HX_HCSTRING("top.right","\x43","\xa9","\x75","\xe1"),tmp24);
			HX_STACK_LINE(181)
			int tmp25 = y1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(181)
			int tmp26 = x1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(181)
			int tmp27 = (y2 - y1);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(181)
			::openfl::_legacy::geom::Rectangle tmp28 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(181)
			rects->set(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp28);
			HX_STACK_LINE(182)
			int tmp29 = x1;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(182)
			int tmp30 = y1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(182)
			int tmp31 = (x2 - x1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(182)
			int tmp32 = (y2 - y1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(182)
			::openfl::_legacy::geom::Rectangle tmp33 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp29,tmp30,tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(182)
			rects->set(HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c"),tmp33);
			HX_STACK_LINE(183)
			int tmp34 = x2;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(183)
			int tmp35 = y1;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(183)
			int tmp36 = (w - x2);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(183)
			int tmp37 = (y2 - y1);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(183)
			::openfl::_legacy::geom::Rectangle tmp38 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(183)
			rects->set(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp38);
			HX_STACK_LINE(185)
			int tmp39 = y2;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(185)
			int tmp40 = x1;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(185)
			int tmp41 = (h - y2);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(185)
			::openfl::_legacy::geom::Rectangle tmp42 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(185)
			rects->set(HX_HCSTRING("bottom.left","\x6a","\xdc","\x81","\x96"),tmp42);
			HX_STACK_LINE(186)
			int tmp43 = x1;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(186)
			int tmp44 = y2;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(186)
			int tmp45 = (x2 - x1);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(186)
			int tmp46 = (h - y2);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(186)
			::openfl::_legacy::geom::Rectangle tmp47 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp43,tmp44,tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(186)
			rects->set(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),tmp47);
			HX_STACK_LINE(187)
			int tmp48 = x2;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(187)
			int tmp49 = y2;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(187)
			int tmp50 = (w - x2);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(187)
			int tmp51 = (h - y2);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(187)
			::openfl::_legacy::geom::Rectangle tmp52 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp48,tmp49,tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(187)
			rects->set(HX_HCSTRING("bottom.right","\x19","\x0e","\x2c","\x92"),tmp52);
			HX_STACK_LINE(189)
			::openfl::_legacy::display::Graphics tmp53 = g;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(189)
			::String tmp54 = resourceId;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(189)
			::openfl::_legacy::geom::Rectangle tmp55 = resourceRect;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(189)
			::haxe::ds::StringMap tmp56 = rects;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(189)
			::openfl::_legacy::geom::Rectangle tmp57 = rc;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintCompoundBitmap(tmp53,tmp54,tmp55,tmp56,tmp57);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintScale9,(void))

Void StyleHelper_obj::paintCompoundBitmap( ::openfl::_legacy::display::Graphics g,::String resourceId,::openfl::_legacy::geom::Rectangle resourceRect,::haxe::ds::StringMap sourceRects,::openfl::_legacy::geom::Rectangle targetRect){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintCompoundBitmap",0x66fb5c2a,"haxe.ui.toolkit.style.StyleHelper.paintCompoundBitmap","haxe/ui/toolkit/style/StyleHelper.hx",193,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(sourceRects,"sourceRects")
		HX_STACK_ARG(targetRect,"targetRect")
		HX_STACK_LINE(194)
		Float tmp = targetRect->get_left();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		targetRect->set_left(tmp1);
		HX_STACK_LINE(195)
		Float tmp2 = targetRect->get_top();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		targetRect->set_top(tmp3);
		HX_STACK_LINE(196)
		Float tmp4 = targetRect->get_right();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		targetRect->set_right(tmp5);
		HX_STACK_LINE(197)
		Float tmp6 = targetRect->get_bottom();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		targetRect->set_bottom(tmp7);
		HX_STACK_LINE(200)
		::openfl::_legacy::geom::Rectangle tmp8 = sourceRects->get(HX_HCSTRING("top.left","\x80","\x54","\xc1","\x7e"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		::openfl::_legacy::geom::Rectangle tl = tmp8;		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(201)
		bool tmp9 = (tl != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		if ((tmp9)){
			HX_STACK_LINE(202)
			::openfl::_legacy::display::Graphics tmp10 = g;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(202)
			::String tmp11 = resourceId;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(202)
			::openfl::_legacy::geom::Rectangle tmp12 = resourceRect;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(202)
			::openfl::_legacy::geom::Rectangle tmp13 = tl;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(202)
			::openfl::_legacy::geom::Rectangle tmp14 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tl->width,tl->height);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(202)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp10,tmp11,tmp12,tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(204)
			::openfl::_legacy::geom::Rectangle tmp10 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			tl = tmp10;
		}
		HX_STACK_LINE(207)
		::openfl::_legacy::geom::Rectangle tmp10 = sourceRects->get(HX_HCSTRING("top.right","\x43","\xa9","\x75","\xe1"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		::openfl::_legacy::geom::Rectangle tr = tmp10;		HX_STACK_VAR(tr,"tr");
		HX_STACK_LINE(208)
		bool tmp11 = (tr != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(208)
		if ((tmp11)){
			HX_STACK_LINE(209)
			::openfl::_legacy::display::Graphics tmp12 = g;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(209)
			::String tmp13 = resourceId;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(209)
			::openfl::_legacy::geom::Rectangle tmp14 = resourceRect;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			::openfl::_legacy::geom::Rectangle tmp15 = tr;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			Float tmp16 = (targetRect->width - tr->width);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(209)
			Float tmp17 = tr->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(209)
			Float tmp18 = tr->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(209)
			::openfl::_legacy::geom::Rectangle tmp19 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp16,(int)0,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(209)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp12,tmp13,tmp14,tmp15,tmp19);
		}
		else{
			HX_STACK_LINE(211)
			::openfl::_legacy::geom::Rectangle tmp12 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(211)
			tr = tmp12;
		}
		HX_STACK_LINE(214)
		::openfl::_legacy::geom::Rectangle tmp12 = sourceRects->get(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(214)
		::openfl::_legacy::geom::Rectangle t = tmp12;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(215)
		bool tmp13 = (t != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(215)
		if ((tmp13)){
			HX_STACK_LINE(216)
			::openfl::_legacy::display::Graphics tmp14 = g;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(216)
			::String tmp15 = resourceId;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(216)
			::openfl::_legacy::geom::Rectangle tmp16 = resourceRect;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(216)
			::openfl::_legacy::geom::Rectangle tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(216)
			Float tmp18 = tl->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(216)
			Float tmp19 = (targetRect->width - tl->width);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(216)
			Float tmp20 = tr->width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(216)
			Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(216)
			Float tmp22 = t->height;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(216)
			::openfl::_legacy::geom::Rectangle tmp23 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp18,(int)0,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(216)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp14,tmp15,tmp16,tmp17,tmp23);
		}
		else{
			HX_STACK_LINE(218)
			::openfl::_legacy::geom::Rectangle tmp14 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(218)
			t = tmp14;
		}
		HX_STACK_LINE(222)
		::openfl::_legacy::geom::Rectangle tmp14 = sourceRects->get(HX_HCSTRING("bottom.left","\x6a","\xdc","\x81","\x96"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(222)
		::openfl::_legacy::geom::Rectangle bl = tmp14;		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(223)
		bool tmp15 = (bl != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(223)
		if ((tmp15)){
			HX_STACK_LINE(224)
			::openfl::_legacy::display::Graphics tmp16 = g;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(224)
			::String tmp17 = resourceId;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(224)
			::openfl::_legacy::geom::Rectangle tmp18 = resourceRect;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(224)
			::openfl::_legacy::geom::Rectangle tmp19 = bl;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(224)
			Float tmp20 = (targetRect->height - bl->height);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(224)
			Float tmp21 = bl->width;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(224)
			Float tmp22 = bl->height;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(224)
			::openfl::_legacy::geom::Rectangle tmp23 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,tmp20,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(224)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp16,tmp17,tmp18,tmp19,tmp23);
		}
		else{
			HX_STACK_LINE(226)
			::openfl::_legacy::geom::Rectangle tmp16 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(226)
			bl = tmp16;
		}
		HX_STACK_LINE(229)
		::openfl::_legacy::geom::Rectangle tmp16 = sourceRects->get(HX_HCSTRING("bottom.right","\x19","\x0e","\x2c","\x92"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(229)
		::openfl::_legacy::geom::Rectangle br = tmp16;		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(230)
		bool tmp17 = (br != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(230)
		if ((tmp17)){
			HX_STACK_LINE(231)
			::openfl::_legacy::display::Graphics tmp18 = g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(231)
			::String tmp19 = resourceId;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(231)
			::openfl::_legacy::geom::Rectangle tmp20 = resourceRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(231)
			::openfl::_legacy::geom::Rectangle tmp21 = br;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(231)
			Float tmp22 = (targetRect->width - br->width);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(231)
			Float tmp23 = (targetRect->height - br->height);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(231)
			Float tmp24 = br->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(231)
			Float tmp25 = br->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(231)
			::openfl::_legacy::geom::Rectangle tmp26 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp22,tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(231)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp18,tmp19,tmp20,tmp21,tmp26);
		}
		else{
			HX_STACK_LINE(233)
			::openfl::_legacy::geom::Rectangle tmp18 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(233)
			br = tmp18;
		}
		HX_STACK_LINE(236)
		::openfl::_legacy::geom::Rectangle tmp18 = sourceRects->get(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(236)
		::openfl::_legacy::geom::Rectangle b = tmp18;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(237)
		bool tmp19 = (b != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(237)
		if ((tmp19)){
			HX_STACK_LINE(238)
			::openfl::_legacy::display::Graphics tmp20 = g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(238)
			::String tmp21 = resourceId;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(238)
			::openfl::_legacy::geom::Rectangle tmp22 = resourceRect;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(238)
			::openfl::_legacy::geom::Rectangle tmp23 = b;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(238)
			Float tmp24 = bl->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(238)
			Float tmp25 = (targetRect->height - b->height);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(238)
			Float tmp26 = (targetRect->width - bl->width);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(238)
			Float tmp27 = br->width;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(238)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(238)
			Float tmp29 = b->height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(238)
			::openfl::_legacy::geom::Rectangle tmp30 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp24,tmp25,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(238)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp20,tmp21,tmp22,tmp23,tmp30);
		}
		else{
			HX_STACK_LINE(240)
			::openfl::_legacy::geom::Rectangle tmp20 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(240)
			b = tmp20;
		}
		HX_STACK_LINE(244)
		::openfl::_legacy::geom::Rectangle tmp20 = sourceRects->get(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(244)
		::openfl::_legacy::geom::Rectangle l = tmp20;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(245)
		bool tmp21 = (l != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(245)
		if ((tmp21)){
			HX_STACK_LINE(246)
			::openfl::_legacy::display::Graphics tmp22 = g;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(246)
			::String tmp23 = resourceId;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(246)
			::openfl::_legacy::geom::Rectangle tmp24 = resourceRect;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(246)
			::openfl::_legacy::geom::Rectangle tmp25 = l;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(246)
			Float tmp26 = tl->height;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(246)
			Float tmp27 = l->width;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(246)
			Float tmp28 = (targetRect->height - tl->height);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(246)
			Float tmp29 = bl->height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(246)
			Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(246)
			::openfl::_legacy::geom::Rectangle tmp31 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,tmp26,tmp27,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(246)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp22,tmp23,tmp24,tmp25,tmp31);
		}
		else{
			HX_STACK_LINE(248)
			::openfl::_legacy::geom::Rectangle tmp22 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(248)
			l = tmp22;
		}
		HX_STACK_LINE(251)
		::openfl::_legacy::geom::Rectangle tmp22 = sourceRects->get(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(251)
		::openfl::_legacy::geom::Rectangle r = tmp22;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(252)
		bool tmp23 = (r != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(252)
		if ((tmp23)){
			HX_STACK_LINE(253)
			::openfl::_legacy::display::Graphics tmp24 = g;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(253)
			::String tmp25 = resourceId;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(253)
			::openfl::_legacy::geom::Rectangle tmp26 = resourceRect;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(253)
			::openfl::_legacy::geom::Rectangle tmp27 = r;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(253)
			Float tmp28 = (targetRect->width - r->width);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(253)
			Float tmp29 = tr->height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(253)
			Float tmp30 = r->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(253)
			Float tmp31 = (targetRect->height - tl->height);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(253)
			Float tmp32 = bl->height;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(253)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(253)
			::openfl::_legacy::geom::Rectangle tmp34 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp28,tmp29,tmp30,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(253)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp24,tmp25,tmp26,tmp27,tmp34);
		}
		else{
			HX_STACK_LINE(255)
			::openfl::_legacy::geom::Rectangle tmp24 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(255)
			r = tmp24;
		}
		HX_STACK_LINE(258)
		::openfl::_legacy::geom::Rectangle tmp24 = sourceRects->get(HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(258)
		::openfl::_legacy::geom::Rectangle m = tmp24;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(259)
		bool tmp25 = (m != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(259)
		if ((tmp25)){
			HX_STACK_LINE(260)
			::openfl::_legacy::display::Graphics tmp26 = g;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(260)
			::String tmp27 = resourceId;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(260)
			::openfl::_legacy::geom::Rectangle tmp28 = resourceRect;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(260)
			::openfl::_legacy::geom::Rectangle tmp29 = m;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(260)
			Float tmp30 = l->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(260)
			Float tmp31 = t->height;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(260)
			Float tmp32 = (targetRect->width - l->width);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(260)
			Float tmp33 = r->width;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(260)
			Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(260)
			Float tmp35 = (targetRect->height - t->height);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(260)
			Float tmp36 = b->height;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(260)
			Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(260)
			::openfl::_legacy::geom::Rectangle tmp38 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp30,tmp31,tmp34,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(260)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(tmp26,tmp27,tmp28,tmp29,tmp38);
		}
		else{
			HX_STACK_LINE(262)
			::openfl::_legacy::geom::Rectangle tmp26 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(262)
			m = tmp26;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintCompoundBitmap,(void))

Void StyleHelper_obj::paintBitmapSection( ::openfl::_legacy::display::Graphics g,::String resourceId,::openfl::_legacy::geom::Rectangle resourceRect,::openfl::_legacy::geom::Rectangle src,::openfl::_legacy::geom::Rectangle dst){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintBitmapSection",0x0cf57546,"haxe.ui.toolkit.style.StyleHelper.paintBitmapSection","haxe/ui/toolkit/style/StyleHelper.hx",266,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(267)
		::String tmp = resourceId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		::openfl::_legacy::geom::Rectangle tmp1 = resourceRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		::openfl::_legacy::display::BitmapData tmp2 = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		::openfl::_legacy::display::BitmapData srcData = tmp2;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(268)
		bool tmp3 = (srcData == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		if ((tmp3)){
			HX_STACK_LINE(269)
			return null();
		}
		HX_STACK_LINE(272)
		bool tmp4 = (src->width <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(272)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(272)
		if ((tmp6)){
			HX_STACK_LINE(272)
			tmp7 = (src->height <= (int)0);
		}
		else{
			HX_STACK_LINE(272)
			tmp7 = true;
		}
		HX_STACK_LINE(272)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(272)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(272)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(272)
		if ((tmp9)){
			HX_STACK_LINE(272)
			tmp10 = (dst->width <= (int)0);
		}
		else{
			HX_STACK_LINE(272)
			tmp10 = true;
		}
		HX_STACK_LINE(272)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(272)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(272)
		if ((tmp11)){
			HX_STACK_LINE(272)
			tmp12 = (dst->height <= (int)0);
		}
		else{
			HX_STACK_LINE(272)
			tmp12 = true;
		}
		HX_STACK_LINE(272)
		if ((tmp12)){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(276)
		bool tmp13 = (resourceRect == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(276)
		if ((tmp13)){
			HX_STACK_LINE(277)
			int tmp14 = srcData->get_width();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(277)
			int tmp15 = srcData->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(277)
			::openfl::_legacy::geom::Rectangle tmp16 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(277)
			resourceRect = tmp16;
		}
		HX_STACK_LINE(280)
		::String tmp14 = (resourceId + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(280)
		Float tmp15 = resourceRect->get_left();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(280)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(280)
		::String tmp17 = (tmp16 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(280)
		Float tmp18 = resourceRect->get_top();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(280)
		::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(280)
		::String tmp20 = (tmp19 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(280)
		Float tmp21 = resourceRect->width;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(280)
		::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(280)
		::String tmp23 = (tmp22 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(280)
		Float tmp24 = resourceRect->height;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(280)
		::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(280)
		::String tmp26 = (tmp25 + HX_HCSTRING("___","\x3f","\x69","\x48","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(280)
		Float tmp27 = src->get_left();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(280)
		::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(280)
		::String tmp29 = (tmp28 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(280)
		Float tmp30 = src->get_top();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(280)
		::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(280)
		::String tmp32 = (tmp31 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(280)
		Float tmp33 = src->width;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(280)
		::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(280)
		::String tmp35 = (tmp34 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(280)
		Float tmp36 = src->height;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(280)
		::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(280)
		::String cacheId = tmp37;		HX_STACK_VAR(cacheId,"cacheId");
		HX_STACK_LINE(281)
		::haxe::ds::StringMap tmp38 = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(281)
		::String tmp39 = cacheId;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(281)
		::openfl::_legacy::display::BitmapData tmp40 = tmp38->get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(281)
		::openfl::_legacy::display::BitmapData section = tmp40;		HX_STACK_VAR(section,"section");
		HX_STACK_LINE(282)
		bool tmp41 = (section == null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(282)
		if ((tmp41)){
			HX_STACK_LINE(283)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(284)
			Float tmp42 = src->width;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(284)
			int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(284)
			Float tmp44 = src->height;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(284)
			int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(284)
			int tmp46 = fillcolor;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(284)
			::openfl::_legacy::display::BitmapData tmp47 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp43,tmp45,true,tmp46,null());		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(284)
			section = tmp47;
			HX_STACK_LINE(285)
			::openfl::_legacy::display::BitmapData tmp48 = srcData;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(285)
			::openfl::_legacy::geom::Rectangle tmp49 = src;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(285)
			::openfl::_legacy::geom::Point tmp50 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(285)
			section->copyPixels(tmp48,tmp49,tmp50,null(),null(),null());
			HX_STACK_LINE(286)
			::haxe::ds::StringMap tmp51 = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(286)
			::String tmp52 = cacheId;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(286)
			::openfl::_legacy::display::BitmapData tmp53 = section;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(286)
			tmp51->set(tmp52,tmp53);
		}
		HX_STACK_LINE(289)
		Float tmp42 = src->get_left();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(289)
		int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(289)
		src->set_left(tmp43);
		HX_STACK_LINE(290)
		Float tmp44 = src->get_top();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(290)
		int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(290)
		src->set_top(tmp45);
		HX_STACK_LINE(291)
		Float tmp46 = src->get_bottom();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(291)
		int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(291)
		src->set_bottom(tmp47);
		HX_STACK_LINE(292)
		Float tmp48 = src->get_right();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(292)
		int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(292)
		src->set_right(tmp49);
		HX_STACK_LINE(293)
		Float tmp50 = dst->get_left();		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(293)
		int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(293)
		dst->set_left(tmp51);
		HX_STACK_LINE(294)
		Float tmp52 = dst->get_top();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(294)
		int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(294)
		dst->set_top(tmp53);
		HX_STACK_LINE(295)
		Float tmp54 = dst->get_bottom();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(295)
		int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(295)
		dst->set_bottom(tmp55);
		HX_STACK_LINE(296)
		Float tmp56 = dst->get_right();		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(296)
		int tmp57 = ::Std_obj::_int(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(296)
		dst->set_right(tmp57);
		HX_STACK_LINE(298)
		::openfl::_legacy::geom::Matrix tmp58 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(298)
		::openfl::_legacy::geom::Matrix mat = tmp58;		HX_STACK_VAR(mat,"mat");
		HX_STACK_LINE(299)
		Float tmp59 = dst->width;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(299)
		int tmp60 = section->get_width();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(299)
		Float tmp61 = (Float(tmp59) / Float(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(299)
		Float tmp62 = dst->height;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(299)
		int tmp63 = section->get_height();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(299)
		Float tmp64 = (Float(tmp62) / Float(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(299)
		mat->scale(tmp61,tmp64);
		HX_STACK_LINE(300)
		Float tmp65 = dst->get_left();		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(300)
		Float tmp66 = dst->get_top();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(300)
		mat->translate(tmp65,tmp66);
		HX_STACK_LINE(302)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(303)
		::openfl::_legacy::display::BitmapData tmp67 = section;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(303)
		::openfl::_legacy::geom::Matrix tmp68 = mat;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(303)
		g->beginBitmapFill(tmp67,tmp68,false,false);
		HX_STACK_LINE(304)
		Float tmp69 = dst->x;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(304)
		Float tmp70 = dst->y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(304)
		Float tmp71 = dst->width;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(304)
		Float tmp72 = dst->height;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(304)
		g->drawRect(tmp69,tmp70,tmp71,tmp72);
		HX_STACK_LINE(305)
		g->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintBitmapSection,(void))

::openfl::_legacy::display::BitmapData StyleHelper_obj::getBitmapSection( ::String resourceId,::openfl::_legacy::geom::Rectangle rc){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","getBitmapSection",0x63ba31ce,"haxe.ui.toolkit.style.StyleHelper.getBitmapSection","haxe/ui/toolkit/style/StyleHelper.hx",308,0xc4c90a00)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(rc,"rc")
	HX_STACK_LINE(309)
	bool tmp = (resourceId == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(309)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(309)
	if ((tmp1)){
		HX_STACK_LINE(309)
		tmp2 = (resourceId.length == (int)0);
	}
	else{
		HX_STACK_LINE(309)
		tmp2 = true;
	}
	HX_STACK_LINE(309)
	if ((tmp2)){
		HX_STACK_LINE(310)
		return null();
	}
	HX_STACK_LINE(313)
	::haxe::ds::StringMap tmp3 = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(313)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(313)
	if ((tmp4)){
		HX_STACK_LINE(314)
		::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(314)
		::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache = tmp5;
	}
	HX_STACK_LINE(317)
	bool tmp5 = (rc == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(317)
	if ((tmp5)){
		HX_STACK_LINE(318)
		::haxe::ui::toolkit::resources::ResourceManager tmp6 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(318)
		::String tmp7 = resourceId;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(318)
		::openfl::_legacy::display::BitmapData tmp8 = tmp6->getBitmapData(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(318)
		::openfl::_legacy::display::BitmapData resource = tmp8;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(319)
		bool tmp9 = (resource != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		if ((tmp9)){
			HX_STACK_LINE(320)
			int tmp10 = resource->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(320)
			int tmp11 = resource->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(320)
			::openfl::_legacy::geom::Rectangle tmp12 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(320)
			rc = tmp12;
		}
	}
	HX_STACK_LINE(324)
	::String tmp6 = (resourceId + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(324)
	Float tmp7 = rc->get_left();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(324)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(324)
	::String tmp9 = (tmp8 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(324)
	Float tmp10 = rc->get_top();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(324)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(324)
	::String tmp12 = (tmp11 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(324)
	Float tmp13 = rc->width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(324)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(324)
	::String tmp15 = (tmp14 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(324)
	Float tmp16 = rc->height;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(324)
	::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(324)
	::String cacheId = tmp17;		HX_STACK_VAR(cacheId,"cacheId");
	HX_STACK_LINE(325)
	::haxe::ds::StringMap tmp18 = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(325)
	::String tmp19 = cacheId;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(325)
	::openfl::_legacy::display::BitmapData tmp20 = tmp18->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(325)
	::openfl::_legacy::display::BitmapData section = tmp20;		HX_STACK_VAR(section,"section");
	HX_STACK_LINE(327)
	bool tmp21 = (section == null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(327)
	if ((tmp21)){
		HX_STACK_LINE(328)
		::haxe::ui::toolkit::resources::ResourceManager tmp22 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(328)
		::String tmp23 = resourceId;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(328)
		::openfl::_legacy::display::BitmapData tmp24 = tmp22->getBitmapData(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(328)
		::openfl::_legacy::display::BitmapData resource = tmp24;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(329)
		bool tmp25 = (resource != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(329)
		if ((tmp25)){
			HX_STACK_LINE(330)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(331)
			Float tmp26 = rc->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(331)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(331)
			Float tmp28 = rc->height;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(331)
			int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(331)
			int tmp30 = fillcolor;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(331)
			::openfl::_legacy::display::BitmapData tmp31 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp27,tmp29,true,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(331)
			section = tmp31;
			HX_STACK_LINE(332)
			::openfl::_legacy::display::BitmapData tmp32 = resource;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(332)
			::openfl::_legacy::geom::Rectangle tmp33 = rc;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(332)
			::openfl::_legacy::geom::Point tmp34 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(332)
			section->copyPixels(tmp32,tmp33,tmp34,null(),null(),null());
			HX_STACK_LINE(333)
			::haxe::ds::StringMap tmp35 = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(333)
			::String tmp36 = cacheId;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(333)
			::openfl::_legacy::display::BitmapData tmp37 = section;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(333)
			tmp35->set(tmp36,tmp37);
		}
	}
	HX_STACK_LINE(337)
	::openfl::_legacy::display::BitmapData tmp22 = section;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(337)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StyleHelper_obj,getBitmapSection,return )


StyleHelper_obj::StyleHelper_obj()
{
}

bool StyleHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"paintStyle") ) { outValue = paintStyle_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paintScale9") ) { outValue = paintScale9_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { outValue = sectionCache; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getBitmapSection") ) { outValue = getBitmapSection_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"paintBitmapSection") ) { outValue = paintBitmapSection_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"paintCompoundBitmap") ) { outValue = paintCompoundBitmap_dyn(); return true;  }
	}
	return false;
}

bool StyleHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { sectionCache=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &StyleHelper_obj::sectionCache,HX_HCSTRING("sectionCache","\x1d","\x86","\xf1","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StyleHelper_obj::sectionCache,"sectionCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StyleHelper_obj::sectionCache,"sectionCache");
};

#endif

hx::Class StyleHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sectionCache","\x1d","\x86","\xf1","\x9f"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	HX_HCSTRING("paintStyle","\xb3","\x00","\xa8","\xda"),
	HX_HCSTRING("paintScale9","\xad","\xa0","\xab","\x9e"),
	HX_HCSTRING("paintCompoundBitmap","\xf8","\x4d","\x40","\x4e"),
	HX_HCSTRING("paintBitmapSection","\x38","\x37","\xda","\xed"),
	HX_HCSTRING("getBitmapSection","\x40","\x33","\x86","\x78"),
	::String(null()) };

void StyleHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style.StyleHelper","\xa0","\xe9","\x3a","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &StyleHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StyleHelper_obj >;
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
} // end namespace style
