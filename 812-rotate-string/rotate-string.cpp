 class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;  
        }
        
        if (s == goal) {
            return true;   
        }
        
        string lawda;
        int i = 1;
        int flag = 0;
        
        while (i < s.length()) {  
            lawda = s.substr(i) + s.substr(0, i);  
            if (lawda == goal) {
                flag = 1;   
                break;
            }
            i++;
        }
        
        return flag == 1;   
    }
};
