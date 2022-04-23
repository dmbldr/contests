class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = m - 1;
        
        while(l <= r)
        {
            int mid_row = (l + r) / 2;
            
            if(matrix[mid_row][0] <= target && matrix[mid_row][n - 1] >= target)
            {
                l = 0, r = n - 1;
                while(l <= r)
                {
                    int mid_col = (l + r) / 2;
                    
                    if(matrix[mid_row][mid_col] == target) return true;
                    else if(matrix[mid_row][mid_col] < target) l = mid_col + 1;
                    else r = mid_col - 1;
                }
                return false;
            }
            else if(matrix[mid_row][0] > target) r = mid_row - 1;
            else l = mid_row + 1;
        }
        return false;
    }
};
