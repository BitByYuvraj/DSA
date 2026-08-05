class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int lsum=0,n=cp.size(),maxsum=0,rsum=0;;
        long long high= accumulate(cp.begin(),cp.end(),0);
        if(k==n){
            return high;
        }
        for(int i=0;i<k;i++){
            lsum+=cp[i];
        }
        maxsum=lsum;
        for(int i=k-1;i>=0;i--){
            lsum-=cp[i];
            rsum+=cp[n-k+i];
            maxsum=max(maxsum,rsum+lsum);
        }
        return maxsum;
        
    }
};