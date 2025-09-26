class Solution {
public:
    void genAllParenthesis(int n, string s, int open, int close, vector<string>& ans){
        if(s.size() == 2*n){
            ans.push_back(s);
            return;
        }

        if(close > open) return;
       
        if(open < n){
            genAllParenthesis(n, s + '(', open + 1, close, ans);
            
        }
        genAllParenthesis(n, s + ')', open, close + 1, ans);
        
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        genAllParenthesis(n, "", 0, 0, ans);
        return ans;
    }
};