class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        
        sort(nums.begin(),nums.end());
        vector<int>alice;
        vector<int>bob;

        // 5 4 2 3
        // 2 3 4 5 
        //==alice-- 2 4
        //==bob---  3 5 
        // 3 2 5 4
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                alice.push_back(nums[i]);
            }
            else
            {
                bob.push_back(nums[i]);
            }
        } 

        int ts=bob.size()+alice.size();
        int i=0;
        int j=0;
        int k=0;
        while(i<bob.size()&&j<alice.size())
        {
            ans.push_back(bob[i++]);
            ans.push_back(alice[j++]);
        }
        return ans;
    }
};