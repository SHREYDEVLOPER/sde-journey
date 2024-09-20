class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>h;

        for(const auto& i:arr)
        {
          h[i]++;
        }
        int max;
        int maxl;
        for(const auto& i:h)
        {
          if(i.first==i.second)
          {
            max=i.first;
            if(maxl<max)
            {
              maxl=max;
            }
          }
        }
        if(maxl==0)
        {
          return -1;
        }
        else
        {
          return maxl;
        }
    }
};