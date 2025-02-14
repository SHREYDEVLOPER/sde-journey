class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        if(matrix.empty()) return ans;

        int re = matrix.size() - 1;  // Bottom row index
        int rb = 0;                  // Top row index
        int cb = 0;                  // Left column index
        int ce = matrix[0].size() - 1; // Right column index

        while (rb <= re && cb <= ce) {
            // Traverse Right
            for (int i = cb; i <= ce; i++) 
                ans.push_back(matrix[rb][i]);
            rb++; // Move top row down
            
            // Traverse Down
            for (int i = rb; i <= re; i++) 
                ans.push_back(matrix[i][ce]);
            ce--; // Move rightmost column left

            // Traverse Left (if there are rows remaining)
            if (rb <= re) {
                for (int i = ce; i >= cb; i--) 
                    ans.push_back(matrix[re][i]);
                re--;
                 // Move bottom row up
            }

            // Traverse Up (if there are columns remaining)
            if (cb <= ce) {
                for (int i = re; i >= rb; i--) 
                    ans.push_back(matrix[i][cb]);
                cb++; 
                // Move leftmost column right
            }
        }
        return ans;
    }
};
