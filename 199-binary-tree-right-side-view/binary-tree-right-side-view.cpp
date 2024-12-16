 class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

         if (!root) return ans;

         queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int s = q.size();
            vector<int> lvl;

            for (int i = 0; i < s; i++) {
                TreeNode* temp = q.front();
                q.pop();

                lvl.push_back(temp->val);

                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }

             ans.push_back(lvl.back());
        }

        return ans;
    }
};
