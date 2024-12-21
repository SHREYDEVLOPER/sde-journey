class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posc=0;
        int negc=0;
        for(auto& i:nums)
        {
            if(i>0)
            {
                posc++;
            }
            else if(i<0)
            {
                negc++;
            }
        }
        return max(posc,negc);
    }
};