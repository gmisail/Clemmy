#include <hxcpp.h>

#ifndef INCLUDED_Reader
#include <Reader.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

Void Reader_obj::__construct(::String data)
{
HX_STACK_FRAME("Reader","new",0xe00da7d5,"Reader.new","Reader.hx",9,0x5282e93b)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(10)
	::String tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	::String tmp1 = ::sys::io::File_obj::getContent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	::String _tempData = tmp1;		HX_STACK_VAR(_tempData,"_tempData");
	HX_STACK_LINE(11)
	this->file = _tempData.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
}
;
	return null();
}

//Reader_obj::~Reader_obj() { }

Dynamic Reader_obj::__CreateEmpty() { return  new Reader_obj; }
hx::ObjectPtr< Reader_obj > Reader_obj::__new(::String data)
{  hx::ObjectPtr< Reader_obj > _result_ = new Reader_obj();
	_result_->__construct(data);
	return _result_;}

Dynamic Reader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reader_obj > _result_ = new Reader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Reader_obj::get( ::String id){
	HX_STACK_FRAME("Reader","get",0xe008580b,"Reader.get","Reader.hx",14,0x5282e93b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		int tmp = this->file->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		while((true)){
			HX_STACK_LINE(15)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(15)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(15)
			if ((tmp2)){
				HX_STACK_LINE(15)
				break;
			}
			HX_STACK_LINE(15)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(15)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(16)
			::String tmp4 = this->file->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(16)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(16)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16)
			if ((tmp6)){
				HX_STACK_LINE(17)
				int tmp7 = (i + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(17)
				::String tmp8 = this->file->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(17)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(21)
	return HX_HCSTRING("No Property Found","\x16","\x11","\x64","\x6f");
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,get,return )


Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(file,"file");
}

Dynamic Reader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Reader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Reader_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#endif

hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Reader","\x63","\x19","\x26","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Reader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Reader_obj >;
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

