 class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int se = arr[0];            
        int l = arr.size() - 1;     
        int le = arr[l];           
        
         map<int, int> mp;
        for (auto& i : arr) {
            mp[i]++;
        }

         vector<int> hlp;
        for (int i = 1; i <= le + k; i++) {  
            if (mp.find(i) == mp.end()) {   
                hlp.push_back(i);
            }
        }

         int fe = k - 1;   
        int ans = -1;
        for (int i = 0; i < hlp.size(); i++) {
            if (i == fe) {
                ans = hlp[i];
                break;
            }
        }
        return ans;
    }
};
