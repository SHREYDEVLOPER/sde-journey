 class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;  
        for (auto& i : nums1) {
            mp[i]++;
        }

        map<int, int> mp1;  
        vector<int> ref;    

        for (auto& i : nums2) {
            if (mp.find(i) != mp.end() && mp[i] > 0) {
                mp1[i]++;
                mp[i]--;  
            }
        }

        for (auto& [key, value] : mp1) {
            for (int j = 0; j < value; j++) {
                ref.push_back(key);  
            }
        }

        return ref;
    }
};
