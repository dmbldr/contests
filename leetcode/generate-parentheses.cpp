class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string par;
        backtrack(result, par, 0, 0, n);
        return result;
    }
    
    void backtrack(vector<string>& result, string& par, int i, int j, int n)
    {
        if(par.size() == 2*n)
        {
            result.push_back(par);
            return;
        }
        
        if(i < n)
        {
            par.push_back('(');
            backtrack(result, par, i + 1, j, n);
            par.pop_back();
        }
        if(j < i)
        {
            par.push_back(')');
            backtrack(result, par, i, j + 1, n);
            par.pop_back();
        }
    }
};
