 class Solution {
public:
    string removeOccurrences(string s, string part) {
       //stack gya maa chudane agar kahi question milla
       //aise hi karunga
        while (s.find(part) != string::npos) {  
            s.erase(s.find(part), part.length()); 
        }
        return s;
    }
};
