class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(2, vector<int>(amount + 1));
        for(int i = 0; i <= amount; ++i)
        {
            if ((i % coins[0]) == 0)
                dp[0][i]= i / coins[0];
            else
                dp[0][i] = 1e9;
        }
   
        for(int i = 1; i < coins.size(); ++i)
        {
            for(int j = 0; j <= amount; ++j)
            {
                int notTake = dp[(i - 1) % 2][j];
                int take = 1e9;
                if(j >= coins[i])
                {
                    take = 1 + dp[i % 2][j - coins[i]];
                }
                dp[i % 2][j] = min(take, notTake);
            }
        }
        if(dp[(coins.size() - 1) % 2][amount] == 1e9)
        {
            return -1;
        }
        
        return dp[(coins.size() - 1) % 2][amount];
    }
};
