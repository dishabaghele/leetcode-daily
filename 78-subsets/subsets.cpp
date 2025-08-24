class Solution {
public:
    void findAllSubset(int ind, vector<int>& nums, vector<int>& subset, vector<vector<int>>&ans){
        if(ind == nums.size()){
            ans.push_back(subset);
            return;
        }

        //pick
        subset.push_back(nums[ind]);
        findAllSubset(ind+1, nums, subset, ans);
        subset.pop_back();

        findAllSubset(ind+1, nums, subset, ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        findAllSubset(0, nums, subset, ans);
        return ans;
    }
};