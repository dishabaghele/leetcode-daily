class Solution {
public:
    void findAllCombination(int ind, vector<int>&nums, vector<int>&subset, set<vector<int>>&ans){
        ans.insert(subset);
        if(ind == nums.size()) return;
        for(int i=ind; i<nums.size(); i++){
            if(i > ind && nums[i-1] == nums[i]) continue;
            subset.push_back(nums[i]);
            findAllCombination(i+1, nums, subset, ans);
            subset.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>ans;
        vector<int>subset;
        findAllCombination(0, nums, subset, ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};