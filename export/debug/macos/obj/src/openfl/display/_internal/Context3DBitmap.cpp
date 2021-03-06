// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBitmap
#include <openfl/display/_internal/Context3DBitmap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_25_render,"openfl.display._internal.Context3DBitmap","render",0xaffd5171,"openfl.display._internal.Context3DBitmap.render","openfl/display/_internal/Context3DBitmap.hx",25,0x2872f3ee)
HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_63_renderMask,"openfl.display._internal.Context3DBitmap","renderMask",0xaaf0cafd,"openfl.display._internal.Context3DBitmap.renderMask","openfl/display/_internal/Context3DBitmap.hx",63,0x2872f3ee)
HX_LOCAL_STACK_FRAME(_hx_pos_382515aae3768e94_22_boot,"openfl.display._internal.Context3DBitmap","boot",0xce121d8d,"openfl.display._internal.Context3DBitmap.boot","openfl/display/_internal/Context3DBitmap.hx",22,0x2872f3ee)
namespace openfl{
namespace display{
namespace _internal{

void Context3DBitmap_obj::__construct() { }

Dynamic Context3DBitmap_obj::__CreateEmpty() { return new Context3DBitmap_obj; }

void *Context3DBitmap_obj::_hx_vtable = 0;

Dynamic Context3DBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DBitmap_obj > _hx_result = new Context3DBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47c3d29d;
}

void Context3DBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_25_render)
HXLINE(  26)		bool _hx_tmp;
HXDLIN(  26)		if (bitmap->_hx___renderable) {
HXLINE(  26)			_hx_tmp = (bitmap->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  26)			_hx_tmp = true;
            		}
HXDLIN(  26)		if (_hx_tmp) {
HXLINE(  26)			return;
            		}
HXLINE(  28)		bool _hx_tmp1;
HXDLIN(  28)		if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE(  28)			_hx_tmp1 = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  28)			_hx_tmp1 = false;
            		}
HXDLIN(  28)		if (_hx_tmp1) {
HXLINE(  30)			 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  32)			renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXLINE(  33)			renderer->_hx___pushMaskObject(bitmap,null());
HXLINE(  36)			 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(bitmap->_hx___worldShader);
HXLINE(  37)			renderer->setShader(shader);
HXLINE(  38)			bool _hx_tmp;
HXDLIN(  38)			if (renderer->_hx___allowSmoothing) {
HXLINE(  38)				if (!(bitmap->smoothing)) {
HXLINE(  38)					_hx_tmp = renderer->_hx___upscaled;
            				}
            				else {
HXLINE(  38)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  38)				_hx_tmp = false;
            			}
HXDLIN(  38)			renderer->applyBitmapData(bitmap->_hx___bitmapData,_hx_tmp,null());
HXLINE(  39)			renderer->applyMatrix(renderer->_hx___getMatrix(bitmap->_hx___renderTransform,bitmap->pixelSnapping));
HXLINE(  40)			renderer->applyAlpha(bitmap->_hx___worldAlpha);
HXLINE(  41)			renderer->applyColorTransform(bitmap->_hx___worldColorTransform);
HXLINE(  42)			renderer->updateShader();
HXLINE(  44)			 ::openfl::display3D::VertexBuffer3D vertexBuffer = bitmap->_hx___bitmapData->getVertexBuffer(context,null(),null());
HXLINE(  45)			if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE(  45)				context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            			}
HXLINE(  46)			if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  46)				context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            			}
HXLINE(  47)			 ::openfl::display3D::IndexBuffer3D indexBuffer = bitmap->_hx___bitmapData->getIndexBuffer(context,null());
HXLINE(  48)			context->drawTriangles(indexBuffer,null(),null());
HXLINE(  54)			renderer->_hx___clearShader();
HXLINE(  57)			renderer->_hx___popMaskObject(bitmap,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmap_obj,render,(void))

void Context3DBitmap_obj::renderMask( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_63_renderMask)
HXDLIN(  63)		bool _hx_tmp;
HXDLIN(  63)		if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXDLIN(  63)			_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXDLIN(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  65)			 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  67)			 ::openfl::display::_internal::Context3DMaskShader shader = renderer->_hx___maskShader;
HXLINE(  68)			renderer->setShader(shader);
HXLINE(  69)			renderer->applyBitmapData(::openfl::display::_internal::Context3DMaskShader_obj::opaqueBitmapData,true,null());
HXLINE(  70)			renderer->applyMatrix(renderer->_hx___getMatrix(bitmap->_hx___renderTransform,bitmap->pixelSnapping));
HXLINE(  71)			renderer->updateShader();
HXLINE(  73)			 ::openfl::display3D::VertexBuffer3D vertexBuffer = bitmap->_hx___bitmapData->getVertexBuffer(context,null(),null());
HXLINE(  74)			if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE(  74)				context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            			}
HXLINE(  75)			if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  75)				context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            			}
HXLINE(  76)			 ::openfl::display3D::IndexBuffer3D indexBuffer = bitmap->_hx___bitmapData->getIndexBuffer(context,null());
HXLINE(  77)			context->drawTriangles(indexBuffer,null(),null());
HXLINE(  83)			renderer->_hx___clearShader();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmap_obj,renderMask,(void))


Context3DBitmap_obj::Context3DBitmap_obj()
{
}

bool Context3DBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DBitmap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DBitmap_obj::__mClass;

static ::String Context3DBitmap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DBitmap_obj::__register()
{
	Context3DBitmap_obj _hx_dummy;
	Context3DBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DBitmap",f3,44,7a,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DBitmap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DBitmap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_382515aae3768e94_22_boot)
HXDLIN(  22)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
