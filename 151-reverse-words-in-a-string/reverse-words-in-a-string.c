#include <string.h>

void reverseRange(char* s, int i, int j) {
    while (i < j) {
        char temp = s[i];
        s[i++] = s[j];
        s[j--] = temp;
    }
}

char* reverseWords(char* s) {
    int len = strlen(s);
    int i = 0, j = 0;
    
    // Clean spaces
    while (j < len) {
        while (j < len && s[j] == ' ') j++;
        if (j < len && i > 0) s[i++] = ' ';
        while (j < len && s[j] != ' ') s[i++] = s[j++];
    }
    s[i] = '\0';
    
    // Reverse full string
    reverseRange(s, 0, i - 1);
    
    // Reverse individual words
    int start = 0;
    for (int k = 0; k <= i; k++) {
        if (s[k] == ' ' || s[k] == '\0') {
            reverseRange(s, start, k - 1);
            start = k + 1;
        }
    }
    return s;
}