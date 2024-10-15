class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        // return karna hai ek matrix
        
        // pehle vector ko sort karenge 
        //ek diif vector bnayenge
        //diff absolute hoga usme
        //sur jo minimum hoga uske usko eequak jo bhi pairs honge unhe
        //dedenge

        sort(arr.begin(),arr.end());
        vector<int>diff;
        for(int i=1;i<arr.size();i++)
        {
          int d=abs(arr[i]-arr[i-1]);
          diff.push_back(d);
        }
        int mind=INT_MAX;
        for(int i=0;i<diff.size();i++)
        {
          if(mind>diff[i])
          {
            mind=diff[i];
          }
        }

        vector<vector<int>>ans;
        vector<int>pairs;
        for(int i=1;i<arr.size();i++)
        { 
          int d1=abs(arr[i-1]-arr[i]);
          if(d1==mind)
          {
            pairs.push_back(arr[i-1]);
            pairs.push_back(arr[i]);
            sort(pairs.begin(),pairs.end());
            ans.push_back(pairs);
            pairs.clear();
          }
         }
        return ans;
    }
};