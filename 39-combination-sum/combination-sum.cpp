class Solution {
private:
    void findAllCombSum(int ind, vector<int>& subset, vector<int>& candidates, int target, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(subset);
            return;
        }
        if(ind == candidates.size()) return;

        //take
        if(candidates[ind] <= target){
            subset.push_back(candidates[ind]);
            findAllCombSum(ind, subset, candidates, target-candidates[ind], ans);
            subset.pop_back();
        }

        //not-take
        findAllCombSum(ind+1, subset, candidates, target, ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>subset;
        findAllCombSum(0, subset, candidates, target, ans);
        return ans;
    }
};