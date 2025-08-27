class Solution {
public:
    void findAllCombSum(int ind, vector<int> &candidates, int target, vector<int> &subset, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(subset);
            return;
        }
        if(ind == candidates.size()) return;
        if(target >= candidates[ind]){
            subset.push_back(candidates[ind]);
            findAllCombSum(ind, candidates, target-candidates[ind], subset, ans);
            subset.pop_back();
        }
        findAllCombSum(ind+1, candidates, target, subset, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>subset;
        findAllCombSum(0, candidates, target, subset, ans);
        return ans;
    }
};