class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        if(head == NULL || head->next == NULL) {
            return NULL;
        }
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        int mid = count / 2;
        temp = head;
        count = 0;
        while (temp != NULL) {
            if (count == mid - 1) {
                temp->next = temp->next->next;
                break;
            }
            count++;
            temp = temp->next;
        }
        return head;

    }
};