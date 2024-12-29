class Solution {
public:
    
    int temp(int ind,vector<int>&c,vector<int>&dp)
    {   
        if(ind>=c.size())
        {
            return 0;
        }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        int op1=c[ind]+temp(ind+1,c,dp);
        int op2=c[ind]+temp(ind+2,c,dp);
        return dp[ind]=min(op1,op2);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        //output
        //array hai
        //cost[i]=cost of ith
        //costv payed climb one or two
        //start from s 0 or s 1
        //min cost to reach top of the floor
        //array end with min cost

        // [10,20,30,40,50]
        //sum of minimu, cost to bee return
        vector<int>dp(cost.size()+1,-1);
         
        int a=temp(0,cost,dp);
        int b=temp(1,cost,dp);
        return min(a,b);


     }
};