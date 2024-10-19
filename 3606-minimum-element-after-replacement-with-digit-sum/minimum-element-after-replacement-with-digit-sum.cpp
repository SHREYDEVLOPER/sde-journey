 class Solution {
public:
    int ss(string x) {
        int y = 0;   
        for(int i = 0; i < x.size(); i++) {
            y += x[i] - '0';  
        }
        return y;
    }

    int minElement(vector<int>& nums) {
        vector<int> ele;
        for(int i = 0; i < nums.size(); i++) {
            string ns = to_string(nums[i]);
            int ni = ss(ns);
            ele.push_back(ni);
        }
        sort(ele.begin(), ele.end());
        int ans = ele[0];
        return ans;
    }
};
