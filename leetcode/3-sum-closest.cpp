class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = 100001;
        for(int i = 0; i < nums.size(); ++i)
        {
            int tmp = nums[i] + twoSumClosest(nums, i + 1, target - nums[i]);
            if(tmp == target) return tmp;
            if(abs(target - tmp) < abs(target - closest)) closest = tmp;
        }
        return closest;
    }
    
    int twoSumClosest(const vector<int>& nums, int i, int target)
    {
        int l = i, r = nums.size() - 1;
        int closest = 100001;
        while(l < r)
        {
            if(abs(closest - target) > abs(nums[l] + nums[r] - target)) closest = nums[l] + nums[r];
            if(target == nums[l] + nums[r]) return closest;
            else if(nums[l] + nums[r] > target) --r;
            else ++l;
        }
        return closest;
    }
};
