class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxs=abs(nums[0]-nums[nums.size()-1]);
        for(int i=0;i<nums.size()-1;i++)
        {
            int j=i+1;
            int diff=abs(nums[i]-nums[j]);
            maxs=max(maxs,diff);
        }
        return maxs;
    }
};