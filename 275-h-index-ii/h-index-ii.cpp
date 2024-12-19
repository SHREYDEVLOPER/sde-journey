class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int c=0;
        int i;
        for(i=0;i<citations.size();i++)
        {
          if(citations[i]>=i+1)
          {
            c++;
          }
        }
        
       return c;
    }
};