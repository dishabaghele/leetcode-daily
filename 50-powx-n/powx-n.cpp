class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;
        long long nn = n;
        if(nn < 0){
            nn = -nn;
            x = 1/x;
        }
        while(nn > 0){
            if(nn%2 == 1){
                result *= x;
            }
            x *= x;
            nn /= 2;
        }
        return result;
    }
};