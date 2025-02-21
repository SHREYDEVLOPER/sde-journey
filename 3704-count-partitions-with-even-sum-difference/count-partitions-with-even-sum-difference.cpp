 class Solution {
public:
    int countPartitions(vector<int>& nums) {
         int s1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            s1 += nums[i];
        }
        int ct = 0;
        int ls = 0;  
         for (int i = 0; i < nums.size() - 1; i++) {   
            ls += nums[i];  
            int rs = s1 - ls;  
            if ((ls % 2) == (rs % 2)) { 
                ct++;
            }
        }
        return ct;
    }
};
