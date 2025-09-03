class Solution {
public:
    void findAllPermutation(vector<int>&nums, vector<int>&subset, vector<int>&freq, vector<vector<int>>&ans){
        if(subset.size() == nums.size()){
            ans.push_back(subset);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(freq[i] != 1){
                subset.push_back(nums[i]);
                freq[i] = 1;
                findAllPermutation(nums, subset, freq, ans);
                freq[i] = 0;
                subset.pop_back();
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        vector<int>freq(nums.size(), 0);
        findAllPermutation(nums, subset, freq, ans);
        return ans;        
    }
};