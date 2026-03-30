class Solution {
public:
    int findContentChildren(vector<int>& s, vector<int>& c) {
        sort(s.begin(), s.end());
        sort(c.begin(), c.end());
        int l=0, r=0, cnt=0;
        while(l<s.size() && r<c.size()){
            if(s[l] <= c[r]){
                l++;
                cnt++;
            }
            r++;
        }
        return cnt;
    }
};