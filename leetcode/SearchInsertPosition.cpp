class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        
        while(left < right)
        {
            int mid = left + (right - left) / 2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid] < target)
            {
                left = mid + 1;
            }
            if(nums[mid] > target)
            {
                right = mid;
            }
        }
        return left;
    }
};
