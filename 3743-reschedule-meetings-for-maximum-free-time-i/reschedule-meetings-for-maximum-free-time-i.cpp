class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int>freeTime;
        freeTime.push_back(startTime[0]);
        for(int i=1; i<startTime.size(); i++){
            freeTime.push_back(startTime[i] - endTime[i-1]);
        }
        freeTime.push_back(eventTime - endTime[endTime.size()-1]);
        int currSum = 0;
        int maxSum = 0;
        int i=0;
        int j=0;
        int n = freeTime.size();
        while(j < n){
            currSum += freeTime[j];
            if(i<n && j-i+1 > k+1){
                currSum -= freeTime[i];
                i++;
            }
            maxSum = max(maxSum, currSum);
            j++;
        }
        return maxSum;
    }
};