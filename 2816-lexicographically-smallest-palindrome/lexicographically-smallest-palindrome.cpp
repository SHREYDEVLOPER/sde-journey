class Solution {
public:
    string makeSmallestPalindrome(string s) {
        //iski simple approa h hai
        //jo words non equal hai nhi hai unka count lelelnge

        int i=0;
        int j=s.size()-1;
        int ct=0;
        string ans;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
              s[i]=s[j]=min(s[i],s[j]);
             }
            i++;
            j--;
         }
      return s;
    }
};