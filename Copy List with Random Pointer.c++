class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head==NULL) 
            return NULL;
        Node* curr = head;
        while (curr) {
            Node* temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }
        curr = head;
        while (curr) {
            if (curr->random != NULL) 
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }
        curr = head;
        Node* copy = head->next;
        Node* copyHead = copy;
        while (curr) {
            curr->next = curr->next->next;
            if (copy->next!=NULL)) 
                copy->next = copy->next->next;
            curr = curr->next;
            copy = copy->next;
        }
        return copyHead;
    }
};