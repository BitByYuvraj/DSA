class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int left = 0, right = cols - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // find row of maximum element in mid column
            int maxRow = 0;
            for (int r = 1; r < rows; r++) {
                if (mat[r][mid] > mat[maxRow][mid]) {
                    maxRow = r;
                }
            }

            int leftValue = (mid - 1 >= 0) ? mat[maxRow][mid - 1] : -1;
            int rightValue = (mid + 1 < cols) ? mat[maxRow][mid + 1] : -1;

            // check if peak
            if (mat[maxRow][mid] > leftValue && mat[maxRow][mid] > rightValue) {
                return {maxRow, mid};
            }
            // go to the side which has bigger element
            else if (leftValue > mat[maxRow][mid]) {
                right = mid - 1; // go left
            } else {
                left = mid + 1; // go right
            }
        }
        return {-1, -1}; // shouldn't reach
    }
};
