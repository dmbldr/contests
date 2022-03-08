/// Первое решение
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }

    void invert(TreeNode* node)
    {
        if(!node) return;
        swap(node->left, node->right);
        invert(node->left);
        invert(node->right);
    }
};
/// Второе решение (глубина рекурсии на 1 меньше в лучшем случае за счёт доп проверок до вызова)
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        invert(root);
        return root;
    }

    void invert(TreeNode* node)
    {
        if(node->left == nullptr && node->right == nullptr)
        {
            return;
        }
        swap(node->left, node->right);
        if(node->left) invert(node->left);
        if(node->right) invert(node->right);
    }
};