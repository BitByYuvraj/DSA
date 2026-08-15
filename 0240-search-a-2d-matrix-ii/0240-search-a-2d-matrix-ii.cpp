class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m=mat.size(),n=mat[0].size();
        int s=0,r=n-1;
        while(s<m && r>=0){
            if(mat[s][r]==tar){
                return true;
            }else if(mat[s][r]>tar){
                r--;
            }else{
                s++;
            }
        }
        return false;
    }
};