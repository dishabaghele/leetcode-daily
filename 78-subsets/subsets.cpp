class Solution {
public:
    void findAllSubset(int ind, vector<int>& subset, set<vector<int>>& ans, vector<int>& nums){
        ans.insert(subset);
        if(ind == nums.size()) return;
        for(int i=ind; i<nums.size(); i++){
            if(i != ind && nums[i] == nums[i-1]) continue;
            subset.push_back(nums[i]);
            findAllSubset(i+1, subset, ans, nums);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int>subset;
        findAllSubset(0, subset, ans, nums);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};