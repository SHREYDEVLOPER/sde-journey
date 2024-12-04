 class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> ans;
        unordered_map<string, int> mp;

         for (auto& i : arr) {
            mp[i]++;
        }

         for (auto& i : arr) {  
            if (mp[i] == 1) {
                ans.push_back(i);
            }
        }

         for (auto& i : ans) {
            cout << i << " ";
        }
        cout << endl;

         if (k > ans.size()) {
            return "";  
        }

        return ans[k - 1];  
    }
};
