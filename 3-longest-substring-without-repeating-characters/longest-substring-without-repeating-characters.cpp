class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int maxLen = 0;
        vector<int> hashMap(256, -1);
        while(r < s.size()){
            if(hashMap[s[r]] != -1 && l <= hashMap[s[r]]){
                l = hashMap[s[r]] + 1;
            }
            int len = r - l + 1;
            maxLen = max(len, maxLen);
            hashMap[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};