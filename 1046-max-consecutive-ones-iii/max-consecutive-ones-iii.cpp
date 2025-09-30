class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeroes = 0;
        int l = 0;
        int r = 0;
        int maxLen = 0;
        while(r < nums.size()){
            if(nums[r] == 0) zeroes++;
            if(zeroes <= k){
                maxLen = max(maxLen, r-l+1);
            }else{
                if(nums[l] == 0) zeroes--;
                l++;
            }
            r++;
        }
        return maxLen;
    }
};