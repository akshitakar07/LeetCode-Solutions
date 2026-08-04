int countBinarySubstrings(char* s) {
    int prevGroup = 0;
    int currGroup = 1;
    int count = 0;
    
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i - 1]) {
            currGroup++;
        } else {
            count += (prevGroup < currGroup) ? prevGroup : currGroup;
            prevGroup = currGroup;
            currGroup = 1;
        }
    }
    count += (prevGroup < currGroup) ? prevGroup : currGroup;
    return count;
}