class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minim = 1000001;

        for(size_t i = 0; i < prices.size(); ++i)
        {
            minim = min(minim, prices[i]);
            profit = max(profit, prices[i] - minim);
        }
        return profit;
    }
};