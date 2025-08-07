class Solution {
public:
    void genSubset(int ind, vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans){
        if(ind == nums.size()){
            ans.push_back(subset);
            return;
        }
        //take
        subset.push_back(nums[ind]);
        genSubset(ind+1, nums, subset, ans);
        subset.pop_back();
        //not take
        genSubset(ind+1, nums, subset, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        genSubset(0, nums, subset, ans);
        return ans;
    }
};