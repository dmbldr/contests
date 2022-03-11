/// Первое решение O(n*n!)
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        do
        {
            result.push_back(nums);
        } while(next_permutation(nums.begin(), nums.end()));
        
        return result;
    }
};
/// Второе решение backtracking O(n*n!)
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permutation(result, nums, 0);
        return result;
    }
    
    void permutation(vector<vector<int>>& result, vector<int>& nums, int i)
    {
        if(i == nums.size())
        {
            result.push_back(nums);
        }
        
        for (int j = i; j < nums.size(); ++j)
        {
            swap(nums[j], nums[i]);
            permutation(result, nums, i + 1);
            swap(nums[j], nums[i]);
        }
    }
};
