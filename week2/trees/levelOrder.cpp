class Solution {
  public:
    vector <int> bottomView(Node *root) {   
        queue<pair<Node*, int>>q;
        map<int, int> hdMap;
        q.push({root,0});
        while(!q.empty()){
            int s=q.size(); 
            for(int i=0;i<s;i++){
                auto y=q.front();
                 Node* node = y.first;
                int hd= y.second;
                q.pop();
                if(node->left!=NULL)q.push({node->left,hd-1});
                if(node->right!=NULL)q.push({node->right,hd+1}); 
                hdMap[hd] = node->data;
            } 
        }
         vector<int> result;
    for (auto y : hdMap) {
        result.push_back(y.second);
    }

    return result;
    }
};