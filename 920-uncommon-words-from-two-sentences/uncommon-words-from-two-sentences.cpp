 

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
         map<string, int> mp1;
        map<string, int> mp2;
        
        int i = 0;
        while (i < s1.size()) {
            string word = "";
            while (i < s1.size() && s1[i] != ' ') {
                word += s1[i];
                i++;
            }
            mp1[word]++;
            i++;
        }
        
        i = 0;
        while (i < s2.size()) {
            string word = "";
            while (i < s2.size() && s2[i] != ' ') {
                word += s2[i];
                i++;
            }
            mp2[word]++;
            i++;
        }
        
        vector<string> ans;
        
        for (auto& i : mp1) {
            if (i.second == 1 && mp2.find(i.first) == mp2.end()) {
                ans.push_back(i.first);
            }
        }
        
        for (auto& i : mp2) {
            if (i.second == 1 && mp1.find(i.first) == mp1.end()) {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};
