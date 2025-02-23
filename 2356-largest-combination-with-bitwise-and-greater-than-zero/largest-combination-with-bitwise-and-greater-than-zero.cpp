class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> bc(24, 0);  

        for (int num : candidates) {
            for (int bit = 0; bit < 24; bit++) {
                if (num & (1 << bit)) { 
                    bc[bit]++;
                }
            }
        }

         return *max_element(bc.begin(), bc.end());
    }
};
 