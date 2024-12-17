 
class Solution {
public:
    void dfs(TreeNode* root,unordered_map<int,int>& mp)
    {
        if(root==NULL)
        return;
        mp[root->val]++;
        dfs(root->left,mp);
        dfs(root->right,mp);
        return ;
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        dfs(root,mp);
        int maxi=0;
        for(auto it:mp)
        {
            maxi=max(maxi,it.second);
        }
        vector<int> ans;
        for(auto it:mp)
        {
            if(it.second==maxi)
            ans.push_back(it.first);
        }
        return ans;
    }
};