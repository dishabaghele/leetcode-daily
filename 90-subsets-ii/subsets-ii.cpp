class Solution {
public:
    void findAllSub(int ind, vector<int>& nums, vector<int>& subset, set<vector<int>>&ans){
        ans.insert(subset);
        if(ind == nums.size()) return;
        for(int i=ind; i<nums.size(); i++){
            if(ind != i && nums[i-1] == nums[i])continue;
            subset.push_back(nums[i]);
            findAllSub(i+1, nums, subset, ans);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(), nums.end());
        vector<int>subset;
        findAllSub(0, nums, subset, ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};