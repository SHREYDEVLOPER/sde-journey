 class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) {
            return true;  
        }
        return isSymmetricHelper(root->left, root->right);
    }

    bool isSymmetricHelper(TreeNode* left, TreeNode* right) {
        if(left==NULL && right==NULL) {
            return true;
        }
        if(left==NULL || right==NULL) {
            return false;
        }
        return (left->val == right->val) 
               && isSymmetricHelper(left->left, right->right) 
               && isSymmetricHelper(left->right, right->left);
    }
};


