class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int> m;
        ListNode* p = head;
        while(p != NULL){
            if(m.find(p->val) == m.end()){
                m[p->val] = 1;
            }
            else{
                m[p->val]++;
            }
            p = p->next;
        }
        ListNode* q = new ListNode(0);
        q->next = head;
        p = q;
        while(p->next != NULL){
            if(m[p->next->val] > 1){
                p->next = p->next->next;
            }
            else{
                p = p->next;
            }
        }
        return q->next;
    }
};