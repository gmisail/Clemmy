#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Output
#include <Output.h>
#endif
#ifndef INCLUDED_Reader
#include <Reader.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

::Reader Main_obj::reader;

::String Main_obj::file;

cpp::ArrayBase Main_obj::args;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",14,0x087e5c05)
		HX_STACK_LINE(15)
		::Main_obj::args = ::Sys_obj::args();
		HX_STACK_LINE(16)
		Dynamic tmp = ::Main_obj::args->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		::Reader tmp1 = ::Reader_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::Main_obj::reader = tmp1;
		HX_STACK_LINE(18)
		Dynamic tmp2 = ::Main_obj::args->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		if ((tmp3)){
			HX_STACK_LINE(19)
			::Output_obj::println(HX_HCSTRING("No file found! Make sure the file has an .clem extension or the file exists!","\xfe","\x7a","\xb2","\x34"));
		}
		else{
			HX_STACK_LINE(21)
			::Reader tmp4 = ::Main_obj::reader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			Dynamic tmp5 = tmp4->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::Output_obj::println(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file; return true;  }
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args; return true;  }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reader") ) { outValue = reader; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::Reader*/ ,(void *) &Main_obj::reader,HX_HCSTRING("reader","\x43","\xa5","\x91","\xfc")},
	{hx::fsString,(void *) &Main_obj::file,HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Main_obj::args,HX_HCSTRING("args","\x5d","\x8d","\x74","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::reader,"reader");
	HX_MARK_MEMBER_NAME(Main_obj::file,"file");
	HX_MARK_MEMBER_NAME(Main_obj::args,"args");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::reader,"reader");
	HX_VISIT_MEMBER_NAME(Main_obj::file,"file");
	HX_VISIT_MEMBER_NAME(Main_obj::args,"args");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("reader","\x43","\xa5","\x91","\xfc"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

