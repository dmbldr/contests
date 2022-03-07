class Solution {
public:
    int ans = 0;

    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        visit(root, 1);
        return ans;
    }

    void visit(TreeNode* node, int level)
    {
        if(node->left == nullptr && node->right == nullptr)
        {
            ans = max(ans, level);
            return;
        }
        if(node->left) visit(node->left, level + 1);
        if(node->right) visit(node->right, level + 1);
    }
};