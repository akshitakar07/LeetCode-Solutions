int numJewelsInStones(char* jewels, char* stones) {
    int isJewel[128] = {0};
    for (int i = 0; jewels[i] != '\0'; i++) {
        isJewel[(unsigned char)jewels[i]] = 1;
    }
    
    int count = 0;
    for (int i = 0; stones[i] != '\0'; i++) {
        if (isJewel[(unsigned char)stones[i]]) {
            count++;
        }
    }
    return count;
}