class Solution {
public:
    int maxPathSum(TreeNode* root, int& max1) {
        if (root == NULL) 
            return 0;
        int left = max(0,maxPathSum(root->left, max1));
        int right = max(0,maxPathSum(root->right, max1));
        max1 = max(max1, left+right+root->val);
        return max(left, right) + root->val;
        
    }
    int maxPathSum(TreeNode* root) {
        int max1 = INT_MIN;
        maxPathSum(root, max1);
        return max1;
    }
};