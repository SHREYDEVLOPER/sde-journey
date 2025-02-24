 class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans; 
        if (root == nullptr) {
            return {}; 
        }

        queue<TreeNode*> q;  
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();  
            double levelSum = 0;      
              for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                levelSum += node->val;  

                 if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }

             ans.push_back(levelSum / levelSize);
        }

        return ans;  
    }
};
