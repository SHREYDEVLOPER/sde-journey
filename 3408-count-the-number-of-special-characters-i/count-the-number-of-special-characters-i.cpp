class Solution {
public:
    int numberOfSpecialChars(string word) {
        //hume kya karna hai special chaarcters of words
        //matlab jo characters cpaoital form mai hai

        //pehle duplicate ka chodd kahatm karunga 
        sort(word.begin(),word.end());
        set<char>uniq;
        for(auto& i:word)
        {
            uniq.insert(i);
        }

        string mdw="";
        for(auto& i:uniq)
        {
            mdw+=i;
        }

        //string ko alag alag karlo
        string ss;
        string bs;
        for(auto& i:mdw)
        {
            if(i>='a'&&i<='z')
            {
                ss+=i;
            }
            else if(i>='A'&&i<='Z')
            {
                bs+=i;
            }
        }

        map<char,int>bmp;
        for(auto& i:bs)
        {
            bmp[i]++;
        }
        int ct=0;
        for(auto& i:ss)
        { 
            char cb=toupper(i);//CONVERSION IN CAPITAL
            if(bmp.find(cb)!=bmp.end())
            {
                ct++;
            }
        }
          return ct;
    }
};