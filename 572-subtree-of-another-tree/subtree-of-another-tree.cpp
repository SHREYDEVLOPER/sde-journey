 
class Solution {
public:
      
     bool isSameTree(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) return true;       
        if (!root1 || !root2) return false;     
        if (root1->val != root2->val) return false;   

         return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);
    }

     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!subRoot) return true;  
        if (!root) return false;   

         if (isSameTree(root, subRoot)) {
            return true;
        }

         return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
