// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialog
#include <lime/ui/FileDialog.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialogType
#include <lime/ui/FileDialogType.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_069fe0fa1a76d977_48_new,"openfl.net.FileReference","new",0x2e63d252,"openfl.net.FileReference.new","openfl/net/FileReference.hx",48,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_61_browse,"openfl.net.FileReference","browse",0x617d1ed8,"openfl.net.FileReference.browse","openfl/net/FileReference.hx",61,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_120_cancel,"openfl.net.FileReference","cancel",0xfd502ec8,"openfl.net.FileReference.cancel","openfl/net/FileReference.hx",120,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_127_download,"openfl.net.FileReference","download",0x87701c56,"openfl.net.FileReference.download","openfl/net/FileReference.hx",127,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_146_load,"openfl.net.FileReference","load",0x67a94bf4,"openfl.net.FileReference.load","openfl/net/FileReference.hx",146,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_164_save,"openfl.net.FileReference","save",0x6c3f3d0b,"openfl.net.FileReference.save","openfl/net/FileReference.hx",164,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_206_upload,"openfl.net.FileReference","upload",0xd1760b4f,"openfl.net.FileReference.upload","openfl/net/FileReference.hx",206,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_213_openFileDialog_onCancel,"openfl.net.FileReference","openFileDialog_onCancel",0xbb8b83bc,"openfl.net.FileReference.openFileDialog_onCancel","openfl/net/FileReference.hx",213,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_218_openFileDialog_onComplete,"openfl.net.FileReference","openFileDialog_onComplete",0xb8e32b7b,"openfl.net.FileReference.openFileDialog_onComplete","openfl/net/FileReference.hx",218,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_222_openFileDialog_onSelect,"openfl.net.FileReference","openFileDialog_onSelect",0x6d8ab13e,"openfl.net.FileReference.openFileDialog_onSelect","openfl/net/FileReference.hx",222,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_239_saveFileDialog_onCancel,"openfl.net.FileReference","saveFileDialog_onCancel",0x6e985029,"openfl.net.FileReference.saveFileDialog_onCancel","openfl/net/FileReference.hx",239,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_246_saveFileDialog_onSave,"openfl.net.FileReference","saveFileDialog_onSave",0xeaaa942c,"openfl.net.FileReference.saveFileDialog_onSave","openfl/net/FileReference.hx",246,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_243_saveFileDialog_onSave,"openfl.net.FileReference","saveFileDialog_onSave",0xeaaa942c,"openfl.net.FileReference.saveFileDialog_onSave","openfl/net/FileReference.hx",243,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_251_saveFileDialog_onSelect,"openfl.net.FileReference","saveFileDialog_onSelect",0x20977dab,"openfl.net.FileReference.saveFileDialog_onSelect","openfl/net/FileReference.hx",251,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_272_urlLoader_onComplete,"openfl.net.FileReference","urlLoader_onComplete",0x4ddaf243,"openfl.net.FileReference.urlLoader_onComplete","openfl/net/FileReference.hx",272,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_298_urlLoader_onIOError,"openfl.net.FileReference","urlLoader_onIOError",0xbaaf7fd8,"openfl.net.FileReference.urlLoader_onIOError","openfl/net/FileReference.hx",298,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_303_urlLoader_onProgress,"openfl.net.FileReference","urlLoader_onProgress",0x543de937,"openfl.net.FileReference.urlLoader_onProgress","openfl/net/FileReference.hx",303,0x825195e0)
namespace openfl{
namespace net{

void FileReference_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_48_new)
HXDLIN(  48)		super::__construct(null());
            	}

Dynamic FileReference_obj::__CreateEmpty() { return new FileReference_obj; }

void *FileReference_obj::_hx_vtable = 0;

Dynamic FileReference_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileReference_obj > _hx_result = new FileReference_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileReference_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c1b0022) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c1b0022;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

bool FileReference_obj::browse(::Array< ::Dynamic> typeFilter){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_61_browse)
HXLINE(  62)		this->_hx___data = null();
HXLINE(  63)		this->_hx___path = null();
HXLINE(  66)		::String filter = null();
HXLINE(  68)		if (::hx::IsNotNull( typeFilter )) {
HXLINE(  70)			::Array< ::String > filters = ::Array_obj< ::String >::__new(0);
HXLINE(  72)			{
HXLINE(  72)				int _g = 0;
HXDLIN(  72)				while((_g < typeFilter->length)){
HXLINE(  72)					 ::openfl::net::FileFilter type = typeFilter->__get(_g).StaticCast<  ::openfl::net::FileFilter >();
HXDLIN(  72)					_g = (_g + 1);
HXLINE(  74)					filters->push(::StringTools_obj::replace(::StringTools_obj::replace(type->extension,HX_("*.",c4,24,00,00),HX_("",00,00,00,00)),HX_(";",3b,00,00,00),HX_(",",2c,00,00,00)));
            				}
            			}
HXLINE(  77)			filter = filters->join(HX_(";",3b,00,00,00));
            		}
HXLINE(  80)		 ::lime::ui::FileDialog openFileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE(  81)		openFileDialog->onCancel->add(this->openFileDialog_onCancel_dyn(),null(),null());
HXLINE(  82)		openFileDialog->onSelect->add(this->openFileDialog_onSelect_dyn(),null(),null());
HXLINE(  83)		openFileDialog->browse(::lime::ui::FileDialogType_obj::OPEN_dyn(),filter,null(),null());
HXLINE(  84)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,browse,return )

void FileReference_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_120_cancel)
HXDLIN( 120)		if (::hx::IsNotNull( this->_hx___urlLoader )) {
HXLINE( 122)			this->_hx___urlLoader->close();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,cancel,(void))

void FileReference_obj::download( ::openfl::net::URLRequest request,::String defaultFileName){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_127_download)
HXLINE( 128)		this->_hx___data = null();
HXLINE( 129)		this->_hx___path = null();
HXLINE( 131)		this->_hx___urlLoader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 132)		this->_hx___urlLoader->addEventListener(HX_("complete",b9,00,c8,7f),this->urlLoader_onComplete_dyn(),null(),null(),null());
HXLINE( 133)		this->_hx___urlLoader->addEventListener(HX_("ioError",02,fe,41,76),this->urlLoader_onIOError_dyn(),null(),null(),null());
HXLINE( 134)		this->_hx___urlLoader->addEventListener(HX_("progress",ad,f7,2a,86),this->urlLoader_onProgress_dyn(),null(),null(),null());
HXLINE( 135)		this->_hx___urlLoader->load(request);
HXLINE( 137)		 ::lime::ui::FileDialog saveFileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 138)		saveFileDialog->onCancel->add(this->saveFileDialog_onCancel_dyn(),null(),null());
HXLINE( 139)		saveFileDialog->onSelect->add(this->saveFileDialog_onSelect_dyn(),null(),null());
HXLINE( 140)		::String _hx_tmp;
HXDLIN( 140)		if (::hx::IsNotNull( defaultFileName )) {
HXLINE( 140)			_hx_tmp = ::haxe::io::Path_obj::extension(defaultFileName);
            		}
            		else {
HXLINE( 140)			_hx_tmp = null();
            		}
HXDLIN( 140)		saveFileDialog->browse(::lime::ui::FileDialogType_obj::SAVE_dyn(),_hx_tmp,defaultFileName,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FileReference_obj,download,(void))

void FileReference_obj::load(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_146_load)
HXDLIN( 146)		if (::hx::IsNotNull( this->_hx___path )) {
HXLINE( 148)			this->data = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(this->_hx___path));
HXLINE( 149)			this->openFileDialog_onComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,load,(void))

void FileReference_obj::save( ::Dynamic data,::String defaultFileName){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_164_save)
HXLINE( 165)		this->_hx___data = null();
HXLINE( 166)		this->_hx___path = null();
HXLINE( 168)		if (::hx::IsNull( data )) {
HXLINE( 168)			return;
            		}
HXLINE( 171)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE( 173)			this->_hx___data = ( ( ::openfl::utils::ByteArrayData)(data) );
            		}
            		else {
HXLINE( 177)			 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 177)			this->_hx___data = this1;
HXLINE( 178)			{
HXLINE( 178)				 ::openfl::utils::ByteArrayData this2 = this->_hx___data;
HXDLIN( 178)				this2->writeUTFBytes(::Std_obj::string(data));
            			}
            		}
HXLINE( 181)		 ::lime::ui::FileDialog saveFileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 182)		saveFileDialog->onCancel->add(this->saveFileDialog_onCancel_dyn(),null(),null());
HXLINE( 183)		saveFileDialog->onSelect->add(this->saveFileDialog_onSelect_dyn(),null(),null());
HXLINE( 184)		::String _hx_tmp;
HXDLIN( 184)		if (::hx::IsNotNull( defaultFileName )) {
HXLINE( 184)			_hx_tmp = ::haxe::io::Path_obj::extension(defaultFileName);
            		}
            		else {
HXLINE( 184)			_hx_tmp = null();
            		}
HXDLIN( 184)		saveFileDialog->browse(::lime::ui::FileDialogType_obj::SAVE_dyn(),_hx_tmp,defaultFileName,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FileReference_obj,save,(void))

void FileReference_obj::upload( ::openfl::net::URLRequest request,::String __o_uploadDataFieldName,::hx::Null< bool >  __o_testUpload){
            		::String uploadDataFieldName = __o_uploadDataFieldName;
            		if (::hx::IsNull(__o_uploadDataFieldName)) uploadDataFieldName = HX_("Filedata",c6,ce,7f,4a);
            		bool testUpload = __o_testUpload.Default(false);
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_206_upload)
HXDLIN( 206)		::openfl::_internal::Lib_obj::notImplemented(::hx::SourceInfo(HX_("openfl/net/FileReference.hx",e0,95,51,82),206,HX_("openfl.net.FileReference",60,01,9c,e4),HX_("upload",01,ca,59,8c)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FileReference_obj,upload,(void))

void FileReference_obj::openFileDialog_onCancel(){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_213_openFileDialog_onCancel)
HXDLIN( 213)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("cancel",7a,ed,33,b8),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,openFileDialog_onCancel,(void))

void FileReference_obj::openFileDialog_onComplete(){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_218_openFileDialog_onComplete)
HXDLIN( 218)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,openFileDialog_onComplete,(void))

void FileReference_obj::openFileDialog_onSelect(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_222_openFileDialog_onSelect)
HXLINE( 224)		 ::Dynamic fileInfo = ::sys::FileSystem_obj::stat(path);
HXLINE( 225)		this->creationDate = ( ( ::Date)(fileInfo->__Field(HX_("ctime",f0,39,a8,4d),::hx::paccDynamic)) );
HXLINE( 226)		this->modificationDate = ( ( ::Date)(fileInfo->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) );
HXLINE( 227)		this->size = ( (int)(fileInfo->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
HXLINE( 228)		this->type = (HX_(".",2e,00,00,00) + ::haxe::io::Path_obj::extension(path));
HXLINE( 231)		this->name = ::haxe::io::Path_obj::withoutDirectory(path);
HXLINE( 232)		this->_hx___path = path;
HXLINE( 234)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("select",fc,1a,33,6a),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,openFileDialog_onSelect,(void))

void FileReference_obj::saveFileDialog_onCancel(){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_239_saveFileDialog_onCancel)
HXDLIN( 239)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("cancel",7a,ed,33,b8),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,saveFileDialog_onCancel,(void))

void FileReference_obj::saveFileDialog_onSave(::String path){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::net::FileReference,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_246_saveFileDialog_onSave)
HXLINE( 246)			 ::openfl::net::FileReference _gthis1 = _gthis;
HXDLIN( 246)			_gthis1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_243_saveFileDialog_onSave)
HXLINE( 242)		 ::openfl::net::FileReference _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 244)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,saveFileDialog_onSave,(void))

void FileReference_obj::saveFileDialog_onSelect(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_251_saveFileDialog_onSelect)
HXLINE( 253)		this->name = ::haxe::io::Path_obj::withoutDirectory(path);
HXLINE( 255)		if (::hx::IsNotNull( this->_hx___data )) {
HXLINE( 257)			::sys::io::File_obj::saveBytes(path,::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(this->_hx___data));
HXLINE( 259)			this->_hx___data = null();
HXLINE( 260)			this->_hx___path = null();
            		}
            		else {
HXLINE( 264)			this->_hx___path = path;
            		}
HXLINE( 268)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("select",fc,1a,33,6a),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,saveFileDialog_onSelect,(void))

void FileReference_obj::urlLoader_onComplete( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_272_urlLoader_onComplete)
HXLINE( 274)		if (::Std_obj::isOfType(this->_hx___urlLoader->data,::hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE( 276)			this->_hx___data = ( ( ::openfl::utils::ByteArrayData)(this->_hx___urlLoader->data) );
            		}
            		else {
HXLINE( 280)			 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 280)			this->_hx___data = this1;
HXLINE( 281)			{
HXLINE( 281)				 ::openfl::utils::ByteArrayData this2 = this->_hx___data;
HXDLIN( 281)				this2->writeUTFBytes(::Std_obj::string(this->_hx___urlLoader->data));
            			}
            		}
HXLINE( 284)		if (::hx::IsNotNull( this->_hx___path )) {
HXLINE( 286)			::String _hx_tmp = this->_hx___path;
HXDLIN( 286)			::sys::io::File_obj::saveBytes(_hx_tmp,::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(this->_hx___data));
HXLINE( 288)			this->_hx___path = null();
HXLINE( 289)			this->_hx___data = null();
            		}
HXLINE( 293)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_onComplete,(void))

void FileReference_obj::urlLoader_onIOError( ::openfl::events::IOErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_298_urlLoader_onIOError)
HXDLIN( 298)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_onIOError,(void))

void FileReference_obj::urlLoader_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_303_urlLoader_onProgress)
HXDLIN( 303)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_onProgress,(void))


::hx::ObjectPtr< FileReference_obj > FileReference_obj::__new() {
	::hx::ObjectPtr< FileReference_obj > __this = new FileReference_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FileReference_obj > FileReference_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FileReference_obj *__this = (FileReference_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileReference_obj), true, "openfl.net.FileReference"));
	*(void **)__this = FileReference_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FileReference_obj::FileReference_obj()
{
}

void FileReference_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileReference);
	HX_MARK_MEMBER_NAME(creationDate,"creationDate");
	HX_MARK_MEMBER_NAME(creator,"creator");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(modificationDate,"modificationDate");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(_hx___path,"__path");
	HX_MARK_MEMBER_NAME(_hx___urlLoader,"__urlLoader");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FileReference_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(creationDate,"creationDate");
	HX_VISIT_MEMBER_NAME(creator,"creator");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(modificationDate,"modificationDate");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(_hx___path,"__path");
	HX_VISIT_MEMBER_NAME(_hx___urlLoader,"__urlLoader");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FileReference_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return ::hx::Val( _hx___data ); }
		if (HX_FIELD_EQ(inName,"__path") ) { return ::hx::Val( _hx___path ); }
		if (HX_FIELD_EQ(inName,"browse") ) { return ::hx::Val( browse_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"upload") ) { return ::hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"creator") ) { return ::hx::Val( creator ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"download") ) { return ::hx::Val( download_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__urlLoader") ) { return ::hx::Val( _hx___urlLoader ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creationDate") ) { return ::hx::Val( creationDate ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"modificationDate") ) { return ::hx::Val( modificationDate ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"urlLoader_onIOError") ) { return ::hx::Val( urlLoader_onIOError_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"urlLoader_onComplete") ) { return ::hx::Val( urlLoader_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"urlLoader_onProgress") ) { return ::hx::Val( urlLoader_onProgress_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"saveFileDialog_onSave") ) { return ::hx::Val( saveFileDialog_onSave_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"openFileDialog_onCancel") ) { return ::hx::Val( openFileDialog_onCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"openFileDialog_onSelect") ) { return ::hx::Val( openFileDialog_onSelect_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveFileDialog_onCancel") ) { return ::hx::Val( saveFileDialog_onCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveFileDialog_onSelect") ) { return ::hx::Val( saveFileDialog_onSelect_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"openFileDialog_onComplete") ) { return ::hx::Val( openFileDialog_onComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileReference_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__path") ) { _hx___path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"creator") ) { creator=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__urlLoader") ) { _hx___urlLoader=inValue.Cast<  ::openfl::net::URLLoader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creationDate") ) { creationDate=inValue.Cast<  ::Date >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"modificationDate") ) { modificationDate=inValue.Cast<  ::Date >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileReference_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("creationDate",ed,05,04,79));
	outFields->push(HX_("creator",ac,be,6a,11));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("modificationDate",aa,6b,1f,46));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("__data",4a,b9,5b,f1));
	outFields->push(HX_("__path",c5,48,4a,f9));
	outFields->push(HX_("__urlLoader",c2,ed,09,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileReference_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Date */ ,(int)offsetof(FileReference_obj,creationDate),HX_("creationDate",ed,05,04,79)},
	{::hx::fsString,(int)offsetof(FileReference_obj,creator),HX_("creator",ac,be,6a,11)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(FileReference_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::Date */ ,(int)offsetof(FileReference_obj,modificationDate),HX_("modificationDate",aa,6b,1f,46)},
	{::hx::fsString,(int)offsetof(FileReference_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(FileReference_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsString,(int)offsetof(FileReference_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(FileReference_obj,_hx___data),HX_("__data",4a,b9,5b,f1)},
	{::hx::fsString,(int)offsetof(FileReference_obj,_hx___path),HX_("__path",c5,48,4a,f9)},
	{::hx::fsObject /*  ::openfl::net::URLLoader */ ,(int)offsetof(FileReference_obj,_hx___urlLoader),HX_("__urlLoader",c2,ed,09,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileReference_obj_sStaticStorageInfo = 0;
#endif

static ::String FileReference_obj_sMemberFields[] = {
	HX_("creationDate",ed,05,04,79),
	HX_("creator",ac,be,6a,11),
	HX_("data",2a,56,63,42),
	HX_("modificationDate",aa,6b,1f,46),
	HX_("name",4b,72,ff,48),
	HX_("size",c1,a0,53,4c),
	HX_("type",ba,f2,08,4d),
	HX_("__data",4a,b9,5b,f1),
	HX_("__path",c5,48,4a,f9),
	HX_("__urlLoader",c2,ed,09,27),
	HX_("browse",8a,dd,60,1c),
	HX_("cancel",7a,ed,33,b8),
	HX_("download",88,6b,c6,91),
	HX_("load",26,9a,b7,47),
	HX_("save",3d,8b,4d,4c),
	HX_("upload",01,ca,59,8c),
	HX_("openFileDialog_onCancel",ca,1c,0e,86),
	HX_("openFileDialog_onComplete",09,a4,08,1c),
	HX_("openFileDialog_onSelect",4c,4a,0d,38),
	HX_("saveFileDialog_onCancel",37,e9,1a,39),
	HX_("saveFileDialog_onSave",ba,2d,29,25),
	HX_("saveFileDialog_onSelect",b9,16,1a,eb),
	HX_("urlLoader_onComplete",75,44,84,87),
	HX_("urlLoader_onIOError",e6,f9,50,ae),
	HX_("urlLoader_onProgress",69,3b,e7,8d),
	::String(null()) };

::hx::Class FileReference_obj::__mClass;

void FileReference_obj::__register()
{
	FileReference_obj _hx_dummy;
	FileReference_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.FileReference",60,01,9c,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileReference_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileReference_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileReference_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileReference_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net