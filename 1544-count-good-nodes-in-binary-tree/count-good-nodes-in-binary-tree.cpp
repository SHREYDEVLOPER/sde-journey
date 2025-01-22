  
class Solution {
public: 
     int traverse(TreeNode* root, int val) {
        if (root == NULL) return 0;  
        int temp = 0;
        if (root->val >= val) {
            temp = 1;   
        } 
        val = max(val, root->val);   
         return temp + traverse(root->right, val) + traverse(root->left, val);
    }
      int goodNodes(TreeNode* root) {
        return traverse(root, INT_MIN);   
    }
};