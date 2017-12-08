#include "structString.hpp"


	
String::String(const char *str) {
	size = strlen(str);
    this->str = new char[size + 1];
    strcpy(this->str, str);
}

    /* Реализуйте этот конструктор */
String::String(size_t n, char c){
	size = n;
    str = new char[n + 1];
    char* p = str;
    while (n-- > 0) {
		*p++ = c;   
    }
    *p = '\0';
}
    
void String::append(String &other){
	size_t  old_size = size;
	size =  old_size + other.size;
		
	char buf[old_size + 1];
	strcpy(buf, str);
		
	delete []str;
	this->str = new char[size + 1];
	strcpy(str, buf);
		
	if (this == &other) {
		strcpy(str + old_size, buf);
		return ;
	}
		
    strcpy(str + old_size, other.str);
}

    /* и деструктор */
String::~String() {
    delete []str;   
}

void String::print() {
	cout << str << endl;
}

