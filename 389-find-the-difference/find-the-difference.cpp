class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char ans;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!=s[i])
            {
                ans=t[i];
                break;
            }
        }
        return ans;
    }
};