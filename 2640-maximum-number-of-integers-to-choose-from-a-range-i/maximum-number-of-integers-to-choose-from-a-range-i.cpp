class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> bs(banned.begin(), banned.end()); 
    int sum = 0, count = 0;

    for (int i = 1; i <= n; i++) {
        if (bs.find(i) == bs.end() && sum + i <= maxSum) {
            sum += i;
            count++;
        }
        if (sum >= maxSum) break;  
    }

    return count;
    }
};