// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#define INCLUDED_flixel_addons_ui_FlxUI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,Anchor)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI9SliceSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIBar)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUILine)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRadioGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRegion)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITileTest)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS3(flixel,addons,ui,Rounding)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFireTongue)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUI_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUI_obj OBJ_;
		FlxUI_obj();

	public:
		enum { _hx_ClassId = 0x39f54363 };

		void __construct( ::Xml data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String __o_liveFilePath_, ::haxe::ds::StringMap uiVars_);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUI")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUI"); }
		static ::hx::ObjectPtr< FlxUI_obj > __new( ::Xml data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String __o_liveFilePath_, ::haxe::ds::StringMap uiVars_);
		static ::hx::ObjectPtr< FlxUI_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String __o_liveFilePath_, ::haxe::ds::StringMap uiVars_);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUI_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUI",26,ff,ca,95); }

		static void event(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		static ::Dynamic event_dyn();

		static ::String fontStr(::String str,::String style);
		static ::Dynamic fontStr_dyn();

		static int fontSize(::String str,int size);
		static ::Dynamic fontSize_dyn();

		static ::String font(::String str,::String style,::String extension);
		static ::Dynamic font_dyn();

		static ::Dynamic _hx___getTongue();
		static ::Dynamic _hx___getTongue_dyn();

		static void forceFocus(bool b,::Dynamic thing);
		static ::Dynamic forceFocus_dyn();

		static ::Dynamic getLeafUIState();
		static ::Dynamic getLeafUIState_dyn();

		static  ::Dynamic request(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		static ::Dynamic request_dyn();

		static void _delta(::Dynamic thing,::hx::Null< Float >  X,::hx::Null< Float >  Y);
		static ::Dynamic _delta_dyn();

		static ::Dynamic _center(::Dynamic thing,::hx::Null< bool >  X,::hx::Null< bool >  Y);
		static ::Dynamic _center_dyn();

		static  ::Xml consolidateData( ::Xml data, ::Xml definition,::hx::Null< bool >  combineUniqueChildren);
		static ::Dynamic consolidateData_dyn();

		static  ::openfl::display::BitmapData _loadBitmapRect(::String source,::String rect_str);
		static ::Dynamic _loadBitmapRect_dyn();

		static ::cpp::VirtualArray getParams( ::Xml data);
		static ::Dynamic getParams_dyn();

		static int sortParams( ::Dynamic a, ::Dynamic b);
		static ::Dynamic sortParams_dyn();

		bool do_safe_input_delay;
		Float safe_input_delay_time;
		bool failed;
		Float failed_by;
		bool get_isRoot();
		::Dynamic get_isRoot_dyn();

		::String liveFilePath;
		::Dynamic get_tongue();
		::Dynamic get_tongue_dyn();

		::Dynamic set_tongue(::Dynamic t);
		::Dynamic set_tongue_dyn();

		::Dynamic focus;
		::Dynamic set_focus(::Dynamic widget);
		::Dynamic set_focus_dyn();

		 ::Dynamic getTextFallback;
		Dynamic getTextFallback_dyn() { return getTextFallback;}
		::Array< ::Dynamic> cursorLists;
		::Dynamic _ptr_tongue;
		 ::Xml _data;
		void _tongueSet(::Array< ::Dynamic> list,::Dynamic tongue);
		::Dynamic _tongueSet_dyn();

		void callEvent(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic callEvent_dyn();

		void getEvent(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getEvent_dyn();

		 ::Dynamic getRequest(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getRequest_dyn();

		void onFocus(::Dynamic widget);
		::Dynamic onFocus_dyn();

		void setWidgetSuppression( ::flixel::FlxSprite asset,::Dynamic butNotThisOne,::hx::Null< bool >  suppressed);
		::Dynamic setWidgetSuppression_dyn();

		void onFocusLost(::Dynamic widget);
		::Dynamic onFocusLost_dyn();

		void setSuperIndex( ::flixel::addons::ui::FlxUI flxUI);
		::Dynamic setSuperIndex_dyn();

		void update(Float elapsed);

		bool toggleShow(::String key);
		::Dynamic toggleShow_dyn();

		void showGroup(::String key,bool Show, ::Dynamic Active);
		::Dynamic showGroup_dyn();

		void showAsset(::String key,bool Show, ::Dynamic Active);
		::Dynamic showAsset_dyn();

		::Dynamic removeAsset(::String key,::hx::Null< bool >  destroy);
		::Dynamic removeAsset_dyn();

		bool addAsset(::Dynamic asset,::String key,::String group_name,::hx::Null< bool >  recursive);
		::Dynamic addAsset_dyn();

		::Dynamic replaceAsset(::String key,::Dynamic replace,::hx::Null< bool >  center_x,::hx::Null< bool >  center_y,::hx::Null< bool >  destroy_old);
		::Dynamic replaceAsset_dyn();

		void destroy();

		void load( ::Xml data);
		::Dynamic load_dyn();

		 ::Xml unparentXML( ::Xml f);
		::Dynamic unparentXML_dyn();

		void _loadPointSize( ::Xml data);
		::Dynamic _loadPointSize_dyn();

		void _loadSub( ::Xml node,::hx::Null< int >  iteration);
		::Dynamic _loadSub_dyn();

		void _addTags(::Array< ::String > arr,::String thingName);
		::Dynamic _addTags_dyn();

		void _loadGlobals( ::Xml data, ::Dynamic thing);
		::Dynamic _loadGlobals_dyn();

		void _postLoad( ::Xml data);
		::Dynamic _postLoad_dyn();

		void _sendTo(::Dynamic thing,int dir);
		::Dynamic _sendTo_dyn();

		void sendToFront(::String name,::hx::Null< bool >  recursive);
		::Dynamic sendToFront_dyn();

		void sendToBack(::String name,::hx::Null< bool >  recursive);
		::Dynamic sendToBack_dyn();

		::String get_currMode();
		::Dynamic get_currMode_dyn();

		::String set_currMode(::String m);
		::Dynamic set_currMode_dyn();

		void setMode(::String mode_name,::String target_name);
		::Dynamic setMode_dyn();

		void showThing(::String name,::hx::Null< bool >  visibleStatus, ::Dynamic activeStatus);
		::Dynamic showThing_dyn();

		 ::flixel::addons::ui::FlxUIGroup getGroup(::String key,::hx::Null< bool >  recursive);
		::Dynamic getGroup_dyn();

		 ::flixel::text::FlxText getFlxText(::String key,::hx::Null< bool >  recursive);
		::Dynamic getFlxText_dyn();

		::Array< ::Dynamic> getAllAssets();
		::Dynamic getAllAssets_dyn();

		::Array< ::String > getAssetKeys();
		::Dynamic getAssetKeys_dyn();

		bool hasAsset(::String key,::hx::Null< bool >  recursive);
		::Dynamic hasAsset_dyn();

		::Dynamic getAsset(::String key,::hx::Null< bool >  recursive);
		::Dynamic getAsset_dyn();

		::Array< ::Dynamic> getAssetsWithTag(::String tag);
		::Dynamic getAssetsWithTag_dyn();

		 ::flixel::addons::ui::FlxUIGroup getAssetGroup(::String key,::Dynamic thing);
		::Dynamic getAssetGroup_dyn();

		 ::Xml getMode(::String key,::hx::Null< bool >  recursive);
		::Dynamic getMode_dyn();

		 ::flixel::addons::ui::ButtonLabelStyle getLabelStyleFromDefinition(::String key,::hx::Null< bool >  recursive);
		::Dynamic getLabelStyleFromDefinition_dyn();

		 ::flixel::addons::ui::ButtonLabelStyle getLabelStyleFromData( ::Xml data);
		::Dynamic getLabelStyleFromData_dyn();

		bool checkVariable(::String key,::String otherValue,::String type,::String op,::hx::Null< bool >  recursive);
		::Dynamic checkVariable_dyn();

		void setVariable(::String key,::String value);
		::Dynamic setVariable_dyn();

		::String getVariable(::String key,::hx::Null< bool >  recursive);
		::Dynamic getVariable_dyn();

		 ::Xml getDefinition(::String key,::hx::Null< bool >  recursive);
		::Dynamic getDefinition_dyn();

		int screenWidth();
		::Dynamic screenWidth_dyn();

		Float screenHeight();
		::Dynamic screenHeight_dyn();

		bool _postLoaded;
		Float _pointX;
		Float _pointY;
		 ::haxe::ds::StringMap _group_index;
		 ::haxe::ds::StringMap _asset_index;
		 ::haxe::ds::StringMap _tag_index;
		 ::haxe::ds::StringMap _definition_index;
		 ::haxe::ds::StringMap _variable_index;
		 ::haxe::ds::StringMap _mode_index;
		::String _curr_mode;
		::Dynamic _ptr;
		 ::flixel::addons::ui::FlxUI _superIndexUI;
		Float _safe_input_delay_elapsed;
		::Array< ::Dynamic> _failure_checks;
		::Array< ::String > _assetsToCleanUp;
		::Array< ::String > _scaledAssets;
		void replaceInGroup( ::flixel::FlxSprite original, ::flixel::FlxSprite replace,::hx::Null< bool >  splice);
		::Dynamic replaceInGroup_dyn();

		 ::Xml applyNodeConditionals( ::Xml info);
		::Dynamic applyNodeConditionals_dyn();

		 ::Xml applyNodeChanges( ::Xml data,::String nodeName);
		::Dynamic applyNodeChanges_dyn();

		::Dynamic loadThing(::String type, ::Xml data);
		::Dynamic loadThing_dyn();

		 ::Xml _loadThingGetInfo( ::Xml data);
		::Dynamic _loadThingGetInfo_dyn();

		void _loadTooltip(::Dynamic thing, ::Xml data);
		::Dynamic _loadTooltip_dyn();

		 ::Dynamic _loadTooltipData( ::Xml tNode);
		::Dynamic _loadTooltipData_dyn();

		void _loadTooltipStyle( ::Xml node, ::Dynamic tt);
		::Dynamic _loadTooltipStyle_dyn();

		void _loadTooltipText( ::Xml node,::String fieldName, ::Dynamic tt);
		::Dynamic _loadTooltipText_dyn();

		 ::flixel::addons::ui::Anchor _loadAnchor( ::Xml data);
		::Dynamic _loadAnchor_dyn();

		::Dynamic _loadThing(::String type, ::Xml data);
		::Dynamic _loadThing_dyn();

		Float _loadX( ::Xml data,::hx::Null< Float >  default_);
		::Dynamic _loadX_dyn();

		Float _loadY( ::Xml data,::hx::Null< Float >  default_);
		::Dynamic _loadY_dyn();

		Float _loadScale( ::Xml data,::hx::Null< Float >  default_,::String str);
		::Dynamic _loadScale_dyn();

		Float _loadScaleX( ::Xml data,::hx::Null< Float >  default_);
		::Dynamic _loadScaleX_dyn();

		Float _loadScaleY( ::Xml data,::hx::Null< Float >  default_);
		::Dynamic _loadScaleY_dyn();

		Float _loadWidth( ::Xml data,::hx::Null< Float >  default_,::String str,::String defaultRound);
		::Dynamic _loadWidth_dyn();

		Float _loadHeight( ::Xml data,::hx::Null< Float >  default_,::String str,::String defaultRound);
		::Dynamic _loadHeight_dyn();

		 ::flixel::math::FlxPoint _loadCompass( ::Xml data,::String str);
		::Dynamic _loadCompass_dyn();

		void _changeParamsThing( ::Xml data);
		::Dynamic _changeParamsThing_dyn();

		void _changeThing( ::Xml data);
		::Dynamic _changeThing_dyn();

		void _alignThing( ::Xml data,::hx::Null< bool >  suppressError);
		::Dynamic _alignThing_dyn();

		void _doAlign(::Array< ::String > objects,::String axis,Float spacing,bool resize, ::flixel::math::FlxPoint bounds,::hx::Null< bool >  allowGrow,::hx::Null< bool >  allowShrink);
		::Dynamic _doAlign_dyn();

		bool _checkFailure( ::Xml data);
		::Dynamic _checkFailure_dyn();

		void _resizeThing(::Dynamic fo_r, ::Dynamic bounds);
		::Dynamic _resizeThing_dyn();

		void _postLoadThing(::String type, ::Xml data);
		::Dynamic _postLoadThing_dyn();

		 ::flixel::addons::ui::FlxUITileTest _loadTileTest( ::Xml data);
		::Dynamic _loadTileTest_dyn();

		::String _loadString( ::Xml data,::String attributeName);
		::Dynamic _loadString_dyn();

		::Dynamic _loadText( ::Xml data);
		::Dynamic _loadText_dyn();

		::Dynamic _loadInputText( ::Xml data);
		::Dynamic _loadInputText_dyn();

		 ::flixel::addons::ui::FlxUIRadioGroup _loadRadioGroup( ::Xml data);
		::Dynamic _loadRadioGroup_dyn();

		 ::flixel::addons::ui::FlxUICheckBox _loadCheckBox( ::Xml data);
		::Dynamic _loadCheckBox_dyn();

		 ::flixel::addons::ui::FlxUIDropDownMenu _loadDropDownMenu( ::Xml data);
		::Dynamic _loadDropDownMenu_dyn();

		bool _loadTest( ::Xml data);
		::Dynamic _loadTest_dyn();

		bool _loadTestSub( ::Xml node);
		::Dynamic _loadTestSub_dyn();

		 ::Dynamic parseVarValue(::String varString);
		::Dynamic parseVarValue_dyn();

		 ::flixel::addons::ui::FlxUI _loadLayout( ::Xml data);
		::Dynamic _loadLayout_dyn();

		void addToCleanup(::String str);
		::Dynamic addToCleanup_dyn();

		void addToScaledAssets(::String str);
		::Dynamic addToScaledAssets_dyn();

		void cleanup();
		::Dynamic cleanup_dyn();

		 ::flixel::addons::ui::FlxUI createUI( ::Xml data);
		::Dynamic createUI_dyn();

		 ::flixel::addons::ui::FlxUITabMenu _loadTabMenu( ::Xml data);
		::Dynamic _loadTabMenu_dyn();

		::Dynamic _loadNumericStepper( ::Xml data,::hx::Null< bool >  setCallback);
		::Dynamic _loadNumericStepper_dyn();

		 ::flixel::math::FlxPoint getResizeRatio( ::Xml data,::hx::Null< int >  defaultAxis);
		::Dynamic getResizeRatio_dyn();

		::Dynamic _loadButton( ::Xml data,::hx::Null< bool >  setCallback,::hx::Null< bool >  isToggle,::String load_code);
		::Dynamic _loadButton_dyn();

		 ::flixel::addons::ui::FlxUIRegion _loadRegion( ::Xml data);
		::Dynamic _loadRegion_dyn();

		 ::flixel::addons::ui::FlxUI9SliceSprite _load9SliceSprite( ::Xml data,::String load_code);
		::Dynamic _load9SliceSprite_dyn();

		::Array< int > load9SliceSprite_scaleSub(::Array< int > slice9, ::Xml data,::String src,::String srcString);
		::Dynamic load9SliceSprite_scaleSub_dyn();

		int _loadTileRule( ::Xml data);
		::Dynamic _loadTileRule_dyn();

		 ::flixel::addons::ui::FlxUISprite _loadBox( ::Xml data);
		::Dynamic _loadBox_dyn();

		 ::flixel::addons::ui::FlxUILine _loadLine( ::Xml data);
		::Dynamic _loadLine_dyn();

		 ::flixel::addons::ui::FlxUIBar _loadBar( ::Xml data);
		::Dynamic _loadBar_dyn();

		 ::flixel::addons::ui::FlxUISprite _loadSprite( ::Xml data);
		::Dynamic _loadSprite_dyn();

		bool loadSmooth( ::Xml scaleNode,bool defaultValue);
		::Dynamic loadSmooth_dyn();

		::String loadScaledSrc( ::Xml data,::String attName,::String scaleName,::hx::Null< int >  tilesWide,::hx::Null< int >  tilesTall);
		::Dynamic loadScaledSrc_dyn();

		int thisWidth();
		::Dynamic thisWidth_dyn();

		int thisHeight();
		::Dynamic thisHeight_dyn();

		Float _getAnchorPos(::Dynamic thing,::String axis,::String str);
		::Dynamic _getAnchorPos_dyn();

		 ::flixel::addons::ui::Rounding getRound( ::Xml node,::String defaultStr);
		::Dynamic getRound_dyn();

		Float doRound(Float f, ::flixel::addons::ui::Rounding round);
		::Dynamic doRound_dyn();

		 ::Dynamic calcMaxMinSize( ::Xml data, ::Dynamic width, ::Dynamic height);
		::Dynamic calcMaxMinSize_dyn();

		Float _getDataSize(::String target,::String str,::hx::Null< Float >  default_);
		::Dynamic _getDataSize_dyn();

		::cpp::VirtualArray _getOperation(::String str);
		::Dynamic _getOperation_dyn();

		Float _doOperation(Float value,::String op,Float operand);
		::Dynamic _doOperation_dyn();

		Float _getStretch(int index,::String target,::String str);
		::Dynamic _getStretch_dyn();

		Float getAssetProperty(int index,::String target,::String str);
		::Dynamic getAssetProperty_dyn();

		void _loadCursor( ::Xml data);
		::Dynamic _loadCursor_dyn();

		void _loadPosition( ::Xml data,::Dynamic thing);
		::Dynamic _loadPosition_dyn();

		 ::flixel::addons::ui::BorderDef _loadBorder( ::Xml data);
		::Dynamic _loadBorder_dyn();

		int _loadColor( ::Xml data,::String colorName,::hx::Null< int >  _default);
		::Dynamic _loadColor_dyn();

		 ::flixel::addons::ui::FontDef _loadFontDef( ::Xml data);
		::Dynamic _loadFontDef_dyn();

		::String _loadFontFace( ::Xml data);
		::Dynamic _loadFontFace_dyn();

		void _onFinishLoad();
		::Dynamic _onFinishLoad_dyn();

		::String getText(::String flag,::String context,::hx::Null< bool >  safe,::String code);
		::Dynamic getText_dyn();

		::String formatFromCode(::String str,::String code);
		::Dynamic formatFromCode_dyn();

		 ::flixel::text::FlxText formatButtonText( ::Xml data, ::Dynamic button);
		::Dynamic formatButtonText_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUI */ 
