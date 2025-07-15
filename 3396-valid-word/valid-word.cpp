class Solution {
public:

    bool isVal(char letter){
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        return true;

        return false;
    }

    bool isValid(string word) {
        int countV=0;
        int countC=0;
        if(word.size() < 3)
        return false;
        for(int i=0; i<word.size(); i++){
            if(!isalnum(word[i])) return false;
            if(isalpha(word[i])){
                if(isVal(tolower(word[i])))
                countV++;
                else
                countC++;
            }
        }
        if(!countV || !countC)
        return false;

        return true;
    }
};