 
class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

         priority_queue<pair<int, char>> pq;
        for (auto& entry : freq) {
            pq.push({entry.second, entry.first}); 
        }

        string result;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            result.append(top.first, top.second);  
        }

        return result;
    }
};
 