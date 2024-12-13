 
class Solution {
public:
    int solve(TreeNode* root,int& result)
    {   
        if(root==nullptr)
        {
            return 0;
        }
        int l=solve(root->left,result);
        int r=solve(root->right,result);
        result=max(result,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //diameter
        //longfest path between 2 nodfes
        //path does not need tpo pass via nodes

        //isme har node ki left height and right height nikal le
        //uske baad jiska sum maximum ho return kar de answer hoga
        if(root==nullptr)
        {
            return 0;
        }
        int result=0;
        solve(root,result);
        return result;

    }
};