 class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         string cmn = words[0]; 
        
         for (int k = 1; k < words.size(); k++) {
            string wd2 = words[k];
            string temp = "";
            
             vector<bool> used(wd2.size(), false);  
            for (int i = 0; i < cmn.size(); i++) {
                for (int j = 0; j < wd2.size(); j++) {
                    if (cmn[i] == wd2[j] && !used[j]) {
                        temp += cmn[i];  
                        used[j] = true; 
                        break;  
                    }
                }
            }
            cmn = temp;
        }
        
         vector<string> result;
        for (char c : cmn) {
            result.push_back(string(1, c));
        }
        return result;
    }
};
