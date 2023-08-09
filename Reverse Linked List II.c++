class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *prev = dummy;
        for(int i = 0; i < left - 1; i++){
            prev = prev->next;
        }
        ListNode *cur = prev->next;
        for(int i = 0; i < right - left; i++){
            ListNode *temp = cur->next;
            cur->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }
        return dummy->next;
        
    }
};