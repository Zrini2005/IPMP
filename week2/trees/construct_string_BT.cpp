class Solution {
public:
    void preorder(TreeNode* root, string &y) {
        if (!root) return; 
        y += to_string(root->val);
 
        if (root->left || root->right) {
            y += '(';
            preorder(root->left, y);
            y += ')';
        }
 
        if (root->right) {
            y += '(';
            preorder(root->right, y);
            y += ')';
        }
    }

    string tree2str(TreeNode* root) {
        string s = "";
        preorder(root, s);
        return s;
    }
};
