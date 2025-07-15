class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int>meeting;
        meeting.push_back(startTime[0]);
        for(int i=1; i<startTime.size(); i++){
            meeting.push_back(startTime[i] - endTime[i-1]);
        }
        meeting.push_back(eventTime - endTime[endTime.size()-1]);
        int i = 0;
        int j = 0;
        int n = meeting.size();
        int maxFreeTime = 0;
        int currFreeTime = 0;
        while(j < n){
            currFreeTime += meeting[j];
            if(i< n && j-i+1 > k+1){
                currFreeTime -= meeting[i];
                i++;
            }
            maxFreeTime = max(maxFreeTime, currFreeTime);
            j++;
        }
        return maxFreeTime;
    }
};