class Solution {
public:
    void findAllCombinationSum(int ind, vector<int>& candidates, int target, vector<int>& subset, vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(subset);
            return;
        }
        if(ind == candidates.size()){
            return;
        }
        for(int i=ind; i<candidates.size(); i++){
            if(i > ind && candidates[i-1] == candidates[i])continue;
            if(candidates[i] > target) break;
            subset.push_back(candidates[i]);
            findAllCombinationSum(i+1, candidates, target-candidates[i], subset, ans);
            subset.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>subset;
        sort(candidates.begin(), candidates.end());
        findAllCombinationSum(0, candidates, target, subset, ans);
        return ans;
    }
};