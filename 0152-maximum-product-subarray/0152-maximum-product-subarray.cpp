class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = nums[0];
        int currMax = nums[0];
        int currMin = nums[0]; 

        for(int i = 1; i < nums.size(); i++){
            int x = nums[i];

            if(x < 0) swap(currMax, currMin); 

            currMax = max(x, currMax * x);
            currMin = min(x, currMin * x);

            maxproduct = max(maxproduct, currMax);
        }

        return maxproduct;
    }
};