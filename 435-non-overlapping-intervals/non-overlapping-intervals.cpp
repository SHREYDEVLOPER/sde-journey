 class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];  
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         sort(intervals.begin(), intervals.end(), compare);

        int prev_end = INT_MIN;  
        int removed = 0;         

         for (auto& interval : intervals) {
            if (interval[0] >= prev_end) {
                 prev_end = interval[1]; 
            } else {
                 removed++;
            }
        }

        return removed;  
    }
};
