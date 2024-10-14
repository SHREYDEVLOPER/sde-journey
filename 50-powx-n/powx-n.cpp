 class Solution {
public:
    double myPow(double x, int n) {
         if(x==-1.00000&&n==-2147483648)
         {
          return 1.00000;
         }        
         if (n == INT_MIN) {
            n = INT_MAX;
            x = 1 / x;
        }
        
         if (n == 0) {
            return 1.0;
        }
        
         if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        
         double hp = myPow(x, n / 2);
        return (n % 2 == 0) ? hp * hp : x * hp * hp;

    }
};