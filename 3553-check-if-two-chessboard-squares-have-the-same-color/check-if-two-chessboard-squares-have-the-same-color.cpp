 

class Solution {
public:
    bool checkTwoChessboards(string cd1, string cd2) {
        char cc1;
        int cn1;
        char cc2;
        int cn2;
        
        cc1 = cd1[0];
        cn1 = stoi(cd1.substr(1));
        
        cc2 = cd2[0];
        cn2 = stoi(cd2.substr(1));
        
        string ans1;
        string ans2;
        
        if ((cc1 == 'a' || cc1 == 'c' || cc1 == 'e' || cc1 == 'g')) {
            ans1 = (cn1 % 2 == 0) ? "white" : "black";
        } else {
            ans1 = (cn1 % 2 == 0) ? "black" : "white";
        }
        
        if ((cc2 == 'a' || cc2 == 'c' || cc2 == 'e' || cc2 == 'g')) {
            ans2 = (cn2 % 2 == 0) ? "white" : "black";
        } else {
            ans2 = (cn2 % 2 == 0) ? "black" : "white";
        }
        
        return ans1 == ans2;
    }
};
