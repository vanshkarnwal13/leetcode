class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        stack<Node*> s;
        s.push(root);
        while(!s.empty())
        {
            Node* temp=s.top();
            s.pop();
            res.push_back(temp->val);
            for(int i=temp->children.size()-1;i>=0;i--)
                s.push(temp->children[i]);
        }
        return res;
    }
};