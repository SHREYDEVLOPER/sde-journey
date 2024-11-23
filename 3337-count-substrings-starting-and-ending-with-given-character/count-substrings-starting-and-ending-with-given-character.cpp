class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long m=0;
        for(auto& i:s)
        {
            if(i==c)
            {
                m++;
            }
        }
        return m*(m+1)/2;
    }
};