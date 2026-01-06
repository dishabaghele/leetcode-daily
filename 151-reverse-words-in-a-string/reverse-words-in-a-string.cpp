class Solution {
public:
    void reverseWord(string &s, int start, int end){
        while(start < end){
            swap(s[start++], s[end--]);
        }
    }

    string reverseWords(string s) {
        string trimmed;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                trimmed += s[i];
            }else if(!trimmed.empty() && trimmed.back() != ' '){
                trimmed += ' ';
            }
        }

        if(!trimmed.empty() && trimmed.back() == ' '){
            trimmed.pop_back();
        }

        reverse(trimmed.begin(), trimmed.end());
        int start = 0;
        for(int i=0; i<=trimmed.size(); i++){
            if(i == trimmed.size() || trimmed[i] == ' ' ){
                reverseWord(trimmed, start, i-1);
                start = i+1;
            }
        }
        return trimmed; 
    }
};