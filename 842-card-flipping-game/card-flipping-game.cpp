class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        set<int>bn;
        for(int i=0;i<fronts.size();i++)
        {
            if(fronts[i]==backs[i])
            {
                bn.insert(fronts[i]);
            }
        }

        int minn=INT_MAX;
        for(int n:fronts)
        {
            if(bn.find(n)==bn.end())
            {
                minn=min(minn,n);
            }
        }
        for(int n:backs)
        {
            if(bn.find(n)==bn.end())
            {
                minn=min(minn,n);
            }
        }
        if(minn==INT_MAX)
        {
            return 0;
        }
        return minn;
    }
};