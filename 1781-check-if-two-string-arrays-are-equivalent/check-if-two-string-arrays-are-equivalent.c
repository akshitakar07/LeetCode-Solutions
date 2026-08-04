#include <stdbool.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int w1 = 0, i1 = 0;
    int w2 = 0, i2 = 0;
    
    while (w1 < word1Size && w2 < word2Size) {
        if (word1[w1][i1] != word2[w2][i2]) {
            return false;
        }
        
        i1++;
        if (word1[w1][i1] == '\0') {
            w1++;
            i1 = 0;
        }
        
        i2++;
        if (word2[w2][i2] == '\0') {
            w2++;
            i2 = 0;
        }
    }
    
    return w1 == word1Size && w2 == word2Size;
}