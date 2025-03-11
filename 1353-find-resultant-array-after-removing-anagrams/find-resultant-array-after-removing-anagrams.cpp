class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        set<string> st;
        vector<string> shrey;

         for(int i = 0; i < words.size(); i++) {
            string str = words[i];
            sort(str.begin(), str.end());
            shrey.push_back(str);
        }

         for(auto& i : shrey) {
            st.insert(i);
        }

         vector<string> result;
        string prev = "";
        for(int i = 0; i < words.size(); i++) {
            string ss = words[i];
            string hl = ss;
            sort(ss.begin(), ss.end());
            if(st.find(ss) != st.end() && ss != prev) { 
                result.push_back(hl);
                prev = ss;
            }
        }
        return result;
    }
};
 