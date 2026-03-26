class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int>sumArray;
        int cnt = 0;
        int sum = 0;
        sumArray[0] = 1;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sumArray.find(sum - k) != sumArray.end()){
                cnt += sumArray[sum-k];
            }
            sumArray[sum]++;
        }
        return cnt;
    }
};