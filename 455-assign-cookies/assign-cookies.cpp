class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l = 0, r = 0;
        int cnt = 0;
        while(l < s.size() && r < g.size()){
            if(g[r] <= s[l]){
                cnt++;
                r++;
            }
            l++;
        }
        return cnt;
    }
};