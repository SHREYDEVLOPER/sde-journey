 class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;
         for (auto& i : s) {
            mp[i]++;
        }
        string result;
         for (int i = 0; i < order.size(); i++) {
            char ch = order[i];
            if (mp.count(ch)) {
                result.append(mp[ch], ch); 
                mp.erase(ch); 
            }
        }
                for (auto& it : mp) {
            result.append(it.second, it.first);
        }
        
        return result;
    }
};
