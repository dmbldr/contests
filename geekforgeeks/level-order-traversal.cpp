class Solution
{
public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> result;
        queue<Node*> q;
        q.push(node);
        while(!q.empty())
        {
            auto v = q.front();
            result.push_back(v->data);
            q.pop();

            if(v->left != nullptr)
            {
                q.push(v->left);
            }
            if(v->right != nullptr)
            {
                q.push(v->right);
            }
        }
        return result;
    }
};