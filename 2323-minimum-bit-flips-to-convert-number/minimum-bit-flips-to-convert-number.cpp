class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ct=0;
        int num=start^goal;
        while(num)
        {
          int x=num%2;
          if(x&&1)
          {
            ct++;
          }
          num/=2;
        }
        return ct;
    }
};