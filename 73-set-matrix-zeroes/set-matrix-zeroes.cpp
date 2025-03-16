 class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Step 1: Create a vector of pairs to store row and column indices where 0 is found
        vector<pair<int, int>> zeroPositions;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zeroPositions.push_back({i, j});
                }
            }
        }
        
        // Step 2: Set elements to zero if row or column matches stored indices
        for (auto& pos : zeroPositions) {
            int row = pos.first;
            int col = pos.second;
            
            // Set entire row to zero
            for (int j = 0; j < cols; j++) {
                matrix[row][j] = 0;
            }
            
            // Set entire column to zero
            for (int i = 0; i < rows; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};
