 class Solution {
public:
    void printsubs(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& result) {
        if (i == nums.size()) {
            result.push_back(ans);  
            return;
        }

         ans.push_back(nums[i]);
        printsubs(nums, ans, i + 1, result);

        // Backtrack 
        ans.pop_back();
        printsubs(nums, ans, i + 1, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        printsubs(nums, ans, 0, result);
        return result;
    }
};
