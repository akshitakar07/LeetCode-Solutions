int cmp(const void* a, const void* b) {
return (*(int*)a > *(int*)b) - (*(int*)a < *(int*)b);
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
qsort(nums, numsSize, sizeof(int), cmp);
int** res = malloc(numsSize * numsSize * sizeof(int*));
*returnColumnSizes = malloc(numsSize * numsSize * sizeof(int));
*returnSize = 0;
for (int i = 0; i < numsSize - 2; i++) {
if (i > 0 && nums[i] == nums[i - 1]) continue;
int l = i + 1, r = numsSize - 1;
while (l < r) {
long sum = (long)nums[i] + nums[l] + nums[r];
if (sum == 0) {
res[*returnSize] = malloc(3 * sizeof(int));
res[*returnSize][0] = nums[i];
res[*returnSize][1] = nums[l];
res[*returnSize][2] = nums[r];
(*returnColumnSizes)[*returnSize] = 3;
(*returnSize)++;
l++;
r--;
while (l < r && nums[l] == nums[l - 1]) l++;
while (l < r && nums[r] == nums[r + 1]) r--;
} else if (sum < 0) l++;
else r--;
}
}
return res;
}