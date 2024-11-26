class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        //array ko half length mai
        //divide karna hai

        //dono array ki length alag alag honi chahiye
        //no ki frequency ya toh 1 ho ya toh 2 ho
        //agar inse jyada hui than impossoble
        map<int,int>mp;
        for(auto& i:nums)
        {
            mp[i]++;
        }
        int flag=0;
        for(auto& i:mp)
        {
            if(i.second!=2&&i.second!=1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return false;

        }
        return true;
    }
};