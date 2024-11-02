 class Solution {
public:
    bool isCircularSentence(string sentence) {
        // Condition for the sentence to be circular:
        // If the last character of a word is equal to the first character of the next word,
        // and the last character of the last word is equal to the first character of the first word.

        // First, add the sentence into a vector
        vector<string> temp;
        string hlp;

        // Loop through each character in the sentence
        for (auto& i : sentence) {
            if (i == ' ') {
                 temp.push_back(hlp);
                hlp.clear();
            } else {
                 hlp += i;
            }
        }
        if (!hlp.empty()) {
            temp.push_back(hlp);
        }

         string fw = temp[0];                      
        string lw = temp[temp.size() - 1];         

        char ffw = fw[0];                        
        char llw = lw[lw.size() - 1];             

        
        if (llw != ffw) {
            return false;
        }

        
        for (int i = 0; i<temp.size()-1;++i) {
            // Now I need to store the last character of the current word
            // and the first character of the next word

            char lastChar = temp[i].back();         
            char firstCharNext = temp[i + 1][0];    
             if (lastChar != firstCharNext) {
                return false;
            }
        }

         
        return true;
    }
};
