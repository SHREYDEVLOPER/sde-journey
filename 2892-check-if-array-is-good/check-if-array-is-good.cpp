 class Solution {
public:
    bool isGood(vector<int>& nums) {
         sort(nums.begin(), nums.end());

         int n = nums.back();
        
         if (nums.size() != n + 1) {
            return false;
        }
        
         map<int, int> mp;
        for (auto& num : nums) {
            mp[num]++;
        }
        
         int countTwoFreq = 0;
        for (auto& [key, value] : mp) {
            if (value > 2) {  
                return false;
            }
            if (value == 2) {
                countTwoFreq++;
            }
        }
        
         return (countTwoFreq == 1 && mp[n] == 2);
    }
};
