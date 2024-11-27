 class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int> mp;

         for (auto& num : arr) {
            mp[num]++;
        }

         for (auto& num : arr) {
            if (num != 0 && mp.find(2 * num) != mp.end()) {
                return true; 
            }
            if (num == 0 && mp[num] > 1) {
                return true;  
            }
        }

        return false;  
    }
};
