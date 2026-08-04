class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=0;i<temp.size();i++){
            int current=temp[i];
            while(!st.empty() && current>temp[st.top()]){
                int previndex=st.top();
                st.pop();
                 ans[previndex] = i - previndex;
            }
            st.push(i);
        }
        return ans;
    }
};