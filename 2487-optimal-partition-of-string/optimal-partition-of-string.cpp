class Solution {
public:
    int partitionString(string s) {
          unordered_set<char> ct;
    int  pc= 1; 

    for (char c : s) {
         if (ct.count(c)) {
            pc++;      
            ct.clear();        
        }
        ct.insert(c);        
    }
    
    return  pc;
    }
};