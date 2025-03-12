 class Solution {
public:
    string reverseWords(string s) {
        string ans, hlp;
        for (int i = s.size() - 1; i >= 0; i--) {    
            if (s[i] != ' ') {
                hlp += s[i];
            } else if (!hlp.empty()) {
                reverse(hlp.begin(), hlp.end());
                if (!ans.empty()) ans += ' ';  
                ans += hlp;
                hlp.clear();  
            }
        }
         if (!hlp.empty()) {
            reverse(hlp.begin(), hlp.end());
            if (!ans.empty()) ans += ' ';
            ans += hlp;
        }
        return ans;
    }
};
