 
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freqs(26, 0);  
        vector<int> freqt(26, 0); 

         for (char c : s) {
            freqs[c - 'a']++;
        }
          for (char c : t) {
            freqt[c - 'a']++;
        }
         int steps = 0;
         for (int i = 0; i < 26; ++i) {
            if (freqt[i] > freqs[i]) {
                steps += freqt[i] - freqs[i];
            }
        }
         return steps;
    }
};
 