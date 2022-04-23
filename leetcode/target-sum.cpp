/// O(2^n)
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0;
        backtrack(nums, target, 0, 0, ans);
        return ans;
    }
    
    void backtrack(const vector<int>& nums, int target, int i, int cur_sum, int& ans)
    {
        if(i == nums.size())
        {
            if(cur_sum == target) ++ans;
            return;
        }
        
        backtrack(nums, target, i + 1, cur_sum - nums[i], ans);
        backtrack(nums, target, i + 1, cur_sum + nums[i], ans);
    }
};
/// O(n*total) time ans O(n*total) space
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        if(nums.size() == 1)
        {
            if(nums[0] == abs(target)) return 1;
            return 0;
        }
        int total = 0;
        for(const auto& el : nums) total += el;
        vector<vector<int>> dp(nums.size(), vector<int>(2 * total + 1));
        dp[0][nums[0] + total] = 1;
        dp[0][-nums[0] + total] += 1;
        
        for(int i = 1; i < nums.size(); ++i)
        {
            for(int sum = -total; sum <= total; ++sum)
            {
                int first = (sum + total - nums[i] < 0) ? 0 : dp[i-1][sum - nums[i] + total];
                int second = (sum + total + nums[i] >= 2 * total + 1) ? 0 : dp[i-1][sum + nums[i] + total];
                dp[i][sum + total] = first + second;
            }
        }
        
        return abs(target) > total ? 0 : dp[nums.size() - 1][target + total];
    }
};
/// O(n*total) time ans O(total) space
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        if(nums.size() == 1)
        {
            if(nums[0] == abs(target)) return 1;
            return 0;
        }
        int total = 0;
        for(const auto& el : nums) total += el;
        vector<vector<int>> dp(2, vector<int>(2 * total + 1));
        dp[0][nums[0] + total] = 1;
        dp[0][-nums[0] + total] += 1;
        
        for(int i = 1; i < nums.size(); ++i)
        {
            for(int sum = -total; sum <= total; ++sum)
            {
                int first = (sum + total - nums[i] < 0) ? 0 : dp[(i-1) % 2][sum - nums[i] + total];
                int second = (sum + total + nums[i] >= 2 * total + 1) ? 0 : dp[(i-1) % 2][sum + nums[i] + total];
                dp[i % 2][sum + total] = first + second;
            }
        }
        
        return abs(target) > total ? 0 : dp[(nums.size() - 1) % 2][target + total];
    }
};
