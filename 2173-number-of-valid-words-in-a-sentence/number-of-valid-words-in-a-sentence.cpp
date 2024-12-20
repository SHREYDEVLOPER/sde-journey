class Solution {
public:
    bool validToken(string &s) {
    int hcnt = 0;
    int pcnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            return false;
        }
        if (s[i] == '-') {
            if (i - 1 < 0 || !isalpha(s[i - 1]) || i + 1 >= s.length() || !isalpha(s[i + 1]) || hcnt >= 1) {
                return false;
            }
            ++hcnt;
        }
        if (s[i] == '!' || s[i] == ',' || s[i] == '.') {
            if (i != s.length() - 1) {  
                return false;
            }
            pcnt++;
        }
    }
    return true;
}

int countValidWords(string sentence) {
    int count = 0;

    stringstream s(sentence);
    string word;
    while (s >> word) {
        if (validToken(word)) {
            count++;
        }
    }
    return count;
}

};