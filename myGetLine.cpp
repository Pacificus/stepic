#include "myGetLine.hpp"

unsigned my_strlen(const char* str) {
    unsigned len = 0;
    while (*str++) len++;
    return len;
}

void my_strncopy(char* buf, unsigned n, const char* str) {
    while (n-- && (*buf++ = *str++));
    *buf = '\0';
}

char *resize(const char *str, unsigned size, unsigned new_size)
{
    /* ... */
   if (new_size == 0){
       if (size) delete []str;
       return 0;
   }else{
       char* p = new char[new_size + 1];
       if (size) {
           if (new_size >= size) {
               my_strncopy(p, my_strlen(str), str);
           }else {
               my_strncopy(p, new_size, str);
           }
           delete []str;
       }
       return p;
   }
}

char* my_getline(){
    char ch;
    size_t size = 16;
    char* buffer = new char[size];
    unsigned i = 0;
    while (cin.get(ch) && ch != '\n') {
        if (i == size) {
            size_t new_size = size * 2;
            buffer = resize(buffer, size, new_size);
            size = new_size;
        }
        buffer[i] = ch;
        i++;
    }
    buffer[i] = '\0';
    return buffer;
}
