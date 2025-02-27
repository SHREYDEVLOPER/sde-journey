class Solution {
public:
    void findCombinations(vector<int>& arr, int idx, int target, vector<vector<int>>& ans, vector<int>& comb) {
        if (target == 0) { // Base case: found a valid combination
            ans.push_back(comb);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {
            // Skip duplicates
            if (i > idx && arr[i] == arr[i - 1]) {
                continue;
            }

            if (arr[i] > target) break; // Stop if the number is greater than target

            comb.push_back(arr[i]); // Pick the number
            findCombinations(arr, i + 1, target - arr[i], ans, comb); // Move to the next index
            comb.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& can, int tar) {
        vector<vector<int>> ans;
        vector<int> comb;

        sort(can.begin(), can.end()); // Sort to handle duplicates
        findCombinations(can, 0, tar, ans, comb);

        return ans;
    }
};

 