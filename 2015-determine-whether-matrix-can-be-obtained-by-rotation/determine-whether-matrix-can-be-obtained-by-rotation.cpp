 class Solution {
public:
    // Function to rotate matrix by 90 degrees clockwise
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    
    // Function to check if mat can be rotated to match target
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; i++) {
            if (mat == target) return true;
            rotate(mat);
        }
        return false;
    }
};
