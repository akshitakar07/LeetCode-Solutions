#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* res = (int*)malloc(numsSize * sizeof(int));
    
    int left = 0;
    int right = numsSize - 1;
    int pos = numsSize - 1;
    
    while (left <= right) {
        int leftSq = nums[left] * nums[left];
        int rightSq = nums[right] * nums[right];
        
        if (leftSq > rightSq) {
            res[pos--] = leftSq;
            left++;
        } else {
            res[pos--] = rightSq;
            right--;
        }
    }
    return res;
}
