 class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = 0;
         for (int num : arr) {
            totalSum += num;
        }
        
         if (totalSum % 3 != 0) {
            return false;
        }
        
        int targetSum = totalSum / 3;  
        int cumulativeSum = 0;
        int partitionCount = 0;
        
         for (int i = 0; i < arr.size(); i++) {
            cumulativeSum += arr[i];
            // If the cumulative sum equals the target sum, increment partition count and reset cumulative sum
            if (cumulativeSum == targetSum) {
                partitionCount++;
                cumulativeSum = 0;
            }
            // If we have found 2 partitions, the remaining part will automatically have the target sum
            if (partitionCount == 2 && i < arr.size() - 1) {
                return true;
            }
        }
        
         return false;
    }
};