 class Solution {
public:
    string greatestLetter(string s) {
        vector<char> ans;  
        unordered_map<char, int> mp;

         for (auto& i : s) {
            mp[i]++;
        }

         for (auto& i : mp) {
            if (i.first >= 'A' && i.first <= 'Z') {  
                char chk = tolower(i.first);  
                if (mp.find(chk) != mp.end()) {  
                    ans.push_back(i.first); 
                }
            }
        }

         sort(ans.begin(), ans.end());

         if (ans.empty()) {
            return ""; 
        }
         int l=ans.size()-1;
         string result="";
          result +=ans[l];  
        return result;
    }
};
