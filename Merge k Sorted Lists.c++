class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int m = lists.size();
        vector<int> v;
        for(int i=0;i<m;i++){
            ListNode* temp = lists[i];
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        for(int i=0;i<v.size();i++){
            ListNode* node = new ListNode(v[i]);
            temp->next = node;
            temp = temp->next;
        }
        return head->next;
    }
};