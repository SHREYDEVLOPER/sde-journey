 class Solution {
public:
    int secondHighest(string s) {
        vector<int> rr;
        for (auto& i : s) {
            if (i >= '0' && i <= '9') {
                int n = i - '0';  
                rr.push_back(n);
            }
        }

        set<int> uni;
        for (auto& i : rr) {
            uni.insert(i);
        }

        vector<int> hlp;
        for (auto& i : uni) {
            hlp.push_back(i);
        }

         if (hlp.size() < 2) {
            return -1;
        }

        return hlp[hlp.size() - 2];  
    }
};
