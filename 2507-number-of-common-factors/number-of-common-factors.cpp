class Solution {
public:
    int commonFactors(int a, int b) {
       int ct=0;
       int r;
       if(a<b)
       {
        r=a;
       }
       else
       {
        r=b;
       }
       for(int i=1;i<=r;i++)
       {
          if((a%i==0)&&(b%i==0))
          {
            ct++;
             
          }
       } 
       return ct;
    }
};