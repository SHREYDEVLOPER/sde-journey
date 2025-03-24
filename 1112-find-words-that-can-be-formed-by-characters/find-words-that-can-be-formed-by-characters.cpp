 class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26, 0);  
        for (char c : chars) {
            freq[c - 'a']++;
        }

        int totall = 0;

        for (string wd : words) {
            vector<int> temp(26, 0);
             for (char c : wd) {
                temp[c - 'a']++;
            }

            bool canf = true;
             for (int i = 0; i < 26; i++) {
                if (temp[i] > freq[i]) {
                    canf = false;
                    break;
                }
            }

            if (canf) {
                totall += wd.size();  
            }
        }

        return totall;
    }
};
