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
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr)
        {
            return true;
        }
        //pehle ek kaam karo left subtree mai check karo
        if(root->left!=NULL)
        {
            if(root->left->val!=root->val ||!isUnivalTree(root->left))
            {
                return false;
            }
        }
         if(root->right!=NULL)
        {
            if(root->right->val!=root->val ||!isUnivalTree(root->right))
            {
                return false;
            }
        }

        return true;
    }
};