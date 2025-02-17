 class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int min_sum = INT_MAX;  
        
        for (int size = l; size <= r; size++) {
            for (int i = 0; i <= nums.size() - size; i++) {
                int sum = 0;
                for (int j = i; j < i + size; j++) {
                    sum += nums[j];
                }
                
                if (sum > 0) {
                    min_sum = min(min_sum, sum);
                }
            }
        }
        
        return min_sum == INT_MAX ? -1 : min_sum;
    }
};
