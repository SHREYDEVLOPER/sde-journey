class Solution {
public:
    int countbit(int x)
    {
        if(x<1)
        {
            return 0;
        }
        return (x%2)+countbit(x/2);

    }
    vector<int> countBits(int n) {
        //matlab humme ek number de rkha hai
        //uss no tak jitne number hai 
        //aur unme jo bhi set bits hai 
        //uska count return karna hai
        //
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            int x=countbit(i);
            ans.push_back(x);
        }
        return ans;
    }
};