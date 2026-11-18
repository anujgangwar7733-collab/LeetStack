class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(height(root->left), height(root->right)) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if (left && right && diff) {
            return true;
        } else {
            return false;
        }
    }
};