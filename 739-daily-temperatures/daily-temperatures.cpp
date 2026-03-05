class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        vector<int>ans(temp.size(), 0);
        for(int i=0; i<temp.size(); i++){
            while(!st.empty() && temp[i] > temp[st.top()]){
                int ind = st.top();
                ans[ind] = i - ind;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};