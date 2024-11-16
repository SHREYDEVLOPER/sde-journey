 class Solution {
public:
    bool isFascinating(int n) {
         long long n1 = 2 * n;
        long long n2 = 3 * n;
        string s1 = to_string(n);
        string s2 = to_string(n1);
        string s3 = to_string(n2);
        
         string ss = s1 + s2 + s3;
        
         string checker = "123456789";
        
         if (ss.size() != 9) {
            return false;
        }
        
         sort(ss.begin(), ss.end());
        sort(checker.begin(), checker.end());
        
         return ss == checker;
    }
};
