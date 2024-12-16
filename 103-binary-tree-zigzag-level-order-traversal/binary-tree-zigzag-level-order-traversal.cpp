 class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         if (root == nullptr) {
            return {};
        }

        vector<vector<int>> ans;  
        queue<TreeNode*> q;       
        q.push(root);             
        int ct = 0;               

        while (!q.empty()) {
            int sz = q.size();    
            vector<int> lvl;     

            for (int i = 0; i < sz; i++) {
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

             if (ct % 2 != 0) {
                reverse(lvl.begin(), lvl.end());
            }
            
            ans.push_back(lvl);  
            ct++;               
        }

        return ans;
    }
};
