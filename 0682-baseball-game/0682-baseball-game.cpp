class Solution {
public:
    int calPoints(vector<string>& op) {
        int n=op.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(op[i]!= "+" && op[i]!= "C" && op[i]!= "D" ){
                st.push(stoi(op[i]));
            }else
             if(op[i]=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.push(first);
                st.push(first+second);

            }else if(op[i]=="D"){
                st.push(2*st.top());
            }else if(op[i]=="C"){
                st.pop();

            }
        }
        int ans=0;
         while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};