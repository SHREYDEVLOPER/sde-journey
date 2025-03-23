class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>freq;
        map<int,int>mp;
        for(auto i:nums)
        {
          mp[i]++;
        }
        for(auto i:mp)
        {
          freq.push_back(i.second);
        }
        int flag=0;
        for(int i=0;i<freq.size();i++)
        {
          if(freq[i]!=1)
          {
            flag=1;
          }
        }
        return flag==1;

     }
};