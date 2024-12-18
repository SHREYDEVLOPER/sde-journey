 class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;  
        for (int i = 0; i < prices.size(); i++) {
            int fe = prices[i];  
            bool discountFound = false;  
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= fe) {  
                    int d = fe - prices[j]; 
                    ans.push_back(d);
                    discountFound = true;  
                    break; 
                }
            }
            if (!discountFound) { 
                ans.push_back(fe);  
            }
        }
        return ans;  
    }
};
