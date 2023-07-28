class Solution {
public:
    void helper(TreeNode* root,int &count,int max){
        if(root==NULL){
            return;
        }
        if(root->val>=max){
            count++;
            max = root->val;
        }
        helper(root->left,count,max);
        helper(root->right,count,max);
    }
    int goodNodes(TreeNode* root) {
        int count =0;
        int max = INT_MIN;
        helper(root,count,max);
        return count;

    }
};