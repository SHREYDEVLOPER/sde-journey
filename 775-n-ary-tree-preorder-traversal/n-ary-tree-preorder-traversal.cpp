 class Solution {
public:
    vector<int> preorder(Node* root) {
         vector<int> ans;

         preorderTraversal(root, ans);
        return ans;
    }

private:
    void preorderTraversal(Node* root, vector<int>& ans) {
        if (root == nullptr) {
            return; 
        }

         ans.push_back(root->val);

         for (int i = 0; i < root->children.size(); i++) {
            preorderTraversal(root->children[i], ans);
        }
    }
};
