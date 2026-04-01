class Solution {
    public int firstUniqChar(String s) {
        int[] hashSet = new int[26];
        for(int i=0; i<s.length(); i++){
            hashSet[s.charAt(i)-'a']++;
        }
        for(int i=0; i<s.length(); i++){
            if(hashSet[s.charAt(i) - 'a'] == 1)
            return i;
        }
        return -1;
    }
}