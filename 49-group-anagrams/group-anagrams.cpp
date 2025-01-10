 class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> mp;

         for (auto& i : strs) {
            string ss = i; 
            sort(ss.begin(), ss.end()); 
            mp[ss].push_back(i); 
        }

         for (auto& group : mp) {
            ans.push_back(group.second);
        }

        return ans;
    }
};
