class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string, vector<string>>hashMap;
        vector<string> dup = strs;
        for(int i=0; i<dup.size(); i++){
            sort(dup[i].begin(), dup[i].end());
            hashMap[dup[i]].push_back(strs[i]);
        }
        for(auto it : hashMap){
            ans.push_back(it.second);
        }
        return ans;  
    }
};