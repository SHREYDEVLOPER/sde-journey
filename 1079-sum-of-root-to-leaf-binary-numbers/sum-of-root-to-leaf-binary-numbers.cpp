  
class Solution {
public:
     int btoi(const string& s) {
        int result = 0;
        int power = 1;  

         for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                result += power;  
            }
            power *= 2; 
        }
        return result;
    }

     void traverse(TreeNode* root, string path, int& sum) {
        if (!root) return;

         path += to_string(root->val);

         if (!root->left && !root->right) {
            sum += btoi(path);
            return;
        }

        traverse(root->left, path, sum);
        traverse(root->right, path, sum);
    }

     int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        traverse(root, "", sum);
        return sum;
    }
};
