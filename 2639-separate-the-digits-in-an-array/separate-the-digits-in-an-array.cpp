class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
          vector<int>ans;
          for(int i=0;i<nums.size();i++)
          {
            string loda=to_string(nums[i]);
            for(auto j:loda)ans.push_back(j-'0');
          }
          return ans;
    }
};