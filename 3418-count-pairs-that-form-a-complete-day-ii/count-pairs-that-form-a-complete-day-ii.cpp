 class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        vector<int> freq(24, 0);  
        long long ct = 0;  
        
        for (int h : hours) {
            int rem = h % 24; 
            int complement = (24 - rem) % 24; 
            ct += freq[complement]; 
            freq[rem]++;  
        }
        
        return ct;
    }
};
