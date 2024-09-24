 class Solution {
public:
    string mostCommonWord(string pg, vector<string>& banned) {
        map<string, int> mp;
        
         for (auto& word : banned) {
            mp[word]++;
        }

         for (int i = 0; i < pg.size(); i++) {
            if (isalpha(pg[i])) {
                pg[i] = tolower(pg[i]);
            } else {
                pg[i] = ' ';  
            }
        }

         map<string, int> mp1;
        stringstream ss(pg);
        string word;
        while (ss >> word) {
            if (mp.find(word) == mp.end()) {  
                mp1[word]++;
            }
        }

         string ans;
        int maxFreq = 0;
        for (auto& entry : mp1) {
            if (entry.second > maxFreq) {
                maxFreq = entry.second;
                ans = entry.first;
            }
        }

        return ans;
    }
};
