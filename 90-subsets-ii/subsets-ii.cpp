class Solution {
public:
    void findAllSubset(int ind, vector<int>& nums, vector<int>& subset, set<vector<int>>& ans){
        if(ind == nums.size()){
            ans.insert(subset);
            return;
        }
        subset.push_back(nums[ind]);
        findAllSubset(ind+1, nums, subset, ans);
        subset.pop_back();
        findAllSubset(ind+1, nums, subset, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int>subset;
        sort(nums.begin(), nums.end());
        findAllSubset(0,nums, subset, ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};