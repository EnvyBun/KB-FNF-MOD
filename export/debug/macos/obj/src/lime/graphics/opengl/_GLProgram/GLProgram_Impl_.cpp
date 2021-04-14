// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLProgram_GLProgram_Impl_
#include <lime/graphics/opengl/_GLProgram/GLProgram_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_
#include <lime/graphics/opengl/_GLShader/GLShader_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f26ce6442e8f3a65_21_fromInt,"lime.graphics.opengl._GLProgram.GLProgram_Impl_","fromInt",0x3e290e1d,"lime.graphics.opengl._GLProgram.GLProgram_Impl_.fromInt","lime/graphics/opengl/GLProgram.hx",21,0x48d7ea15)
HX_LOCAL_STACK_FRAME(_hx_pos_f26ce6442e8f3a65_26_fromSources,"lime.graphics.opengl._GLProgram.GLProgram_Impl_","fromSources",0x3aa53f66,"lime.graphics.opengl._GLProgram.GLProgram_Impl_.fromSources","lime/graphics/opengl/GLProgram.hx",26,0x48d7ea15)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLProgram{

void GLProgram_Impl__obj::__construct() { }

Dynamic GLProgram_Impl__obj::__CreateEmpty() { return new GLProgram_Impl__obj; }

void *GLProgram_Impl__obj::_hx_vtable = 0;

Dynamic GLProgram_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLProgram_Impl__obj > _hx_result = new GLProgram_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLProgram_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c41ec70;
}

 ::lime::graphics::opengl::GLObject GLProgram_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_f26ce6442e8f3a65_21_fromInt)
HXDLIN(  21)		return ::lime::graphics::opengl::GLObject_obj::fromInt(1,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,fromInt,return )

 ::lime::graphics::opengl::GLObject GLProgram_Impl__obj::fromSources( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl,::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_f26ce6442e8f3a65_26_fromSources)
HXLINE(  27)		 ::lime::graphics::opengl::GLObject vertexShader = ::lime::graphics::opengl::_GLShader::GLShader_Impl__obj::fromSource(gl,vertexSource,gl->VERTEX_SHADER);
HXLINE(  28)		 ::lime::graphics::opengl::GLObject fragmentShader = ::lime::graphics::opengl::_GLShader::GLShader_Impl__obj::fromSource(gl,fragmentSource,gl->FRAGMENT_SHADER);
HXLINE(  30)		 ::lime::graphics::opengl::GLObject program = gl->createProgram();
HXLINE(  31)		gl->attachShader(program,vertexShader);
HXLINE(  32)		gl->attachShader(program,fragmentShader);
HXLINE(  33)		gl->linkProgram(program);
HXLINE(  35)		if (::hx::IsEq( gl->getProgramParameter(program,35714),0 )) {
HXLINE(  37)			::String message = HX_("Unable to initialize the shader program",f0,86,8b,39);
HXLINE(  38)			message = (message + (HX_("\n",0a,00,00,00) + ::lime::graphics::opengl::GL_obj::context->getProgramInfoLog(program)));
HXLINE(  39)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("lime/graphics/opengl/GLProgram.hx",15,ea,d7,48),39,HX_("lime.graphics.opengl._GLProgram.GLProgram_Impl_",e6,58,21,95),HX_("fromSources",ee,72,89,51)));
            		}
HXLINE(  42)		return program;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLProgram_Impl__obj,fromSources,return )


GLProgram_Impl__obj::GLProgram_Impl__obj()
{
}

bool GLProgram_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSources") ) { outValue = fromSources_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLProgram_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GLProgram_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GLProgram_Impl__obj::__mClass;

static ::String GLProgram_Impl__obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromSources",ee,72,89,51),
	::String(null())
};

void GLProgram_Impl__obj::__register()
{
	GLProgram_Impl__obj _hx_dummy;
	GLProgram_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl._GLProgram.GLProgram_Impl_",e6,58,21,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLProgram_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLProgram_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLProgram_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLProgram_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLProgram_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLProgram