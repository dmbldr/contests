/// Первое решение
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(isEqual(root, subRoot)) return true;
        if(root->left != nullptr && root->right != nullptr)
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        if(root->left) return isSubtree(root->left, subRoot);
        if(root->right) return isSubtree(root->right, subRoot);
        return false;
    }

    bool isEqual(TreeNode* node1, TreeNode* node2)
    {
        if(node1 == nullptr && node2 == nullptr) return true;
        if(node1 == nullptr || node2 == nullptr) return false;
        if(node1->val == node2->val)
        {
            return isEqual(node1->left, node2->left) && isEqual(node1->right, node2->right);
        }
        return false;
    }
};
/// Второе решение
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        return isEqual(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool isEqual(TreeNode* node1, TreeNode* node2)
    {
        if(node1 == nullptr && node2 == nullptr) return true;
        if(node1 == nullptr || node2 == nullptr) return false;
        if(node1->val == node2->val)
        {
            return isEqual(node1->left, node2->left) && isEqual(node1->right, node2->right);
        }
        return false;
    }
};