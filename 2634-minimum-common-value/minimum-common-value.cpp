 class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> store;
        map<int, int> mp1;

         for (auto& i : nums1) {
            mp1[i]++;
        }

         for (auto& i : nums2) {
            if (mp1.find(i) != mp1.end()) {
                store.push_back(i);
            }
        }

         if (store.empty()) {
            return -1;
        }

         sort(store.begin(), store.end());
        return store[0];
    }
};
