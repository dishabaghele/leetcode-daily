class Solution {
public:
    void findAllParenthesis(int n, string s, int open, int close, vector<string>& ans){
        if(s.size() == n*2){
            if(open == close){
                ans.push_back(s);
            }
            return;
        }
        if(close > open){
            return;
        }

        //open
        findAllParenthesis(n, s + '(', open+1, close, ans);
        //close
        findAllParenthesis(n, s + ')', open, close+1, ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s = "(";
        int open = 1;
        int close = 0;
        findAllParenthesis(n, s, open, close, ans);
        return ans;
    }
};