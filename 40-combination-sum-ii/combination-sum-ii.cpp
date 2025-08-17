class Solution {
public:
    void findCombinationSum(int ind, vector<int>& candidates, int target, vector<int>& subset, set<vector<int>>&ans){
        if(target == 0){
            ans.insert(subset);
            return;
        }
        if(ind == candidates.size() || candidates[ind] > target){
            return;
        }
        
        if(target >= candidates[ind]){
            subset.push_back(candidates[ind]);
            findCombinationSum(ind+1, candidates, target-candidates[ind], subset, ans);
            subset.pop_back();
        }
        int next = ind+1;
        while(next < candidates.size() && candidates[next] == candidates[ind]){
            next++;
        }
        findCombinationSum(next, candidates, target, subset, ans);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>>ans;
        vector<int>subset;
        findCombinationSum(0, candidates, target, subset, ans);
        vector<vector<int>>final(ans.begin(), ans.end());
        return final;
    }
};