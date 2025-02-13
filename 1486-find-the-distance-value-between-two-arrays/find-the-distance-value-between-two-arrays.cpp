 class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;  

        for (int i = 0; i < arr1.size(); i++) {
            int s1 = arr1[i];
            vector<int> diff;  
            
            for (int j = 0; j < arr2.size(); j++) {
                int s2 = arr2[j];
                diff.push_back(abs(s1 - s2));  
            }

             bool isValid = true;
            for (int k = 0; k < diff.size(); k++) {
                if (diff[k] <= d) {
                    isValid = false; 
                    break;
                }
            }

            if (isValid) {
                count++;  
            }
        }
        return count;
    }
};
