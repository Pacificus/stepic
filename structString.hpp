#ifndef _STRING_

#define _STRING_

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>
using std::cout;
using std::endl;

#endif

struct String {
	
	String(const char *str = "");

	String(size_t n, char c);
    
    void append(String &other);
    
	~String();

	void print();
	
	size_t size;
	char *str;
};
