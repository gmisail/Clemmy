#ifndef INCLUDED_Reader
#define INCLUDED_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Reader)


class HXCPP_CLASS_ATTRIBUTES  Reader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();
		Void __construct(::String data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Reader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Reader_obj > __new(::String data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Reader","\x63","\x19","\x26","\x31"); }

		Array< ::String > file;
		virtual Dynamic get( ::String id);
		Dynamic get_dyn();

};


#endif /* INCLUDED_Reader */ 
