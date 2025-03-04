class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
         for (int i = 0; i < n; i++) {
            int fd = nums[i];
            while (fd >= 10) {  
                fd /= 10;
            }
             for (int j = i + 1; j < n; j++) {
                int ld = nums[j] % 10;   
                 if (__gcd(fd, ld) == 1) {
                    count++;
                }
            }
        }
        return count;
    }
};
