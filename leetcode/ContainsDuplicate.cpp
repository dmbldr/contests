class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> sorted;
        for(auto n : nums)
        {
            auto res = sorted.insert(n);
            if(!res.second)
            {
                return true;
            }
        }
        return false;
    }
};
