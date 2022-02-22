class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int maximum = 0;
        for(const auto& i : candies)
        {
            maximum = max(i, maximum);
        }

        for(size_t i = 0; i < candies.size(); ++i)
        {
            result[i] = candies[i] + extraCandies >= maximum;
        }

        return result;
    }
};