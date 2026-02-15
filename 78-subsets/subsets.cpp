class Solution {
public:
    void findAllSubset(int ind, vector<int>& subset, vector<int>& nums,set<vector<int>>&ans){
        ans.insert(subset);
        if(ind == nums.size()) return;
        for(int i=ind; i<nums.size(); i++){
            if(i != ind && nums[i-1] == nums[i]) continue;
            subset.push_back(nums[i]);
            findAllSubset(i+1, subset, nums, ans);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>subset;
        findAllSubset(0, subset, nums, ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};