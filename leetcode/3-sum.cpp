class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size() < 3) return result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            twoSum(result, nums, i + 1, -nums[i]);
        }
        
        return result;
    }
    
    void twoSum(vector<vector<int>>& result, const vector<int>& nums, int i, int target)
    {
        int l = i, r = nums.size() - 1;
        while(l < r)
        {
            if(l > i && nums[l] == nums[l - 1])
            {
                ++l;
                continue;
            }
            if(nums[l] + nums[r] == target)
            {
                result.emplace_back(vector<int>{-target, nums[l], nums[r]});
                ++l; --r;
                continue;
            }
            else if(nums[l] + nums[r] < target) ++l;
            else --r;
        }
    }
};
