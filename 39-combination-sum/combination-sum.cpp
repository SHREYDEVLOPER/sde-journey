 class Solution {
public:
    void getallcombs(vector<int>& arr, int idx, int target, vector<vector<int>>& ans, vector<int>& comb) {
        if (target < 0) { // If target becomes negative, return
            return;
        }
        if (target == 0) { // If target is 0, add combination to answer
            ans.push_back(comb);
            return;
        }
        if (idx == arr.size()) { // If we reach the end of array, return
            return;
        }

        // Include the current element
        comb.push_back(arr[idx]);
        getallcombs(arr, idx, target - arr[idx], ans, comb); // Multiple choice (stay at idx)
        comb.pop_back(); // Backtrack

        // Exclude the current element
        getallcombs(arr, idx + 1, target, ans, comb);
    }

    vector<vector<int>> combinationSum(vector<int>& can, int tar) {
        vector<vector<int>> ans;
        vector<int> comb;
        getallcombs(can, 0, tar, ans, comb);
        return ans;
    }
};
