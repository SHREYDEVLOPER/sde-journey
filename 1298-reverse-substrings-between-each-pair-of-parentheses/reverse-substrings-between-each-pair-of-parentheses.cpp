 class Solution {
public:
    string reverseParentheses(string s) {
        
	        //logic
        //pehle isse traverse karo
        //uske baad
        //elemnta tab tak daalo stack mai jab tak iss '('
        //bracket ka match naa ajaye ')'iske saath
        //aur jaha yeah aa gya
        //vha brackets remove karke dubnara elemnts ko uske andar daalo aur dubara dekhoo
        
        stack<char> st;
        for (char ch : s) {
            if (ch == ')') {
                string temp = "";
                while (!st.empty() && st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }  
                if (!st.empty()) {
                    st.pop();
                }
                 for (char c : temp) {
                    st.push(c);
                }
            } else {
                st.push(ch);
            }
        }
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
         reverse(result.begin(), result.end());
        return result;
    }
};
