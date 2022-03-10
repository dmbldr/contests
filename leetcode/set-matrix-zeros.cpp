/// Первое решение time O(n*m) and space O(n + m) 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row_zeros(matrix.size(), 1);
        vector<int> col_zeros(matrix[0].size(), 1);
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[0].size(); ++j)
            {
                if(matrix[i][j] == 0)
                {
                    row_zeros[i] = 0;
                    col_zeros[j] = 0;
                }
            }
        }
        
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[0].size(); ++j)
            {
                if(row_zeros[i] == 0 || col_zeros[j] == 0) 
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
/// Есть решение лучше зa O(n*m) time and O(1) space todo
