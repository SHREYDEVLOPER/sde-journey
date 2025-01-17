class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        for(auto& i:nums)
        {
            freq[i]++;
        }
        priority_queue<pair<int,int>>mpp;
        for(auto&[num,freq]:freq)
        {
            mpp.push({freq,num});//we have to sort according to frequency
        }
        vector<int>result;
        while(k-->0 &&!mpp.empty())
        {
            result.push_back(mpp.top().second);
            mpp.pop();
        }
        return result;
    }
};