class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        string fs=str.front();
        string ls=str.back();

        int minl=min(fs.size(),ls.size());
        int i=0;
        while( i<minl &&fs[i]==ls[i])
        {
          i++;
        }
        string ans=fs.substr(0,i);
        return ans;
    }
};