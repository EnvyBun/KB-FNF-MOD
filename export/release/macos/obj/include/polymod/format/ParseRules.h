// Generated by Haxe 4.1.5
#ifndef INCLUDED_polymod_format_ParseRules
#define INCLUDED_polymod_format_ParseRules

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,ParseRules)
HX_DECLARE_CLASS2(polymod,format,TextFileFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES ParseRules_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ParseRules_obj OBJ_;
		ParseRules_obj();

	public:
		enum { _hx_ClassId = 0x60090e51 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.ParseRules")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.ParseRules"); }
		static ::hx::ObjectPtr< ParseRules_obj > __new();
		static ::hx::ObjectPtr< ParseRules_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ParseRules_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ParseRules",e4,ae,e8,11); }

		static  ::polymod::format::ParseRules getDefault();
		static ::Dynamic getDefault_dyn();

		 ::haxe::ds::StringMap formats;
		void addType(::String extension, ::polymod::format::TextFileFormat type);
		::Dynamic addType_dyn();

		::Dynamic get(::String extension);
		::Dynamic get_dyn();

		void addFormat(::String extension,::Dynamic format);
		::Dynamic addFormat_dyn();

		void addFile(::String path,::Dynamic format);
		::Dynamic addFile_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_ParseRules */ 
