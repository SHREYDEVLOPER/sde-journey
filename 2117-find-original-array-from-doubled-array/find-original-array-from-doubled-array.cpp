 class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
         sort(changed.begin(), changed.end());
        
         map<int, int> mp;
        for (auto& i : changed) {
            mp[i]++;
        }
        
        vector<int> orig;

         if (changed.size() % 2 != 0) {
            return {};  
        }
        
        for (auto& i : changed) {
             if (mp[i] == 0) {
                continue;
            }

             int dd = 2 * i;

             if (mp.find(dd) != mp.end() && mp[dd] > 0) {
                orig.push_back(i); 
                mp[i]--;           
                mp[dd]--;         
            } else {
                 return {};
            }
        }
        
        return orig;
    }
};
