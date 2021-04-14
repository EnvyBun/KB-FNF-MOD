// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime__internal_backend_native_WindowEventInfo
#define INCLUDED_lime__internal_backend_native_WindowEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d8a53269ce4a50a3_939_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,WindowEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES WindowEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WindowEventInfo_obj OBJ_;
		WindowEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x5c165cb0 };

		void __construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.WindowEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.WindowEventInfo"); }

		inline static ::hx::ObjectPtr< WindowEventInfo_obj > __new( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y) {
			::hx::ObjectPtr< WindowEventInfo_obj > __this = new WindowEventInfo_obj();
			__this->__construct(type,__o_windowID,__o_width,__o_height,__o_x,__o_y);
			return __this;
		}

		inline static ::hx::ObjectPtr< WindowEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y) {
			WindowEventInfo_obj *__this = (WindowEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WindowEventInfo_obj), false, "lime._internal.backend.native.WindowEventInfo"));
			*(void **)__this = WindowEventInfo_obj::_hx_vtable;
{
            		int windowID = __o_windowID.Default(0);
            		int width = __o_width.Default(0);
            		int height = __o_height.Default(0);
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_d8a53269ce4a50a3_939_new)
HXLINE( 940)		( ( ::lime::_internal::backend::native::WindowEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 941)		( ( ::lime::_internal::backend::native::WindowEventInfo)(__this) )->windowID = windowID;
HXLINE( 942)		( ( ::lime::_internal::backend::native::WindowEventInfo)(__this) )->width = width;
HXLINE( 943)		( ( ::lime::_internal::backend::native::WindowEventInfo)(__this) )->height = height;
HXLINE( 944)		( ( ::lime::_internal::backend::native::WindowEventInfo)(__this) )->x = x;
HXLINE( 945)		( ( ::lime::_internal::backend::native::WindowEventInfo)(__this) )->y = y;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WindowEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WindowEventInfo",78,97,c0,fb); }

		int height;
		int type;
		int width;
		int windowID;
		int x;
		int y;
		 ::lime::_internal::backend::native::WindowEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_WindowEventInfo */ 
