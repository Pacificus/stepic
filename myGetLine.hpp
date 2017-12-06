#ifndef _MYGETLINE_
#define _MYGETLINE_

#include <iostream>
using namespace std;

unsigned my_strlen(const char* str);
void my_strncopy(char* buf, unsigned n, const char* str);
char *resize(const char *str, unsigned size, unsigned new_size);
char* my_getline();

#endif
