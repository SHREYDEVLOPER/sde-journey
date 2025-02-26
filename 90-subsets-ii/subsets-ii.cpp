 class Solution {
public:
    void gettallsubs(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubs) {
        if (i == nums.size()) {
            allsubs.push_back(ans); // Store the subset
            return;
        }

        // Include nums[i]
        ans.push_back(nums[i]);
        gettallsubs(nums, ans, i + 1, allsubs);
        ans.pop_back();

        // Skip duplicates
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }

        // Exclude nums[i] and move to the next unique element
        gettallsubs(nums, ans, i + 1, allsubs);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> allsubs;
        vector<int> ans;
        gettallsubs(nums, ans, 0, allsubs);
        return allsubs;
    }
};
