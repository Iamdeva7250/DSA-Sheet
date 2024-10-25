class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int n = matrix.size();
        int m = matrix[0].size();  // Correctly calculate number of columns
        int col0 = 1;  // Flag to track if the first column should be zeroed

        // First pass: mark the rows and columns that should be zeroed
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;  // Mark the first cell of the row
                    if (j != 0)
                        matrix[0][j] = 0;  // Mark the first cell of the column
                    else
                        col0 = 0;  // Mark if the first column should be zeroed
                }
            }
        }

        // Second pass: set matrix elements to zero based on marks
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle the first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle the first column
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};