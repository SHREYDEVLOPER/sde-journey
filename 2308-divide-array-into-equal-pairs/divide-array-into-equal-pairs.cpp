class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        for(auto& i:nums)
        {
          mp[i]++;
        }
        for(auto& i:mp)
        {
          int ff=i.second;
          if(ff%2!=0)
          {
            return false;
          }
        }
        return true;
    }
};