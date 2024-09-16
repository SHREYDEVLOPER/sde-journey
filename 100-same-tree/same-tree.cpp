 class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) {
            return true;  
        }
        if(p==NULL || q==NULL) {
            return false;  
        }
        bool b1=isSameTree(p->left,q->left);
        bool b2=isSameTree(p->right,q->right);
        bool b3=(p->val==q->val); // Corrected 'value' to 'val'
        return b1&&b2&&b3;
    }
};
