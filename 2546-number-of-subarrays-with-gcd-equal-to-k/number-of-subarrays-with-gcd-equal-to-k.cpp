class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int ct=0;
        for(int i=0;i<nums.size();i++)
        {
            int loda=0;
            for(int j=i;j<n;j++)
            {
                loda=__gcd(loda,nums[j]);
                if(loda==k)
                {
                    ct++;
                }
                if(loda<k)
                {
                    break;
                }
            }
        }
        return ct;
    }
};