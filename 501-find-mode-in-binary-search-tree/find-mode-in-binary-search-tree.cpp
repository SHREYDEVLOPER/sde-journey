 class Solution {
public:
     void inordertrav(TreeNode* root, vector<int>& values) {
        if (root == nullptr) {
            return;
        }
        inordertrav(root->left, values);
        values.push_back(root->val);
        inordertrav(root->right, values);    
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) {
            return {};
        }

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(root->val);
            return ans;
        }

         vector<int> values;
        inordertrav(root, values);

         map<int, int> mp;
        for (auto& i : values) {
            mp[i]++;
        }

         int maxFreq = 0;
        for (auto& i : mp) {
            maxFreq = max(maxFreq, i.second);
        }

         for (auto& i : mp) {
            if (i.second == maxFreq) {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};
