 class Solution {
public:
    void swap(TreeNode*& left, TreeNode*& right) {
        if (left == right) return; // base case
        TreeNode* temp = left;
        left = right;
        right = temp;
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }
        swap(root->left, root->right);
        if (root->left) invertTree(root->left);
        if (root->right) invertTree(root->right);
        return root;
    }
};



 