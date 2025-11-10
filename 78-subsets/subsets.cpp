class Solution {
public:
    void findAllSubset(int ind, vector<int>& nums, vector<int>& subset, set<vector<int>>&ans){
        ans.insert(subset);
        if(ind == nums.size()) return;
        //pick
        subset.push_back(nums[ind]);
        findAllSubset(ind+1, nums, subset, ans);
        subset.pop_back();

        //not pick
        findAllSubset(ind+1, nums, subset, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>subset;
        findAllSubset(0, nums, subset, ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};