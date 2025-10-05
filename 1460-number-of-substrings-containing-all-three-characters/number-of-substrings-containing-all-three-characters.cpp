class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0;
        vector<int>hashMap(3, -1);
        for(int i=0; i<s.size(); i++){
            hashMap[s[i]-'a'] = i;
            if(hashMap[0] != -1 && hashMap[1] != -1 && hashMap[2] != -1){
                cnt += 1 + min(hashMap[0], min(hashMap[1], hashMap[2]));
            } 
        }
        return cnt;
        
    }
};