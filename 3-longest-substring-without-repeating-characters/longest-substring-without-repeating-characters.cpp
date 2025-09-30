class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        vector<int> hashSet(256, -1);
        int maxLen = 0;
        while(r < s.size()){
            if(hashSet[s[r]] != -1 && hashSet[s[r]] >= l){
                l = hashSet[s[r]]+1;
            }
            int len = r - l + 1;
            maxLen = max(maxLen, len);
            hashSet[s[r]] = r;
            r = r+1;
        }
        return maxLen;
    }
};