 class Solution {
public:
    bool digitCount(string num) {
        vector<int> count(10, 0);
        for (char c : num) {
            int digit = c - '0';
            count[digit]++;
        }

        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            if (count[i] != digit) {
                return false;
            }
        }

        return true;
    }
};
