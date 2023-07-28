class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL)
            return result;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp=s.top();
            s.pop();
            result.insert(result.begin(),temp->val);
            if(temp->left!=NULL)
                s.push(temp->left);
            if(temp->right!=NULL)
                s.push(temp->right);
        }
        return result;
    }
};

root = [1,2,3,4,5,6,7]
s = []
s = [1]
temp = 1
s = []
