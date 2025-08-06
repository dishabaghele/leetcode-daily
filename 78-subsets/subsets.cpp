class Solution {
public:
    void genSub(int ind, vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans){
        if(ind == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[ind]);
        genSub(ind+1, nums, subset, ans);
        subset.pop_back();
        genSub(ind+1, nums, subset, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>subset;
        genSub(0, nums, subset, ans);
        return ans;
    }
};