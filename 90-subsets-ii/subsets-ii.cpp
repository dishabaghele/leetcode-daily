class Solution {
public:
    void findSubset2(int ind, vector<int>& nums, vector<int>& subset, set<vector<int>>& ans){
        if(ind == nums.size()){
            ans.insert(subset);
            return;
        }
        subset.push_back(nums[ind]);
        findSubset2(ind+1, nums, subset, ans);
        subset.pop_back();
        findSubset2(ind+1, nums, subset, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>subset;
        sort(nums.begin(), nums.end());
        findSubset2(0, nums, subset, ans);
        return vector<vector<int>>(ans.begin(), ans.end());  
    }
};