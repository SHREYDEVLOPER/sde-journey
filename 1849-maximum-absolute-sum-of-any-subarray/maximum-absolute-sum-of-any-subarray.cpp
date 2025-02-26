 class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxs = 0, mins = 0, sum1 = 0, sum2 = 0;
         for (int num : nums) {
            sum1 += num;  
            sum2 += num;  
             maxs = max(maxs, sum1);  
            mins = min(mins, sum2);  
             if (sum1 < 0) sum1 = 0;  
            if (sum2 > 0) sum2 = 0;  
        }
         return max(maxs, abs(mins));  
    }
};
