 class Solution {
public:
    vector<int> postorder(Node* root) {
         vector<int> ans;

         postorderTraversal(root, ans);
        return ans;
    }

private:
    void postorderTraversal(Node* root, vector<int>& ans) {
        if (root == nullptr) {
            return; 
        }

         for (int i = 0; i < root->children.size(); i++) {
            postorderTraversal(root->children[i], ans);
        }

         ans.push_back(root->val);
    }
};
