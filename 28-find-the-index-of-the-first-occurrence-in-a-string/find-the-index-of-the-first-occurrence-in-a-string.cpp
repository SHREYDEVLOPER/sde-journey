class Solution {
public:
    vector<int>compute(string ne)
    { 
      int n=ne.size();
      vector<int>lps(n,0);
      for(int i=1;i<n;i++)
      {
        int j=lps[i-1];
        while(j>0&&ne[i]!=ne[j])
        {
          j=lps[j-1];
        }
        if(ne[i]==ne[j])
        {
          j++;
        }
        lps[i]=j;
        
      }
      return lps;
    }
    int strStr(string hay, string ne) {
        //according to kmp
        //we will make lps of the pattern
        //here it is n
        vector<int>lps=compute(ne);
        int i=0;
        int j=0;
        int ans=-1;
        while(i<hay.size())
        {
          if(hay[i]==ne[j])
          {
            i++;
            j++;
            if(j==ne.size())
            {
              return i-ne.size();
            }
          }
          else
          {
            if(j!=0)
            {
              j=lps[j-1];
            }
            else
            {
              i++;
            }
            
          }
        }
        return -1;
    }
};