class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); ++i) 
        {
            for(int j = 0; j < board[0].size(); ++j){
                if(board[i][j] == word[0] && next(board, word, i, j, 0))
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool next(vector<vector<char>>& board, const string& word, int i, int j, int k)
    {
        if(k == word.size()) return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) return false;
        if(board[i][j] != word[k]) return false;
        char tmp = board[i][j];
        board[i][j] = '#';
        
        bool ans = next(board, word, i - 1, j, k + 1) || next(board, word, i, j + 1, k + 1) ||
                   next(board, word, i + 1, j, k + 1) || next(board, word, i, j - 1, k + 1); 
        
        board[i][j] = tmp;
        return ans;
    }
};
