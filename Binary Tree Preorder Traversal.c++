class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL)
            return result;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp=s.top();
            s.pop();
            result.push_back(temp->val);
            if(temp->right!=NULL)
                s.push(temp->right);
            if(temp->left!=NULL)
                s.push(temp->left);
        }
        return result;
    }
};

root = [1,2,3,4,5,6,7]
s = []
s = [1]
temp = 1
s = []
result = [1]
temp = 1
s = [3]
s = [3,2]
temp = 2
s = [3]
result = [1,2]
temp = 2
s = [3,5]
s = [3,5,4]
temp = 4
s = [3,5]
result = [1,2,4]
temp = 5
s = [3]
result = [1,2,4,5]
temp = 3
s = [3,7]
s = [3,7,6]
temp = 6
s = [3,7]