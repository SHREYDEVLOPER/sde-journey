 class Solution {
public:
    int index;
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        bool flag = false;
        for(int i=0; i<n; i++){
           if(nums[i]==target){
            flag = true;
            index = i;
            break;
           }
        }
        if(flag == false)return -1;
        else return index;
    }
};