 class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int dur) {
        if (ts.empty()) return 0;  
        
        int td = 0;
        for (int i = 0; i < ts.size() - 1; ++i) {
             td += min(dur, ts[i + 1] - ts[i]);
        }
         td += dur;
        
        return td;
    }
};
