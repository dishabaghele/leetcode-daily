class Solution {
public:
    void genAllSubset(int ind, vector<int>& candidates, int target, vector<int>&subset, set<vector<int>>& ans){
        if(target == 0){
            ans.insert(subset);
            return;
        }
           
        if(ind == candidates.size() || candidates[ind] > target){
            return;
        }
       
        //pick
        if(candidates[ind] <= target){
            subset.push_back(candidates[ind]);
            genAllSubset(ind+1, candidates, target-candidates[ind], subset, ans);
            subset.pop_back();
        }

        int next = ind + 1;

        while(next < candidates.size() && candidates[ind] == candidates[next]) next++;
       
        //not pick
        genAllSubset(next, candidates, target, subset, ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>ans;
        vector<int>subset;
        sort(candidates.begin(), candidates.end());
        genAllSubset(0, candidates, target, subset, ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};