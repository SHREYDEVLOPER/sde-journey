class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;

         vector<int> raneve;
        for (int i = 100; i <= 999; i++) {
            if (i % 2 == 0) {
                raneve.push_back(i);
            }
        }

         bool flag;
        for (int i = 0; i < raneve.size(); i++) {
            int num = raneve[i];
            flag = true;
            int temp = num;   

            vector<int> temp_digits = digits;  
            while (temp > 0) {
                int dig = temp % 10;
                temp /= 10;
                
                 auto it = find(temp_digits.begin(), temp_digits.end(), dig);
                if (it == temp_digits.end()) {
                    flag = false;
                    break;
                } else {
                     temp_digits.erase(it);
                }
            }

            if (flag) {
                res.push_back(raneve[i]); 
            }
        }
        return res;
    }
};
 