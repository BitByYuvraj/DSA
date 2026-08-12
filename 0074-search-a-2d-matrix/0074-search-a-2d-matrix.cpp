class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();
        int startrow = 0, endrow = m - 1;
        while (startrow <= endrow) {
            int midrow = startrow + (endrow - startrow) / 2;
            if (target >= mat[midrow][0] && target <= mat[midrow][n - 1]) {
                int l = 0, r = n - 1;
                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    if (mat[midrow][mid] == target)
                        return true;
                    else if (mat[midrow][mid] < target)
                        l = mid + 1;
                    else
                        r = mid - 1;
                }
                return false; 
            } 
            else if (target > mat[midrow][n - 1]) {
                startrow = midrow + 1; 
            } 
            else {
                endrow = midrow - 1; 
            }
        }
        return false; 
    }
};
