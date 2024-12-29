class Solution {
public:
    vector<int>dp;
    int solve(vector<int>&nums,int i){
        if(i>=nums.size()-1)return 0;
        if(dp[i]!=-1)return dp[i];
        int ans=INT_MAX;
        for(int j=i+1;j<=nums[i]+i;j++){
            int cur=solve(nums,j);
            if(cur!=INT_MAX)cur++;
            ans=min(ans,cur);
        }
        return dp[i]= ans;
    }
    int jump(vector<int>& nums) {
        dp.resize(nums.size()+1,-1);
        return solve(nums,0);
    }
};