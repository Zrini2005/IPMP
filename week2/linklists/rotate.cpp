class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL)
            return head;
        ListNode* curr = head;
        int n = 1;
        while (curr->next) {
            n++;
            curr = curr->next;
        }
        ListNode* temp = curr;
        temp->next = head;
        
        k = k % n;
        for (int i = 0; i < n - k; i++) {
            curr = curr->next;
        }
        head= curr->next;
        
        curr->next = NULL;

        return head;
        
        
    }
};