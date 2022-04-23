class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = 1;
        int minProd = 1;
        int ans = INT_MIN ;
        for(const auto& x: nums)
        {
            if (x < 0) swap( minProd , maxProd);
            maxProd = max(x, maxProd * x);
            minProd = min(x, minProd * x);
            ans = max(ans, maxProd);
        }
        return ans;
    }
};
