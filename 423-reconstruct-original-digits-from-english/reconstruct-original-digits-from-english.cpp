class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        vector<int> count(10, 0);

         //unique digigtts that is made up of onle unique
        //here we are mapping numbers freq to characters in the map
        count[0] = mp['z'];  
        count[2] = mp['w']; 
        count[4] = mp['u'];  
        count[6] = mp['x'];  
        count[8] = mp['g'];  

        //  remaining digits
        count[1] = mp['o'] - count[0] - count[2] - count[4]; 
        count[3] = mp['h'] - count[8];  
        count[5] = mp['f'] - count[4];  
        count[7] = mp['s'] - count[6];  
        count[9] = mp['i'] - count[5] - count[6] - count[8];  

         string result;
        for (int i = 0; i <= 9; i++) {
            result.append(count[i], '0' + i);  
        }

        return result;
    }
};
 