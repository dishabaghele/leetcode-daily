class Solution {
public:
    void findAllPermutation(vector<int>& nums, vector<int>& subset, vector<int>& freq, vector<vector<int>>&ans){
        if(subset.size() == nums.size()){
            ans.push_back(subset);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(freq[i] == 1) continue;
            subset.push_back(nums[i]);
            freq[i] = 1;
            findAllPermutation(nums, subset, freq, ans);
            subset.pop_back();
            freq[i] = 0;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>freq(nums.size(), 0);
        vector<int>subset;
        findAllPermutation(nums, subset, freq, ans);
        return ans;
    }
};