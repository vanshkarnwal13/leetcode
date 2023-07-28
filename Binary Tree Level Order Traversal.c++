class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)
            return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> level;
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            result.push_back(level);
        }
        return result;
    }
};

root = [1,2,3,4,5,6,7]
result = []
q = [1]
n = 1
i =0;
node = 1
level = [1]
result = [[1]]
q = [2,3]
n = 2
i = 0
node = 2
level = [2]
q = [3,4,5]
i = 1
node = 3
level = [2,3]
q = [4,5,6,7]
result = [[1],[2,3]]
n = 4
i = 0
node = 4
level = [4]
q = [5,6,7]
i = 1
node = 5
level = [4,5]
q = [6,7]
i = 2
node = 6
level = [4,5,6]
q = [7]
i = 3
node = 7
level = [4,5,6,7]
q = []
result = [[1],[2,3],[4,5,6,7]]

