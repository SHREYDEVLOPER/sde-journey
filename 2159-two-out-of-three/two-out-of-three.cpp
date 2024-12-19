 class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        map<int, int> mp1, mp2, mp3;
        set<int> resultSet;  

         for (auto& i : nums1) mp1[i]++;
        for (auto& i : nums2) mp2[i]++;
        for (auto& i : nums3) mp3[i]++;

         for (auto& i : mp1) {
            if (mp2.find(i.first) != mp2.end() || mp3.find(i.first) != mp3.end()) {
                resultSet.insert(i.first);
            }
        }

        // Check for elements in nums2
        for (auto& i : mp2) {
            if (mp1.find(i.first) != mp1.end() || mp3.find(i.first) != mp3.end()) {
                resultSet.insert(i.first);
            }
        }

         for (auto& i : mp3) {
            if (mp1.find(i.first) != mp1.end() || mp2.find(i.first) != mp2.end()) {
                resultSet.insert(i.first);
            }
        }

         ans.assign(resultSet.begin(), resultSet.end());
        return ans;
    }
};
