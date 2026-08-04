int maxSubArray(int* nums, int numsSize) {
    int maxSoFar = nums[0];
    int currMax = nums[0];
    
    for (int i = 1; i < numsSize; i++) {
        currMax = (nums[i] > currMax + nums[i]) ? nums[i] : currMax + nums[i];
        if (currMax > maxSoFar) maxSoFar = currMax;
    }
    return maxSoFar;
}