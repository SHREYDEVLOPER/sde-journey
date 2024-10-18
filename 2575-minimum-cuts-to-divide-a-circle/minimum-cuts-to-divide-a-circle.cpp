class Solution {
public:
    int numberOfCuts(int n) {
        int ans;
        if(n==1)
        {
          return 0;
        }
        if(n%2==0)
        {
            ans=n/2;
        }
        else
        {
          ans=n;
        }
        return ans;
    }
};