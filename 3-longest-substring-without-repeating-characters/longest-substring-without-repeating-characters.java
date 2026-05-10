class Solution {
    public int lengthOfLongestSubstring(String s) {
        int l = 0, r = 0;
        int[] arr =  new int[256];
        Arrays.fill(arr, -1);
        int maxLen = 0;
        while(r < s.length()){
            char ch = s.charAt(r);
            if(arr[ch] != -1 && l <= arr[ch]){
                l = arr[ch] + 1;
            }
            int len = r - l + 1;
            maxLen = Math.max(maxLen, len);
            arr[ch] = r;
            r++;
        }
        return maxLen;  
    }
}