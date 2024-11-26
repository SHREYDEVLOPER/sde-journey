class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<int>avg;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            int aa=nums[i]+nums[j];
            avg.insert(aa);
            i++;
            j--;
        }
        return avg.size();
    }
};