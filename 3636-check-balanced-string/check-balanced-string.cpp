class Solution {
public:
    bool isBalanced(string nums) {
        //question is asking sum of digits at odd indice sholud equal to digits at 
        //even indices
        int os=0,es=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                es+=nums[i]-'0';
            }
            else
            {
                os+=nums[i]-'0';
            }
        }
        if(os==es)
        {
            return true;
        }
        return false;
    }
};