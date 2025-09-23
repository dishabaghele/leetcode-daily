class Solution {
public:
    void findAllParenthesis(int n, string s, int open, int close, vector<string>& ans){
        if(s.size() == n*2){
            ans.push_back(s);
            return;
        }
        //open bracket
        if(open < n){
            s.push_back('(');
            findAllParenthesis(n, s, open+1, close, ans);
            s.pop_back();
        }
        //close bracket
        if(close < open){
            s.push_back(')');
            findAllParenthesis(n, s, open, close+1, ans);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        findAllParenthesis(n, "", 0, 0, ans);
        return ans;
    }
};