class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ct=0;
        //matlab starting ke words equal hone chahiye prefix ke
        int pl=pref.size();
        for(int i=0;i<words.size();i++)
        {
            string st=words[i];
            string pm=st.substr(0,pl);
            if(pm==pref)
            {
                ct++;
            }
        }
        return ct;
    }
};