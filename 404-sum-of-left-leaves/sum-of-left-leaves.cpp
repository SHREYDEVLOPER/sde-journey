 class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) {
            return 0; 
        }
        int s = 0;
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) { // Check if left child is a leaf
            s += root->left->val;  
        }
        s += sumOfLeftLeaves(root->left); 
        s += sumOfLeftLeaves(root->right);  
        return s;
    }
};
