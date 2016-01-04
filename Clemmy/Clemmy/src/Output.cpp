#include <hxcpp.h>

#ifndef INCLUDED_Output
#include <Output.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif

Void Output_obj::__construct()
{
	return null();
}

//Output_obj::~Output_obj() { }

Dynamic Output_obj::__CreateEmpty() { return  new Output_obj; }
hx::ObjectPtr< Output_obj > Output_obj::__new()
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct();
	return _result_;}

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct();
	return _result_;}

Void Output_obj::print( ::String msg){
{
		HX_STACK_FRAME("Output","print",0xc3d40320,"Output.print","Output.hx",5,0x86f1aa3d)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(6)
		::String tmp = (HX_HCSTRING("[Clemmy] ","\xdb","\x5a","\x33","\xec") + msg);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6)
		::Sys_obj::print(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,print,(void))

Void Output_obj::println( ::String msg){
{
		HX_STACK_FRAME("Output","println",0x633369a2,"Output.println","Output.hx",9,0x86f1aa3d)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(10)
		::String tmp = (HX_HCSTRING("[Clemmy] ","\xdb","\x5a","\x33","\xec") + msg);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		::Sys_obj::println(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,println,(void))


Output_obj::Output_obj()
{
}

bool Output_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

hx::Class Output_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	::String(null()) };

void Output_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Output","\x21","\x83","\x15","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Output_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Output_obj >;
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

