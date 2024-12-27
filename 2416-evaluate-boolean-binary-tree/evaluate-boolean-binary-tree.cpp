 
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        //values representaion
        // 2- or
        //3 -and

        // 0-false
        //1 -true

        if(root->val==0)
        {
            return false;
        }
        if(root->val==1)
        {
            return true;
        }
        if(root->left==nullptr && root->right==nullptr)
        {
            return root->val;
        }
        if(root->val==2)
        {
            return evaluateTree(root->left)||evaluateTree(root->right);
        }
        else if(root->val==3)
        {
            return evaluateTree(root->left)&&evaluateTree(root->right);
        }
          return false;
    }
};