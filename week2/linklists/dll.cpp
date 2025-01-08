class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        if(arr.size()==0 ) return nullptr;
        Node * node1 = new Node(arr[0]);
        Node* node = node1;
        for(int i =1;i<arr.size();i++){
            Node * n = new Node(arr[i]);
            node->next = n;
            n->prev = node;     
            node = n;  
        }
        return node1;
        
    }
};