 class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        if (nums.size() == 1) {
            return {0};
        }

        int n = nums.size();
        vector<int> ls(n, 0);
        vector<int> rs(n, 0);
        vector<int> cs;

         ls[0] = 0;
         //prefix sum
        for (int i = 1; i < n; i++) {
            ls[i] = ls[i - 1] + nums[i - 1];
        }
         

         //suffoix sum
         rs[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--) {
            rs[i] = rs[i + 1] + nums[i + 1];
        }

         int i = 0, j = 0;
        while (i < ls.size() && j < rs.size()) {
            int ts = abs(ls[i] - rs[j]);
            cs.push_back(ts);
            i++;
            j++;
        }

        return cs;
    }
};
