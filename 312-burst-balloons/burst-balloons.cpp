 class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);

        int dp[n+2][n+2];
        memset(dp,0,sizeof(dp));

        for(int i=n;i>0;--i){
            for(int j=i;j<n+1;j++){
                if(i>j)continue;

                int ans = 0;
                for(int k =i;k<=j;k++){
                    int coins = nums[i-1]*nums[k]*nums[j+1];
                    int rcoins = dp[i][k-1] + dp[k+1][j];
                    dp[i][j] = max(coins+rcoins, dp[i][j]);
                }
            }
        }
        return dp[1][n];

    }
};