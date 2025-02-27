class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long tp = (n * (n - 1)) / 2;  
        unordered_map<int, long long> freq;
        long long gp = 0;

        for (int i = 0; i < n; i++) {
            int diff = nums[i] - i;   
            gp += freq[diff];  
            freq[diff]++;             
        }
        
        return tp-gp;   
    }
};
