 


class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        set<char> s1;
        set<char> s2;
        
        for (auto i : name) {
            s1.insert(i);
        }
        
        for (auto i : typed) {
            s2.insert(i);
        }
        
        if (s1 != s2) {
            return false;
        }
        
        map<char, int> m1;
        map<char, int> m2;
        
        for (auto i : name) {
            m1[i]++;
        }
        
        for (auto i : typed) {
            m2[i]++;
        }
        
        for (auto i : m1) {
            if (m2[i.first] < i.second) {
                return false;
            }
        }
        
         int i = 0;
        for (char c : typed) {
            if (c != name[i]) {
                 if (i == 0 || c != name[i - 1]) {
                    return false;
                }
            } else {
                i++;
            }
        }
        
        return i == name.size();
    }
};
 