 class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
         vector<int> columnsWithMinusOne;
        
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                if (matrix[i][j] == -1) {
                    columnsWithMinusOne.push_back(j);
                    break;  
                }
            }
        }
        
         for (int col : columnsWithMinusOne) {
            int maxElement = INT_MIN;
            for (int i = 0; i < rows; i++) {
                if (matrix[i][col] != -1) {
                    maxElement = max(maxElement, matrix[i][col]);
                }
            }
            
             for (int i = 0; i < rows; i++) {
                if (matrix[i][col] == -1) {
                    matrix[i][col] = maxElement;
                }
            }
        }
        
        return matrix;
    }
};
