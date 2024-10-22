class Solution {
public:
    int gcd(int a,int b)
    {
        int temp;
        while(b!=0)
        {
            temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int sm,gr;
        sort(nums.begin(),nums.end());
        sm=nums[0];
        gr=nums[nums.size()-1];
        int ans=gcd(sm,gr);
        return ans;

    }
};