class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),r=0,l=0,len=0,zeros=0;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            if(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;

    }
};