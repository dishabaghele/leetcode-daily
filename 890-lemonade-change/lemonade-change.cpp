class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveCnt = 0, tenCnt = 0, twentyCnt = 0;
        for(int i=0; i<bills.size(); i++){
            if(bills[i] == 5){
                fiveCnt += 1;
            }else if(bills[i] == 10){
                if(!fiveCnt) 
                return false;
                else{
                    fiveCnt -= 1;
                    tenCnt += 1;
                }
            }else{
                if(tenCnt && fiveCnt){
                    twentyCnt += 1;
                    tenCnt -= 1;
                    fiveCnt -= 1;
                }else if(fiveCnt >= 3){
                    twentyCnt += 1;
                    fiveCnt -= 3;
                }else
                return false;
            }
        }
        return true;
    }
};