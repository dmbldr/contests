class Solution {
public:
    int ans = INT_MAX;

    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        visit(root, 1);
        return ans;
    }

    void visit(TreeNode* node, int level)
    {
        if(node->left == nullptr && node->right == nullptr)
        {
            ans = min(ans, level);
            return;
        }
        if(node->left) visit(node->left, level + 1);
        if(node->right) visit(node->right, level + 1);
    }
};