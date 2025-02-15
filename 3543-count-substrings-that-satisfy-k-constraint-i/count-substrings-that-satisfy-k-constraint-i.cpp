class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
         int count = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int zeros = 0, ones = 0;
            for (int l = i; l <= j; l++) {
                if (s[l] == '0') zeros++;
                else ones++;
            }

            if (zeros <= k || ones <= k) {
                count++;
            }
        }
    }

    return count;

    }
};