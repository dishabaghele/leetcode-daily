class Solution {
public:
    void findAllCombination(int ind, vector<int>& candidates, int target, vector<int>& subset, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(subset);
            return;
        }
        if(ind == candidates.size()) return;

        //take
        if(target >= candidates[ind]){
            subset.push_back(candidates[ind]);
            findAllCombination(ind, candidates, target-candidates[ind], subset, ans);
            subset.pop_back();
        }
        
        //not take
        findAllCombination(ind+1, candidates, target, subset, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>subset;
        findAllCombination(0, candidates, target, subset, ans);
        return ans;
    }
};