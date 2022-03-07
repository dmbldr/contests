/// Первое решение
class Solution {
public:
    bool ans = true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ep = p != nullptr;
        bool eq = q != nullptr;
        if(ep != eq) return false;
        if(ep && eq) visit(p, q);
        return ans;
    }

    void visit(TreeNode* p, TreeNode* q)
    {
        if(p->val != q->val)
        {
            ans = false;
            return;
        }
        bool lp = p->left != nullptr;
        bool lq = q->left != nullptr;
        if(lp != lq)
        {
            ans = false;
            return;
        }
        if(lq && lq) visit(p->left, q->left);

        bool rp = p->right != nullptr;
        bool rq = q->right != nullptr;
        if(rp != rq)
        {
            ans = false;
            return;
        }
        if(rp && rq) visit(p->right, q->right);
    }
};
/// Второе решение (лучше и чище)
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return visit(p, q);
    }

    bool visit(TreeNode* p, TreeNode* q)
    {
        if(p == nullptr && q == nullptr) return true;
        if(p == nullptr || q == nullptr) return false;
        if(p->val != q->val) return false;
        return visit(p->left, q->left) && visit(p->right, q->right);
    }
};