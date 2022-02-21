class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        vector<int> counters(nums.size(), 0);

        for(size_t i = 0; i < nums.size(); ++i)
        {
            ++counters[nums[i] - 1];
        }

        for(size_t i = 0; i < nums.size(); ++i)
        {
            if(counters[i] == 0)
            {
                result.push_back(i+1);
            }
        }

        return result;
    }
};
