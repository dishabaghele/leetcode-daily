class Solution {
public:
    void findAllPerm(int ind, vector<int>& nums, vector<vector<int>>&ans){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind; i<nums.size(); i++){
            swap(nums[i], nums[ind]);
            findAllPerm(ind+1, nums, ans);
            swap(nums[i], nums[ind]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        findAllPerm(0, nums, ans);
        return ans;
    }
};