 class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp1;
        map<string, int> mp2;

         for (auto& i : words1) {
            mp1[i]++;
        }

         for (auto& i : words2) {
            mp2[i]++;
        }

         int count = 0;
        for (auto& word : mp1) {
             if (word.second == 1 && mp2[word.first] == 1) {
                count++;
            }
        }

        return count;
    }
};
