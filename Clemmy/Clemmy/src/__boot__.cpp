#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Reader
#include <Reader.h>
#endif
#ifndef INCLUDED_Output
#include <Output.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::io::Error_obj::__register();
::sys::io::File_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::Bytes_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::Std_obj::__register();
::Reader_obj::__register();
::Output_obj::__register();
::Main_obj::__register();
::haxe::io::Error_obj::__boot();
::sys::io::File_obj::__boot();
}

