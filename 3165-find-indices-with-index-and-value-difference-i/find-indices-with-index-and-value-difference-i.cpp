 class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n=nums.size();
        vector<int> ans(2,-1);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(abs(nums[j]-nums[i])>=valueDifference && abs(j-i)>=indexDifference){
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
            }
        }
        return ans;
    }
};