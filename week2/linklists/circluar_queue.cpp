class MyCircularQueue {
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
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int max ;
    int curr = 0; 
    MyCircularQueue(int k) {
        max = k;
    }
    
    bool enQueue(int value) {
        if(curr<max){
            ListNode* newda = new ListNode(value);
            if(head == NULL){
                head = newda;
                tail = newda;
            }
            else{
            tail->next = newda;
            tail = newda;
            }
            curr++;
            return true;
        }
        else return false;

    }
    
    bool deQueue() { 
       if(curr>0){
            curr--;
            ListNode* t = head;
            head = head->next;
            delete t;
            return true;
        }
        return false;
        
    }
    
    int Front() {
        if(curr>0) return head->val;
        else return -1;
        
    }
    
    int Rear() {
        if(curr>0) return tail->val;
        else return -1;
        
    }
    
    bool isEmpty() {
        return curr==0;
        
    }
    
    bool isFull() {
        return curr == max;
        
    }
};