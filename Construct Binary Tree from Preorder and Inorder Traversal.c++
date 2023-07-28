class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int l = preorder.size();
        if(l==0){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[0]);
        int i = 0;
        while(inorder[i]!=preorder[0]){
            i++;
        }
        vector<int> left_preorder(preorder.begin()+1,preorder.begin()+i+1);
        vector<int> left_inorder(inorder.begin(),inorder.begin()+i);
        vector<int> right_preorder(preorder.begin()+i+1,preorder.end());
        vector<int> right_inorder(inorder.begin()+i+1,inorder.end());
        root->left = buildTree(left_preorder,left_inorder);
        root->right = buildTree(right_preorder,right_inorder);
        return root;
    }
};