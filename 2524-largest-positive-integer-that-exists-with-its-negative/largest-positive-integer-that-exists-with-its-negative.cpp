 class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
          for (auto& i : nums) {
            if (i < 0) {
                neg.push_back(i);
            } else {
                pos.push_back(i);
            }
        }

         for (int i = 0; i < neg.size(); i++) {
            neg[i] *= -1;
        }

        map<int, int> mp1;

         for (auto& i : pos) {
            mp1[i]++;
        }

        vector<int> intt;

         for (auto& i : neg) {
            if (mp1.find(i) != mp1.end()) {
                intt.push_back(i);
            }
        }

         if (intt.empty()) {
            return -1;
        }

         sort(intt.begin(), intt.end());
        int l = intt.size();
        int ans = intt[l - 1];
        return ans;
    }
};
