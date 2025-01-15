 class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(); 
        int i = 0, j = 0;    
                            
        int maxLen = 0;      

        unordered_set<char>
            ch;  

        while (j < n) {
            if (ch.find(s[j]) == ch.end()) {  
                ch.insert(s[j]);             
                maxLen = max(maxLen,j - i + 1);  
                j++;         
            }
            else{
                ch.erase(s[i]);  
                i++;  
            }
        }
        return maxLen;
    }
};