 class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ways = 0;
        
         for (int pens = 0; pens * cost1 <= total; pens++) {
            int remmon = total - (pens * cost1);
            ways += (remmon / cost2) + 1; //yeah case ki pencil na kharide
        }
        
        return ways;
    }
};
