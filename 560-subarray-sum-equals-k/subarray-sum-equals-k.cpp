class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int cnt = 0;
        unordered_map<int, int>sumArray;
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