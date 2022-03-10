/// Первое решение O(n logn) time and extra space O(log n)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 1; ++i)
        {
            if(nums[i] == nums[i + 1])
            {
                result.push_back(nums[i]);
                ++i;
            }
        }

        return result;
    }
};
/// Второе решение time O(n) and extra space O(n)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(!s.insert(nums[i]).second) result.push_back(nums[i]);
        }

        return result;
    }
};
/// Есть решение за O(n) time and O(1) extra space todo