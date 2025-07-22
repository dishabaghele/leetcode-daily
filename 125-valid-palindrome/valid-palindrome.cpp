class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                cleaned += tolower(s[i]);
            }
        }
        int n = cleaned.size();
        for(int i=0; i<n; i++){
            if(cleaned[i] != cleaned[n-1-i])
            return false;
        }
        return true;
    }
};