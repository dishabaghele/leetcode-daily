class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        int ind = 0;
        for(auto i : freq){
            nums[ind++] = i.first;
        }
        return freq.size(); 
    }
};