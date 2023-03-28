class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                ListNode *slow2 = head;
                while (slow2 != slow) {
                    slow2 = slow2->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};

head = [3,2,0,-4], pos = 1
slow= 3, fast= 3
slow= 2, fast= 0
slow= 0, fast= 2
slow= -4, fast= -4
slow2=3
slow2=2 , slow=2
slow=2
