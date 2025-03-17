class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>&rs, vector<int>&cs) {
        int m=rs.size();
        int n=cs.size();
        vector<vector<int>> ans(m, vector<int>(n, 0));


         int i=0;
        int j=0;
        while(i<m && j<n)
        {
           ans[i][j]=min(rs[i],cs[j]);
           rs[i]-=ans[i][j];
           cs[j]-=ans[i][j];
           if(rs[i]==0)
           {
            i++;
           }
           if(cs[j]==0)
           {
            j++;
           }
           
        }
        return ans;

    }
};