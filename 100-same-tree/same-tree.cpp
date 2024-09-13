/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int nodecl(TreeNode* p)
    {
      if(p==NULL)
      {
        return 0;
      }
      int l=nodecl(p->left);
      int r=nodecl(p->right);

      return l+r+1;
    }
    int nodecr(TreeNode* q)
    {
      if(q==NULL)
      {
        return 0;
      }
      int l=nodecr(q->left);
      int r=nodecr(q->right);

      return l+r+1;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int nll=nodecl(p);
        int nrr=nodecr(q);
        if(nll!=nrr)
        {
          return false;
        }
        if(nll==0)
        {
          return true;
        }
        if(p->val!=q->val)
        {
          return false;
        }

        return isSameTree(p->left,q->left) &&isSameTree(p->right,q->right);

        
    }
};