class Solution {
    public int singleNonDuplicate(int[] nums) {
        HashMap<Integer, Integer>freq = new HashMap<>();
        for(int i=0; i<nums.length; i++){
            freq.put(nums[i], freq.getOrDefault(nums[i], 0)+1);
        }
        for(Map.Entry<Integer, Integer> it : freq.entrySet()){
            if(it.getValue() == 1)
            return it.getKey();
        }
        return -1; 
    }
}