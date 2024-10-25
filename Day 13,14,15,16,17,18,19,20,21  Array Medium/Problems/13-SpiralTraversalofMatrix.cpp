class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n = matrix.size();
        int m = matrix[0].size();

        int left = 0, right = m - 1; // Right should be m - 1 (last column)
        int top = 0, bottom = n - 1; // Bottom is n - 1 (last row)
        vector<int> ans;

        while (top <= bottom && left <= right) {
            // Traverse from left to right along the top row
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;  // Move the top boundary down

            // Traverse downwards along the right column
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;  // Move the right boundary left

            // Traverse from right to left along the bottom row, if there's any row left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;  // Move the bottom boundary up
            }

            // Traverse upwards along the left column, if there's any column left
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;  // Move the left boundary right
            }
        }

        return ans;
    }
};