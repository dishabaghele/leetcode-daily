class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>hashSet(256, 0);
        for(int i=0; i<s.size(); i++){
            hashSet[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            if(hashSet[s[i]] == 1)
            return i;
        }
        return -1;
    }
};