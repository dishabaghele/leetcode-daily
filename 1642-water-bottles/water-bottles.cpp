class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;
        int r = count;
        while(r >= numExchange){
            count += r/numExchange;
            r = r/numExchange + r%numExchange;
        }
        return count;
    }
};