
class Solution {
  public:
    void inorder(Node* root, vector<vector<int>> &ans,vector<int> &temp){
        if(root){
            temp.push_back(root->data);
            if(root->right == NULL and root->left == NULL){
                ans.push_back(temp);
            }
            inorder(root->left,ans,temp);
            inorder(root->right,ans,temp);
            temp.pop_back();
        } 
    }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        inorder(root,ans,temp);
        return ans;
    }
};
