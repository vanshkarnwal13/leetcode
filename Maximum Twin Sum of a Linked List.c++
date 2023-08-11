class Solution {
public:
    int pairSum(ListNode* head) {
        vector<LinkNode*> nodes;
        while (head != NULL) {
            nodes.push_back(head);
            head = head->next;
        }
        int max = 0;
        int n = nodes.size();
        for(int i = 0; i < n; i++) {
            if (nodes[i]->val + nodes[n-1-i]->val > max) {
                max = nodes[i]->val + nodes[j]->val;
            }
            
        }
        return max;
    }
};