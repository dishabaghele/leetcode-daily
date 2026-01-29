class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hashSet(256, -1);
        int maxLen = 0;
        int l=0;
        int r=0;
        for(int i=0; i<s.size(); i++){
            if(hashSet[s[r]] != -1 && l <= hashSet[s[r]]){
                l = hashSet[s[r]] + 1;
            }
            int len = r - l + 1;
            maxLen = max(len, maxLen);
            hashSet[s[r]] = r;
            r = r + 1;
        }
        return maxLen; 
    }
};