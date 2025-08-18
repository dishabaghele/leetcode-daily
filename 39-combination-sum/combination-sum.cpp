class Solution {
public:
    void genAllSubset(int ind, vector<int>& candidates, int target, vector<int>&subset, vector<vector<int>>& ans){
        if(ind == candidates.size()){
            if(target == 0){
                ans.push_back(subset);
            }
            return;
        }
        //pick
        if(candidates[ind] <= target){
            subset.push_back(candidates[ind]);
            genAllSubset(ind, candidates, target-candidates[ind], subset, ans);
            subset.pop_back();
        }
       
        //not pick
        genAllSubset(ind+1, candidates, target, subset, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>subset;
        genAllSubset(0, candidates, target, subset, ans);
        return ans;
    }
};