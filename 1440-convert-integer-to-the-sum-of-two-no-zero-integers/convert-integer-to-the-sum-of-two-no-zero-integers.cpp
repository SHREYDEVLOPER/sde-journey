 class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for (int i = 1; i < n; i++) {
            int x = i;
            int y = n - i;
            if ((x + y == n) && !hasZero(x) && !hasZero(y)) {
                ans.push_back(x);
                ans.push_back(y);
                break;  
            }
        }
        return ans;
    }
    
    bool hasZero(int num) {
        while (num) {
            if (num % 10 == 0) {
                return true;
            }
            num /= 10;
        }
        return false;
    }
};
