 class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string comp;
        for (const string& word : words) {
            comp += word;
            if (comp == s) {   
                return true;
            }
            if (comp.size() > s.size()) {  
                return false;
            }
        }
        return false;   
    }
};
