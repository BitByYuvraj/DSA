class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int ans = 0;

        for (int i = 0; i <= n; i++) {

            int curr;

            if (i == n)
                curr = 0;
            else
                curr = heights[i];

            while (!st.empty() && heights[st.top()] > curr) {

                int height = heights[st.top()];
                st.pop();

                int right = i;

                int left;
                if (st.empty())
                    left = -1;
                else
                    left = st.top();

                int width = right - left - 1;

                int area = height * width;

                ans = max(ans, area);
            }

            st.push(i);
        }

        return ans;
    }
};