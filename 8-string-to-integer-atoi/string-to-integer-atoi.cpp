class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while(s[i] == ' ') i++;
        int sign = 1;
        long long num = 0;
        if(s[i] == '+' || s[i] == '-'){
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }
        while(i < s.size() && isdigit(s[i])){
            num = num * 10 + (s[i] - '0');
            if(sign == 1 && num >= INT_MAX)
            return INT_MAX;
            if(sign == -1 && -num <= INT_MIN)
            return INT_MIN;
            i++;
        }
        return sign * num;
    }
};