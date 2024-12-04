 class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;

         for (auto& i : arr) {
            mp[i]++;
        }

        vector<string> tt;

         for (auto& str : arr) {
            if (mp[str] == 1) {
                tt.push_back(str);
            }
        }

         if (k > tt.size()) {
            return "";  
        }

        return tt[k - 1];  
    }
};
