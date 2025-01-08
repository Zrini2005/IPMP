class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode*dummy=new ListNode(-1);
        dummy->next=head;
        ListNode*connector=dummy;
        ListNode*first=head;
        ListNode*second=first->next;
        while(first && second){
            first->next=second->next;
            second->next=first;
            connector->next=second;
            connector=first;
            first=first->next;
            if(first) second=first->next;
        }
        return dummy->next; 
    }
};