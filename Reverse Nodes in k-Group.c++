class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<ListNode*> nodes;
        ListNode* node = head;
        while (node) {
            nodes.push_back(node);
            node = node->next;
        }
        int n = nodes.size();
        for(int i = 0;i<n;i=i+k){
            if(i+k<=n){
                reverse(nodes.begin()+i,nodes.begin()+i+k);
            }
        }
        for(int i = 0;i<n-1;i++){
            nodes[i]->next = nodes[i+1];
        }
        nodes[n-1]->next = NULL;
        return nodes[0];
    }
};