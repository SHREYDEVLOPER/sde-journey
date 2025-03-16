 class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));

         vector<int> flat;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                flat.push_back(grid[i][j]);
            }
        }

         k = k % (m * n);

         int total = m * n;
        for (int i = 0; i < total; i++) {
            int newIndex = (i + k) % total;
            ans[newIndex / n][newIndex % n] = flat[i];
        }

        return ans;
    }
};
