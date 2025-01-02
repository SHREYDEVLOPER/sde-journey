 class Solution {
public:
    int solve(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];  
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]); 

        for (int i = 2; i < n; i++) {
            int inc = dp[i - 2] + nums[i];  
            int exc = dp[i - 1];          
            dp[i] = max(inc, exc);         
        }
        return dp[n - 1];  
    }

    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;  
        return solve(nums);        
    }
};
