class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good = 0;
        unordered_map<int, int> counts;
        for(const auto& i : nums)
        {
            ++counts[i];
        }

        for(const auto& el : counts)
        {
            if(el.second > 1)
            {
                good += el.second * (el.second - 1) / 2;
            }
        }


        return good;
    }
};