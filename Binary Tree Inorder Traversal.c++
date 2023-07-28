class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL)
            return result;
        stack<TreeNode*> s;
        TreeNode* p=root;
        while(p!=NULL||!s.empty())
        {
            while(p!=NULL)
            {
                s.push(p);
                p=p->left;
            }
            if(!s.empty())
            {
                p=s.top();
                s.pop();
                result.push_back(p->val);
                p=p->right;
            }
        }
        return result;      
    }
};

root = [1,2,3,4,5,6,7]
s = []
p = 1
s = [1]
p = 2
s = [1,2]   
p = 4
s = [1,2,4]
p = NULL
p = 4
s = [1,2]
result = [4]
p = nullptr
p = 2
s = [1] 
result = [4,2]
p = 5
s = [1,5]
p = 5
s = [1]
result = [4,2,5]
p = nullptr
p = 1
s = []
result = [4,2,5,1]
p = 3   
s = [3]
p = 6
s = [3,6]

