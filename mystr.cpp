#include "mystr.hpp"

int strlength(const char* str) {
    int length = 0;
    while (*str++) length++;
    return length;
}

int strstr(const char *text, const char *pattern)
{
    /* ... */
   int nessesary = strlength(pattern);
   if (nessesary > strlength(text)) {
		return -1;
   }
   if (nessesary == 0) {
        return 0;
    }
    const char* tmp = pattern;
    int id = 0;
    int actual = 0;

    while (*text) {
        if (*text == *pattern) {
            while (*text == *tmp && *text) {
                tmp++;
                text++;
                actual++;
                id++;
            }
            if (actual == nessesary) return id - nessesary;
        }else{
            actual = 0;
            tmp = pattern;
        }

        text++;
        id++;
    }
    return  -1;
}
