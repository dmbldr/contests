class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result(matrix.size() * matrix[0].size());
        int size = result.size();
        
        int start_row = 0;
        int start_col = 0;
        int end_row = matrix.size() - 1;
        int end_col = matrix[0].size() - 1;
        
        int count = 0;
        while(count < size)
        {
            for(int j = start_col; count < size && j <= end_col; ++j)
            {
                result[count++] = matrix[start_row][j];
            }
            ++start_row;
            for(int i = start_row; count < size && i <= end_row; ++i)
            {
                result[count++] = matrix[i][end_col];
            }
            --end_col;
            for(int j = end_col; count < size && j >= start_col; --j)
            {
                result[count++] = matrix[end_row][j];
            }
            --end_row;
            for(int i = end_row; count < size && i >= start_row; --i)
            {
                result[count++] = matrix[i][start_col];
            }
            ++start_col;
        }
        
        return result;
    }
};
