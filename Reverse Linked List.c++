class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};

head = [1,2,3,4,5]
prev = NULL
curr = [1,2,3,4,5]
next = NULL
curr = 1
next = 2
curr->next = NULL
prev = 1
curr = 2

curr = 2
next = 3
curr->next = 1
prev = 2
curr = 3

curr = 3
next = 4
curr->next = 2
prev = 3
curr = 4

curr = 4
next = 5
curr->next = 3
prev = 4
curr = 5

curr = 5
next = NULL
curr->next = 4
prev = 5
curr = NULL

head = 5
