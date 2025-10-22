class Solution {
public:
    void findAllSubset(int ind, vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans){
        ans.push_back(subset);
        if(ind == nums.size()) return;
        for(int i=ind; i<nums.size(); i++){
            if(i > ind && nums[i] == nums[i-1]) continue;
            subset.push_back(nums[i]);
            findAllSubset(i+1, nums, subset, ans);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>subset;
        sort(nums.begin(), nums.end());
        findAllSubset(0, nums, subset, ans);
        return ans;
    }
};