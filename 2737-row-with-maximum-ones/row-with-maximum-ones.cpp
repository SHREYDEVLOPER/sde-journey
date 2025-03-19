 class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int mr = -1, mi = -1;  
         for (int i = 0; i < r; i++) {
            int ct = 0;
            for (int j = 0; j < c; j++) {
                if (mat[i][j] == 1) {
                    ct++;
                }
            }
            if (ct > mr) {  
                mr = ct;
                mi = i;
            }
        }
        return {mi, mr}; 
    }
};
