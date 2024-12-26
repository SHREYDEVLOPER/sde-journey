class Solution {
public:
    
    bool divisorGame(int n) {
        /*
        what is this shitty questions saying
        alice 
        bob
        n integer de rkha hai
        alice ko jitana hai
        alice ka pehla move hoga
        alicejeete true
        haare toh false

        we have to choose integer
        0<x<n
        n should be divible by x
        //if this happens
        //n-x //second step
        //n-x-y until the loss of the player
        
   
        */
        //base case
        //divide problem in subproblems
        if(n<=1)
        {
            return false;
        }
        for(int x=1;x<n;x++)
        {
            if(n%x==0)
            {
                return !divisorGame(n-x);
            }
        }
  return false;
    }
};