#include <stdlib.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }
    
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) count++;
    }
    
    int* res = (int*)malloc(count * sizeof(int));
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            res[k++] = i + 1;
        }
    }
    *returnSize = count;
    return res;
}