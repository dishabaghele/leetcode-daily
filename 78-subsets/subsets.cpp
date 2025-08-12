class Solution {
public:
    vector<vector<int>>genSubset(int ind, vector<int>&nums, vector<int>&subset, vector<vector<int>>&subsetArray){
        if(ind == nums.size()){
            subsetArray.push_back(subset);
            return subsetArray;
        }
        //take
        subset.push_back(nums[ind]);
        genSubset(ind+1, nums, subset, subsetArray);
        subset.pop_back();

        //not take
        genSubset(ind+1, nums, subset, subsetArray);
        return subsetArray;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>subsetArray;
        vector<int>subset;
        return genSubset(0, nums, subset, subsetArray);
    }
};