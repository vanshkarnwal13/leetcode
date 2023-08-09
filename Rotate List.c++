class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p = head;
        int count = 0;
        while(p != NULL){
            count++;
            p = p->next;
        }
        if(count == 0) return head;
        k = k % count;
        if(k == 0) return head;
        p = head;
        for(int i = 0; i < count - k - 1; i++){
            p = p->next;
        }
        ListNode* q = p->next;
        p->next = NULL;
        p = q;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = head;
        return q;
        
    }
};