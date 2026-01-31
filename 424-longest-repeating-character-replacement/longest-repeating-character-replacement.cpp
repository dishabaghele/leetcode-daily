class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int maxLen = 0;
        int maxFreq = 0;
        vector<int>hashSet(26, 0);
        while(r < s.size()){
            hashSet[s[r]-'A']++;
            maxFreq = max(maxFreq, hashSet[s[r]-'A']);
            if((r-l+1) - maxFreq > k){
                hashSet[s[l]-'A']--;
                l++;
            }
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};