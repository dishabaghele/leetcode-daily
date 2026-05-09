class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int total = 0, sum = 0;
        unordered_map<int, int> sumFreq;
        sumFreq[0] = 1;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sumFreq.find(sum - k) != sumFreq.end()){
                total += sumFreq[sum - k];
            }
            sumFreq[sum]++;
        }
        return total;
    }
};