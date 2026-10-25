int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
int* res = (int*)malloc((nums1Size < nums2Size ? nums1Size : nums2Size) * sizeof(int));
int k = 0;
for(int i=0; i<nums1Size; i++){
for(int j=0; j<nums2Size; j++){
if(nums1[i] == nums2[j]){
int found = 0;
for(int m=0; m<k; m++){
if(res[m] == nums1[i]) { found = 1; break; }
}
if(!found) res[k++] = nums1[i];
break;
}
}
}
*returnSize = k;
return res;
}