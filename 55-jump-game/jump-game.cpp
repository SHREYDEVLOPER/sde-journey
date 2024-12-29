class Solution {
public:
    int dp[10001];
    int solve(vector<int>&nums,int i){
        if(i==nums.size()-1){
            return 1;
        }
        if(dp[i]!=-1)return dp[i];

        for(int j=i+1;j<=i+nums[i];j++){
            int choice = solve(nums,j);
            if(choice)return dp[i]= 1;
        }

        return dp[i]=0;
    }
    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);

    }
};