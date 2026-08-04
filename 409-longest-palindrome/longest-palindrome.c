int longestPalindrome(char* s) {
    int freq[128] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]]++;
    }
    
    int length = 0;
    int hasOdd = 0;
    for (int i = 0; i < 128; i++) {
        length += (freq[i] / 2) * 2;
        if (freq[i] % 2 != 0) {
            hasOdd = 1;
        }
    }
    return length + hasOdd;
}