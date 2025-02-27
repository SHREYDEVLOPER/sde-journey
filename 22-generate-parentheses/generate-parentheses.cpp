 class Solution {
public:
    vector<string> res;

    bool isValid(string &str) {
        int ct = 0;
        for (char &ch : str) {
            if (ch == '(') {
                ct++;
            } else {
                ct--;
                if (ct < 0) return false;   
            }
        }
        return ct == 0;
    }

    void solve(string &curr, int n) {
        if (curr.length() == 2 * n) {
            if (isValid(curr)) {
                res.push_back(curr);
            }
            return;
        }
        if (count(curr.begin(), curr.end(), '(') < n) {   
            curr.push_back('(');
            solve(curr, n);
            curr.pop_back();
        }
        if (count(curr.begin(), curr.end(), ')') < count(curr.begin(), curr.end(), '(')) {  
             curr.push_back(')');
            solve(curr, n);
            curr.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        res.clear();   
        string curr = "";
        solve(curr, n);
        return res;
    }
};
