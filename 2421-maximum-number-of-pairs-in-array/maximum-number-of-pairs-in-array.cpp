class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        //we have to check pair 
        //and return the left number
        vector<int>ans;
        int pc=0;
        int nl=0;

         //ek kaam karta hai
        //jha freq even hai vha count kartein hai
        //jha odd hai usse odd mai count kartei hai\

        map<int,int>mp;
        for(auto& i:nums)
        {
            mp[i]++;
        }
        for(auto& i:mp)
        {
             pc += i.second / 2;

             nl += i.second % 2;
        }
        ans.push_back(pc);
        ans.push_back(nl);
        return ans;


    }
};