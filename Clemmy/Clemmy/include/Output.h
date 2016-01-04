#ifndef INCLUDED_Output
#define INCLUDED_Output

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Output)


class HXCPP_CLASS_ATTRIBUTES  Output_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Output_obj OBJ_;
		Output_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Output")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Output_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Output_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Output","\x21","\x83","\x15","\x41"); }

		static Void print( ::String msg);
		static Dynamic print_dyn();

		static Void println( ::String msg);
		static Dynamic println_dyn();

};


#endif /* INCLUDED_Output */ 
