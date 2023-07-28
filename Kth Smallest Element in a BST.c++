class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        TreeNode* temp = root;
        queue<TreeNode*> q;
        q.push(temp);
        while(!q.empty()){
            temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};