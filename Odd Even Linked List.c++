class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* temp = head;
        ListNode* temp1 = head->next;
        ListNode* temp2 = head->next;
        while (temp1 != NULL && temp1->next != NULL) {
            temp->next = temp1->next;
            temp = temp->next;
            temp1->next = temp->next;
            temp1 = temp1->next;
        }
        temp->next = temp2;
        return head;

    }
};