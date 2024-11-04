class Solution {
public:
    string ans(int k,string word){
        if(word.size()>=k)
        return word;
        string n=word;
        for(int i=0;i<word.size();i++)
        {
            n+=word[i]+1;
        }  
         return ans(k,n);
        }
    char kthCharacter(int k) {
          string s=ans(k,"a");
          return s[k-1];
    }
};