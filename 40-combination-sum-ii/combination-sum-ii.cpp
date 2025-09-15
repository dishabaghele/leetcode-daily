class Solution {
public:
    void findAllCombination(int ind, vector<int>& candidates, int target, vector<int>& subset, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(subset);
            return;
        }
        for(int i=ind; i<candidates.size(); i++){
            if(i > ind && candidates[i-1] == candidates[i])continue;
            if(target < candidates[i]) break;
            subset.push_back(candidates[i]);
            findAllCombination(i+1, candidates, target-candidates[i], subset, ans);
            subset.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>subset;
        sort(candidates.begin(), candidates.end());
        findAllCombination(0, candidates, target, subset, ans);
        return ans; 
    }
};