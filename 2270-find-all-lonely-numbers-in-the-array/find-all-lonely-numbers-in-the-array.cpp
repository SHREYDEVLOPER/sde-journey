class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        //ek array de rakhi hai
        //jisme voh numbers dalne hai jinka pred and succ exist nhi karra hai
        //logic
        //pehle map bnke uske sandar elemnts daal de
        map<int,int>mp;
        for(auto& i:nums)
        {
          mp[i]++;
        }
        vector<int>ans;

        for(int i=0;i<nums.size();i++)
        {
          if((mp.find(nums[i]+1)==mp.end())&&(mp.find(nums[i]-1)==mp.end()))
          {
              if(mp[nums[i]]==1)
              {
                ans.push_back(nums[i]);
              }
          }
        }
        return ans;
    }
};