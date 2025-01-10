class Solution {
public:
    int titleToNumber(string ct) {
        int res=0;
        for(char c:ct)
        {
            int d=c-'A'+1;
            res=res*26+d;

        }
        return res;
    }
};