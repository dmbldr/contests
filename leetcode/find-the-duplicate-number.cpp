/// Первое решение time O(n) and extra space O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(!s.insert(nums[i]).second)
            {
                return nums[i];
            }
        }
        return 0;
    }
};
/// Второе решение time O(n logn) and O(log n) extra space (std::sort) 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            if(nums[i] == nums[i + 1]) return nums[i];
        }
        return 0;
    }
};
/// Есть решение за O(n) time and O(1) extra space todo
