 class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int css = nums[0] + nums[1] + nums[2];  

         for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    int cs = nums[i] + nums[j] + nums[k]; 
                     if (abs(cs - target) < abs(css - target)) {
                        css = cs;  
                    }
                }
            }
        }

        return css;  
    }
};