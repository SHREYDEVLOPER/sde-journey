class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff=0;
        vector<int>dd;
        if(nums.size()<2)
        {
            return 0;
        }
        for(int i=1;i<nums.size();i++)
        {
            diff=abs(nums[i-1]-nums[i]);
            dd.push_back(diff);
        }
        sort(dd.begin(),dd.end());
        int ans=dd[dd.size()-1];
        return ans;
    }

};