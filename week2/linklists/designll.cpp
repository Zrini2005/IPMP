class MyLinkedList {
public:
    struct ListNode
    {
        int val;
        
        ListNode* next;
        
        ListNode(int x)
        {
            val = x;
            
            next = NULL;
        }
    };
    ListNode* head ;
    ListNode* tail ;
    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    int get(int index) {
        ListNode* temp = head;
        int count = 0;
        while(temp && count<index){
            temp = temp->next;
            count++;
        }
        if(temp==NULL) return -1;
        else return temp->val;
    }
    
    void addAtHead(int val) {
        ListNode* h = new ListNode(val);
        if(head ==NULL){
            head = h;
            tail = h;
        }
        else{
        h->next = head;
        head = h;
        }

        
    }
    
    void addAtTail(int val) {
        ListNode* h = new ListNode(val);
        if(head ==NULL){
            head = h;
            tail = h;
        }
        else{
        ListNode*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=h;
        }
        
    }
    
    void addAtIndex(int index, int val) {
         ListNode*new_node=new ListNode(val);
        if(index==0){
            addAtHead(val);
        }
        else{
            int count=0;
            ListNode*temp=head;
            while(temp!=NULL && count<index-1){
                temp=temp->next;
                count++;
            }
            if (temp == NULL) return;
            ListNode*right=temp->next;
            temp->next=new_node;
            new_node->next=right;
        }
        
    }
    
    void deleteAtIndex(int k) {
        if (head == NULL) return;
        else if(k==0){
            ListNode*del=head;
            head=head->next;
            delete del;
        }
        else{
            int count=0;
            ListNode*temp=head;
            while(count<k-1){
                temp=temp->next;
                count++;
            }
            if (temp == NULL || temp->next == NULL) return;
            ListNode*del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
    }
};