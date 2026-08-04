#include <string.h>

int strStr(char* haystack, char* needle) {
    char* ptr = strstr(haystack, needle);
    if (ptr) return ptr - haystack;
    return -1;
}