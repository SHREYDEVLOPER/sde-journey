class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        //frequency of same characters ki check akrni hai isme 
        //maii pehle sort kardunga dondo string ko
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        
        //ab ek kam kar dono map ke an
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto& i:word1)
        {
           mp1[i]++;
        }
        for(auto& i:word2)
        {
           mp2[i]++;
        }
        vector<int>freq;
        for(auto& i:mp1)
        {
          if(mp2.find(i.first)!=mp2.end())
          {
            int d=abs(i.second-mp2[i.first]);
            freq.push_back(d);
          }
          else
          {
            freq.push_back(i.second);
          }
        }
        for (auto& i: mp2) {
            if (mp1.find(i.first)==mp1.end()) {
              freq.push_back(i.second);
            }
        }

        for(int i=0;i<freq.size();i++)
        {
          if(freq[i]>3)
          {
            return false;
          }
        }
        return true;
    }
};