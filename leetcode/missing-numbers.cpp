class Solution {
public:
    int missingNumber(vector<int>& nums) {
        size_t sum = 0;
        for(size_t i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
        }
        size_t should_be = (nums.size() * (nums.size() + 1)) / 2;
        return should_be - sum;
    }
};
