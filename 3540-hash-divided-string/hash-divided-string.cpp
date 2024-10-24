 class Solution {
public:
    string stringHash(string s, int k) {
         
        vector<char> alps;
        for (int i = 'a'; i <= 'z'; i++) {
            alps.push_back(i);  
        }

         string result;
        string tr = "abcdefghijklmnopqrstuvwxyz";

         for (int i = 0; i < s.size(); i += k) {
             string temp = s.substr(i, k);

             int sum = 0;
            for (int j = 0; j < temp.size(); j++) {
                 int index = temp[j] - 'a';   
                 sum += index;                
            }

             int mod=sum % 26;

             result +=alps[mod];
        }

        return result;   
    }
};
