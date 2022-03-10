/// Первое решение time O(n*logn) and O(logn) space
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        nums.resize(unique(nums.begin(), nums.end()) - nums.begin());
        
        int longest = 0;
        int cur = 0;
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            if(nums[i] + 1 == nums[i + 1])
            {
                ++cur; 
            }
            else
            {
                longest = max(longest, cur + 1);
                cur = 0;
            }
        }
        longest = max(longest, cur + 1);
        return longest;
    }
};
/// Второение решение за time O(n) and O(n) space (на практике оно оказывается медленнее, чем первое)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); ++i)
        {
            s.insert(nums[i]);
        }
        
        int longest = 0;
        for(const auto& num : s)
        {
            if(s.find(num - 1) == s.end())
            {
                int cur_num = num;
                int cur = 1;
                
                while(s.find(cur_num + 1) != s.end())
                {
                    ++cur_num;
                    ++cur;
                }
                
                longest = max(longest, cur);
            }
        }
        
        return longest;
    }
};
