 class Solution {
public:
    vector<string> findWords(vector<string>& words) {
         vector<string> ans;

         string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";

         map<char, int> m1, m2, m3;
        for (auto& ch : r1) {
            m1[ch]++;   
            m1[tolower(ch)]++; 
        }
        for (auto& ch : r2) {
            m2[ch]++;   
            m2[tolower(ch)]++;  
        }
        for (auto& ch : r3) {
            m3[ch]++;  
            m3[tolower(ch)]++; 
        }

         for (auto& word : words) {
            char firstChar = tolower(word[0]);
            int row = 0; 
            //konsi row mai pehla character hai 
            if (m1[firstChar]) row = 1; // First row
            else if (m2[firstChar]) row = 2; // Second row
            else if (m3[firstChar]) row = 3; // Third row

            // Flag to check if the word is valid
            bool isValid = true;

            // Check if all characters in the word belong to the same row
            for (auto& ch : word) {
                char lowerCh = tolower(ch); // Make it case-insensitive
                if ((row == 1 && !m1[lowerCh]) ||
                    (row == 2 && !m2[lowerCh]) ||
                    (row == 3 && !m3[lowerCh])) {
                    isValid = false;
                    break; // Stop checking if one character doesn't belong
                }
            }

             if (isValid) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};
