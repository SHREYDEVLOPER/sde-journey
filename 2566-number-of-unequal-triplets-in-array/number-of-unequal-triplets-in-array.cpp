 class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ct = 0;  
        int l = nums.size();

         for (int i = 0; i < l - 2; i++) {
            for (int j = i + 1; j < l - 1; j++) {
                for (int k = j + 1; k < l; k++) {
                     if (nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k]) {
                        ct++;
                    }
                }
            }
        }
        return ct;  
    }
};
