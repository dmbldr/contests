class Solution {
public:
    int max_depth = 1;
    int answer = 0;
    bool find = false;

    int deepestLeavesSum(TreeNode* root) {

        visit(root, 1);
        find = true;
        visit(root, 1);

        return answer;
    }

    void visit(TreeNode* cur, int cur_depth)
    {

        if(cur->left != nullptr)
        {
            ++cur_depth;
            max_depth = max(max_depth, cur_depth);
            visit(cur->left, cur_depth);
            --cur_depth;
        }

        if(cur->right != nullptr)
        {
            ++cur_depth;
            max_depth = max(max_depth, cur_depth);
            visit(cur->right, cur_depth);
            --cur_depth;
        }

        if(find && max_depth == cur_depth)
        {
            answer += cur->val;
        }
    }
};