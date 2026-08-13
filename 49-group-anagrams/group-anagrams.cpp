class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashMap;
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
            string dup = strs[i];
            sort(dup.begin(), dup.end());
            hashMap[dup].push_back(strs[i]);
        }
        for(auto it : hashMap){
            ans.push_back(it.second);
        }
        return ans;
    }
};