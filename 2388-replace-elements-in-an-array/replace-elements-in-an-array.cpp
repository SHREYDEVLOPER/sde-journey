 class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
         map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
 
        for (auto& o : op) {
            int ov = o[0];
            int nv = o[1];
             int index = mp[ov]; 
            nums[index] = nv;   
              mp.erase(ov);      
            mp[nv] = index;    
        }

        return nums;
    }
};
