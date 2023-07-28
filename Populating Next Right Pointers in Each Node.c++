class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) {
            return root;
        }
        Node* left = root->left;
        Node* right = root->right;
        while (left != NULL) {
            left->next = right;
            left = left->right;
            right = right->left;
        }
        connect(root->left);
        connect(root->right);
        return root;
    }
};