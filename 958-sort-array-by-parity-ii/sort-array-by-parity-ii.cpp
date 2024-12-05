class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       //matlab array mai kuch even elemnet hai
       //kcuh odd elemnt hai
       vector<int>odd;
       vector<int>even;
       for(auto& i:nums)
       {
        if(i%2==0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
       } 
       sort(even.begin(),even.end());
       sort(odd.begin(),odd.end());
       vector<int>ans;
       int j=0;
       int k=0;
       for(int i=0;i<nums.size();i++)
       {
        if(i%2==0)
        {
            ans.push_back(even[j++]);
        }
        else
        {
            ans.push_back(odd[k++]);
        }
       }
       return ans;
    }
};