class Solution {
public:
    int maxConsecutive(int bot, int top, vector<int>& spl) {
        sort(spl.begin(), spl.end());
        int maxcf = 0;
        maxcf = max(maxcf, spl[0] - bot);
        for (int i = 1; i < spl.size(); i++) {
            maxcf = max(maxcf, spl[i] - spl[i - 1] - 1);
        }
        maxcf = max(maxcf, top - spl.back());
        return maxcf;
    }
};
