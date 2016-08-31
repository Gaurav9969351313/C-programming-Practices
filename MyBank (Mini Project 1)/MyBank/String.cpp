#include "String.h"
#include <string>
#include <iostream>

using namespace std;



String::String()
{
	ptr=NULL;
}

String::String(const char *p)
{
	ptr = new char[strlen(p) + 1];
	strcpy(this->ptr,p);
}

const String  &String :: operator=(const String &s)
{
	delete ptr;
	ptr = new char[strlen(s.ptr) + 1];
	strcpy(ptr, s.ptr);
	return *this;
}



bool String::operator==(const char *p)
{
	if (strcmp(ptr, p)==0)
		return true;
	else
		return false;
}
String::String(const String &s)
{
	ptr = new char[strlen(s.ptr) + 1];
	strcpy(this->ptr, s.ptr);
}

String::~String()
{
	delete ptr;
}

void String::print()
{
	cout<<ptr<<endl;
}





