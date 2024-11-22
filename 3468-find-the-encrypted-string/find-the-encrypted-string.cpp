class Solution {
public:
    string getEncryptedString(string s, int k) {
        //dart
        //0123
        //k=3
        //0->0+3=3
        //1->1+3=4/s.size()
        //2->2+3
        // (i + k) % s.length
        string supp=s;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
             ans+=supp[(i+k)%supp.length()];
        }
        return ans;
    }
};