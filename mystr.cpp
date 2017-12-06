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
    if (nessesary == 0) {
        return 0;
    }
    const char* ppatern = pattern;
    int i = 0;
    int actual = 0;
    char first = *pattern;

    while (*text && actual < nessesary) {
        if (*text == *ppatern) {
            ppatern++;
            actual++;
        }else if (*text == first) {
            i--;
            text--;
            ppatern = pattern;
            actual = 0;
        }else{
            ppatern = pattern;
            actual = 0;
        }
        i++;
        text++;
    }

    if (actual < nessesary) return  -1;
    return i - nessesary;
}
