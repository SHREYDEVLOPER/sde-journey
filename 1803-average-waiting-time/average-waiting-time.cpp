 class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int ct = 0;  
        long long twt = 0;  
        
        for (auto cust : customers) {
            int arr = cust[0];  
            int time = cust[1]; 
            
             if (ct < arr) {
                ct = arr;
            }
            
            int wt = ct + time - arr;  
            twt += wt;              
            ct += time;            
        }
        
         double ans = static_cast<double>(twt) / customers.size();
        return ans;
    }
};
