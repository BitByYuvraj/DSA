class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zero = 0, maxlen = 0;
        for(int r = 0; r < nums.size(); r++){
            if(nums[r] == 0){
                zero++;
            }
            while(zero > k){
                if(nums[left] == 0){
                    zero--;
                }
                left++;
            }
            maxlen = max(maxlen, r - left + 1);
        }
        return maxlen;
    }
};
