 class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
         vector<int> ss = score;  
        sort(ss.begin(), ss.end(), greater<int>());  
        
         unordered_map<int, string> rank;
        for (int i = 0; i < ss.size(); ++i) {
            if (i == 0) {
                rank[ss[i]] = "Gold Medal";
            } else if (i == 1) {
                rank[ss[i]] = "Silver Medal";
            } else if (i == 2) {
                rank[ss[i]] = "Bronze Medal";
            } else {
                rank[ss[i]] = to_string(i + 1);
            }
        }
        
         vector<string> ans;
        for (int s : score) {
            ans.push_back(rank[s]);
        }
        
        return ans;
    }
};
