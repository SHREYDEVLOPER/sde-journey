class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        if(nums.size()<4)
        {
            return 0;
        }
        if(nums.size()==4)
        {
            int s1=nums[0]+nums[1]+nums[2];
            if(s1==nums[3])
            {
                return 1;
            }
            else
            {
                return 0;
            }     
        }
        int flag=1;
        int ct=0;
        int n=nums.size();

         for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int l = k + 1; l < n; l++) {
                      if(nums[i]+nums[j]+nums[k]==nums[l])
                      {
                        ct++;
                      }
                }
            }
        }
    }
    return ct;
    }
};