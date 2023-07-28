class Solution {
public:
    void inorder(TreeNode* root, vector<int>& v) {
        if (root == NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        if (root == NULL) return false;
        vector<int> v;
        inorder(root, v);
        int i = 0, j = v.size() - 1;
        while (i < j) {
            if (v[i] + v[j] == k) return true;
            else if (v[i] + v[j] < k) i++;
            else j--;
        }
        return false;
    }
};