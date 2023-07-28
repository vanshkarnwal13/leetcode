class Solution {
public:
int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) { 
        if(root==NULL){
            return 0;
        }
        int l = height(root->left);
        int r = height(root->right);
        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);
        return max(l+r,max(ld,rd));
    }
};