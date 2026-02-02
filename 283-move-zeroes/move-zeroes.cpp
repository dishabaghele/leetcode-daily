class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>zeroVec;
        vector<int>nonZeroVec;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nonZeroVec.push_back(nums[i]);
            }else{
                zeroVec.push_back(nums[i]);
            }
        }
        int m = 0;
        for(int i=0; i<nonZeroVec.size(); i++){
            nums[m++] = nonZeroVec[i];
        }
        for(int i=0; i<zeroVec.size(); i++){
            nums[m++] = zeroVec[i];
        } 
    }
};