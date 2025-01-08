class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};

        vector<int> result; 
        queue<TreeNode*> q; 

        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int rightmost = -1;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
 
                rightmost = node->val; 
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
 
            result.push_back(rightmost);
        }

        return result;
    }
};
