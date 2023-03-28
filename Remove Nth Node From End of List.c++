class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode();
        temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        temp = head;
        if(count == n){
            head = head->next;
            return head;
        }
        for(int i = 0; i < count - n - 1; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
        
    }
};