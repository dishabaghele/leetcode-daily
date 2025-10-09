class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        long long l = 0;
        long long r = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(l < s.size() && r < g.size()){
            if(s[l] >= g[r]){
                l++;r++;
            }
            else l++;
            // r++;
        }
        return r;
    }
};