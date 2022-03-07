class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            double sum = 0;
            int count = 0;
            queue<TreeNode*> tmp;
            while(!q.empty())
            {
                auto v = q.front();
                q.pop();
                sum += v->val;
                ++count;

                if(v->left != nullptr)
                {
                    tmp.push(v->left);
                }
                if(v->right != nullptr)
                {
                    tmp.push(v->right);
                }
            }
            q = tmp;
            result.push_back(sum / count);
        }
        return result;
    }
};
