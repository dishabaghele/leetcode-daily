class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& c) {
        sort(g.begin(), g.end());
        sort(c.begin(), c.end());
        int l = 0, r = 0;
        while(l < g.size() && r < c.size()){
            if(g[l] <= c[r]){
                l++;
            }
            r++;
        }
        return l;
    }
};