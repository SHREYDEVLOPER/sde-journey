 class Solution {
public:
    int sod(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int countEven(int num) {
        int c=0;
        for(int i=2;i<=num;i++)
        {
            if(sod(i)%2==0)
                c+=1;
        }
        return c;
    }
};