class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpo;
        for(auto& i:nums)
        {
            mpo[i]++;
        }
        int sn;
        for(auto& i:mpo)
        {
           if(i.second==1)
           {
               sn=i.first;
               break;
           }
        }
        return sn;
    }
};