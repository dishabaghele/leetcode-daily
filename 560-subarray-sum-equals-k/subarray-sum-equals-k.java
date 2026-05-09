class Solution {
    public int subarraySum(int[] nums, int k) {
        int total = 0;
        HashMap<Integer, Integer> sumArray = new HashMap<>();
        int sum = 0;
        sumArray.put(0, 1);
        for(int i=0; i<nums.length; i++){
            sum += nums[i];
            if(sumArray.containsKey(sum - k)){
                total += sumArray.get(sum-k);
            }
            sumArray.put(sum, sumArray.getOrDefault(sum, 0)+1);
        }
        return total;
    }
}