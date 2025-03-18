 class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int result = 0;
        int m = grid.size(), n = grid[0].size();
          //sort row in descending order
         for (auto& row : grid) {
            sort(row.rbegin(), row.rend());
        }
      //remove max elemnt one by one
         for (int j = 0; j < n; ++j) {
            int mv = 0;
            for (int i = 0; i < m; ++i) {
                mv = max(mv, grid[i][j]);
            }
            result += mv;
        }
        
        return result;
    }
};
