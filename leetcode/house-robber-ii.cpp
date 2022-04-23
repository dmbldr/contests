class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() < 3) return max(nums[0], nums[nums.size() - 1]);
        auto dp = nums;
        dp[1] = max(dp[0], dp[1]);
        for(int i = 2; i < nums.size() - 1; ++i)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + dp[i]);
        }
        nums[2] = max(nums[1], nums[2]);
        for(int i = 3; i < nums.size(); ++i)
        {
            nums[i] = max(nums[i - 1], nums[i - 2] + nums[i]);
        }
        
        return max(dp[nums.size() - 2], nums[nums.size() - 1]);
    }
};
