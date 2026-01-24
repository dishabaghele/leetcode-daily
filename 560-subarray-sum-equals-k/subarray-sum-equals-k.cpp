class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int>freq;
        int sum = 0;
        freq[0] = 1;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(freq.find(sum-k) != freq.end()){
                cnt += freq[sum-k];
            }
            freq[sum]++;
        }
        return cnt;
    }
};