class Solution {
public:
    int prod(int n)
    {
  if(n==0)
        {
            return 0;
        }
        if(n==1||n==2)
        {
            return 1;
        }
        vector<int> dp(n + 1, 0);
        dp[1] = 1;
        int maxp=0;
         for (int i = 2; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                 dp[i] = max(dp[i], j * max(i - j, dp[i - j]));
            }
        }

        return dp[n];
    }
    int integerBreak(int n) {
        //pehle ek integer ko product mai todo
        //phir uska prodyct return kar do
      
              return prod(n);
    }
};