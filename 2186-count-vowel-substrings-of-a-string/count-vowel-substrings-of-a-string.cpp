class Solution {
public:
    int countVowelSubstrings(string word) {
        set<char> ss;
        int ct = 0;
        string vv = "aeiou";
        for (auto& i : vv) {
            ss.insert(i);
        }

        for (int i = 0; i < word.size(); i++) {
            string temp = "";
            set<char> ts;
            for (int j = i; j < word.size(); j++) {
                temp += word[j];
                 if (ss.find(word[j]) != ss.end()) {
                    ts.insert(word[j]);
                } else {
                    break; 
                }
                 if (ts.size() == 5) {
                    ct++;
                }
            }
        }

        return ct;
    }
};
