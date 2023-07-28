class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<ListNode*> v;
        while(temp!=NULL){
            v.push_back(temp);
            temp=temp->next;
        }
        int i=0,j=v.size()-1;
        while(i<j){
            v[i]->next=v[j];
            i++;
            if(i==j)
                break;
            v[j]->next=v[i];
            j--;
        }
        v[i]->next=NULL;
        for(int i=0;i<v.size();i++)
            cout<<v[i]->val<<" ";
        
        
    }
};