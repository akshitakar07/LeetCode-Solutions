int maxArea(int* height, int heightSize){
int l = 0, r = heightSize - 1, max_val = 0;
while(l < r){
int h = height[l] < height[r] ? height[l] : height[r];
int area = h * (r - l);
if(area > max_val) max_val = area;
if(height[l] < height[r]) l++;
else r--;
}
return max_val;
}