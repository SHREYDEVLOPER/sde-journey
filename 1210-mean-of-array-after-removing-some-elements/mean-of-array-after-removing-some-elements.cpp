 class Solution {
public:
    double trimMean(vector<int>& arr) {
         sort(arr.begin(), arr.end());

         int per = (5.0 / 100) * arr.size();
        
         double sum = 0;
        for (int i = per; i < arr.size() - per; i++) {
            sum += arr[i];
        }
        
         double ans = sum / (arr.size() - 2 * per);
        return ans;
    }
};
