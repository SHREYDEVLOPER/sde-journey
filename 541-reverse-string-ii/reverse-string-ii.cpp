  
class Solution {
public:
    string reverseStr(string s, int k) {
        string ans;
        int l = s.size();

        for (int i = 0; i < l; i += 2 * k) {
            string temp = s.substr(i, k);
            reverse(temp.begin(), temp.end());
            ans += temp;

            if (i + k < l) {
                ans += s.substr(i + k, k);
            }
        }

        return ans;
    }
};

 