// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#include <flixel/system/debug/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_53fef0e5072e635d_47_new,"flixel.system.debug.GraphicCloseButton","new",0xf0ec029c,"flixel.system.debug.GraphicCloseButton.new","openfl/_internal/macros/AssetsMacro.hx",47,0xf7db08ab)
HX_LOCAL_STACK_FRAME(_hx_pos_9923fe68235644cc_55_boot,"flixel.system.debug.GraphicCloseButton","boot",0xd5af4676,"flixel.system.debug.GraphicCloseButton.boot","flixel/system/debug/FlxDebugger.hx",55,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicCloseButton_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_53fef0e5072e635d_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::GraphicCloseButton_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicCloseButton_obj::__CreateEmpty() { return new GraphicCloseButton_obj; }

void *GraphicCloseButton_obj::_hx_vtable = 0;

Dynamic GraphicCloseButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicCloseButton_obj > _hx_result = new GraphicCloseButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicCloseButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x71d8cf26;
	}
}

::String GraphicCloseButton_obj::resourceName;


::hx::ObjectPtr< GraphicCloseButton_obj > GraphicCloseButton_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicCloseButton_obj > __this = new GraphicCloseButton_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicCloseButton_obj > GraphicCloseButton_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicCloseButton_obj *__this = (GraphicCloseButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicCloseButton_obj), true, "flixel.system.debug.GraphicCloseButton"));
	*(void **)__this = GraphicCloseButton_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicCloseButton_obj::GraphicCloseButton_obj()
{
}

bool GraphicCloseButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicCloseButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicCloseButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicCloseButton_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicCloseButton_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicCloseButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicCloseButton_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicCloseButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicCloseButton_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicCloseButton_obj::__mClass;

static ::String GraphicCloseButton_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicCloseButton_obj::__register()
{
	GraphicCloseButton_obj _hx_dummy;
	GraphicCloseButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicCloseButton",aa,c4,df,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicCloseButton_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicCloseButton_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicCloseButton_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicCloseButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicCloseButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicCloseButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicCloseButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicCloseButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicCloseButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9923fe68235644cc_55_boot)
HXDLIN(  55)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_GraphicCloseButton",21,6c,f7,70);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug