 class Solution {
public:
    bool powern(int n, int x) {
        if (n <= 0) {
            return false;
        }
        
        while (n > 0) {
            if (n % x == 2) {  
                return false;
            }
            n /= x;
        }
        return true;
    }

    bool checkPowersOfThree(int n) {
        return powern(n, 3);
    }
};
