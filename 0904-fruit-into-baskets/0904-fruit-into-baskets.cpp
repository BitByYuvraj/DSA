class Solution{
public:
    int totalFruit(vector<int>&f){
        unordered_map<int,int>mpp;
        int l=0,r=0,n=f.size(),ans=0;
        while(r<n){
            mpp[f[r]]++;
            while(mpp.size()>2){
                mpp[f[l]]--;
                if(mpp[f[l]]==0){
                    mpp.erase(f[l]);
                }
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};