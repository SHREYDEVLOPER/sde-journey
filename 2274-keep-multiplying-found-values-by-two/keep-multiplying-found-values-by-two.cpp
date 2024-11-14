class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int orig=original;
        int last;
        while(true)
        {
            bool found=false;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==orig)
                {
                    orig*=2;
                    found=true;
                    last=orig;
                    break;
                }
                
            }
            if(!found)
                {
                    break;
                }
        }
        return last;
    }
};