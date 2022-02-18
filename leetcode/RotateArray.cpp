class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k %= nums.size();
        
        int m = nums.size() - k;
        nums.reserve(nums.size() + k);
        
        for(size_t i = 0; i < m; ++i)
        {
            nums.push_back(nums[i]);
        }
        
        nums.erase(nums.begin(), nums.begin() + m);
    }
};
