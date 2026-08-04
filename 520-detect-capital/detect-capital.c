#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool detectCapitalUse(char* word) {
    int len = strlen(word);
    int capitals = 0;
    
    for (int i = 0; i < len; i++) {
        if (isupper(word[i])) capitals++;
    }
    
    if (capitals == len || capitals == 0) return true;
    if (capitals == 1 && isupper(word[0])) return true;
    
    return false;
}