class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>>freq;
        vector<string>dup = strs;
        for(int i=0; i<dup.size();i++){
            sort(dup[i].begin(), dup[i].end());
            freq[dup[i]].push_back(strs[i]);
        }
        for(auto it : freq){
            ans.push_back(it.second);
        }
        return ans; 
    }
};