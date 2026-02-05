class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        long long maxArea = 0;
        while(l < r){
            long long ar = (long long)(r-l) * min(height[l], height[r]);
            maxArea = max(maxArea, ar);
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxArea;
    }
};