class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result(nums.size());

        for(size_t i = 0; i < nums.size(); ++i)
        {
            for(size_t j = i + 1; j < nums.size(); ++j)
            {
                if(nums[i] > nums[j])
                {
                    ++result[i];
                }
                else if(nums[i] < nums[j])
                {
                    ++result[j];
                }
            }
        }

        return result;
    }
};

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result(nums.size());

        int count[101] = {0};
        for(int i = 0; i < nums.size(); ++i)
        {
            ++count[nums[i]];
        }

        for(int i = 1; i < 101; ++i)
        {
            count[i] += count[i - 1];
        }

        count[0] = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            result[i] = count[nums[i] - 1];
        }

        return result;
    }
};