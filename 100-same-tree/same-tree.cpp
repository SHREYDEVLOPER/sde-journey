 class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: Both trees are empty
        if (p == nullptr && q == nullptr) {
            return true;
        }
        
        // Base case: One of the trees is empty
        if (p == nullptr || q == nullptr) {
            return false;
        }
        
         if (p->val != q->val) {
            return false;
        }
        
         return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
