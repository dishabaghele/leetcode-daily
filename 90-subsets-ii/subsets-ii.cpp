class Solution {
public:
    void findAllSubset(int ind, vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans){
        if(ind == nums.size()){
            ans.push_back(subset);
            return;
        }
        ans.push_back(subset);
        for(int i=ind; i<nums.size(); i++){
            if(i > ind && nums[i-1] == nums[i]) continue;
            subset.push_back(nums[i]);
            findAllSubset(i+1, nums, subset, ans);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        vector<int>subset;
        findAllSubset(0, nums, subset, ans);
        return ans;
    }
};